/*
 * XREFs of ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1801EC52C
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z @ 0x1801EC018 (-Present@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D4A28 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801E6CD0 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 *     ?GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z @ 0x1801EBFD0 (-GetMetaData@CIndirectSwapchainRenderTarget@@AEAAXPEAPEAXPEAI@Z.c)
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x1801EC890 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer(CIndirectSwapchainRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  int v7; // [rsp+40h] [rbp+8h] BYREF
  void *v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  v7 = 0;
  if ( *((_QWORD *)this + 243) )
  {
    CIndirectSwapchainRenderTarget::GetMetaData(this, &v8, (unsigned int *)&v7);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *))(**(_QWORD **)(v3 + 1936) + 64LL))(
           *(_QWORD *)(v3 + 1936),
           (unsigned int)v7,
           v8);
    v7 = v4;
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x180u, 0LL);
    }
    else
    {
      *((_WORD *)this + 964) = 0;
      *((_BYTE *)this + 1930) = 0;
      *((_DWORD *)this + 480) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 1896, 1u);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 243) + 16LL))(*((_QWORD *)this + 243));
      *((_QWORD *)this + 243) = 0LL;
    }
  }
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  if ( v1 < 0 )
  {
    TranslateDXGIorD3DErrorInContext(v1, 0, &v7);
    v1 = v7;
    if ( v7 == -2005270490 )
    {
      CIndirectSwapchainRenderTarget::Unregister(this);
      return 0;
    }
    else if ( v7 == -2003304307 )
    {
      CIndirectSwapchainRenderTarget::Unregister(this);
    }
  }
  return (unsigned int)v1;
}
