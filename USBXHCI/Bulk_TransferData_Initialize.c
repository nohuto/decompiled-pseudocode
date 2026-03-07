NTSTATUS __fastcall Bulk_TransferData_Initialize(__int64 a1, _QWORD *a2, __int64 a3)
{
  NTSTATUS result; // eax
  NTSTATUS *v7; // rbx
  __int64 v8; // rbp
  bool v9; // cl
  __int64 v10; // rax
  int v11; // r9d
  __int64 v12; // rdx
  _OWORD v13[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]

  v14 = 0LL;
  memset(v13, 0, sizeof(v13));
  LOWORD(v13[0]) = 40;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
             WdfDriverGlobals,
             a3,
             v13);
  if ( !*((_BYTE *)a2 + 16) )
  {
    v8 = *((_QWORD *)&v13[0] + 1);
    v9 = *(_WORD *)(*((_QWORD *)&v13[0] + 1) + 2LL) != 8
      && *(_WORD *)(*((_QWORD *)&v13[0] + 1) + 2LL) != 9
      && *(_WORD *)(*((_QWORD *)&v13[0] + 1) + 2LL) != 10
      && *(_WORD *)(*((_QWORD *)&v13[0] + 1) + 2LL) != 50
      && *(_WORD *)(*((_QWORD *)&v13[0] + 1) + 2LL) != 55
      && *(_WORD *)(*((_QWORD *)&v13[0] + 1) + 2LL) != 56
      && (unsigned int)*(unsigned __int16 *)(*((_QWORD *)&v13[0] + 1) + 2LL) - 57 <= 1;
    v7 = (NTSTATUS *)(*((_QWORD *)&v13[0] + 1) + 52LL);
    if ( !v9 )
      v7 = (NTSTATUS *)(*((_QWORD *)&v13[0] + 1) + 36LL);
    memset(a2, 0, 0x160uLL);
    a2[1] = a2;
    *a2 = a2;
    *((_BYTE *)a2 + 16) = 1;
    a2[3] = a3;
    a2[6] = v8;
    a2[7] = a1;
    a2[8] = 0LL;
    a2[9] = 259LL;
    a2[10] = 0LL;
    a2[11] = 0LL;
    a2[12] = 0LL;
    result = *v7;
    *((_DWORD *)a2 + 26) = *v7;
    *((_DWORD *)a2 + 32) = 464;
    *((_WORD *)a2 + 66) = 0;
    *((_BYTE *)a2 + 134) = 0;
    *(_QWORD *)((char *)a2 + 108) = 0LL;
    *(_QWORD *)((char *)a2 + 116) = 0LL;
    *v7 = 0;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2280))(WdfDriverGlobals, a3);
      result = IoGetActivityIdIrp(v10, a2 + 4);
      if ( result < 0 )
        result = EtwActivityIdControl(3u, (LPGUID)a2 + 2);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      {
        v12 = *(_QWORD *)(a1 + 48);
        LOBYTE(v11) = *(_BYTE *)(v12 + 135);
        return McTemplateK0uqqq_EtwWriteTransfer(
                 *(_QWORD *)(a1 + 56),
                 v12,
                 (int)a2 + 32,
                 v11,
                 *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                 *(_DWORD *)(a1 + 64),
                 *((_DWORD *)a2 + 26));
      }
    }
  }
  return result;
}
