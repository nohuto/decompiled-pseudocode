/*
 * XREFs of HUBACPI_EvalAcpiMethodEx @ 0x1C008A174
 * Callers:
 *     HUBACPI_EvaluateDSD @ 0x1C008A5B8 (HUBACPI_EvaluateDSD.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C008ADA8 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x1C003F1A4 (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBACPI_EvalAcpiMethodEx(__int64 a1, unsigned __int16 *a2, int a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  int v8; // eax
  unsigned int v9; // edi
  unsigned __int16 v10; // r9
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  _BYTE *v14; // rcx
  size_t v15; // rdx
  char v16; // al
  _BYTE *v17; // rax
  size_t v18; // rdx
  __int64 v19; // rbx
  _DWORD *v20; // rax
  __int64 v22; // [rsp+28h] [rbp-61h]
  void *v23; // [rsp+50h] [rbp-39h] BYREF
  __int64 v24; // [rsp+58h] [rbp-31h] BYREF
  __int64 v25; // [rsp+60h] [rbp-29h] BYREF
  __int128 v26; // [rsp+68h] [rbp-21h] BYREF
  __int64 v27; // [rsp+78h] [rbp-11h]
  __int64 v28; // [rsp+80h] [rbp-9h]
  __int128 v29; // [rsp+88h] [rbp-1h]
  __int64 v30; // [rsp+98h] [rbp+Fh]
  __int128 v31; // [rsp+A0h] [rbp+17h] BYREF
  int pszSrc; // [rsp+100h] [rbp+77h] BYREF

  pszSrc = a3;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  v30 = 0LL;
  v6 = *(_QWORD *)(a1 + 16);
  v27 = 0LL;
  v28 = 0x100000001LL;
  v29 = v6;
  v26 = 0LL;
  v31 = 0LL;
  LODWORD(v26) = 56;
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v26,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         276LL,
         &v25,
         &v23);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v10 = 21;
    goto LABEL_4;
  }
  v11 = *a2;
  v12 = 256LL;
  if ( (unsigned __int64)(v11 + 6) > 0x100 )
  {
    v9 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x16u, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
    goto LABEL_32;
  }
  memset(v23, 0, 0x114uLL);
  v13 = *((_QWORD *)a2 + 1);
  *(_DWORD *)v23 = 1181312321;
  *((_DWORD *)v23 + 65) = 276;
  v14 = (char *)v23 + 4;
  v15 = v13 - ((_QWORD)v23 + 4);
  do
  {
    if ( !v11 )
      break;
    v16 = v14[v15];
    if ( !v16 )
      break;
    *v14 = v16;
    --v11;
    ++v14;
    --v12;
  }
  while ( v12 );
  v17 = v14 - 1;
  if ( v12 )
    v17 = v14;
  *v17 = 0;
  RtlStringCbCatNA((NTSTRSAFE_PSTR)v23 + 4, v15, ".", 1uLL);
  RtlStringCbCatNA((NTSTRSAFE_PSTR)v23 + 4, v18, (STRSAFE_PCNZCH)&pszSrc, 4uLL);
  v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 16));
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
         WdfDriverGlobals,
         0LL,
         v19,
         &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v10 = 23;
    goto LABEL_4;
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
         WdfDriverGlobals,
         v19,
         v24,
         3325976LL,
         v25,
         0LL,
         a4,
         0LL);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v10 = 24;
    goto LABEL_4;
  }
  v31 = 0x200000010uLL;
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v24,
          v19,
          &v31)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x19u, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
  }
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741772 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v10 = 26;
LABEL_4:
    LODWORD(v22) = v8;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v10,
      (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
      v22);
    goto LABEL_32;
  }
  v20 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                    WdfDriverGlobals,
                    a4,
                    0LL);
  if ( *v20 != 1114596673 || !v20[2] )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x1Bu, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
    v9 = -1072431089;
  }
LABEL_32:
  if ( v24 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v25 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v9;
}
