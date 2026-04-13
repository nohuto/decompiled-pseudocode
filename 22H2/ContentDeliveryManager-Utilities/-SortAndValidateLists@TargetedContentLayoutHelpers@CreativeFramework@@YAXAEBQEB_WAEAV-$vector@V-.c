/*
 * XREFs of ?SortAndValidateLists@TargetedContentLayoutHelpers@CreativeFramework@@YAXAEBQEB_WAEAV?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@1AEAV?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@4@@Z @ 0x1800AA2CC
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A65A4 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800064C4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006B754 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180084CA0 (-Throw_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ??$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@0_J@Z @ 0x1800AAA24 (--$_Sort@PEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@_J@std@@YAXPEAUTile@TargetedCo.c)
 *     ??1?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAA@XZ @ 0x1800AADB4 (--1-$_Temp_iterator@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@s.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_special_bindings@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800AB1A4 (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV.c)
 *     ??$_Stable_sort@PEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@_JV12@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@std@@YAXPEAV?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@0@0_JAEAV?$_Temp_iterator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@0@Uless_than_rank@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800AB29C (--$_Stable_sort@PEAV-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramewo_ea_1800AB29C.c)
 *     __security_check_cookie @ 0x1800CF780 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::SortAndValidateLists(
        const char **a1,
        __int64 *a2,
        __int64 *a3,
        _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  double v13; // xmm7_8
  double v14; // xmm6_8
  unsigned __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // rbx
  double v19; // xmm0_8
  const char *v20; // r9
  int v21; // edx
  int v22; // r8d
  __int128 v23; // [rsp+58h] [rbp-79h] BYREF
  __int64 v24; // [rsp+68h] [rbp-69h]
  unsigned __int64 v25; // [rsp+70h] [rbp-61h]
  double v26; // [rsp+78h] [rbp-59h]
  double v27; // [rsp+80h] [rbp-51h]
  char v28; // [rsp+88h] [rbp-49h]
  void *v29[3]; // [rsp+90h] [rbp-41h] BYREF
  unsigned __int64 v30; // [rsp+A8h] [rbp-29h]
  double v31; // [rsp+B0h] [rbp-21h]
  double v32; // [rsp+B8h] [rbp-19h]
  char v33; // [rsp+C0h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  std::_Sort<CreativeFramework::TargetedContentLayoutHelpers::Tile *,__int64>(*a4, a4[1], (a4[1] - *a4) / 56LL);
  v8 = *a3;
  if ( *a3 != a3[1] )
  {
    v9 = (a3[1] - v8) >> 4;
    v23 = 0LL;
    v24 = 0LL;
    v25 = (v9 + 1) / 2;
    v26 = COERCE_DOUBLE(&v23);
    std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_special_bindings>(
      v8,
      a3[1],
      v9,
      (unsigned int)&v23);
    std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(&v23);
  }
  v10 = *a2;
  if ( *a2 != a2[1] )
  {
    v11 = (a2[1] - v10) >> 4;
    v23 = 0LL;
    v24 = 0LL;
    v25 = (v11 + 1) / 2;
    v26 = COERCE_DOUBLE(&v23);
    std::_Stable_sort<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item> *,__int64,std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>,CreativeFramework::TargetedContentLayoutHelpers::less_than_rank>(
      v10,
      a2[1],
      v11,
      (unsigned int)&v23);
    std::_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::~_Temp_iterator<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>(&v23);
  }
  v12 = *a4;
  v30 = 7LL;
  v29[2] = 0LL;
  LOWORD(v29[0]) = 0;
  std::wstring::assign(v29, (void **)v12, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v13 = *(double *)(v12 + 32);
  v31 = v13;
  v14 = *(double *)(v12 + 40);
  v32 = v14;
  v33 = *(_BYTE *)(v12 + 48);
  v15 = 1LL;
  v16 = *a4;
  if ( (unsigned __int64)((a4[1] - *a4) / 56LL) > 1 )
  {
    v17 = 56LL;
    do
    {
      v18 = v17 + v16;
      v25 = 7LL;
      v24 = 0LL;
      LOWORD(v23) = 0;
      std::wstring::assign((void **)&v23, (void **)(v17 + v16), 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v26 = *(double *)(v18 + 32);
      v19 = *(double *)(v18 + 40);
      v27 = v19;
      v28 = *(_BYTE *)(v18 + 48);
      if ( v26 == v13 && v19 == v14 )
      {
        v20 = (const char *)(unsigned int)wil::verify_hresult<long>(0x8007139F);
        wil::details::in1diag3::Throw_HrMsg(
          retaddr,
          (void *)0x58,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\tilebinder.cpp",
          v20,
          (__int64)"Duplicate found. SubscriptionId: %ls Collection:%ul Index:%ul",
          *a1,
          v22,
          v21);
        JUMPOUT(0x1800AA5CDLL);
      }
      std::wstring::assign(v29, (void **)&v23, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v13 = v26;
      v31 = v26;
      v14 = v27;
      v32 = v27;
      v33 = v28;
      if ( v25 >= 8 )
        operator delete((void *)v23);
      ++v15;
      v17 += 56LL;
      v16 = *a4;
    }
    while ( v15 < (a4[1] - *a4) / 56LL );
  }
  if ( v30 >= 8 )
    operator delete(v29[0]);
}
