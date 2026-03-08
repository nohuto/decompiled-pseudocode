/*
 * XREFs of ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_NPEAPEAV1@@Z @ 0x1C000C544
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z @ 0x1C000C3B4 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N111PEA_K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C000C600 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C000C758 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z @ 0x1C000C7C0 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO_@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SWAPCHAIN_BUFFER_INFO_ *a2,
        __int64 a3,
        struct CFlipExBuffer **a4)
{
  int v7; // ebx
  CFlipExBuffer *v8; // rax
  CFlipExBuffer *v9; // rax
  bool v10; // r9
  struct CFlipExBuffer *v11; // rdi

  *a4 = 0LL;
  v7 = ValidateBufferAttributes(a1);
  if ( v7 >= 0 )
  {
    v7 = -1073741811;
    if ( (unsigned int)(*(_DWORD *)a2 - 2) <= 2 && (unsigned int)(*((_DWORD *)a2 + 1) - 1) <= 0x1E )
    {
      v8 = (CFlipExBuffer *)operator new[](0x2C8uLL, 0x624D5343u, 256LL);
      if ( v8 && (v9 = CFlipExBuffer::CFlipExBuffer(v8), (v11 = v9) != 0LL) )
      {
        v7 = CFlipExBuffer::Initialize(v9, a1, a2, v10);
        if ( v7 < 0 )
          (**(void (__fastcall ***)(struct CFlipExBuffer *, __int64))v11)(v11, 1LL);
        else
          *a4 = v11;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v7;
}
