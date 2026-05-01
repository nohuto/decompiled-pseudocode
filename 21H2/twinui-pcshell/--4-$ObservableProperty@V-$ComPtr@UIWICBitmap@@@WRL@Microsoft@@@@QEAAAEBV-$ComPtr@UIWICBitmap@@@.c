/*
 * XREFs of ??4?$ObservableProperty@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAAAEBV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@AEBV123@@Z @ 0x1803F43FC
 * Callers:
 *     _lambda_456e5ff184e6c0b451f61a85fda58e65_::operator() @ 0x1803F4484 (_lambda_456e5ff184e6c0b451f61a85fda58e65_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall ObservableProperty<Microsoft::WRL::ComPtr<IWICBitmap>>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(*a2);
      v2 = *a1;
    }
    v8 = v2;
    *a1 = v4;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  }
  v5 = (_QWORD *)a1[1];
  v6 = &v5[a1[2]];
  while ( v5 != v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 24LL))(*v5);
    ++v5;
  }
  return a1;
}
