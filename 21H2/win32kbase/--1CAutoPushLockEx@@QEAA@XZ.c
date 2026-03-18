/*
 * XREFs of ??1CAutoPushLockEx@@QEAA@XZ @ 0x1C0141718
 * Callers:
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1C00D7CE4 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1C00D7DB0 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoPushLockEx::~CAutoPushLockEx(CAutoPushLockEx *this)
{
  ExReleasePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  KeLeaveCriticalRegion();
}
