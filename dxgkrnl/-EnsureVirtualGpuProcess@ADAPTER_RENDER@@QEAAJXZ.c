/*
 * XREFs of ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C03634E0
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C0362A70 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EE.c)
 *     ?SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONCOUNT@@E@Z @ 0x1C0364C90 (-SetGpuPartitionCount@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_SETGPUPARTITIONC.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C03667B8 (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 */

__int64 __fastcall ADAPTER_RENDER::EnsureVirtualGpuProcess(ADAPTER_RENDER *this)
{
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 64LL) + 5468LL)
    || (unsigned __int8)DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    return 0LL;
  }
  WdLogSingleEntry1(2LL, 144LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"vGPU API is called from wrong process",
    144LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225485LL;
}
