/*
 * XREFs of DpiDxgkDdiSetTargetAdjustedColorimetry2 @ 0x1C0015640
 * Callers:
 *     DpiSetTargetAdjustedColorimetry2 @ 0x1C0015594 (DpiSetTargetAdjustedColorimetry2.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C003FFEC (McTemplateK0pqq_EtwWriteTransfer.c)
 */

__int64 __fastcall DpiDxgkDdiSetTargetAdjustedColorimetry2(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v6; // rdi
  __int128 v9; // xmm1
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, _BYTE *); // rax
  int v12; // eax
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rbx
  __int64 v16; // rax
  _BYTE v18[56]; // [rsp+30h] [rbp-50h] BYREF
  int v19; // [rsp+68h] [rbp-18h]

  v6 = a3;
  if ( *(_QWORD *)(a1 + 1312) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(a1, (unsigned int)&EventEnterDdiSetTargetAdjustedColorimetry, a3, a2, a3, 0);
    v9 = *(_OWORD *)(a4 + 16);
    v10 = *(_DWORD *)(a4 + 48);
    memset(v18, 0, sizeof(v18));
    *(_DWORD *)&v18[52] = v10;
    v19 = a5;
    v11 = *(__int64 (__fastcall **)(__int64, _BYTE *))(a1 + 1312);
    *(_DWORD *)v18 = v6;
    *(_OWORD *)&v18[4] = *(_OWORD *)a4;
    *(_OWORD *)&v18[36] = *(_OWORD *)(a4 + 32);
    *(_OWORD *)&v18[20] = v9;
    v12 = v11(a2, v18);
    v15 = v12;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqq_EtwWriteTransfer(v13, (unsigned int)&EventExitDdiSetTargetAdjustedColorimetry, v14, a2, v6, v12);
    v16 = WdLogNewEntry5_WdTrace();
    *(_QWORD *)(v16 + 24) = a1;
    *(_QWORD *)(v16 + 32) = v6;
    *(_QWORD *)(v16 + 40) = v15;
    *(_OWORD *)(v16 + 48) = 0LL;
  }
  else
  {
    LODWORD(v15) = -1073741637;
  }
  return (unsigned int)v15;
}
