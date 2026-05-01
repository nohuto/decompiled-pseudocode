/*
 * XREFs of ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180246DA4
 * Callers:
 *     ?OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180248340 (-OnViewPropertiesChanging@CJumpViewExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18001DF20 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002A7EC (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0RoVariant@@QEAA@PEAUIInspectable@@_N@Z @ 0x18006F4B4 (--0RoVariant@@QEAA@PEAUIInspectable@@_N@Z.c)
 *     ??1RoVariant@@QEAA@XZ @ 0x18006F55C (--1RoVariant@@QEAA@XZ.c)
 *     ??$As@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18006F624 (--$As@U-$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@@-$ComPtr@UIProp.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x18024660C (-CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@.c)
 *     ?GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z @ 0x180247680 (-GetInt32@Accessor@RoVariant@@QEBAJPEAH@Z.c)
 *     ?GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1802476CC (-GetMonitorInformation@CJumpViewExperienceManager@@AEBAJUtagPOINT@@AEAUtagRECT@@AEAIAEAW4EDGEUI_.c)
 *     ?ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z @ 0x1804E61D4 (-ScaleByDPI@ExperienceManagerUtils@@YAXAEBUSize@Foundation@Windows@@HAEAH1@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CJumpViewExperienceManager::EnsureWindowPosition(
        CJumpViewExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  int v4; // eax
  unsigned int v5; // r8d
  int v6; // edi
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, LONG *); // rdi
  HSTRING_HEADER *v11; // rax
  struct tagPOINT v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, PVOID, LONG *); // rdi
  unsigned int v16; // r8d
  HSTRING_HEADER *v17; // rax
  struct tagPOINT v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  int Int32; // eax
  int v22; // r15d
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, PVOID, LONG *); // rdi
  unsigned int v25; // r8d
  HSTRING_HEADER *v26; // rax
  __int64 *v27; // rbx
  __int64 v28; // rcx
  int v29; // eax
  int v30; // ebx
  int MonitorInformation; // eax
  struct tagRECT v32; // xmm6
  int v33; // eax
  int v34; // eax
  int *v36; // [rsp+28h] [rbp-89h]
  struct tagRECT v37; // [rsp+48h] [rbp-69h] BYREF
  int v38; // [rsp+58h] [rbp-59h] BYREF
  struct tagPOINT v39; // [rsp+60h] [rbp-51h] BYREF
  LONG v40; // [rsp+68h] [rbp-49h]
  int v41[2]; // [rsp+70h] [rbp-41h] BYREF
  LONG v42; // [rsp+78h] [rbp-39h]
  __int64 v43; // [rsp+80h] [rbp-31h] BYREF
  struct tagPOINT v44; // [rsp+88h] [rbp-29h] BYREF
  LONG x; // [rsp+90h] [rbp-21h]
  struct Windows::Foundation::Size *v46; // [rsp+98h] [rbp-19h] BYREF
  HSTRING_HEADER v47; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v48; // [rsp+B8h] [rbp+7h]
  struct tagRECT v49; // [rsp+C0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v43 = 0LL;
  v4 = Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>::As<Windows::Foundation::Collections::IMap<HSTRING__ *,IInspectable *>>(
         (_QWORD *)a2 + 4,
         &v43);
  v6 = v4;
  if ( v4 < 0 )
  {
    v7 = (unsigned int)v4;
    v8 = 742LL;
LABEL_34:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
      (const char *)v7);
    goto LABEL_35;
  }
  v39 = 0LL;
  v40 = 0;
  v9 = v43;
  v10 = *(__int64 (__fastcall **)(__int64, PVOID, LONG *))(*(_QWORD *)v43 + 48LL);
  *(_QWORD *)&v37.left = &v39;
  *(_QWORD *)&v37.right = 0LL;
  v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          &v47,
          (const WCHAR **)&JumpViewExperienceEvents::Param_Position,
          v5);
  v6 = v10(v9, v11[1].Reserved.Reserved1, &v37.right);
  v48 = 0LL;
  RoVariant::RoVariant((RoVariant *)&v44, *(struct IInspectable **)&v37.right);
  v12 = v39;
  v39 = v44;
  v44 = v12;
  v12.x = v40;
  v40 = x;
  x = v12.x;
  RoVariant::~RoVariant((RoVariant *)&v44);
  if ( v6 >= 0 )
  {
    *(_QWORD *)v41 = 0LL;
    if ( v40 != 7 )
    {
      v6 = -2147316576;
      if ( v40 < 0 )
        v6 = v40;
      goto LABEL_11;
    }
    v6 = (*(__int64 (__fastcall **)(struct tagPOINT, int *))(**(_QWORD **)&v39 + 184LL))(v39, v41);
    if ( v6 < 0 )
    {
LABEL_11:
      v13 = 748LL;
      goto LABEL_12;
    }
    v44.x = (int)*(float *)v41;
    v44.y = (int)*(float *)&v41[1];
    RoVariant::~RoVariant((RoVariant *)&v39);
    v39 = 0LL;
    v40 = 0;
    v14 = v43;
    v15 = *(__int64 (__fastcall **)(__int64, PVOID, LONG *))(*(_QWORD *)v43 + 48LL);
    *(_QWORD *)&v37.left = &v39;
    *(_QWORD *)&v37.right = 0LL;
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v47,
            (const WCHAR **)&JumpViewExperienceEvents::Param_HorizontalAlign,
            v16);
    v6 = v15(v14, v17[1].Reserved.Reserved1, &v37.right);
    v48 = 0LL;
    RoVariant::RoVariant((RoVariant *)v41, *(struct IInspectable **)&v37.right);
    v18 = v39;
    v39 = *(struct tagPOINT *)v41;
    *(struct tagPOINT *)v41 = v18;
    v18.x = v40;
    v40 = v42;
    v42 = v18.x;
    RoVariant::~RoVariant((RoVariant *)v41);
    if ( v6 < 0 )
    {
      v19 = (unsigned int)v6;
      v20 = 757LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
        (const char *)v19);
      goto LABEL_18;
    }
    *(struct tagPOINT *)&v37.left = v39;
    v37.right = v40;
    Int32 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v37, &v38);
    v6 = Int32;
    if ( Int32 < 0 )
    {
      v19 = (unsigned int)Int32;
      v20 = 760LL;
      goto LABEL_17;
    }
    v22 = v38;
    RoVariant::~RoVariant((RoVariant *)&v39);
    v39 = 0LL;
    v40 = 0;
    v23 = v43;
    v24 = *(__int64 (__fastcall **)(__int64, PVOID, LONG *))(*(_QWORD *)v43 + 48LL);
    *(_QWORD *)&v37.left = &v39;
    *(_QWORD *)&v37.right = 0LL;
    v26 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
            &v47,
            (const WCHAR **)&JumpViewExperienceEvents::Param_VerticalAlign,
            v25);
    v6 = v24(v23, v26[1].Reserved.Reserved1, &v37.right);
    v48 = 0LL;
    v27 = *(__int64 **)&v37.left;
    RoVariant::RoVariant((RoVariant *)v41, *(struct IInspectable **)&v37.right);
    v28 = *v27;
    *v27 = *(_QWORD *)v41;
    *(_QWORD *)v41 = v28;
    LODWORD(v28) = *((_DWORD *)v27 + 2);
    *((_DWORD *)v27 + 2) = v42;
    v42 = v28;
    RoVariant::~RoVariant((RoVariant *)v41);
    if ( v6 < 0 )
    {
      v19 = (unsigned int)v6;
      v20 = 767LL;
      goto LABEL_17;
    }
    *(struct tagPOINT *)&v37.left = v39;
    v37.right = v40;
    v29 = RoVariant::Accessor::GetInt32((RoVariant::Accessor *)&v37, &v38);
    v6 = v29;
    if ( v29 < 0 )
    {
      v19 = (unsigned int)v29;
      v20 = 770LL;
      goto LABEL_17;
    }
    v30 = v38;
    RoVariant::~RoVariant((RoVariant *)&v39);
    MonitorInformation = CJumpViewExperienceManager::GetMonitorInformation(
                           this,
                           v44,
                           &v37,
                           (unsigned int *)&v46,
                           (CJumpViewExperienceManager *)((char *)this + 496));
    v6 = MonitorInformation;
    if ( MonitorInformation < 0 )
    {
      v7 = (unsigned int)MonitorInformation;
      v8 = 779LL;
      goto LABEL_34;
    }
    v32 = v37;
    *((struct tagRECT *)this + 32) = v37;
    ExperienceManagerUtils::ScaleByDPI(
      (struct CSingleViewShellExperience *)((char *)a2 + 44),
      (const struct Windows::Foundation::Size *)(unsigned int)v46,
      (int)&v38,
      v41,
      v36);
    if ( v38 <= 0 || v41[0] <= 0 )
    {
      v6 = -2147024809;
      v7 = 2147942487LL;
      v8 = 789LL;
      goto LABEL_34;
    }
    v37 = v32;
    v33 = CJumpViewExperienceManager::CalcWindowPosition(&v37.left, *(_QWORD *)&v44, v38, v41[0], v22, v30, &v49);
    v6 = v33;
    if ( v33 < 0 )
    {
      v7 = (unsigned int)v33;
      v8 = 792LL;
      goto LABEL_34;
    }
    v34 = CSingleViewShellExperience::SetPosition(a2, &v49);
    v6 = v34;
    if ( v34 < 0 )
    {
      v7 = (unsigned int)v34;
      v8 = 793LL;
      goto LABEL_34;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
    return 0LL;
  }
  v13 = 745LL;
LABEL_12:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_18:
  RoVariant::~RoVariant((RoVariant *)&v39);
LABEL_35:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v43);
  return (unsigned int)v6;
}
