/*
 * XREFs of HUBACPI_EvaluateDsmMethod @ 0x1C0082C40
 * Callers:
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0083988 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     RtlStringCbCatNA @ 0x1C003C1C4 (RtlStringCbCatNA.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     memcpy_s @ 0x1C0042910 (memcpy_s.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

__int64 __fastcall HUBACPI_EvaluateDsmMethod(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  unsigned __int64 v7; // rax
  int v9; // eax
  unsigned int v10; // edi
  unsigned __int16 v11; // r9
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  char *v15; // rcx
  size_t v16; // rdx
  char v17; // al
  char *v18; // rax
  size_t v19; // rdx
  __int64 v20; // r12
  _WORD *v21; // rbx
  char *v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  _DWORD *v25; // rax
  __int64 v27; // [rsp+30h] [rbp-71h]
  void *v28; // [rsp+58h] [rbp-49h] BYREF
  __int64 v29; // [rsp+60h] [rbp-41h] BYREF
  __int64 v30; // [rsp+68h] [rbp-39h] BYREF
  __int64 v31; // [rsp+70h] [rbp-31h]
  __int128 v32; // [rsp+78h] [rbp-29h] BYREF
  __int64 v33; // [rsp+88h] [rbp-19h]
  __int64 v34; // [rsp+90h] [rbp-11h]
  __int128 v35; // [rsp+98h] [rbp-9h]
  __int64 v36; // [rsp+A8h] [rbp+7h]
  __int128 v37; // [rsp+B0h] [rbp+Fh] BYREF

  v31 = a6;
  v30 = 0LL;
  v36 = 0LL;
  v7 = *(_QWORD *)(a1 + 16);
  v33 = 0LL;
  v35 = v7;
  v32 = 0LL;
  v37 = 0LL;
  v29 = 0LL;
  LODWORD(v32) = 56;
  v34 = 0x100000001LL;
  v28 = 0LL;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, _QWORD, __int64, __int64, __int64 *, void **))(WdfFunctions_01015 + 1536))(
         WdfDriverGlobals,
         &v32,
         (unsigned int)ExDefaultNonPagedPoolType,
         1748191317LL,
         312LL,
         &v30,
         &v28);
  v10 = v9;
  if ( v9 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_35;
    v11 = 14;
    goto LABEL_4;
  }
  v12 = *a2;
  v13 = 256LL;
  if ( (unsigned __int64)(v12 + 6) <= 0x100 )
  {
    memset(v28, 0, 0x138uLL);
    v14 = *((_QWORD *)a2 + 1);
    *(_DWORD *)v28 = 1181312321;
    *((_DWORD *)v28 + 65) = 276;
    *((_DWORD *)v28 + 66) = 4;
    v15 = (char *)v28 + 4;
    v16 = v14 - ((_QWORD)v28 + 4);
    do
    {
      if ( !(v13 + v12 - 256) )
        break;
      v17 = v15[v16];
      if ( !v17 )
        break;
      *v15++ = v17;
      --v13;
    }
    while ( v13 );
    v18 = v15 - 1;
    if ( v13 )
      v18 = v15;
    *v18 = 0;
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v28 + 4, v16, ".", 1uLL);
    RtlStringCbCatNA((NTSTRSAFE_PSTR)v28 + 4, v19, "_DSM", 4uLL);
    v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 336))(
            WdfDriverGlobals,
            *(_QWORD *)(a1 + 16));
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64 *))(WdfFunctions_01015 + 1976))(
           WdfDriverGlobals,
           0LL,
           v20,
           &v29);
    v10 = v9;
    if ( v9 >= 0 )
    {
      v21 = v28;
      v22 = (char *)v28 + 272;
      *((_DWORD *)v28 + 67) = 1048578;
      memcpy_s(v22, 0x10uLL, &GUID_USB_ACPI_DSM, 0x10uLL);
      v23 = 4LL;
      if ( v21[135] >= 4u )
        v23 = (unsigned __int16)v21[135];
      *(_QWORD *)((char *)v21 + v23 + 272) = 0x40000LL;
      *(_DWORD *)((char *)v21 + v23 + 280) = 0x40000;
      *(_DWORD *)((char *)v21 + v23 + 284) = a5;
      *(_DWORD *)((char *)v21 + v23 + 288) = 3;
      v24 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, __int64, _QWORD, __int64, _QWORD))(WdfFunctions_01015 + 1512))(
              WdfDriverGlobals,
              v20,
              v29,
              3325976LL,
              v30,
              0LL,
              v31,
              0LL);
      v10 = v24;
      if ( v24 >= 0 )
      {
        v37 = 0x200000010uLL;
        if ( !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
                WdfDriverGlobals,
                v29,
                v20,
                &v37)
          && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_SF_(
            *(_QWORD *)(a1 + 2520),
            2u,
            3u,
            0x12u,
            (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids);
        }
        v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
                WdfDriverGlobals,
                v29);
        if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741810 )
        {
          v25 = (_DWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                            WdfDriverGlobals,
                            v31,
                            0LL);
          if ( *v25 != 1114596673 || !v25[2] )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                *(_QWORD *)(a1 + 2520),
                2u,
                3u,
                0x14u,
                (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids);
            v10 = -1072431089;
          }
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = 19;
          LODWORD(v27) = v10;
          goto LABEL_5;
        }
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v11 = 17;
        LODWORD(v27) = v24;
        goto LABEL_5;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 16;
LABEL_4:
      LODWORD(v27) = v9;
LABEL_5:
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        v11,
        (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids,
        v27);
    }
  }
  else
  {
    v10 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2520), 2u, 3u, 0xFu, (__int64)&WPP_7981730f68f0369ab28b5d2e2e7273fd_Traceguids);
  }
LABEL_35:
  if ( v29 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v30 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  return v10;
}
