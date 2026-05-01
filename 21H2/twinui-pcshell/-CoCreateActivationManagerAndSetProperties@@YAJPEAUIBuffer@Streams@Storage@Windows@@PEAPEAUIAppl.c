/*
 * XREFs of ?CoCreateActivationManagerAndSetProperties@@YAJPEAUIBuffer@Streams@Storage@Windows@@PEAPEAUIApplicationActivationManagerPriv@@@Z @ 0x180078FD0
 * Callers:
 *     ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___ @ 0x180078DA4 (ActivateExperienceWithPropertySetCore__lambda_c7b169fba69fd79fe9f607e958de189f___.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z @ 0x180079094 (-SetActivationPropertySet@@YAJPEAUIUnknown@@PEAUIBuffer@Streams@Storage@Windows@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CoCreateActivationManagerAndSetProperties(
        struct Windows::Storage::Streams::IBuffer *a1,
        struct IApplicationActivationManagerPriv **a2)
{
  HRESULT Instance; // eax
  unsigned int v5; // ebx
  struct IApplicationActivationManagerPriv *v6; // rax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *ppv; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &CLSID_ApplicationActivationManager,
               0LL,
               0x401u,
               &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d,
               (LPVOID *)&ppv);
  v5 = Instance;
  if ( Instance < 0 )
  {
    v8 = 50LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_7;
  }
  if ( a1 )
  {
    Instance = SetActivationPropertySet(ppv, a1);
    v5 = Instance;
    if ( Instance < 0 )
    {
      v8 = 54LL;
      goto LABEL_10;
    }
  }
  v6 = (struct IApplicationActivationManagerPriv *)ppv;
  if ( ppv )
  {
    ((void (__fastcall *)(struct IUnknown *))ppv->lpVtbl->AddRef)(ppv);
    v6 = (struct IApplicationActivationManagerPriv *)ppv;
  }
  *a2 = v6;
  v5 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v5;
}
