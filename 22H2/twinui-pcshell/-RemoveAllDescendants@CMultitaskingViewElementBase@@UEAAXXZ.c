/*
 * XREFs of ?RemoveAllDescendants@CMultitaskingViewElementBase@@UEAAXXZ @ 0x180412FC0
 * Callers:
 *     ?RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ @ 0x180417240 (-RemoveAllDescendants@CSwitchItemGrid@@UEAAXXZ.c)
 *     ?RemoveAllDescendants@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x18041A850 (-RemoveAllDescendants@CMultitaskingViewFrameElement@@UEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::RemoveAllDescendants(CMultitaskingViewElementBase *this)
{
  __int64 i; // rdi
  __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  for ( i = *((_QWORD *)this + 3); i; --i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 8 * i - 8);
    v3 = v5;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v5);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    LOBYTE(v4) = i == 1;
    (*(void (__fastcall **)(CMultitaskingViewElementBase *, __int64, __int64))(*(_QWORD *)this + 72LL))(this, v3, v4);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v5);
  }
}
