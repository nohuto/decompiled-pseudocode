__int64 __fastcall ESM_ProcessingExpectedEventTRBsAfterEndpointHalt(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  unsigned int v3; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v2 = *(_QWORD *)(v1 + 136);
    v3 = 1;
    for ( *(_DWORD *)(v2 + 20) = 0; v3 <= *(_DWORD *)(v2 + 8); ++v3 )
      TR_ProcessExpectedEventTRBs(*(_QWORD *)(104LL * (v3 - 1) + *(_QWORD *)(v1 + 136) + 48));
  }
  else
  {
    TR_ProcessExpectedEventTRBs(*(_QWORD *)(v1 + 88));
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01023 + 2552))(
    WdfDriverGlobals,
    *(_QWORD *)(v1 + 1304),
    -20000000LL);
  return 1000LL;
}
