/*
 * XREFs of Endpoint_EndpointStaticStreamsDisableCompletion @ 0x1C0039EC0
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

__int64 __fastcall Endpoint_EndpointStaticStreamsDisableCompletion(__int64 a1, int a2)
{
  __int64 v4; // r13
  __int64 **v5; // rax
  _QWORD **v6; // rdx
  __int64 *v7; // rsi
  __int64 v8; // rbx
  unsigned int i; // ebp
  __int64 v10; // rdi
  __int64 v11; // r14
  _QWORD **v12; // rdx
  __int64 v13; // r14
  struct _MDL *v14; // rcx
  int v15; // edx
  int v16; // eax
  _QWORD *v17; // rcx
  int v18; // edx
  _OWORD v20[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v21; // [rsp+70h] [rbp-48h]

  v21 = 0LL;
  memset(v20, 0, sizeof(v20));
  LOWORD(v20[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a1,
    v20);
  v4 = *((_QWORD *)&v20[0] + 1);
  v5 = (__int64 **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                     WdfDriverGlobals,
                     a1,
                     off_1C0063090);
  v7 = *v5;
  v8 = **v5;
  if ( a2 < 0 )
  {
    v17 = *(_QWORD **)(v8 + 128);
    *(_QWORD *)(v8 + 136) = v7;
    XilEndpoint_FreeStreamContextArray(v17);
    ExFreePoolWithTag(*(PVOID *)(v8 + 128), 0x49434858u);
    *(_QWORD *)(v8 + 128) = 0LL;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v8 + 80),
        v18,
        13,
        114,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
        *(_DWORD *)(v8 + 144),
        *((_DWORD *)v7 + 2),
        a2);
    }
    v16 = -2147481600;
  }
  else
  {
    for ( i = 1; i <= *((_DWORD *)v7 + 2); ++i )
    {
      LOBYTE(v6) = 1;
      v10 = v7[13 * i - 7];
      v11 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 120LL);
      (*(void (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)(v10 + 32) + 40LL))(v10, v6);
      _InterlockedExchange((volatile __int32 *)(v10 + 108), 0);
      if ( *(_BYTE *)(v10 + 280) )
        TR_FreeSecureTransferSegments(v10);
      v12 = (_QWORD **)(v10 + 208);
      v13 = v11 + 88;
      if ( *v12 != v12 )
        XilCoreCommonBuffer_ReleaseBuffers(v13, v12);
      v6 = (_QWORD **)(v10 + 224);
      if ( *v6 != v6 )
        XilCoreCommonBuffer_ReleaseBuffers(v13, v6);
      v14 = *(struct _MDL **)(v10 + 120);
      if ( v14 )
      {
        IoFreeMdl(v14);
        *(_QWORD *)(v10 + 120) = 0LL;
      }
    }
    XilEndpoint_FreeStreamContextArray(v7);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1232))(
      WdfDriverGlobals,
      *(_QWORD *)(*(_QWORD *)(v8 + 88) + 72LL));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 4;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v8 + 80),
        v15,
        13,
        113,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v8 + 16) + 135LL),
        *(_DWORD *)(v8 + 144),
        *((_DWORD *)v7 + 2));
    }
    v16 = 0;
  }
  *(_DWORD *)(v4 + 4) = v16;
  if ( a2 >= 0 )
    ESM_AddEvent((KSPIN_LOCK *)(v8 + 296), 142);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a1,
           (unsigned int)a2);
}
