/*
 * XREFs of DpiDxgkDdiSetPowerState @ 0x1C01E22D4
 * Callers:
 *     DpiPdoSetDevicePower @ 0x1C01E1140 (DpiPdoSetDevicePower.c)
 *     DpiFdoSetAdapterPowerState @ 0x1C01E1E80 (DpiFdoSetAdapterPowerState.c)
 *     DpiFdoHandleSystemPower @ 0x1C01E2484 (DpiFdoHandleSystemPower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x1C0040104 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiSetPowerState(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v14; // [rsp+20h] [rbp-38h]
  __int64 v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+30h] [rbp-28h]
  __int64 v17; // [rsp+38h] [rbp-20h]

  v7 = a4;
  v8 = (unsigned int)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(a1, &EventEnterDdiSetPowerState, a3, a2, a3, a4, a5, 0);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a1 + 224))(
         a2,
         (unsigned int)v8,
         (unsigned int)v7,
         a5);
  v12 = v9;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    LODWORD(v17) = v9;
    LODWORD(v16) = a5;
    LODWORD(v15) = v7;
    LODWORD(v14) = v8;
    McTemplateK0pqtqq_EtwWriteTransfer(v10, &EventExitDdiSetPowerState, v11, a2, v14, v15, v16, v17);
  }
  WdLogSingleEntry5(4LL, a1, v8, v7, (int)a5, v12);
  return (unsigned int)v12;
}
