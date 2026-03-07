void __fastcall CLegacyRemotingSwapChain::NotifyInvalidResource(
        unsigned __int64 this,
        const struct IDeviceResource *a2)
{
  __int64 v2; // r8
  char *v3; // rsi
  const struct IDeviceResource *v4; // rdi
  __int64 v6; // rcx

  v2 = *(_QWORD *)(this + 16);
  v3 = (char *)(this - 64);
  v4 = 0LL;
  if ( v2 )
  {
    v6 = *(int *)(*(_QWORD *)(v2 + 8) + 8LL) + v2 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(
      v6,
      this & ((unsigned __int128)-(__int128)(unsigned __int64)v3 >> 64));
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)(this + 16));
  }
  if ( v3 )
    v4 = (const struct IDeviceResource *)(*(int *)(*(_QWORD *)(this - 56) + 12LL) + this - 56);
  CDeviceResource::NotifyInvalid((CDeviceResource *)(this - 40), v4);
}
