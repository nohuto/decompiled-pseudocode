/*
 * XREFs of ?JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180486A44
 * Callers:
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x180475A68 (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ @ 0x180475974 (-InternalRelease@-$ComPtr@VAppResizeData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChrome@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChrome@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x180486120 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCW_ea_180486120.c)
 *     ??$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAVJointDivider@@AEAPEAUHWND__@@@Z @ 0x1804861C0 (--$MakeAndInitialize@VJointDivider@@V1@AEAPEAUHWND__@@@Details@WRL@Microsoft@@YAJPEAPEAVJointDiv.c)
 */

__int64 __fastcall JointDivider_CreateInstance(__int64 a1, const struct _GUID *a2, void **a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  JointDivider *v10; // [rsp+38h] [rbp+10h] BYREF

  v9 = a1;
  *a3 = 0LL;
  v10 = 0LL;
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&v10);
  v4 = Microsoft::WRL::Details::MakeAndInitialize<JointDivider,JointDivider,HWND__ * &>(&v10, &v9);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 351LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
      (const char *)(unsigned int)v4);
    goto LABEL_6;
  }
  v4 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChrome>>(
         (__int64)v10,
         &GUID_2c36ae3a_298c_4659_b51a_0859453e8d8f,
         a3);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = 352LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<AppResizeData>::InternalRelease((__int64 *)&v10);
  return v5;
}
