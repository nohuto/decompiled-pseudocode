/*
 * XREFs of ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00FFBE4
 * Callers:
 *     ndisCounterSetProviderCallback @ 0x1C00FF880 (ndisCounterSetProviderCallback.c)
 * Callees:
 *     ?ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_NDIS_PCW_CONSUMER_BLOCK@@@Z @ 0x1C001DB90 (-ndisPcwGetReferencesForConsumer@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@PEAU_.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FEEC0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FF390 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall ndisPcwAddCounter(unsigned int a1, __int64 a2)
{
  unsigned int v4; // ebp
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rdi
  int ReferencesForConsumer; // ebx
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  v4 = **(unsigned __int16 **)(a2 + 8);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4 + 56, 0x7763444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    ReferencesForConsumer = ndisPcwGetReferencesForConsumer(a1, a2, (__int64)PoolWithTag);
    if ( ReferencesForConsumer < 0 )
    {
      ExFreePoolWithTag(v6, 0);
    }
    else
    {
      *((_WORD *)v6 + 13) = v4;
      v6[4] = v6 + 7;
      *((_WORD *)v6 + 12) = v4;
      memmove(v6 + 7, *(const void **)(*(_QWORD *)(a2 + 8) + 8LL), v4);
      v9.m_State = Unlocked;
      *((_DWORD *)v6 + 2) = a1;
      v6[2] = *(_QWORD *)a2;
      v9.m_Lock = (KPushLockBase *)&ndisPcwMutex;
      v9.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v9);
      *v6 = ndisPcwConsumerList;
      ndisPcwConsumerList = v6;
      KLockHolder::~KLockHolder(&v9);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)ReferencesForConsumer;
}
