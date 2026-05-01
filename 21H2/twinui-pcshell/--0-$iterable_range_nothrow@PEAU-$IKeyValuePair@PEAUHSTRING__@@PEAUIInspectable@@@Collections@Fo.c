/*
 * XREFs of ??0?$iterable_range_nothrow@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@wil@@QEAA@PEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18043D9B4
 * Callers:
 *     ?Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x18043F830 (-Update@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall wil::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>::iterable_range_nothrow<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,IInspectable *> *>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v5; // r14
  __int64 (__fastcall *v6)(__int64, _QWORD *); // rbx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, __int64 *); // rbx
  char v10; // [rsp+48h] [rbp+10h] BYREF

  *a1 = 0LL;
  v5 = a1 + 1;
  a1[1] = 0LL;
  if ( !a3 )
    a3 = a1 + 3;
  a1[2] = a3;
  *((_DWORD *)a1 + 6) = 0;
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
  *(_DWORD *)a1[2] = v6(a2, a1);
  if ( *(int *)a1[2] >= 0 )
  {
    *(_DWORD *)a1[2] = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a1 + 56LL))(*a1, &v10);
    if ( *(int *)a1[2] < 0
      || !v10
      || (v7 = *a1,
          v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 48LL),
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v5),
          *(_DWORD *)a1[2] = v8(v7, v5),
          *(int *)a1[2] < 0) )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
    }
  }
  return a1;
}
