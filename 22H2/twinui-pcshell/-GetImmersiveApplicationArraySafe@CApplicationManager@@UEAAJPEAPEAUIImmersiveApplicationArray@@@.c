/*
 * XREFs of ?GetImmersiveApplicationArraySafe@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1801BB6F0
 * Callers:
 *     ?GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1801BA3E0 (-GetAllApplicationsByAppIDSafe@CApplicationManager@@UEAAJPEBGPEAPEAUIObjectArray@@@Z.c)
 *     ?GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z @ 0x1801BB670 (-GetImmersiveApplicationArray@CApplicationManager@@UEAAJPEAPEAUIImmersiveApplicationArray@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_2b311223614f654dd5c02d621b456739___ @ 0x1801B32CC (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___--ForEach__lam.c)
 *     ?s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z @ 0x1801CC294 (-s_CreateInstance@CImmersiveAppArray@@SAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CApplicationManager::GetImmersiveApplicationArraySafe(
        CApplicationManager *this,
        struct IImmersiveApplicationArray **a2)
{
  const struct _GUID *v4; // rcx
  int v5; // ebx
  int *v7; // [rsp+20h] [rbp-10h] BYREF
  void *v8; // [rsp+28h] [rbp-8h] BYREF
  int v9; // [rsp+58h] [rbp+28h] BYREF
  void *v10; // [rsp+60h] [rbp+30h] BYREF

  *a2 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  v5 = CImmersiveAppArray::s_CreateInstance(v4, &v10);
  v9 = v5;
  if ( v5 >= 0 )
  {
    v7 = &v9;
    v8 = v10;
    if ( v10 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 8LL))(v10);
    CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_2b311223614f654dd5c02d621b456739___(
      (__int64)this + 376,
      (__int64)&v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
    v5 = v9;
    if ( v9 >= 0 )
    {
      v5 = (**(__int64 (__fastcall ***)(void *, GUID *, struct IImmersiveApplicationArray **))v10)(
             v10,
             &GUID_c6ed6dac_8fac_4598_a74c_69020137149c,
             a2);
      v9 = v5;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v10);
  return (unsigned int)v5;
}
