/*
 * XREFs of ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1C0285D0C
 * Callers:
 *     DxgkDeviceIoctl @ 0x1C0044480 (DxgkDeviceIoctl.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C02367B0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0237FF0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0005488 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C00261B0 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     ??0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z @ 0x1C0284384 (--0DXGVIRTUALMACHINE@@QEAA@PEAVDXGPROCESSVMWP@@@Z.c)
 */

__int64 __fastcall DXGPROCESSVMWP::InitializeVmwpProcess(
        DXGPROCESSVMWP *this,
        void *a2,
        struct DXGPROCESS *a3,
        struct _EPROCESS *a4,
        struct _EPROCESS *Object,
        unsigned __int8 a6,
        struct DXGVIRTUALMACHINE *a7)
{
  DXGVIRTUALMACHINE *v11; // rax
  POOL_TYPE v12; // r9d
  __int64 v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax

  if ( !*((_BYTE *)this + 520) )
  {
    if ( a7 )
    {
      *((_QWORD *)this + 62) = a7;
      *((_QWORD *)a7 + 7) = this;
      v11 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 62);
    }
    else
    {
      if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
        v12 = 512;
      else
        v12 = PagedPool;
      v11 = (DXGVIRTUALMACHINE *)operator new(0x1E0uLL, 0x4B677844u, 1, v12);
      if ( v11 )
        v11 = DXGVIRTUALMACHINE::DXGVIRTUALMACHINE(v11, this);
      *((_QWORD *)this + 62) = v11;
    }
    if ( !v11 )
    {
      v13 = WdLogNewEntry5_WdLowResource(this, a2, a3, a4);
      *(_QWORD *)(v13 + 24) = 5392LL;
      WdLogEvent5_WdLowResource(v13);
      return 3221225495LL;
    }
    if ( a2 )
    {
      if ( *((_BYTE *)this + 520) )
      {
        v15 = WdLogNewEntry5_WdAssertion(this, a2);
        *(_QWORD *)(v15 + 24) = 5398LL;
        WdLogEvent5_WdAssertion(v15);
        v11 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 62);
      }
      *((_QWORD *)this + 63) = a3;
      *((_QWORD *)v11 + 30) = a4;
      ObfReferenceObject(a4);
      if ( a6 )
        *(_BYTE *)(*((_QWORD *)this + 62) + 296LL) = 1;
      if ( Object )
      {
        v16 = *((_QWORD *)this + 62);
        *((_BYTE *)this + 347) |= 0x40u;
        *(_QWORD *)(v16 + 232) = Object;
        ObfReferenceObject(Object);
      }
      *((_BYTE *)this + 520) = 1;
    }
  }
  return 0LL;
}
