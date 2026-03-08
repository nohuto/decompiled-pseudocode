/*
 * XREFs of PoFxAbandonDevice @ 0x140867048
 * Callers:
 *     PnpDriverLoadingFailed @ 0x14085EEA4 (PnpDriverLoadingFailed.c)
 *     IopRemoveDevice @ 0x140866E38 (IopRemoveDevice.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PopPluginAbandonDevice @ 0x14058A1A8 (PopPluginAbandonDevice.c)
 *     PopDiagTraceFxDevicePreparation @ 0x1408665EC (PopDiagTraceFxDevicePreparation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1408803F8 (PopFxUnregisterDeviceOrWait.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PoFxAbandonDevice(__int64 a1)
{
  ULONG HandleAttributes; // eax
  ULONG v3; // ett
  __int64 v4; // rax
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  ULONG_PTR v7; // rcx
  __int64 v8; // rax
  signed __int32 v9; // eax
  signed __int32 v10; // ett

  _m_prefetchw(&PopDirectedDripsState);
  HandleAttributes = PopDirectedDripsState.HandleAttributes;
  do
  {
    v3 = HandleAttributes;
    HandleAttributes = _InterlockedCompareExchange(
                         (volatile signed __int32 *)&PopDirectedDripsState,
                         HandleAttributes,
                         HandleAttributes);
  }
  while ( v3 != HandleAttributes );
  if ( (HandleAttributes & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopDirectedDripsDiagLock, 0LL);
    v4 = *(_QWORD *)(a1 + 776);
    if ( v4 )
    {
      *(_QWORD *)(a1 + 776) = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  _m_prefetchw((const void *)(a1 + 296));
  v5 = *(_DWORD *)(a1 + 296);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 1) != 0 )
  {
    PopFxUnregisterDeviceOrWait(a1);
    v7 = *(_QWORD *)(a1 + 144);
    if ( v7 )
      PopPluginAbandonDevice(v7, a1 + 128);
    PopDiagTraceFxDevicePreparation(a1, *(_QWORD *)(a1 + 144), (unsigned __int16 *)(a1 + 128), 0);
    *(_QWORD *)(a1 + 144) = 0LL;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFE);
  }
  _m_prefetchw((const void *)(a1 + 296));
  if ( (_InterlockedAnd((volatile signed __int32 *)(a1 + 296), 0xFFFFFFFD) & 2) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 136);
    if ( *(_QWORD *)(a1 + 48) != v8 && v8 )
    {
      _m_prefetchw((const void *)(a1 + 296));
      v9 = *(_DWORD *)(a1 + 296);
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 296), v9, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x2000) == 0 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 136), 0x4D584650u);
    }
    *(_OWORD *)(a1 + 128) = 0LL;
  }
}
