/*
 * XREFs of ?NotifyInvalidResource@CLegacyRemotingSwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x180251CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLegacyRemotingSwapChain::NotifyInvalidResource(
        unsigned __int64 this,
        const struct IDeviceResource *a2)
{
  const struct IDeviceResource *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx

  v3 = 0LL;
  v4 = *(_QWORD *)(this + 16);
  if ( v4 )
  {
    v5 = *(int *)(*(_QWORD *)(v4 + 8) + 8LL) + v4 + 8;
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(
      v5,
      this & ((unsigned __int128)-(__int128)(this - 72) >> 64));
    v6 = *(_QWORD *)(this + 16);
    *(_QWORD *)(this + 16) = 0LL;
    if ( v6 )
    {
      v7 = v6 + 8 + *(int *)(*(_QWORD *)(v6 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( this != 72 )
    v3 = (const struct IDeviceResource *)(*(int *)(*(_QWORD *)(this - 48) + 8LL) + this - 48);
  CDeviceResource::NotifyInvalid((CDeviceResource *)(this - 56), v3);
}
