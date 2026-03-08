/*
 * XREFs of Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003D100
 * Callers:
 *     <none>
 * Callees:
 *     TR_Enable_Internal @ 0x1C0007D64 (TR_Enable_Internal.c)
 *     Endpoint_GetDequeuePointer @ 0x1C000CEDC (Endpoint_GetDequeuePointer.c)
 *     XilCoreCommonBuffer_ReleaseBuffers @ 0x1C000E848 (XilCoreCommonBuffer_ReleaseBuffers.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0017FB0 (WPP_RECORDER_SF_ddd.c)
 *     WPP_RECORDER_SF_dddd @ 0x1C001A740 (WPP_RECORDER_SF_dddd.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0038BDC (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0038E24 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C003915C (XilEndpoint_FreeStreamContextArray.c)
 *     TR_FreeSecureTransferSegments @ 0x1C00418F0 (TR_FreeSecureTransferSegments.c)
 *     UsbDevice_ReconfigureEndpoint @ 0x1C00495EC (UsbDevice_ReconfigureEndpoint.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsEnable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v5; // r15
  _QWORD *v6; // r13
  __int64 v7; // rbx
  unsigned int *v8; // r14
  int v9; // edx
  unsigned __int64 v10; // rdx
  int StreamContextArray; // esi
  unsigned int v12; // edi
  __int64 DequeuePointer; // rax
  __int64 v14; // rdx
  unsigned int v16; // r15d
  __int64 v17; // rdi
  __int64 v18; // r12
  _QWORD **v19; // rdx
  __int64 v20; // r12
  struct _MDL *v21; // rcx
  __int64 v22; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+58h] [rbp-11h]
  _OWORD v24[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v25; // [rsp+80h] [rbp+17h]

  v22 = 0LL;
  v3 = a3;
  v25 = 0LL;
  memset(v24, 0, sizeof(v24));
  v23 = a3;
  LOWORD(v24[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a3,
    v24);
  v5 = *((_QWORD *)&v24[0] + 1);
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   a2,
                   off_1C0063338);
  v7 = *v6;
  v8 = (unsigned int *)(v6 + 1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(unsigned __int8 *)(*(_QWORD *)(v7 + 16) + 135LL);
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(v7 + 80),
      v9,
      13,
      105,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
      *(_DWORD *)(v7 + 144),
      *v8);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD))(WdfFunctions_01023 + 1304))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    0LL,
    0LL);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, char *, __int64 *))(WdfFunctions_01023 + 1224))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL),
    (char *)&v22 + 4,
    &v22);
  v10 = (unsigned int)v22;
  if ( v22 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v7 + 80),
        v10,
        13,
        106,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
        *(_DWORD *)(v7 + 144),
        SBYTE4(v22),
        v22);
    }
    goto LABEL_20;
  }
  v10 = *v8;
  if ( !(_DWORD)v10 || (unsigned int)v10 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 88LL) + 116LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_ddd(
        *(_QWORD *)(v7 + 80),
        v10,
        13,
        107,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
        *(_DWORD *)(v7 + 144),
        *v8);
    }
LABEL_20:
    StreamContextArray = -1073741811;
    *(_DWORD *)(v5 + 4) = -2147482880;
    goto LABEL_21;
  }
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               v3,
               off_1C0063090) = v6;
  StreamContextArray = XilEndpoint_AllocateStreamContextArray((__int64)v6);
  if ( StreamContextArray < 0 )
  {
LABEL_7:
    *(_DWORD *)(v5 + 4) = -1073737728;
    goto LABEL_21;
  }
  v12 = 1;
  *(_QWORD *)(v7 + 136) = v6;
  if ( *v8 )
  {
    while ( 1 )
    {
      StreamContextArray = TR_Enable_Internal(*(_QWORD **)(104LL * (v12 - 1) + *(_QWORD *)(v7 + 136) + 48));
      if ( StreamContextArray < 0 )
        break;
      DequeuePointer = Endpoint_GetDequeuePointer(v7, v12);
      v14 = v12++;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 136) + 32LL) + 16LL) + 16 * v14) = DequeuePointer;
      if ( v12 > *v8 )
        goto LABEL_11;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 2;
      WPP_RECORDER_SF_dddd(
        *(_QWORD *)(v7 + 80),
        v10,
        13,
        108,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v7 + 16) + 135LL),
        *(_DWORD *)(v7 + 144),
        v12,
        StreamContextArray);
    }
    goto LABEL_7;
  }
LABEL_11:
  StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates((__int64)v6);
  if ( StreamContextArray >= 0 )
    return UsbDevice_ReconfigureEndpoint(*(_QWORD *)(v7 + 16), v7, Endpoint_EndpointStaticStreamsEnableCompletion, v3);
  *(_DWORD *)(v5 + 4) = -2147481600;
LABEL_21:
  v16 = 1;
  if ( *v8 )
  {
    do
    {
      LOBYTE(v10) = 1;
      v17 = v6[13 * v16 - 7];
      v18 = *(_QWORD *)(*(_QWORD *)(v17 + 40) + 120LL);
      (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)(v17 + 32) + 40LL))(v17, v10);
      _InterlockedExchange((volatile __int32 *)(v17 + 108), 0);
      if ( *(_BYTE *)(v17 + 280) )
        TR_FreeSecureTransferSegments(v17);
      v19 = (_QWORD **)(v17 + 208);
      v20 = v18 + 88;
      if ( *v19 != v19 )
        XilCoreCommonBuffer_ReleaseBuffers(v20, v19);
      v10 = v17 + 224;
      if ( *(_QWORD *)v10 != v10 )
        XilCoreCommonBuffer_ReleaseBuffers(v20, (_QWORD **)v10);
      v21 = *(struct _MDL **)(v17 + 120);
      if ( v21 )
      {
        IoFreeMdl(v21);
        *(_QWORD *)(v17 + 120) = 0LL;
      }
      ++v16;
    }
    while ( v16 <= *v8 );
    v3 = v23;
  }
  *(_QWORD *)(v7 + 136) = *(_QWORD *)(v7 + 128);
  XilEndpoint_FreeStreamContextArray(v6);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 1232))(
    WdfDriverGlobals,
    *(_QWORD *)(*(_QWORD *)(v7 + 88) + 72LL));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           v3,
           (unsigned int)StreamContextArray);
}
