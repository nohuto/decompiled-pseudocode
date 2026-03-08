/*
 * XREFs of ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C0363EF8
 * Callers:
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0365B08 (DxgkDdiGetVirtualGpuInfo.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVirtualGpuInfo(__int64 a1, int a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  __int64 *v5; // rdi
  __int64 *v7; // rbx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  char v16[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]

  v5 = (__int64 *)(a1 + 1864);
  v7 = (__int64 *)(a1 + 1872);
  if ( a2 == 1 )
    v10 = *v7;
  else
    v10 = *v5;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, (struct _KTHREAD **)(v10 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v17);
  v11 = *a3;
  v18 = 1;
  if ( a2 != 1 )
    v7 = v5;
  v12 = *v7;
  if ( *v7
    && v11 < *(_DWORD *)(v12 + 12)
    && *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v11)
    && (_mm_lfence(), (v13 = *(_QWORD *)(*(_QWORD *)(v12 + 24) + 8LL * v11)) != 0) )
  {
    *a4 = *(_QWORD *)(v13 + 28);
    *a5 = *(_OWORD *)(v13 + 36);
    v14 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 120LL))(v13, a3);
  }
  else
  {
    WdLogSingleEntry1(3LL, *a3);
    v14 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return v14;
}
