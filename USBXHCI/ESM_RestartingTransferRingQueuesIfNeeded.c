__int64 __fastcall ESM_RestartingTransferRingQueuesIfNeeded(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned int i; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(v1 + 32) & 4) != 0 )
  {
    v2 = *(_QWORD *)(v1 + 136);
    for ( i = 1; i <= *(_DWORD *)(v2 + 8); ++i )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1232))(
        WdfDriverGlobals,
        *(_QWORD *)(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(v1 + 136) + 48) + 72LL));
  }
  return 29LL;
}
