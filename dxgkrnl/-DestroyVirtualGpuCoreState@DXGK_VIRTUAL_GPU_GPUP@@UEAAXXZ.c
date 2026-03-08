/*
 * XREFs of ?DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP@@UEAAXXZ @ 0x1C036CB40
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01C6838 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0366A7C (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 */

void __fastcall DXGK_VIRTUAL_GPU_GPUP::DestroyVirtualGpuCoreState(DXGK_VIRTUAL_GPU_GPUP *this, __int64 a2, __int64 a3)
{
  ULONG v4; // eax
  ADAPTER_RENDER *v5; // rcx
  __int64 v6; // rcx
  unsigned int i; // edi
  __int64 v8; // rsi
  struct DXGALLOCATION **v9; // r8
  __int64 v10; // rcx
  _DXGKARG_DESTROYVIRTUALGPU v11; // [rsp+30h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-40h] BYREF

  if ( *((_BYTE *)this + 192) )
  {
    v4 = *((_DWORD *)this + 6);
    v5 = (ADAPTER_RENDER *)*((_QWORD *)this + 1);
    v11.PartitionId = v4;
    ADAPTER_RENDER::DdiDestroyVirtualGpu(v5, &v11, a3);
    *((_BYTE *)this + 192) = 0;
  }
  if ( *((_QWORD *)this + 23) )
  {
    v6 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 171);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*(PRKPROCESS *)(v6 + 56), &ApcState);
    for ( i = 0; i < *((_DWORD *)this + 42); ++i )
    {
      v8 = 32LL * i;
      v9 = (struct DXGALLOCATION **)(v8 + *((_QWORD *)this + 23));
      if ( *v9 )
      {
        DXGDEVICE::DestroyAllocationInternal(
          *((DXGDEVICE **)this + 22),
          1u,
          v9,
          0LL,
          0LL,
          (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)3);
        *(_QWORD *)(v8 + *((_QWORD *)this + 23)) = 0LL;
      }
    }
    KeUnstackDetachProcess(&ApcState);
    operator delete(*((void **)this + 23));
    *((_QWORD *)this + 23) = 0LL;
    *((_DWORD *)this + 42) = 0;
  }
  v10 = *((_QWORD *)this + 20);
  if ( v10 )
  {
    operator delete(*(void **)(v10 + 32));
    *(_QWORD *)(*((_QWORD *)this + 20) + 32LL) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
}
