/*
 * XREFs of Endpoint_EndpointStaticStreamsEnableCompletion @ 0x1C003A180
 * Callers:
 *     <none>
 * Callees:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x1C000E848 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0017FB0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C001A740 (WPP_RECORDER_SF_dddd.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C003915C (XilEndpoint_FreeStreamContextArray.c)
 *     TR_FreeSecureTransferSegments @ 0x1C00418F0 (TR_FreeSecureTransferSegments.c)
 */

__int64 __fastcall Endpoint_EndpointStaticStreamsEnableCompletion(__int64 a1, int a2)
{
  __int64 v4; // r15
  __int64 **v5; // rax
  _QWORD **v6; // rdx
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rbp
  _QWORD **v11; // rdx
  __int64 v12; // rbp
  _QWORD **v13; // rdx
  struct _MDL *v14; // rcx
  int v15; // edx
  unsigned int i; // ebp
  __int64 v17; // rdi
  __int64 v18; // r14
  _QWORD **v19; // rdx
  __int64 v20; // r14
  struct _MDL *v21; // rcx
  int v22; // edx
  _OWORD v24[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v25; // [rsp+70h] [rbp-48h]

  v25 = 0LL;
  memset(v24, 0, sizeof(v24));
  LOWORD(v24[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a1,
    v24);
  v4 = *((_QWORD *)&v24[0] + 1);
  v5 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0063090);
  v7 = *v5;
  v8 = **v5;
  if ( a2 < 0 )
  {
    for ( i = 1; i <= *((_DWORD *)v7 + 2); ++i )
    {
      LOBYTE(v6) = 1;
      v17 = v7[13 * i - 7];
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 120LL);
      (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)(v17 + 32) + 40LL))(v17, v6);
      _InterlockedExchange((volatile __int32 *)(v17 + 108), 0);
      if ( *(_BYTE *)(v17 + 280) )
        TR_FreeSecureTransferSegments(v17);
      v19 = (_QWORD **)(v17 + 208);
      v20 = v18 + 88;
      if ( *v19 != v19 )
        XilCoreCommonBuffer_ReleaseBuffers(v20, v19);
      v6 = (_QWORD **)(v17 + 224);
      if ( *v6 != v6 )
        XilCoreCommonBuffer_ReleaseBuffers(v20, v6);
      v21 = *(struct _MDL **)(v17 + 120);
      if ( v21 )
      {
        IoFreeMdl(v21);
        *(_QWORD *)(v17 + 120) = 0LL;
      }
    }
    XilEndpoint_FreeStreamContextArray(v7);
    *(_QWORD *)(v8 + 136) = *(_QWORD *)(v8 + 128);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v22) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v8 + 80),
        v22,
        13,
        110,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
        *(_DWORD *)(v8 + 144),
        *((_DWORD *)v7 + 2),
        a2);
    }
    *(_DWORD *)(v4 + 4) = -2147481600;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1232))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 88);
    LOBYTE(v6) = 1;
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 120LL);
    (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)(v9 + 32) + 40LL))(v9, v6);
    _InterlockedExchange((volatile __int32 *)(v9 + 108), 0);
    if ( *(_BYTE *)(v9 + 280) )
      TR_FreeSecureTransferSegments(v9);
    v11 = (_QWORD **)(v9 + 208);
    v12 = v10 + 88;
    if ( *v11 != v11 )
      XilCoreCommonBuffer_ReleaseBuffers(v12, v11);
    v13 = (_QWORD **)(v9 + 224);
    if ( *v13 != v13 )
      XilCoreCommonBuffer_ReleaseBuffers(v12, v13);
    v14 = *(struct _MDL **)(v9 + 120);
    if ( v14 )
    {
      IoFreeMdl(v14);
      *(_QWORD *)(v9 + 120) = 0LL;
    }
    XilEndpoint_FreeStreamContextArray(*(_QWORD **)(v8 + 128));
    ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
    *(_QWORD *)(v8 + 128) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v8 + 80),
        v15,
        13,
        109,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
        *(_DWORD *)(v8 + 144),
        *((_DWORD *)v7 + 2));
    }
    *(_DWORD *)(v4 + 4) = 0;
    ESM_AddEvent((KSPIN_LOCK *)(v8 + 296), 146);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a1,
           (unsigned int)a2);
}
