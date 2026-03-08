/*
 * XREFs of DxgkDdiCreateVirtualGpu @ 0x1C0365238
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01D7C80 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C005A55C (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C0362A70 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EE.c)
 */

__int64 __fastcall DxgkDdiCreateVirtualGpu(
        __int64 **a1,
        int a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int64 v10; // rdi
  __int64 VirtualGpu; // r15
  __int64 v12; // rcx
  __int64 v13; // r10
  unsigned __int64 v14; // r14
  __int64 *v15; // rsi
  unsigned __int64 v16; // r14
  unsigned int *v17; // rsi
  __int64 *v18; // rsi
  __int64 v20; // [rsp+28h] [rbp-40h]

  v10 = 0LL;
  VirtualGpu = (int)ADAPTER_RENDER::CreateVirtualGpu(a1[366], a2, a6, a3, a4, a5, a7);
  if ( bTracingEnabled )
  {
    LODWORD(v20) = *a6;
    VgpuTrace(1, VirtualGpu, a1, L"DxgkDdiCreateVirtualGpu", (wchar_t *)L"%d", v20);
    v12 = (a3 != 0) | 2LL;
    if ( !a4 )
      v12 = a3 != 0;
    v13 = v12 | 4;
    if ( !a5 )
      v13 = v12;
    DxgkLogInternalTriageEvent(
      (__int64)a1,
      196608,
      *a6,
      (__int64)L"Creating vGPU with VFLUID %1, having %2 segments and %3 engines, Flags: %5 returns %4",
      (unsigned int)a6[30] + ((__int64)(int)a6[31] << 32),
      (unsigned int)a6[32],
      (unsigned int)a6[418],
      VirtualGpu,
      v13);
    v14 = 0LL;
    v15 = (__int64 *)(a6 + 4);
    do
    {
      DxgkLogInternalTriageEvent(
        (__int64)a1,
        196608,
        *a6,
        (__int64)L"vGPU creation requested profile on capability %1 have min %2, max %3, and optimal %4",
        v14++,
        *(v15 - 1),
        *v15,
        v15[1],
        0LL);
      v15 += 3;
    }
    while ( v14 < 4 );
    v16 = 0LL;
    if ( a6[418] )
    {
      v17 = a6 + 419;
      do
      {
        DxgkLogInternalTriageEvent(
          (__int64)a1,
          196608,
          *a6,
          (__int64)L"vGPU creation returns engine %1 with min %2 partition units and max %3 partition units",
          v17[2],
          *v17,
          v17[1],
          0LL,
          0LL);
        v17 += 3;
        ++v16;
      }
      while ( v16 < (unsigned int)a6[418] );
    }
    if ( a6[32] )
    {
      v18 = (__int64 *)(a6 + 40);
      do
      {
        DxgkLogInternalTriageEvent(
          (__int64)a1,
          196608,
          *a6,
          (__int64)L"vGPU creation requests framebuffer on segment %1 with size %2, alignment %3, from offset %4 to %5",
          *((unsigned int *)v18 - 6),
          *(v18 - 2),
          *((unsigned int *)v18 - 2),
          *v18,
          v18[1]);
        v18 += 6;
        ++v10;
      }
      while ( v10 < (unsigned int)a6[32] );
    }
  }
  return (unsigned int)VirtualGpu;
}
