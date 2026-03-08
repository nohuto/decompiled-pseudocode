/*
 * XREFs of WheapProcessOfflineList @ 0x1406120C0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     WheaLogInternalEvent @ 0x14037D610 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MmGetPageBadStatus @ 0x140629080 (MmGetPageBadStatus.c)
 *     WheapPushPendingOfflineWrapper @ 0x140A06F98 (WheapPushPendingOfflineWrapper.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 WheapProcessOfflineList()
{
  KIRQL v0; // al
  struct _SINGLE_LIST_ENTRY *v1; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf
  struct _SINGLE_LIST_ENTRY *v8; // rsi
  struct _SINGLE_LIST_ENTRY *Next; // rdi
  int PageBadStatus; // eax
  struct _SINGLE_LIST_ENTRY *v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 Src; // [rsp+28h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h]
  struct _SINGLE_LIST_ENTRY *v15; // [rsp+48h] [rbp-18h]

  Src = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C2A4A8);
  v1 = (struct _SINGLE_LIST_ENTRY *)WheapOfflineChecker;
  WheapOfflineChecker = 0LL;
  dword_140C2A4B0 = 0;
  v2 = v0;
  KxReleaseSpinLock((volatile signed __int64 *)&qword_140C2A4A8);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v7 = (v6 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v6;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v2);
  while ( v1 )
  {
    v8 = v1;
    v1 = v1->Next;
    Next = v8[1].Next;
    v12 = Next;
    PageBadStatus = MmGetPageBadStatus(&v12);
    if ( PageBadStatus == -1073740023 )
    {
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 40LL;
      *(_QWORD *)&v14 = 0x800000324C4E524BuLL;
      *((_QWORD *)&v14 + 1) = 0x800000002LL;
      v15 = Next;
      WheaLogInternalEvent(&Src);
      goto LABEL_11;
    }
    if ( PageBadStatus == 259 )
    {
      WheapPushPendingOfflineWrapper(v8);
    }
    else
    {
LABEL_11:
      ExFreePoolWithTag(v8, 0x61656857u);
      _InterlockedDecrement(&dword_140C2A4C0);
    }
  }
  return 0LL;
}
