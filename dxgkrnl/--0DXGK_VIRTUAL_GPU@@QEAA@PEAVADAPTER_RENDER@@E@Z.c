/*
 * XREFs of ??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z @ 0x1C0362A04
 * Callers:
 *     ??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z @ 0x1C0369F08 (--0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z @ 0x1C036B9E0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@EEEPEAX@Z.c)
 * Callees:
 *     <none>
 */

DXGK_VIRTUAL_GPU *__fastcall DXGK_VIRTUAL_GPU::DXGK_VIRTUAL_GPU(
        DXGK_VIRTUAL_GPU *this,
        struct ADAPTER_RENDER *a2,
        char a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  DXGK_VIRTUAL_GPU *result; // rax

  *((_QWORD *)this + 1) = a2;
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 20) = -1;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 20;
  v3 = *((_QWORD *)this + 1);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  if ( a3 )
    v4 = *(_QWORD *)(v3 + 1872);
  else
    v4 = *(_QWORD *)(v3 + 1864);
  *((_QWORD *)this + 14) = v4;
  result = this;
  *((_BYTE *)this + 152) = a3;
  *((_BYTE *)this + 156) = 1;
  return result;
}
