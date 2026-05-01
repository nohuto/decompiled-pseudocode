/*
 * XREFs of ?SetDirectorReference@LockScreenDirectorServiceProviderImpl@@UEAAJPEAUIUnknown@@@Z @ 0x180287FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LockScreenDirectorServiceProviderImpl::SetDirectorReference(RTL_SRWLOCK *this, struct IUnknown *a2)
{
  int v4; // eax
  int AgileReference; // ebx
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  __int64 v11; // [rsp+58h] [rbp+38h] BYREF
  __int64 v12; // [rsp+60h] [rbp+40h] BYREF
  PVOID Ptr; // [rsp+68h] [rbp+48h] BYREF

  v12 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  v4 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb,
         &v12);
  AgileReference = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_14;
  }
  AcquireSRWLockExclusive(this + 18);
  v6 = v12;
  v7 = 0LL;
  v11 = 0LL;
  AgileReference = 0;
  if ( v12 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    AgileReference = RoGetAgileReference(0LL, &GUID_6119bcc6_cac2_4d37_9bbf_76a34697e7fb, v6, &v11);
    v7 = v11;
  }
  v11 = 0LL;
  Ptr = this[19].Ptr;
  this[19].Ptr = (PVOID)v7;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&Ptr);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
  if ( AgileReference < 0 )
  {
    v8 = 72LL;
    goto LABEL_9;
  }
  if ( !this[19].Ptr )
  {
    AgileReference = -2147418113;
    v8 = 73LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\lockscreenservice\\lockscreendirectorserviceproviderimpl.cpp",
      (const char *)(unsigned int)AgileReference);
    if ( this != (RTL_SRWLOCK *)-144LL )
      ReleaseSRWLockExclusive(this + 18);
    goto LABEL_14;
  }
  if ( this != (RTL_SRWLOCK *)-144LL )
    ReleaseSRWLockExclusive(this + 18);
  SetEvent(this[17].Ptr);
  AgileReference = 0;
LABEL_14:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  return (unsigned int)AgileReference;
}
