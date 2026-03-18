/*
 * XREFs of ?IsProcessPriorityByClassBackground@ForegroundBoost@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C0141750
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C01416DC (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

bool __fastcall ForegroundBoost::IsProcessPriorityByClassBackground(
        ForegroundBoost *this,
        const struct tagPROCESSINFO *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)&v4, (struct _EX_PUSH_LOCK *)&unk_1C02970E0);
  LOBYTE(this) = (*((_DWORD *)this + 205) & 0x60000) == 0;
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return (char)this;
}
