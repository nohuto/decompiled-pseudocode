/*
 * XREFs of Bulk_TransferData_Initialize @ 0x1C000D390
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C000CD50 (Bulk_RetrieveNextStage.c)
 *     Bulk_WdfEvtIoCanceledOnQueue @ 0x1C0044960 (Bulk_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001AFF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001B2C0 (memset.c)
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x1C0040708 (McTemplateK0uqqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall Bulk_TransferData_Initialize(__int64 a1, _QWORD *a2, __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v7; // rbp
  unsigned __int16 v8; // ax
  char v9; // cl
  NTSTATUS *v10; // rbx
  __int64 v11; // rax
  int v12; // r9d
  __int64 v13; // rdx
  _OWORD v14[2]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v15; // [rsp+60h] [rbp-38h]

  v15 = 0LL;
  memset(v14, 0, sizeof(v14));
  LOWORD(v14[0]) = 40;
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
             WdfDriverGlobals,
             a3,
             v14);
  if ( !*((_BYTE *)a2 + 16) )
  {
    v7 = *((_QWORD *)&v14[0] + 1);
    v8 = *(_WORD *)(*((_QWORD *)&v14[0] + 1) + 2LL);
    if ( v8 <= 0x38u || (v9 = 1, v8 > 0x3Au) )
      v9 = 0;
    v10 = (NTSTATUS *)(*((_QWORD *)&v14[0] + 1) + 52LL);
    if ( !v9 )
      v10 = (NTSTATUS *)(*((_QWORD *)&v14[0] + 1) + 36LL);
    memset(a2, 0, 0x160uLL);
    a2[1] = a2;
    *a2 = a2;
    *((_BYTE *)a2 + 16) = 1;
    a2[3] = a3;
    a2[6] = v7;
    a2[7] = a1;
    a2[8] = 0LL;
    a2[9] = 259LL;
    a2[10] = 0LL;
    a2[11] = 0LL;
    a2[12] = 0LL;
    result = *v10;
    *((_DWORD *)a2 + 26) = *v10;
    *((_DWORD *)a2 + 32) = 464;
    *((_WORD *)a2 + 66) = 0;
    *((_BYTE *)a2 + 134) = 0;
    *(_QWORD *)((char *)a2 + 108) = 0LL;
    *(_QWORD *)((char *)a2 + 116) = 0LL;
    *v10 = 0;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2280))(WdfDriverGlobals, a3);
      result = IoGetActivityIdIrp(v11, a2 + 4);
      if ( result < 0 )
        result = EtwActivityIdControl(3u, (LPGUID)a2 + 2);
      if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      {
        v13 = *(_QWORD *)(a1 + 48);
        LOBYTE(v12) = *(_BYTE *)(v13 + 135);
        return McTemplateK0uqqq_EtwWriteTransfer(
                 *(_QWORD *)(a1 + 56),
                 v13,
                 (int)a2 + 32,
                 v12,
                 *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                 *(_DWORD *)(a1 + 64),
                 *((_DWORD *)a2 + 26));
      }
    }
  }
  return result;
}
