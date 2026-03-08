/*
 * XREFs of ?GetVirtualGpuDevice@DXGPROCESS@@QEAAPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@@Z @ 0x1C0340418
 * Callers:
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C036B9E0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1C0009AF0 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C01B6B20 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C01B70A8 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 */

struct DXGDEVICE *__fastcall DXGPROCESS::GetVirtualGpuDevice(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  struct DXGPROCESS_RENDER_ADAPTER_INFO *RenderAdapterInfo; // rax
  int Device; // eax
  char *v7; // rbx
  unsigned int v8; // [rsp+78h] [rbp+10h] BYREF

  RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(this, *(_DWORD *)(*((_QWORD *)a2 + 2) + 240LL));
  if ( !RenderAdapterInfo )
  {
    Device = DXGADAPTER::CreateHandle(*((DXGADAPTER **)a2 + 2), this, &v8);
    if ( Device < 0 )
    {
LABEL_3:
      WdLogSingleEntry1(3LL, Device);
      return 0LL;
    }
    RenderAdapterInfo = DXGPROCESS::GetRenderAdapterInfo(this, *(_DWORD *)(*((_QWORD *)a2 + 2) + 240LL));
  }
  v7 = (char *)RenderAdapterInfo + 72;
  if ( !*((_QWORD *)RenderAdapterInfo + 9) )
  {
    Device = ADAPTER_RENDER::CreateDevice(
               *((DXGADAPTER ***)RenderAdapterInfo + 10),
               (DXGDEVICE **)RenderAdapterInfo + 9,
               0,
               3,
               0LL,
               0,
               0,
               0,
               0LL,
               0LL,
               1);
    if ( Device < 0 )
      goto LABEL_3;
  }
  return *(struct DXGDEVICE **)v7;
}
