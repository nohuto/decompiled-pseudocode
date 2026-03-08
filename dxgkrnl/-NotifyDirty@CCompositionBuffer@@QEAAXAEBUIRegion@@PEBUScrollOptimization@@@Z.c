/*
 * XREFs of ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C0001720
 * Callers:
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C0001658 (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C007D970 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 *     ?NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z @ 0x1C00896C4 (-NotifyFlipContentTokenInFrame@CCompositionSwapchainBuffer@@IEAAJPEBVCFlipContentToken@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z @ 0x1C007C860 (-AddScrollAsDirty@CCompositionBuffer@@IEAAXAEBUScrollOptimization@@@Z.c)
 */

void __fastcall CCompositionBuffer::NotifyDirty(
        CCompositionBuffer *this,
        const struct IRegion *a2,
        const struct ScrollOptimization *a3)
{
  char *v3; // rsi
  _BYTE *v5; // rdi

  v3 = (char *)this + 288;
  v5 = (char *)this + 43;
  if ( *((_DWORD *)this + 72) )
  {
    CCompositionBuffer::AddScrollAsDirty(this, (CCompositionBuffer *)((char *)this + 288));
    *(_DWORD *)v3 = 0;
    *v5 = 1;
  }
  if ( a3 && *(_DWORD *)a3 )
  {
    if ( *v5 )
    {
      CCompositionBuffer::AddScrollAsDirty(this, a3);
    }
    else
    {
      *(_OWORD *)v3 = *(_OWORD *)a3;
      *((_QWORD *)v3 + 2) = *((_QWORD *)a3 + 2);
      *((_DWORD *)v3 + 6) = *((_DWORD *)a3 + 6);
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(const struct IRegion *))(*(_QWORD *)a2 + 8LL))(a2) )
  {
    (*(void (__fastcall **)(_QWORD, const struct IRegion *, __int64))(**((_QWORD **)this + 35) + 48LL))(
      *((_QWORD *)this + 35),
      a2,
      2LL);
    *v5 = 1;
  }
}
