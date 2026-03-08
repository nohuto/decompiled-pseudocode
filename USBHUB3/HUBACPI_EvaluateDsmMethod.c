/*
 * XREFs of HUBACPI_EvaluateDsmMethod @ 0x1C0089C6C
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C008ADA8 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0002034 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002594 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002668 (WPP_RECORDER_SF_DD.c)
 *     RtlStringCbCatNA @ 0x1C003F1A4 (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x1C0044920 (__security_check_cookie.c)
 *     memcpy_s @ 0x1C0044960 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0044FC0 (memset.c)
 */

__int64 __fastcall HUBACPI_EvaluateDsmMethod(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int16 a6,
        __int64 a7)
{
  unsigned __int64 v8; // rax
  int v10; // eax
  unsigned int v11; // edi
  unsigned __int16 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  size_t v17; // rdx
  char v18; // al
  _BYTE *v19; // rax
  size_t v20; // rdx
  __int64 v21; // r12
  _WORD *v22; // rbx
  char *v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  _DWORD *v26; // rax
  __int64 v28; // [rsp+30h] [rbp-79h]
  __int64 v29; // [rsp+38h] [rbp-71h]
  void *v30; // [rsp+58h] [rbp-51h] BYREF
  __int64 v31; // [rsp+60h] [rbp-49h] BYREF
  __int64 v32; // [rsp+68h] [rbp-41h] BYREF
  __int64 v33; // [rsp+70h] [rbp-39h]
  __int128 v34; // [rsp+78h] [rbp-31h] BYREF
  __int64 v35; // [rsp+88h] [rbp-21h]
  __int64 v36; // [rsp+90h] [rbp-19h]
  __int128 v37; // [rsp+98h] [rbp-11h]
  __int64 v38; // [rsp+A8h] [rbp-1h]
  __int128 v39; // [rsp+B0h] [rbp+7h] BYREF

  v33 = a7;
  v32 = 0LL;
  v38 = 0LL;
  v8 = *(_QWORD *)(a1 + 16);
  v35 = 0LL;
  v37 = v8;
  v34 = 0LL;
  v39 = 0LL;
  v31 = 0LL;
  LODWORD(v34) = 56;
  v36 = 0x100000001LL;
  v30 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
          WdfDriverGlobals,
          &v34,
          (unsigned int)ExDefaultNonPagedPoolType,
          1748191317LL,
          312LL,
          &v32,
          &v30);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_35;
    v12 = 14;
    goto LABEL_4;
  }
  v13 = *a2;
  v14 = 256LL;
  if ( (unsigned __int64)(v13 + 6) > 0x100 )
  {
    v11 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xFu, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
    goto LABEL_35;
  }
  memset(v30, 0, 0x138uLL);
  v15 = *((_QWORD *)a2 + 1);
  *(_DWORD *)v30 = 1181312321;
  *((_DWORD *)v30 + 65) = 276;
  *((_DWORD *)v30 + 66) = 4;
  v16 = (char *)v30 + 4;
  v17 = v15 - ((_QWORD)v30 + 4);
  do
  {
    if ( !v13 )
      break;
    v18 = v16[v17];
    if ( !v18 )
      break;
    *v16 = v18;
    --v13;
    ++v16;
    --v14;
  }
  while ( v14 );
  v19 = v16 - 1;
  if ( v14 )
    v19 = v16;
  *v19 = 0;
  RtlStringCbCatNA((NTSTRSAFE_PSTR)v30 + 4, v17, ".", 1uLL);
  RtlStringCbCatNA((NTSTRSAFE_PSTR)v30 + 4, v20, "_DSM", 4uLL);
  v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 16));
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
          WdfDriverGlobals,
          0LL,
          v21,
          &v31);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_35;
    v12 = 16;
    goto LABEL_4;
  }
  v22 = v30;
  v23 = (char *)v30 + 272;
  *((_DWORD *)v30 + 67) = 1048578;
  memcpy_s(v23, 0x10uLL, &GUID_USB_ACPI_DSM, 0x10uLL);
  v24 = 4LL;
  if ( v22[135] >= 4u )
    v24 = (unsigned __int16)v22[135];
  *(_QWORD *)((char *)v22 + v24 + 272) = 0x40000LL;
  *(_DWORD *)((char *)v22 + v24 + 280) = 0x40000;
  *(_DWORD *)((char *)v22 + v24 + 284) = a5;
  *(_DWORD *)((char *)v22 + v24 + 288) = 3;
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
          WdfDriverGlobals,
          v21,
          v31,
          3325976LL,
          v32,
          0LL,
          v33,
          0LL);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_35;
    v12 = 17;
LABEL_4:
    LODWORD(v28) = v10;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      v12,
      (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
      v28);
    goto LABEL_35;
  }
  v39 = 0x200000010uLL;
  if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
          WdfDriverGlobals,
          v31,
          v21,
          &v39)
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0x12u, (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
  }
  v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(WdfDriverGlobals, v31);
  v11 = v25;
  if ( v25 >= 0 )
  {
    v26 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                      WdfDriverGlobals,
                      v33,
                      0LL);
    if ( *v26 != 1114596673 || !v26[2] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(a1 + 2520),
          2u,
          3u,
          0x14u,
          (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids);
      v11 = -1072431089;
    }
  }
  else if ( v25 != -1073741772
         && v25 != -1073741810
         && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v29) = v25;
    LODWORD(v28) = a6;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(a1 + 2520),
      2u,
      3u,
      0x13u,
      (__int64)&WPP_d57d3d1a25143926e0647cae0fc03ffc_Traceguids,
      v28,
      v29);
  }
LABEL_35:
  if ( v31 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v32 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v11;
}
