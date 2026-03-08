/*
 * XREFs of VslRegisterLogPages @ 0x140549C10
 * Callers:
 *     PsIumResumeAfterHibernate @ 0x1405A34C4 (PsIumResumeAfterHibernate.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1402D8618 (HvlQueryVsmConnection.c)
 *     VslpLockPagesForTransfer @ 0x1403C8E74 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1403C90EC (VslpUnlockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 VslRegisterLogPages()
{
  struct _MDL *v0; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  int v4; // eax
  unsigned int v5; // esi
  unsigned __int8 v6; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  __int64 *v11[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v12[14]; // [rsp+80h] [rbp-88h] BYREF

  v0 = (struct _MDL *)PspIumLogBuffer;
  memset(v12, 0, 0x68uLL);
  memset(v11, 0, 0x48uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  result = VslpLockPagesForTransfer((__int64)v11, v0, 0x2000u, 1, 2u);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v4 = 4;
      if ( CurrentIrql != 2 )
        v4 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v4;
    }
    v12[1] = v11[0];
    v12[2] = v11[7];
    v5 = VslpEnterIumSecureMode(2u, 252, 0, (__int64)v12);
    if ( KiIrqlFlags )
    {
      v6 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v8 = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v9 & v8[5]) == 0;
        v8[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    VslpUnlockPagesForTransfer(v11);
    return v5;
  }
  return result;
}
