/*
 * XREFs of DpiDxgkDdiQueryChildStatus @ 0x1C01E70DC
 * Callers:
 *     DpiPdoIsChildConnected @ 0x1C01E6E20 (DpiPdoIsChildConnected.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqqq_EtwWriteTransfer @ 0x1C00472CC (McTemplateK0pqqqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiQueryChildStatus(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v4; // ebx
  int v5; // esi
  unsigned int *v6; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-48h]
  int v19; // [rsp+20h] [rbp-48h]
  __int64 v20; // [rsp+28h] [rbp-40h]
  int v21; // [rsp+28h] [rbp-40h]
  __int64 v22; // [rsp+30h] [rbp-38h]
  int v23; // [rsp+30h] [rbp-38h]
  __int64 v24; // [rsp+38h] [rbp-30h]
  int v25; // [rsp+38h] [rbp-30h]
  __int64 v26; // [rsp+40h] [rbp-28h]
  int v27; // [rsp+40h] [rbp-28h]

  v4 = 0;
  v5 = a4;
  v6 = (unsigned int *)a3;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    v27 = 0;
    v25 = a4;
    v23 = 0;
    v21 = 0;
    v19 = 0;
    McTemplateK0pqqqqq_EtwWriteTransfer(a1, &EventEnterDdiQueryChildStatus, a3, a2, v19, v21, v23, v25, v27);
  }
  LOBYTE(a3) = v5;
  v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64))(a1 + 208))(a2, v6, a3);
  v14 = v9;
  if ( bTracingEnabled )
  {
    v10 = 0LL;
    LOBYTE(v11) = 0;
    if ( v6 )
    {
      v4 = *v6;
      v10 = v6[1];
      LOBYTE(v11) = *((_BYTE *)v6 + 8);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v26) = v9;
      LODWORD(v24) = v5;
      LODWORD(v22) = (unsigned __int8)v11;
      LODWORD(v20) = v10;
      LODWORD(v18) = v4;
      McTemplateK0pqqqqq_EtwWriteTransfer(
        (unsigned __int8)v11,
        &EventExitDdiQueryChildStatus,
        v12,
        a2,
        v18,
        v20,
        v22,
        v24,
        v26);
    }
  }
  v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
  v15[3] = a1;
  v15[4] = v6[1];
  v16 = *v6;
  LODWORD(v16) = v16 | 0x80000000;
  if ( (_BYTE)v5 != 1 )
    v16 = *v6;
  v15[5] = v16;
  v15[6] = *((unsigned __int8 *)v6 + 8);
  v15[7] = v14;
  return (unsigned int)v14;
}
