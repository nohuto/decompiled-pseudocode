/*
 * XREFs of WMI_GetPropertyString @ 0x1C008BCF8
 * Callers:
 *     WMI_QueryInstanceDeviceNodeInfo @ 0x1C003F6F0 (WMI_QueryInstanceDeviceNodeInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0044CC0 (memmove.c)
 */

__int64 __fastcall WMI_GetPropertyString(__int64 a1, unsigned int a2, void *a3, unsigned int a4)
{
  size_t v4; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 result; // rax
  const void *v11; // rax
  size_t v12; // r8
  __int64 v13; // [rsp+48h] [rbp+7h] BYREF
  size_t v14; // [rsp+50h] [rbp+Fh] BYREF
  __int128 v15; // [rsp+58h] [rbp+17h] BYREF
  __int64 v16; // [rsp+68h] [rbp+27h]
  __int64 v17; // [rsp+70h] [rbp+2Fh]
  __int128 v18; // [rsp+78h] [rbp+37h]
  __int64 v19; // [rsp+88h] [rbp+47h]

  v14 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v4 = a4;
  v17 = 0x100000001LL;
  v15 = 0LL;
  LODWORD(v15) = 56;
  v18 = 0LL;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  v13 = 0LL;
  *(_QWORD *)&v18 = v8;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3008))(WdfDriverGlobals, a1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 656))(
             WdfDriverGlobals,
             v9,
             a2,
             (unsigned int)ExDefaultNonPagedPoolType,
             &v15,
             &v13);
  if ( (int)result >= 0 )
  {
    v11 = (const void *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t *))(WdfFunctions_01015 + 1552))(
                          WdfDriverGlobals,
                          v13,
                          &v14);
    v12 = v14;
    if ( v4 < v14 )
      v12 = v4;
    memmove(a3, v11, v12);
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v13);
  }
  return result;
}
