/*
 * XREFs of PoFxAbandonDevice @ 0x14074B988
 * Callers:
 *     IopRemoveDevice @ 0x14074B778 (IopRemoveDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2B70 (PnpDriverLoadingFailed.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     PopPluginAbandonDevice @ 0x14056D848 (PopPluginAbandonDevice.c)
 *     PopFxFreeUniqueId @ 0x14074C3F4 (PopFxFreeUniqueId.c)
 *     PopDiagTraceFxDevicePreparation @ 0x14074C458 (PopDiagTraceFxDevicePreparation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x14074C4D8 (PopFxUnregisterDeviceOrWait.c)
 */

__int64 __fastcall PoFxAbandonDevice(ULONG_PTR *a1)
{
  ULONG HandleAttributes; // eax
  ULONG v3; // ett
  ULONG_PTR v4; // rax
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  ULONG_PTR v7; // rax
  __int64 result; // rax

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
    v4 = a1[97];
    if ( v4 )
    {
      a1[97] = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopDirectedDripsDiagLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopDirectedDripsDiagLock);
    KeAbPostRelease((ULONG_PTR)&PopDirectedDripsDiagLock);
  }
  _m_prefetchw(a1 + 37);
  v5 = *((_DWORD *)a1 + 74);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 74, v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 1) != 0 )
  {
    PopFxUnregisterDeviceOrWait(a1);
    v7 = a1[18];
    if ( v7 )
    {
      PopPluginAbandonDevice(a1[18], (__int64)(a1 + 16));
      v7 = a1[18];
    }
    PopDiagTraceFxDevicePreparation(a1, v7, a1 + 16, 0LL);
    a1[18] = 0LL;
    _InterlockedAnd((volatile signed __int32 *)a1 + 74, 0xFFFFFFFE);
  }
  _m_prefetchw(a1 + 37);
  result = (unsigned int)_InterlockedAnd((volatile signed __int32 *)a1 + 74, 0xFFFFFFFD);
  if ( (result & 2) != 0 )
    return PopFxFreeUniqueId(a1);
  return result;
}
