/*
 * XREFs of ?NotifyInvalid@CDeviceResource@@QEAAXPEBVIDeviceResource@@@Z @ 0x1802879DC
 * Callers:
 *     ?NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180287A90 (-NotifyInvalidResource@CDDisplaySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180297FC0 (-NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x18029B200 (-NotifyInvalidResource@CCompSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CLegacyRemotingSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802A03C0 (-NotifyInvalidResource@CLegacyRemotingSwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802ADFC0 (-NotifyInvalidResource@CRenderTargetBitmap@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802AF620 (-NotifyInvalidResource@CDxHandleBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802B0F6C (-NotifyInvalidResource@CDxHandleYUVBitmapRealization@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDeviceResource::NotifyInvalid(CDeviceResource *this, const struct IDeviceResource *a2)
{
  char *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  void (__fastcall ***v7)(_QWORD, const struct IDeviceResource *); // rcx
  char *v8; // rcx

  v4 = (char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3;
  if ( (_DWORD)v5 )
  {
    do
    {
      v6 = (unsigned int)(v5 - 1);
      v7 = *(void (__fastcall ****)(_QWORD, const struct IDeviceResource *))(*((_QWORD *)this + 2) + 8 * v6);
      (**v7)(v7, a2);
      LODWORD(v5) = v6;
    }
    while ( (_DWORD)v6 );
  }
  v8 = (char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 16LL))(v8);
}
