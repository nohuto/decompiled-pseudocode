/*
 * XREFs of ?InitThumbnailFactory@CDragVisual@@UEAAJXZ @ 0x1804955E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDragVisual::InitThumbnailFactory(IUnknown **this)
{
  HRESULT v1; // ebx
  __int64 *v2; // rsi
  void *v4; // rbx
  void *ppvOut; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (__int64 *)(this + 6);
  if ( !this[6] )
  {
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    v1 = IUnknown_QueryService(*(this - 1), &stru_1805BE3F0, &GUID_c08ee93c_e5a6_46f2_bdac_416ef1731a41, &ppvOut);
    if ( v1 >= 0 )
    {
      v4 = ppvOut;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
      v1 = (*(__int64 (__fastcall **)(void *, IUnknown *, __int64, __int64 *))(*(_QWORD *)v4 + 56LL))(
             v4,
             this[16],
             1LL,
             v2);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
  return (unsigned int)v1;
}
