__int64 __fastcall KiHaltOnAddress(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rtt
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  _QWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]

  v12 = 0;
  v11 = 0;
  v10[0] = a1;
  v2 = (a1 >> 5) & 0x7F;
  v10[1] = KeGetCurrentPrcb();
  _m_prefetchw(&KiHaltOnAddressHashTable[v2]);
  v3 = KiHaltOnAddressHashTable[v2];
  do
  {
    v10[2] = v3 & 0xFFFFFFFFFFFFFFFCuLL;
    v4 = v3;
    v3 = _InterlockedCompareExchange64(&KiHaltOnAddressHashTable[v2], (signed __int64)v10, v3);
  }
  while ( v4 != v3 );
  if ( *(_QWORD *)a1 != *a2 )
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[v2], 0LL));
  _disable();
  if ( v11 != 1 )
    HalProcessorIdle();
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v7 = *SchedulerAssist;
    do
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange(SchedulerAssist, v7 & 0xFFDFFFFF, v7);
    }
    while ( v8 != v7 );
    if ( (v7 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  return 0LL;
}
