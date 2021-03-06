#pragma once
#include "PluginSDK.h"

class SpiffyCommon
{
public:
	static bool CanHarass();
	static bool ShouldWait();
	static float GetEchoLudenDamage(IUnit* target);
	static bool CanHitSkillShot(IUnit* target, Vec3 Start, Vec3 End, ISpellData* SData);
	static float GetKsDamage(IUnit* t, ISpell2* QWER, bool includeIncomingDamage);
	static bool ValidUlt(IUnit* target);
	static bool CanMove(IUnit* target);
	static float GetDistancePos(Vec3 pos1, Vec3 pos2);
	static float GetDistance(IUnit* player, IUnit* target);
	static bool IsUnderTurret(IUnit* Source, bool CheckAllyTurrets, bool CheckEnemyTurrets);
	bool PosUnderTurret(Vec3 Pos, bool CheckAllyTurrets, bool CheckEnemyTurrets);
	static int CountEnemiesInRange(float range);
	static int CountMinionsInRange(float range);
	static int CountMinionsInRange(Vec3 pos, float range);
	static int CountKillableMinionsInRange(float range);
	static int CountEnemiesInRangePos(float range, Vec3 pos);
	static int AutosToKill(IUnit* target);
	Vec3& Extend(Vec3 from, Vec3 to, float distance);
	static void PotionManager();
};