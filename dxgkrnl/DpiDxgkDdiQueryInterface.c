/*
 * XREFs of DpiDxgkDdiQueryInterface @ 0x1C01F667C
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C01D5FF0 (DpiPdoDispatchPnp.c)
 *     DpiQueryMiniportInterface @ 0x1C01F65F4 (DpiQueryMiniportInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pjq_EtwWriteTransfer @ 0x1C0065B6C (McTemplateK0pjq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiQueryInterface(__int64 a1, __int64 a2, __int128 **a3)
{
  __int128 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 *v12; // rax
  _QWORD *v13; // rax
  __int64 v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+28h] [rbp-40h]
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF

  if ( bTracingEnabled )
  {
    v6 = *a3;
    v17 = 0LL;
    if ( v6 )
      v17 = *v6;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v16 = 0;
      McTemplateK0pjq_EtwWriteTransfer(a1, &EventEnterDdiQueryInterface, (__int64)a3, a2, &v17, v16);
    }
  }
  v9 = (*(int (__fastcall **)(__int64, __int128 **))(a1 + 256))(a2, a3);
  if ( bTracingEnabled )
  {
    v12 = *a3;
    v17 = 0LL;
    if ( v12 )
      v17 = *v12;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      LODWORD(v15) = v9;
      McTemplateK0pjq_EtwWriteTransfer(v8, &EventExitDdiQueryInterface, v10, a2, &v17, v15);
    }
  }
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v10, v11);
  v13[5] = 0LL;
  v13[6] = 0LL;
  v13[7] = 0LL;
  v13[3] = a1;
  v13[4] = v9;
  return (unsigned int)v9;
}
