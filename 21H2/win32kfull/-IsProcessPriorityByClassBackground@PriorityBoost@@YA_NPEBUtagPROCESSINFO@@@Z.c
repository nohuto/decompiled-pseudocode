/*
 * XREFs of ?IsProcessPriorityByClassBackground@PriorityBoost@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C02235A4
 * Callers:
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C020A68C (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0111E24 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

bool __fastcall PriorityBoost::IsProcessPriorityByClassBackground(PriorityBoost *this, const struct tagPROCESSINFO *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)&v4, (struct _EX_PUSH_LOCK *)&`anonymous namespace'::boostLock);
  LOBYTE(this) = (*((_DWORD *)this + 205) & 0x60000) == 0;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return (char)this;
}
