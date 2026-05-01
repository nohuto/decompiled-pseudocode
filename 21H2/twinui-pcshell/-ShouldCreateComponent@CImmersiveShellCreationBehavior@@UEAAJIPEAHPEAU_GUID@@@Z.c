/*
 * XREFs of ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x180285BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180039C90 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180097500 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SiHostLessExplorer@@@details@wil@@QEAAX_N.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ @ 0x180285CE8 (-ValidateThread@CImmersiveShellCreationBehavior@@AEAAJXZ.c)
 *     SHRegSubKeyExistsW @ 0x1804DC730 (SHRegSubKeyExistsW.c)
 */

__int64 __fastcall CImmersiveShellCreationBehavior::ShouldCreateComponent(
        CImmersiveShellCreationBehavior *this,
        unsigned int a2,
        unsigned int *a3,
        struct _GUID *a4)
{
  __int64 v4; // rsi
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  bool v12; // zf
  unsigned int v13; // eax
  __int64 v14; // rcx
  unsigned __int8 (__fastcall *v15)(__int64); // rax
  OLECHAR sz[40]; // [rsp+20h] [rbp-188h] BYREF
  wchar_t Buffer[128]; // [rsp+70h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  *a3 = 0;
  v4 = a2;
  *a4 = 0LL;
  v8 = CImmersiveShellCreationBehavior::ValidateThread((CImmersiveShellCreationBehavior *)((char *)this - 32));
  if ( v8 < 0 )
  {
    v10 = 697LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\immersiveshellbuilder\\lib\\immersiveshellbuilder.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  if ( (unsigned int)v4 >= 0x8B )
  {
    v8 = -2147483637;
    v10 = 698LL;
    goto LABEL_3;
  }
  *a4 = *(struct _GUID *)*(&off_180646270 + 3 * v4);
  v12 = (*((_DWORD *)&off_180646270 + 6 * v4 + 3) & 1) == 0;
  v13 = *((_DWORD *)&off_180646270 + 6 * v4 + 3) & 1;
  *a3 = v13;
  if ( !v12 )
  {
    if ( (*(_BYTE *)(&off_180646270 + 3 * v4 + 1) & 1) != 0 )
    {
      StringFromGUID2((const GUID *const)*(&off_180646270 + 3 * v4), sz, 39);
      StringCchPrintfW(Buffer, 128LL, L"SOFTWARE\\Classes\\CLSID\\%s", sz);
      v13 = SHRegSubKeyExistsW(v14, Buffer);
      *a3 = v13;
    }
    v7 = v13;
    if ( v13 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_SiHostLessExplorer>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_SiHostLessExplorer>::GetImpl'::`2'::impl,
        0,
        v9);
      v13 = *a3;
    }
  }
  if ( v13 )
  {
    v15 = (unsigned __int8 (__fastcall *)(__int64))*(&off_180646270 + 3 * v4 + 2);
    if ( v15 )
      *a3 = v15(v7);
  }
  return 0LL;
}
