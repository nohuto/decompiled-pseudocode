/*
 * XREFs of Control_TransferData_Initialize @ 0x1C00070AC
 * Callers:
 *     Control_WdfEvtIoDefault @ 0x1C0005C60 (Control_WdfEvtIoDefault.c)
 *     Control_WdfEvtIoCanceledOnQueue @ 0x1C0042F70 (Control_WdfEvtIoCanceledOnQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0020700 (memset.c)
 *     McTemplateK0uqqq_EtwWriteTransfer @ 0x1C0022696 (McTemplateK0uqqq_EtwWriteTransfer.c)
 */

NTSTATUS __fastcall Control_TransferData_Initialize(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rdx

  memset(a4, 0, 0xF8uLL);
  a4[1] = a4;
  *a4 = a4;
  *((_DWORD *)a4 + 16) = 0;
  a4[9] = 0LL;
  a4[10] = 0LL;
  a4[11] = 0LL;
  a4[12] = 0LL;
  *((_BYTE *)a4 + 16) = 1;
  a4[3] = a2;
  a4[6] = a3;
  a4[7] = a1;
  *((_DWORD *)a4 + 26) = *(_DWORD *)(a3 + 36);
  *(_QWORD *)((char *)a4 + 108) = 0LL;
  *((_DWORD *)a4 + 29) = 0;
  a4[15] = 259LL;
  a4[17] = *(_QWORD *)(a1 + 176);
  *((_DWORD *)a4 + 36) = *(_DWORD *)(a1 + 192);
  a4[19] = *(_QWORD *)(a1 + 176);
  result = *(_DWORD *)(a1 + 192);
  *((_DWORD *)a4 + 40) = result;
  *((_DWORD *)a4 + 50) = 0;
  *(_DWORD *)(a3 + 36) = 0;
  if ( *(_BYTE *)(a1 + 280) )
  {
    result = (_DWORD)a4 + 208;
    a4[28] = 0LL;
    *((_DWORD *)a4 + 52) = 1;
    a4[12] = a4 + 26;
    *((_DWORD *)a4 + 58) = 0;
  }
  *(_OWORD *)(a4 + 21) = 0LL;
  *(_OWORD *)(a4 + 23) = 0LL;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2280))(WdfDriverGlobals, a2);
    result = IoGetActivityIdIrp(v9, a4 + 4);
    if ( result < 0 )
      result = EtwActivityIdControl(3u, (LPGUID)a4 + 2);
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 48);
      LOBYTE(v10) = *(_BYTE *)(v11 + 135);
      return McTemplateK0uqqq_EtwWriteTransfer(
               *(_QWORD *)(a1 + 56),
               v11,
               (int)a4 + 32,
               v10,
               *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
               0,
               *((_DWORD *)a4 + 26));
    }
  }
  return result;
}
