/*
 * XREFs of ?ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAPEAVDXGPROCESSVMWP@@E@Z @ 0x1C036CF90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGPROCESS@@QEAAXXZ @ 0x1C0008E74 (-ReleaseReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C005AADC (-ResetVirtualGpu@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 *     ?DdiResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C0368C18 (-DdiResetVirtualFunction@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::ResetVirtualFunction(
        DXGK_VIRTUAL_GPU_GPUP *this,
        struct DXGPROCESSVMWP **a2,
        __int64 a3)
{
  char v3; // si
  DXGPROCESS *v6; // rcx
  ADAPTER_RENDER *v7; // rcx
  _DXGKARG_RESETVIRTUALFUNCTION v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = a3;
  if ( !*((_BYTE *)this + 156)
    && *((_QWORD *)this + 12)
    && DXGVIRTUALMACHINE::ResetVirtualGpu(*((struct _KTHREAD ***)this + 13))
    && a2 )
  {
    *a2 = (struct DXGPROCESSVMWP *)*((_QWORD *)this + 12);
  }
  if ( v3 )
  {
    v6 = (DXGPROCESS *)*((_QWORD *)this + 12);
    if ( v6 )
    {
      DXGPROCESS::ReleaseReference(v6);
      *((_QWORD *)this + 12) = 0LL;
      *((_QWORD *)this + 13) = 0LL;
    }
  }
  v7 = (ADAPTER_RENDER *)*((_QWORD *)this + 1);
  v9.VirtualFunctionIndex = *((_DWORD *)this + 6);
  *((_BYTE *)this + 156) = 1;
  return ADAPTER_RENDER::DdiResetVirtualFunction(v7, &v9, a3);
}
