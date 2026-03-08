/*
 * XREFs of ?GetDeviceLocation@ADAPTER_RENDER@@QEAAXW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETDEVICELOCATION@@@Z @ 0x1C036378C
 * Callers:
 *     DxgkDdiGetDeviceLocation @ 0x1C036563C (DxgkDdiGetDeviceLocation.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::GetDeviceLocation(__int64 a1, int a2, unsigned int *a3)
{
  __int64 *v3; // rdi
  __int64 *v5; // rbx
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  char v11[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]

  v3 = (__int64 *)(a1 + 1864);
  v5 = (__int64 *)(a1 + 1872);
  if ( a2 == 1 )
    v7 = *v5;
  else
    v7 = *v3;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(v7 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v12);
  v8 = *a3;
  v13 = 1;
  if ( a2 != 1 )
    v5 = v3;
  v9 = *v5;
  if ( *v5
    && v8 < *(_DWORD *)(v9 + 12)
    && *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL * v8)
    && (_mm_lfence(), (v10 = *(_QWORD *)(*(_QWORD *)(v9 + 24) + 8LL * v8)) != 0) )
  {
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v10 + 88LL))(v10, a3);
  }
  else
  {
    WdLogSingleEntry1(2LL, *a3);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid virtual GPU index: %I64n", *a3, 0LL, 0LL, 0LL, 0LL);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
