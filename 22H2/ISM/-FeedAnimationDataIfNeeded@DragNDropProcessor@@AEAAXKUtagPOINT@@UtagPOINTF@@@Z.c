/*
 * XREFs of ?FeedAnimationDataIfNeeded@DragNDropProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@@Z @ 0x1800F93FC
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FA400 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800FB098 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C214 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z @ 0x1800F9628 (-FeedPositionData@DragNDrop@InputETW@@SAX_K00UtagPOINT@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall DragNDropProcessor::FeedAnimationDataIfNeeded(
        __int64 **this,
        unsigned int a2,
        struct tagPOINT a3,
        struct tagPOINTF a4)
{
  unsigned __int64 v5; // r15
  __int64 appended; // rax
  _QWORD *v8; // r11
  __int64 v9; // r10
  __int64 *i; // rbx
  __int64 v11; // rbx
  struct IAnimationDataProvider *AnimationDataProvider; // r14
  void (__fastcall *v13)(struct IAnimationDataProvider *, __int64 *, __int64 *); // rsi
  __int64 (__fastcall *v14)(struct IAnimationDataProvider *, _QWORD *); // rsi
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+30h]
  __int64 v23; // [rsp+A0h] [rbp+38h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+40h] BYREF
  struct tagPOINT v25; // [rsp+B0h] [rbp+48h]

  v25 = a3;
  v24 = a2;
  v5 = a2;
  v21[1] = a4;
  appended = std::_Fnv1a_append_bytes((__int64)this, (const unsigned __int8 *const)&v24, 4uLL);
  v9 = appended & v8[6];
  for ( i = *(__int64 **)(v8[3] + 16 * v9);
        i != (__int64 *)*std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
                           (__int64)v8,
                           &v23,
                           v9);
        i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == (_DWORD)v5 )
      goto LABEL_6;
  }
  i = (__int64 *)v8[1];
LABEL_6:
  if ( i != this[47] )
  {
    v11 = i[3];
    v21[2] = v11;
    if ( v11 )
      (**(void (__fastcall ***)(__int64))v11)(v11);
    AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
    v13 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, __int64 *))(*(_QWORD *)AnimationDataProvider
                                                                                       + 48LL);
    v20 = v11;
    if ( v11 )
      (**(void (__fastcall ***)(__int64))v11)(v11);
    v13(AnimationDataProvider, &v23, &v20);
    v14 = *(__int64 (__fastcall **)(struct IAnimationDataProvider *, _QWORD *))(*(_QWORD *)AnimationDataProvider + 40LL);
    v21[0] = v11;
    if ( v11 )
      (**(void (__fastcall ***)(__int64))v11)(v11);
    v15 = v14(AnimationDataProvider, v21);
    v16 = (*(__int64 (__fastcall **)(struct IAnimationDataProvider *))(*(_QWORD *)AnimationDataProvider + 32LL))(AnimationDataProvider);
    InputETW::DragNDrop::FeedPositionData(v5, v16, v15, a3);
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v23 + 8) + 48LL))(v23 + 8, 1LL);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        977LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gndropprocessor.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v23 + 8) + 48LL))(v23 + 8, 2LL);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        978LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dra"
                 "gndropprocessor.cpp",
        (const char *)(unsigned int)v18);
    v19 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
}
