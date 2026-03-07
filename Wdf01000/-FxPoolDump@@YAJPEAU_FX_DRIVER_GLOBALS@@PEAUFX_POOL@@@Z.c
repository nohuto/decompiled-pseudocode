__int64 __fastcall FxPoolDump(_FX_DRIVER_GLOBALS *FxDriverGlobals, FX_POOL *Pool, unsigned int a3, unsigned __int16 a4)
{
  _FAST_MUTEX *p_m_Lock; // r15
  char v7; // si
  FX_POOL *Flink; // rdi
  unsigned __int64 *v9; // r15
  KIRQL v10; // r12
  FX_POOL *v11; // rdi
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]

  WPP_IFR_SF_iiddiidd(
    FxDriverGlobals,
    (unsigned __int8)Pool,
    a3,
    a4,
    traceGuid,
    Pool->NonPagedBytes,
    Pool->PagedBytes,
    Pool->NonPagedAllocations,
    Pool->PagedAllocations,
    Pool->PeakNonPagedBytes,
    Pool->PeakPagedBytes,
    Pool->PeakNonPagedAllocations,
    Pool->PeakPagedAllocations);
  p_m_Lock = &Pool->PagedLock.m_Lock;
  v7 = 0;
  ExAcquireFastMutex(&Pool->PagedLock.m_Lock);
  Flink = (FX_POOL *)Pool->PagedHead.Flink;
  if ( Flink != (FX_POOL *)&Pool->PagedHead )
  {
    v7 = 1;
    do
    {
      WPP_IFR_SF_qqq(
        FxDriverGlobals,
        2u,
        0x12u,
        0xFu,
        WPP_wdfpool_cpp_Traceguids,
        Pool,
        &Flink->PagedLock.m_Lock.Event,
        Flink);
      Flink = *(FX_POOL **)&Flink->NonPagedLock.m_DbgFlagIsInitialized;
    }
    while ( Flink != (FX_POOL *)&Pool->PagedHead );
    p_m_Lock = &Pool->PagedLock.m_Lock;
  }
  ExReleaseFastMutex(p_m_Lock);
  v9 = &Pool->NonPagedLock.m_Lock;
  v10 = KeAcquireSpinLockRaiseToDpc(&Pool->NonPagedLock.m_Lock);
  v11 = (FX_POOL *)Pool->NonPagedHead.Flink;
  if ( v11 != (FX_POOL *)&Pool->NonPagedHead )
  {
    v7 = 1;
    do
    {
      WPP_IFR_SF_qqq(
        FxDriverGlobals,
        2u,
        0x12u,
        0x10u,
        WPP_wdfpool_cpp_Traceguids,
        Pool,
        &v11->PagedLock.m_Lock.Event,
        v11);
      v11 = *(FX_POOL **)&v11->NonPagedLock.m_DbgFlagIsInitialized;
    }
    while ( v11 != (FX_POOL *)&Pool->NonPagedHead );
    v9 = &Pool->NonPagedLock.m_Lock;
  }
  KeReleaseSpinLock(v9, v10);
  if ( !v7 )
    return 0LL;
  FxVerifierDbgBreakPoint(FxDriverGlobals);
  return 261LL;
}
