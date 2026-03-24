/*
 * XREFs of DpiDxgkDdiGetChildContainerId @ 0x1C0181FC8
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0181CDC (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003A3F8 (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiGetChildContainerId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v15; // [rsp+20h] [rbp-18h]
  int v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+28h] [rbp-10h]
  int v18; // [rsp+28h] [rbp-10h]

  v5 = (unsigned int)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v18 = 0;
    v16 = a3;
    McTemplateK0pqq_EtwWriteTransfer(a1, &EventEnterDdiGetChildContainerId, a3, a2, v16, v18);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(a1 + 768))(a2, (unsigned int)v5, a4);
  v12 = v8;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v17) = v8;
    LODWORD(v15) = v5;
    McTemplateK0pqq_EtwWriteTransfer(v10, &EventExitDdiGetChildContainerId, v11, a2, v15, v17);
  }
  v13 = WdLogNewEntry5_WdTrace(v10, v9);
  *(_QWORD *)(v13 + 24) = a1;
  *(_QWORD *)(v13 + 32) = v5;
  *(_QWORD *)(v13 + 40) = v12;
  *(_OWORD *)(v13 + 48) = 0LL;
  return (unsigned int)v12;
}
