/*
 * XREFs of ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800A7028
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A7A28 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout(
        HSTRING *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a4)
{
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, PVOID, _BYTE *); // rdi
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, __int64 *); // rdi
  HSTRING_HEADER *v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, HSTRING *); // rdi
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, HSTRING *); // rdi
  int v26; // eax
  wil::details::in1diag3 *v27; // rcx
  __int64 (__fastcall *v28)(struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, PVOID, HSTRING, HSTRING); // rdi
  HSTRING v29; // rbx
  HSTRING_HEADER *v30; // rax
  int v31; // eax
  _BYTE v32[8]; // [rsp+30h] [rbp-29h] BYREF
  HSTRING string; // [rsp+38h] [rbp-21h] BYREF
  __int64 v34; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v35[2]; // [rsp+48h] [rbp-11h] BYREF
  HSTRING_HEADER v36; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v35[1] = -2LL;
  v7 = *(_QWORD *)a2;
  v35[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, _QWORD *))(v7 + 80))(
         a2,
         v35);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_14;
  v32[0] = 0;
  v10 = v35[0];
  v11 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v35[0] + 64LL);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_1800FD608);
  v13 = v11(v10, v12[1].Reserved.Reserved1, v32);
  v14 = retaddr;
  if ( v13 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x12A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v13);
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x12E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_17;
  }
  if ( !v32[0] )
    goto LABEL_10;
  v34 = 0LL;
  v15 = v35[0];
  v16 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v35[0] + 48LL);
  v34 = 0LL;
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_1800FD608);
  v18 = v16(v15, v17[1].Reserved.Reserved1, &v34);
  v19 = retaddr;
  if ( v18 < 0 )
    goto LABEL_16;
  v20 = v34;
  v21 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v34 + 64LL);
  WindowsDeleteString(*this);
  *this = 0LL;
  v22 = v21(v20, this);
  v23 = retaddr;
  if ( v22 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0x12F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v22);
    goto LABEL_18;
  }
  string = 0LL;
  v24 = v34;
  v25 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v34 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v26 = v25(v24, &string);
  v27 = retaddr;
  if ( v26 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v27,
      (void *)0x132,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v26);
    JUMPOUT(0x1800A72A2LL);
  }
  v28 = *(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, PVOID, HSTRING, HSTRING))(*(_QWORD *)a4 + 48LL);
  v29 = string;
  v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)&off_1800FD610);
  v31 = v28(a4, v30[1].Reserved.Reserved1, a3, v29);
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v31);
LABEL_14:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x127,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_15;
  }
  WindowsDeleteString(string);
  string = 0LL;
  if ( v34 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
LABEL_10:
  if ( v35[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v35[0] + 16LL))(v35[0]);
}
