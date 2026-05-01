/*
 * XREFs of ?RuntimeClassInitialize@JointResize@@QEAAJXZ @ 0x18048DE34
 * Callers:
 *     ??$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18048BF30 (--$MakeAndInitialize@VJointResize@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801BF384 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18048ECD0 (-JointResizeAcc_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall JointResize::RuntimeClassInitialize(JointResize *this)
{
  void **v1; // rbx
  const struct _GUID *v3; // rcx
  int Instance; // ebx
  __int64 v5; // rdx
  int v7[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (void **)((char *)this + 216);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Instance = JointResizeAcc_CreateInstance(v3, v1);
  if ( Instance < 0 )
  {
    v5 = 122LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\jointresize\\lib\\jointresize.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  *(GUID *)v7 = GUID_242a95a9_8d6c_4974_a5da_d9b6c9e619b8;
  v8 = 0LL;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (JointResize *)((char *)this + 24),
               (const struct CImmersiveShellComponent::ISC_SERVICE *)v7,
               1LL);
  if ( Instance < 0 )
  {
    v5 = 123LL;
    goto LABEL_5;
  }
  return (unsigned int)Instance;
}
