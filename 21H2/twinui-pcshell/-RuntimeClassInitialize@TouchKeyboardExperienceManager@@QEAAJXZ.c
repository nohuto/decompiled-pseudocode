/*
 * XREFs of ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x1803BFA14
 * Callers:
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x1803B4544 (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801BF384 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::RuntimeClassInitialize(TouchKeyboardExperienceManager *this)
{
  CImmersiveShellComponent *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int128 v6; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (TouchKeyboardExperienceManager *)((char *)this + 48);
  *(GUID *)v5 = IID_ITouchKeyboardExperienceManager;
  v6 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TouchKeyboardExperienceManager *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  if ( v2 < 0 )
  {
    v3 = 406LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  *(GUID *)v5 = GUID_c9969d8d_c814_50fd_9f55_84a54e9453fc;
  v6 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         v1,
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  if ( v2 < 0 )
  {
    v3 = 407LL;
    goto LABEL_3;
  }
  return 0LL;
}
