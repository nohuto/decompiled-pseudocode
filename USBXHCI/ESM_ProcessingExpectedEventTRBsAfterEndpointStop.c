/*
 * XREFs of ESM_ProcessingExpectedEventTRBsAfterEndpointStop @ 0x1C000F650
 * Callers:
 *     <none>
 * Callees:
 *     TR_ProcessExpectedEventTRBs @ 0x1C000FCB0 (TR_ProcessExpectedEventTRBs.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ESM_ProcessingExpectedEventTRBsAfterEndpointStop(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rsi
  unsigned int v4; // edi

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(v1 + 37) )
  {
    v3 = *(_QWORD *)(v1 + 136);
    v4 = 1;
    for ( *(_DWORD *)(v3 + 20) = 0; v4 <= *(_DWORD *)(v3 + 8); ++v4 )
      TR_ProcessExpectedEventTRBs(*(_QWORD *)(104LL * (v4 - 1) + *(_QWORD *)(v1 + 136) + 48));
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
