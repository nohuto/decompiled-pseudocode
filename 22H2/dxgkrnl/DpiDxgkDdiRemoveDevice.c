/*
 * XREFs of DpiDxgkDdiRemoveDevice @ 0x1C02D8FF0
 * Callers:
 *     DpiAddDevice @ 0x1C018BAE0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02CA780 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C003A380 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiRemoveDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+20h] [rbp-18h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v13 = 0;
    McTemplateK0pq_EtwWriteTransfer(a1, &EventEnterDdiRemoveDevice, a3, a2, v13);
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(a1 + 168))(a2);
  v9 = v5;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v12) = v5;
    McTemplateK0pq_EtwWriteTransfer(v7, &EventExitDdiRemoveDevice, v8, a2, v12);
  }
  v10 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v10 + 24) = a1;
  *(_QWORD *)(v10 + 32) = a2;
  *(_QWORD *)(v10 + 40) = v9;
  *(_OWORD *)(v10 + 48) = 0LL;
  return (unsigned int)v9;
}
