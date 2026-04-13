/*
 * XREFs of ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800A8034
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A65A4 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180019478 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800A4BA4 (-GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@Creative.c)
 *     ?GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A4EC8 (-GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800B2680 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInLayout(
        CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver *this)
{
  __int64 v2; // rdi
  HSTRING_HEADER *v3; // rax
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  HSTRING v14; // rsi
  _QWORD *v15; // rcx
  char v16; // si
  _QWORD *v17; // rbx
  _QWORD *v18; // rdx
  _QWORD *v19; // [rsp+28h] [rbp-59h] BYREF
  HSTRING string; // [rsp+30h] [rbp-51h] BYREF
  __int64 v21; // [rsp+38h] [rbp-49h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // [rsp+40h] [rbp-41h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-39h] BYREF
  __int64 v24; // [rsp+50h] [rbp-31h] BYREF
  HSTRING v25; // [rsp+58h] [rbp-29h] BYREF
  _QWORD *v26; // [rsp+60h] [rbp-21h] BYREF
  _QWORD *v27; // [rsp+68h] [rbp-19h]
  __int64 v28; // [rsp+78h] [rbp-9h]
  _QWORD **v29; // [rsp+80h] [rbp-1h]
  _QWORD v30[3]; // [rsp+88h] [rbp+7h] BYREF
  _QWORD *v31; // [rsp+A0h] [rbp+1Fh]
  HSTRING_HEADER v32; // [rsp+A8h] [rbp+27h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v28 = -2LL;
  LODWORD(v19) = 0;
  v2 = *(_QWORD *)this;
  v22 = 0LL;
  string = (HSTRING)L"Windows.Data.Xml.Dom.XmlDocument";
  v21 = 0LL;
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v32, (const WCHAR **)&string);
  v4 = RoActivateInstance(v3[1].Reserved.Reserved1, &v21);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x66A,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4);
    goto LABEL_34;
  }
  v33 = 0LL;
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v21)(
         v21,
         &GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494,
         &v23);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v5);
    goto LABEL_35;
  }
  LODWORD(v19) = 3;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  v7 = v23;
  v23 = 0LL;
  v22 = v7;
  v8 = (**v7)(v7, &GUID_6cd0e74e_ee65_4489_9ebf_ca43e87ba637, &v24);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x1800A832ALL);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 48LL))(v24, v2);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v10);
LABEL_32:
    std::_Xbad_function_call();
  }
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  v30[0] = off_1800ECCE0;
  v30[1] = this;
  v31 = v30;
  CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes(
    (__int64 *)&v22,
    &v26);
  v12 = v26;
  v13 = v27;
  if ( v26 != v27 )
  {
    v29 = &v19;
    do
    {
      v14 = *CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetNodeTileId(
               v11,
               &string,
               v12);
      v15 = (_QWORD *)*v12;
      v19 = v15;
      if ( v15 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
      v25 = v14;
      if ( !v31 )
        goto LABEL_32;
      v16 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD **, HSTRING *))(*v31 + 16LL))(v31, &v19, &v25);
      if ( v19 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v19 + 16LL))(v19, *v19);
      WindowsDeleteString(string);
      string = 0LL;
      if ( !v16 )
        break;
      ++v12;
    }
    while ( v12 != v13 );
    v12 = v26;
  }
  if ( v12 )
  {
    v17 = v27;
    if ( v12 != v27 )
    {
      do
      {
        if ( *v12 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v12 + 16LL))(*v12);
        ++v12;
      }
      while ( v12 != v17 );
      v12 = v26;
    }
    operator delete(v12);
  }
  if ( v31 )
  {
    v18 = v30;
    LOBYTE(v18) = v31 != v30;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v31 + 32LL))(v31, v18);
  }
  if ( v22 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v22)[2])(v22);
}
