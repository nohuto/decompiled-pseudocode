/*
 * XREFs of ?QueueAsyncCallback@CFrameApplicationPresentation@@UEAAJPEAUIAsyncCallback@@@Z @ 0x18003CD90
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___ @ 0x18003CE7C (Windows--Internal--ComTaskPool--QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006D6C0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFrameApplicationPresentation::QueueAsyncCallback(
        CFrameApplicationPresentation *this,
        struct IAsyncCallback *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // esi
  _QWORD v8[2]; // [rsp+20h] [rbp-20h] BYREF
  struct IAsyncCallback *v9; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  CFrameApplicationPresentation *v11; // [rsp+60h] [rbp+20h] BYREF
  struct IAsyncCallback *v12; // [rsp+68h] [rbp+28h] BYREF

  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  v12 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( *((_DWORD *)this + 14) == 2 )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7FE,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL,
      v8[0]);
  }
  else
  {
    v11 = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
    v8[0] = this;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v8);
    v8[1] = this;
    v9 = a2;
    if ( a2 )
      (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 8LL))(a2);
    v6 = Windows::Internal::ComTaskPool::QueueTask__lambda_ac4863598604ec72e89080dc7a8a9967___(
           v5,
           v4,
           *((unsigned int *)this + 12),
           v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
    if ( v6 >= 0 )
      ++*((_DWORD *)this + 53);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  if ( a2 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a2 + 16LL))(a2);
  return (unsigned int)v6;
}
