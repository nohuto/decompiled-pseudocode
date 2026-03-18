/*
 * XREFs of VslRegisterLogPages @ 0x14054F010
 * Callers:
 *     PsIumResumeAfterHibernate @ 0x140399424 (PsIumResumeAfterHibernate.c)
 * Callees:
 *     HvlQueryVsmConnection @ 0x140294D28 (HvlQueryVsmConnection.c)
 *     VslpEnterIumSecureMode @ 0x140358A20 (VslpEnterIumSecureMode.c)
 *     VslpUnlockPagesForTransfer @ 0x1403A0EB4 (VslpUnlockPagesForTransfer.c)
 *     VslpLockPagesForTransfer @ 0x1403A0F08 (VslpLockPagesForTransfer.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 VslRegisterLogPages()
{
  struct _MDL *v0; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned int v4; // esi
  unsigned __int8 v5; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v7; // r8
  int v8; // eax
  bool v9; // zf
  __int64 *v10[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v11[14]; // [rsp+80h] [rbp-88h] BYREF

  v0 = (struct _MDL *)PspIumLogBuffer;
  memset(v11, 0, 0x68uLL);
  memset(v10, 0, 0x48uLL);
  if ( !HvlQueryVsmConnection(0LL) )
    return 3221225629LL;
  result = VslpLockPagesForTransfer((__int64)v10, v0, 0x2000u, 1, 2u);
  if ( (int)result >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v11[1] = v10[0];
    v11[2] = v10[7];
    v4 = VslpEnterIumSecureMode(2u, 252, 0, (__int64)v11);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = CurrentPrcb->SchedulerAssist;
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & v7[5]) == 0;
          v7[5] &= v8;
          if ( v9 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    VslpUnlockPagesForTransfer(v10);
    return v4;
  }
  return result;
}
