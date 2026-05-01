/*
 * XREFs of ?PointerDown@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18041A860
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180412FC0 (-PointerDown@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 */

char __fastcall CMultitaskingViewFrameElement::PointerDown(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v7; // rdi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  v5 = a1[32];
  if ( v5 )
  {
    LOBYTE(a3) = 1;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 72LL))(a1, v5, a3);
  }
  v7 = a1[70];
  if ( !v7 )
    return CMultitaskingViewElementBase::PointerDown((__int64)a1, a2, v4);
  v9 = a1[70];
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v9);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2, v4);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return 0;
}
