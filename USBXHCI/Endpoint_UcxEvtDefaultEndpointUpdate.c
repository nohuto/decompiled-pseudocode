char __fastcall Endpoint_UcxEvtDefaultEndpointUpdate(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // edx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rbp
  __int64 v12; // r9
  __int64 v13; // r9
  __int16 v14; // ax
  char v15; // al
  __int64 DequeuePointer; // rax
  __int64 v17; // r9
  int v19; // edx
  __int64 v20; // rax
  _OWORD v21[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v22; // [rsp+70h] [rbp-38h]

  memset(v21, 0, sizeof(v21));
  v22 = 0LL;
  LOWORD(v21[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v21);
  v3 = *((_QWORD *)&v21[0] + 1);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v21[0] + 1) + 24LL),
         off_1C00631A8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_ddd(
      *(_QWORD *)(*(_QWORD *)v4 + 72LL),
      v5,
      13,
      31,
      (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL),
      *(_DWORD *)(v4 + 144),
      *(_DWORD *)(v3 + 32));
  }
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 88LL);
  v7 = *(_QWORD *)(*(_QWORD *)v4 + 144LL);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0063090);
  memset((void *)(v8 + 8), 0, 0x70uLL);
  *(_QWORD *)v8 = v4;
  *(_DWORD *)(v8 + 16) = *(_DWORD *)(v3 + 32);
  v9 = XilEndpoint_AcquireBuffer(v4, (*(_DWORD *)(v6 + 104) & 4) != 0 ? 2112 : 1056, v4, 829714501LL);
  v10 = 0;
  *(_QWORD *)(v8 + 8) = v9;
  if ( v9 )
  {
    v11 = *(_QWORD *)(v9 + 16);
    v12 = -(__int64)((*(_DWORD *)(v6 + 104) & 4) != 0);
    *(_DWORD *)(v11 + 4) |= 2u;
    v13 = v11 + (v12 & 0x40) + 64;
    *(_DWORD *)(v13 + 4) ^= (*(_DWORD *)(v13 + 4) ^ (8 * *(_DWORD *)(v4 + 120))) & 0x38;
    v14 = *(_WORD *)(v8 + 16);
    *(_BYTE *)(v13 + 2) = 0;
    *(_DWORD *)v13 &= 0xFFFF80FF;
    *(_WORD *)(v13 + 6) = v14;
    *(_BYTE *)(v13 + 5) = 0;
    v15 = *(_BYTE *)(v4 + 99) & 3;
    if ( v15 != 1 )
    {
      if ( (*(_QWORD *)(*(_QWORD *)v4 + 336LL) & 0x10000000000000LL) == 0
        || v15 != 3
        || *(char *)(v4 + 98) >= 0
        || (v20 = *(_QWORD *)(v4 + 16), *(_WORD *)(v20 + 124) != 1529)
        || *(_WORD *)(v20 + 126) != 4353
        || *(_DWORD *)(v20 + 36) <= 1u )
      {
        v10 = 6;
      }
    }
    *(_DWORD *)(v13 + 4) = v10 & 0xFFFFFFFE | *(_DWORD *)(v13 + 4) & 0xFFFFFFF8;
    DequeuePointer = Endpoint_GetDequeuePointer(v4, 0);
    *(_QWORD *)(v17 + 8) = DequeuePointer;
    *(_DWORD *)(v4 + 152) = *(unsigned __int16 *)(v17 + 6);
    Endpoint_InitializeTransferRing((__int64 *)v4, 0);
    memset((void *)(v8 + 24), 0, 0x60uLL);
    *(_QWORD *)(v8 + 72) = v8;
    *(_QWORD *)(v8 + 64) = Endpoint_EvaluateContextCompletion;
    *(_DWORD *)(v8 + 60) = *(_DWORD *)(v8 + 60) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v8 + 63) = *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL);
    *(_QWORD *)(v8 + 48) = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 24LL);
    *(_QWORD *)(v8 + 96) = v11;
    *(_DWORD *)(v8 + 104) = *(_DWORD *)(*(_QWORD *)(v8 + 8) + 44LL);
    *(_DWORD *)(v8 + 108) = 2;
    *(_QWORD *)(v8 + 112) = v4;
    return Command_SendCommand(v7, v8 + 24);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v19 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(*(_QWORD *)v4 + 72LL),
        v19,
        13,
        32,
        (__int64)&WPP_54015396503830aea6e7f220ba327c55_Traceguids,
        *(_BYTE *)(*(_QWORD *)(v4 + 16) + 135LL),
        *(_DWORD *)(v4 + 144));
    }
    if ( *(_QWORD *)(v8 + 8) )
    {
      CommonBuffer_ReleaseBuffer(*(_QWORD *)(*(_QWORD *)v4 + 120LL));
      *(_QWORD *)(v8 + 8) = 0LL;
    }
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01023 + 2104))(
             WdfDriverGlobals,
             a2,
             3221225626LL);
  }
}
