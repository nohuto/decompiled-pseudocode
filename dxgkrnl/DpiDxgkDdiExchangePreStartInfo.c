/*
 * XREFs of DpiDxgkDdiExchangePreStartInfo @ 0x1C0219BF0
 * Callers:
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiExchangePreStartInfo(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 1144) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(*a3, &EventEnterDdiExchangePreStartInfo, (__int64)a3, a2, *a3, 0);
    v8 = (*(int (__fastcall **)(__int64, unsigned int *))(a1 + 1144))(a2, a3);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v15) = v8;
      LODWORD(v14) = a3[1];
      McTemplateK0pqq_EtwWriteTransfer(v7, &EventExitDdiExchangePreStartInfo, v9, a2, v14, v15);
    }
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v9, v10);
    v11[3] = a1;
    v11[4] = *a3;
    v12 = a3[1];
    v11[7] = 0LL;
    v11[5] = v12;
    v11[6] = v8;
  }
  else
  {
    LODWORD(v8) = 0;
    a3[1] = 0;
  }
  return (unsigned int)v8;
}
