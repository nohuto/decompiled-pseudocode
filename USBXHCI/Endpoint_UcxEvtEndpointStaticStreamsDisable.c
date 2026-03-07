__int64 __fastcall Endpoint_UcxEvtEndpointStaticStreamsDisable(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  _DWORD *v8; // rsi
  int v9; // edx
  _QWORD *Pool2; // rax
  int StreamContextArray; // edi
  _QWORD *v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  _OWORD v17[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+60h] [rbp-38h]

  v18 = 0LL;
  memset(v17, 0, sizeof(v17));
  LOWORD(v17[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a3,
    v17);
  v5 = *((_QWORD *)&v17[0] + 1);
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0063338);
  v7 = *(_QWORD **)v6;
  v8 = (_DWORD *)(*(_QWORD *)v6 + 144LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(unsigned __int8 *)(v7[2] + 135LL);
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_ddd(
      v7[10],
      v9,
      13,
      111,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(v7[2] + 135LL),
      *v8,
      *(_DWORD *)(v6 + 8));
  }
  *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
               WdfDriverGlobals,
               a3,
               off_1C0063090) = v6;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 152LL, 1229146200LL);
  v7[16] = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v7;
    *(_DWORD *)(v7[16] + 8LL) = 1;
    *(_DWORD *)(v7[16] + 12LL) = 1;
    StreamContextArray = XilEndpoint_AllocateStreamContextArray(v7[16]);
    if ( StreamContextArray >= 0 )
    {
      v14 = v7[16];
      v15 = v7[11];
      v7[17] = v14;
      *(_QWORD *)(v14 + 48) = v15;
      StreamContextArray = TR_Enable_Internal((_QWORD *)v7[11]);
      if ( StreamContextArray >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7[17] + 32LL) + 16LL) + 16LL) = TR_GetDequeuePointer(v7[11]);
        StreamContextArray = XilEndpoint_CommitStreamContextArrayUpdates(v7[17]);
        if ( StreamContextArray >= 0 )
          return UsbDevice_ReconfigureEndpoint(v7[2], v7, Endpoint_EndpointStaticStreamsDisableCompletion, a3);
        *(_DWORD *)(v5 + 4) = -2147481600;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 2;
          WPP_RECORDER_SF_ddd(
            v7[10],
            v16,
            13,
            112,
            (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
            *(_BYTE *)(v7[2] + 135LL),
            *v8,
            StreamContextArray);
        }
        *(_DWORD *)(v5 + 4) = -1073737728;
      }
    }
  }
  else
  {
    *(_DWORD *)(v5 + 4) = -1073737728;
    StreamContextArray = -1073741670;
  }
  v12 = (_QWORD *)v7[16];
  if ( v12 )
  {
    XilEndpoint_FreeStreamContextArray(v12);
    ExFreePoolWithTag((PVOID)v7[16], 0x49434858u);
    v7[16] = 0LL;
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a3,
           (unsigned int)StreamContextArray);
}
