/*
 * XREFs of HUBDSM_CheckingIfSecondResetIsNeeded @ 0x1C0020AD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_CheckingIfSecondResetIsNeeded(__int64 a1)
{
  _DWORD *v1; // rbx
  int v3; // eax

  v1 = *(_DWORD **)(a1 + 960);
  if ( (v1[411] & 0x400000) != 0 )
    return 4089LL;
  v3 = v1[364];
  if ( (v3 & 8) == 0
    && ((v3 & 0x100) == 0
     || (*(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       WdfDriverGlobals->Driver,
                       off_1C006A1E8)
                   + 4) & 0x20000) != 0
     || v1[8]) )
  {
    return 4089LL;
  }
  else
  {
    return 4061LL;
  }
}
