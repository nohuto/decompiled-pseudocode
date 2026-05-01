/*
 * XREFs of ??$WeakRefAs@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@@YAJAEBVWeakRef@WRL@Microsoft@@V?$ComPtrRef@V?$ComPtr@UIDWMStoryboardListener@@@WRL@Microsoft@@@Details@12@@Z @ 0x180077CDC
 * Callers:
 *     ?v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180077C70 (-v_WndProc@DummyWindow@CExperienceManagerAnimationHelper@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x180049C48 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WeakRefAs<Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDWMStoryboardListener>>>(
        Microsoft::WRL::WeakRef *a1,
        __int64 *a2)
{
  int v3; // edi
  struct IInspectable *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  v3 = Microsoft::WRL::WeakRef::As<IInspectable>(a1, &v5);
  if ( v3 >= 0 )
  {
    if ( v5 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
      v3 = ((__int64 (__fastcall *)(struct IInspectable *, GUID *, __int64 *))v5->lpVtbl->QueryInterface)(
             v5,
             &GUID_ad6daf0f_d2b6_4728_8fb8_30a1d1e2142e,
             a2);
    }
    else
    {
      v3 = -2147467259;
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v5);
  return (unsigned int)v3;
}
