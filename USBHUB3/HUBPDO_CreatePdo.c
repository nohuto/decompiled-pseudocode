/*
 * XREFs of HUBPDO_CreatePdo @ 0x1C00800C0
 * Callers:
 *     HUBDSM_CreatingChildPDOAndReportingToPnp @ 0x1C0023360 (HUBDSM_CreatingChildPDOAndReportingToPnp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_CreatePdoInternal @ 0x1C007EDF4 (HUBPDO_CreatePdoInternal.c)
 */

__int64 __fastcall HUBPDO_CreatePdo(__int64 a1)
{
  unsigned int PdoInternal; // esi
  void (__fastcall *v3)(_QWORD, _QWORD, __int64); // rbx
  __int64 v4; // rax
  __int64 v5; // rax

  *(_DWORD *)(a1 + 2432) = 0;
  PdoInternal = HUBPDO_CreatePdoInternal((_QWORD *)a1, 1);
  if ( PdoInternal == 4077 )
  {
    v3 = *(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 424LL);
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1632))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 16));
    v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 248))(WdfDriverGlobals, v4);
    v3(*(_QWORD *)(*(_QWORD *)a1 + 248LL), *(_QWORD *)(a1 + 24), v5);
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1424LL) = 1;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1424LL) = 3;
  }
  return PdoInternal;
}
