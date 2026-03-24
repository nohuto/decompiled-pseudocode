/*
 * XREFs of DpiDxgkDdiStartDevice @ 0x1C0188360
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0189268 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C003A478 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiStartDevice(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  __int64 v19; // [rsp+30h] [rbp-28h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq_EtwWriteTransfer(a1, &EventEnterDdiStartDevice, (__int64)a3, a2, *a3, 0, 0);
  v12 = (*(int (__fastcall **)(__int64, unsigned int *, __int64, _DWORD *, _DWORD *))(a1 + 152))(a2, a3, a4, a5, a6);
  if ( bTracingEnabled )
  {
    v10 = (unsigned int)*a5;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v19) = v12;
      LODWORD(v18) = *a6;
      LODWORD(v17) = *a5;
      McTemplateK0pqqq_EtwWriteTransfer(v11, &EventExitDdiStartDevice, v13, a2, v17, v18, v19);
    }
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
  v14[3] = a1;
  v14[4] = *a3;
  v14[5] = (unsigned int)*a5;
  v15 = (unsigned int)*a6;
  v14[7] = v12;
  v14[6] = v15;
  return (unsigned int)v12;
}
