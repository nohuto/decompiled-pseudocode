LONG __fastcall PopFxHandleDirectedPowerTransition(ULONG_PTR BugCheckParameter3)
{
  unsigned __int32 v2; // eax
  __int64 v3; // rdx
  unsigned __int32 v4; // ett
  int v5; // ebx
  unsigned int v6; // edx
  __int64 v7; // rcx

  _m_prefetchw((const void *)(BugCheckParameter3 + 32));
  v2 = *(_DWORD *)(BugCheckParameter3 + 32);
  do
  {
    v3 = v2;
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3 + 32), v2, v2);
  }
  while ( v4 != v2 );
  v5 = v2 & 0x1000;
  LOBYTE(v3) = v5 != 0;
  PopDiagTraceFxDeviceDirectedTransition(*(_QWORD *)(BugCheckParameter3 + 48), v3);
  v6 = PopFxDirectedPowerDownTimeoutMs;
  if ( !v5 )
    v6 = PopFxDirectedPowerUpTimeoutMs;
  PopFxEnableWorkOrderWatchdog(BugCheckParameter3 + 920, v6);
  v7 = *(_QWORD *)(BugCheckParameter3 + 192);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 184))(v7, 0LL);
  else
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter3 + 176))(v7, 0LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(BugCheckParameter3 + 1160), 0xFFFFFFFF) == 1 )
    return PopFxCompleteDirectedPowerTransition(BugCheckParameter3, v5 != 0);
  else
    return (unsigned int)PopFxAddLogEntry(*(_QWORD *)(BugCheckParameter3 + 48), 0, 24, 0LL);
}
