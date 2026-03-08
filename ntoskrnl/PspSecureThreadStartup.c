/*
 * XREFs of PspSecureThreadStartup @ 0x1409AE950
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PspTerminateThreadByPointer @ 0x1407DA8F0 (PspTerminateThreadByPointer.c)
 *     PspNotifyThreadCreation @ 0x1407ED550 (PspNotifyThreadCreation.c)
 *     PspDisablePrimaryTokenExchange @ 0x1407ED630 (PspDisablePrimaryTokenExchange.c)
 */

__int64 PspSecureThreadStartup()
{
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v3; // zf
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int v5; // eax
  _BYTE v7[112]; // [rsp+20h] [rbp-88h] BYREF

  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v3 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
      SchedulerAssist[5] &= 0xFFFF0001;
      if ( v3 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(0LL);
  CurrentThread = KeGetCurrentThread();
  PspDisablePrimaryTokenExchange((__int64)CurrentThread);
  if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 2) == 0 )
    PspTerminateThreadByPointer((__int64)CurrentThread, 0xC000004B, 1);
  PspNotifyThreadCreation((__int64)CurrentThread);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 0x200u;
  memset(v7, 0, 0x68uLL);
  v5 = VslpEnterIumSecureMode(0, 0, KeGetCurrentThread()->SecureThreadCookie, (__int64)v7);
  return PspTerminateThreadByPointer((__int64)CurrentThread, v5, 1);
}
