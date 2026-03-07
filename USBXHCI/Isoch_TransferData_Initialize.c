__int64 __fastcall Isoch_TransferData_Initialize(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  ULONG v8; // ebp
  __int64 v9; // rbx
  __int64 v10; // rax
  struct _MDL *Mdl; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rax
  _OWORD v16[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v17; // [rsp+60h] [rbp-48h]

  v17 = 0LL;
  memset(v16, 0, sizeof(v16));
  LOWORD(v16[0]) = 40;
  v6 = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v16);
  v7 = *((_QWORD *)&v16[0] + 1);
  if ( *(_WORD *)(*((_QWORD *)&v16[0] + 1) + 2LL) == 10 )
  {
LABEL_2:
    v8 = *(_DWORD *)(*((_QWORD *)&v16[0] + 1) + 36LL);
  }
  else
  {
    switch ( *(_WORD *)(*((_QWORD *)&v16[0] + 1) + 2LL) )
    {
      case '9':
      case ':':
        v8 = *(_DWORD *)(*((_QWORD *)&v16[0] + 1) + 52LL);
        break;
      default:
        goto LABEL_2;
    }
  }
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0063090);
  *(_DWORD *)(v9 + 17) = 0;
  *(_WORD *)(v9 + 21) = 0;
  *(_BYTE *)(v9 + 23) = 0;
  *(_OWORD *)(v9 + 32) = 0LL;
  memset((void *)(v9 + 96), 0, 0x2A0uLL);
  *(_QWORD *)(v9 + 8) = v9;
  *(_QWORD *)v9 = v9;
  *(_QWORD *)(v9 + 72) = 0LL;
  *(_DWORD *)(v9 + 80) = v8;
  *(_BYTE *)(v9 + 16) = 1;
  *(_QWORD *)(v9 + 24) = a2;
  *(_QWORD *)(v9 + 48) = v7;
  *(_QWORD *)(v9 + 56) = a1;
  *(_DWORD *)(v9 + 68) = 259;
  *(_DWORD *)(v9 + 64) = 0;
  *(_QWORD *)(v9 + 84) = 0LL;
  *(_DWORD *)(v9 + 92) = 0;
  *(_DWORD *)(v9 + 96) = *(_DWORD *)(v7 + 132);
  *(_QWORD *)(v9 + 100) = 0LL;
  *(_QWORD *)(v9 + 108) = 0LL;
  *(_DWORD *)(v9 + 116) = 0;
  *(_DWORD *)(v9 + 128) = 976;
  *(_WORD *)(v9 + 132) = 0;
  *(_BYTE *)(v9 + 134) = 0;
  if ( *(_WORD *)(v7 + 2) != 10 )
  {
    switch ( *(_WORD *)(v7 + 2) )
    {
      case '9':
      case ':':
        goto LABEL_6;
      default:
        break;
    }
  }
  v10 = *(_QWORD *)(v7 + 48);
  if ( v10 )
  {
    *(_QWORD *)(v9 + 72) = v10;
    goto LABEL_6;
  }
  Mdl = IoAllocateMdl(*(PVOID *)(v7 + 40), v8, 0, 0, 0LL);
  *(_QWORD *)(v9 + 72) = Mdl;
  if ( Mdl )
  {
    MmBuildMdlForNonPagedPool(Mdl);
LABEL_6:
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2280))(WdfDriverGlobals, a2);
      if ( (int)IoGetActivityIdIrp(v15, v9 + 32) < 0 )
        EtwActivityIdControl(3u, (LPGUID)(v9 + 32));
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
        McTemplateK0uqqq_EtwWriteTransfer(
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_QWORD *)(a1 + 56),
          v9 + 32,
          *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
          *(_DWORD *)(a1 + 64),
          *(_DWORD *)(v9 + 80));
    }
    goto LABEL_7;
  }
  v6 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(_QWORD *)(a1 + 56);
    v14 = *(_DWORD *)(v13 + 144);
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_DDi(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v13,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
      15,
      (__int64)&WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      v14,
      a2);
  }
LABEL_7:
  *a3 = v9;
  return v6;
}
