/*
 * XREFs of HUBCONNECTOR_GetConnectorMapNodeForPort @ 0x1C0082C14
 * Callers:
 *     HUBDSM_AddingDeviceToGlobalChildList @ 0x1C0023150 (HUBDSM_AddingDeviceToGlobalChildList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall HUBCONNECTOR_GetConnectorMapNodeForPort(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rax
  _QWORD *v4; // r14
  _QWORD *i; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rax

  v1 = 0LL;
  if ( (*(_DWORD *)(a1 + 204) & 0x20) != 0 )
  {
    v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C006A1E8);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      *(_QWORD *)(v3 + 56),
      0LL);
    v4 = (_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      WdfDriverGlobals->Driver,
                      off_1C006A1E8)
                  + 40);
    for ( i = (_QWORD *)*v4; ; i = (_QWORD *)v6[10] )
    {
      v6 = i - 10;
      if ( v4 == i )
        break;
      if ( RtlCompareMemory(i - 10, (const void *)(a1 + 1368), 0x38uLL) == 56 )
        goto LABEL_7;
    }
    v6 = 0LL;
LABEL_7:
    v1 = v6;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
           WdfDriverGlobals,
           WdfDriverGlobals->Driver,
           off_1C006A1E8);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      *(_QWORD *)(v7 + 56));
  }
  return v1;
}
