/*
 * XREFs of Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5_____lambda_3d6638088535fad8bc54773006e1fbb5__&_void___&_ @ 0x180425520
 * Callers:
 *     ObservableProperty_HWND_____::AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___ @ 0x180425430 (ObservableProperty_HWND_____--AddListener__lambda_3d6638088535fad8bc54773006e1fbb5___.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Microsoft@@QEAA@XZ @ 0x180402F34 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIObservablePropertyCallback@@@WRL@Mic.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5_____lambda_3d6638088535fad8bc54773006e1fbb5____void_____(
        _QWORD *a1,
        __int64 *a2,
        __int64 *a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v7 = *a2;
    v10 = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
    v8 = *a3;
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IObservablePropertyCallback>(v6);
    *v6 = off_180533D98;
    v6[2] = v7;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6 + 2);
    v6[3] = v8;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v6;
  }
  return a1;
}
