/*
 * XREFs of ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AW4AsyncStatus@Foundation@Windows@3@XZ @ 0x1800FE070
 * Callers:
 *     ?await_ready@?$await_adapter@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA_NXZ @ 0x180100D98 (-await_ready@-$await_adapter@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Stor.c)
 *     ?get@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA?AUIRandomAccessStreamReference@Streams@Storage@Windows@3@XZ @ 0x1801010C4 (-get@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRandomAccessStreamReferen.c)
 *     ?wait_for@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamReference@Streams@Storage@34@@impl@winrt@@QEBA?AW4AsyncStatus@Foundation@Windows@3@AEBV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x180101BE0 (-wait_for@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRandomAccessStreamRe.c)
 *     _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x180149CAC (_anonymous_namespace_--GetWicBitmapFromStreamReference.c)
 * Callees:
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6BC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A12EC (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA?AUIAsyncInfo@123@XZ @ 0x180260D28 (--$try_as@UIAsyncInfo@Foundation@Windows@winrt@@@IUnknown@Foundation@Windows@winrt@@QEBA-AUIAsyn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::Status(
        __int64 a1)
{
  unsigned int v1; // eax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  winrt::Windows::Foundation::IUnknown::try_as<winrt::Windows::Foundation::IAsyncInfo>(a1, &v4);
  v1 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v4 + 56LL))(v4, &v3);
  winrt::check_hresult(v1);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(&v4);
  return v3;
}
