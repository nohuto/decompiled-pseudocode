/*
 * XREFs of DpiMiracastDdiMiracastQueryCaps @ 0x1C019E8B8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0189268 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqq_EtwWriteTransfer @ 0x1C003A478 (McTemplateK0pqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiMiracastDdiMiracastQueryCaps(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 (__fastcall *v3)(_QWORD, __int64, unsigned int *); // r9
  unsigned int v6; // edi
  unsigned int v7; // eax
  __int64 v8; // r8
  __int64 v10; // [rsp+20h] [rbp-28h]
  int v11; // [rsp+20h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+30h] [rbp-18h]

  v3 = *(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(a1 + 3184);
  v6 = -1073741637;
  if ( v3 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      v15 = 0;
      v13 = 0;
      v11 = 0;
      McTemplateK0pqqq_EtwWriteTransfer(
        0LL,
        &EventEnterDxgkDdiMiracastQueryCaps,
        (__int64)a3,
        *(_QWORD *)(a1 + 48),
        v11,
        v13,
        v15);
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, unsigned int *))(a1 + 3184))(*(_QWORD *)(a1 + 48), 8LL, a3);
    }
    else
    {
      v7 = v3(*(_QWORD *)(a1 + 48), 8LL, a3);
    }
    v6 = v7;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      LODWORD(v14) = v7;
      LODWORD(v12) = a3[1];
      LODWORD(v10) = *a3;
      McTemplateK0pqqq_EtwWriteTransfer(
        *a3,
        &EventLeaveDxgkDdiMiracastQueryCaps,
        v8,
        *(_QWORD *)(a1 + 48),
        v10,
        v12,
        v14);
    }
  }
  return v6;
}
