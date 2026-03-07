__int64 __fastcall PopShutdownListenerRemoveCallback(__m256i *a1)
{
  KIRQL v1; // al
  PVOID *v2; // rbx
  unsigned __int64 v3; // rsi
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  unsigned int v6; // edi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  __m256i v13; // [rsp+20h] [rbp-28h]

  v13 = *a1;
  v1 = KeAcquireSpinLockRaiseToDpc(&PopShutdownNotificationCallbackLock);
  v2 = (PVOID *)PopShutdownNotificationCallbackList;
  v3 = v1;
  if ( PopShutdownNotificationCallbackList == &PopShutdownNotificationCallbackList )
    goto LABEL_10;
  do
  {
    if ( *((_OWORD *)v2 + 1) == *(_OWORD *)&v13.m256i_u64[1] && v2[4] == (PVOID)v13.m256i_i64[3] )
      break;
    v2 = (PVOID *)*v2;
  }
  while ( v2 != &PopShutdownNotificationCallbackList );
  if ( v2 == &PopShutdownNotificationCallbackList )
  {
LABEL_10:
    v2 = 0LL;
    v6 = -1073741275;
  }
  else
  {
    v4 = *v2;
    v5 = (PVOID *)v2[1];
    if ( *((PVOID **)*v2 + 1) != v2 || *v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    v6 = 0;
    v4[1] = v5;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&PopShutdownNotificationCallbackLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x206D654Du);
  return v6;
}
