/*
 * XREFs of ?StartDrag@DragNDropProcessorLegacy@@QEAAJPEAUtagMsgRoutingInfo@@K@Z @ 0x180175FB0
 * Callers:
 *     ?Thunk_StartDrag_0@?$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEAXPEAPEAX@Z @ 0x180176300 (-Thunk_StartDrag_0@-$IDragNDrop_Receive@VDragNDropProcessorLegacy@@@DragNDropMessageCall@@SAJPEA.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000D864 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINT@@@std@@@std@@@std@@@2@_K@Z @ 0x180046088 (-_End@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x1800F7A48 (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ?DragStartedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@@@Z @ 0x18017513C (-DragStartedLegacy@DragNDrop@InputETW@@SAXKUtagPOINT@@_K010W4VirtualKeyModifiers@System@Windows@.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z @ 0x180175278 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z.c)
 *     ?StartDragFailedLegacy@DragNDrop@InputETW@@SAXK@Z @ 0x18017622C (-StartDragFailedLegacy@DragNDrop@InputETW@@SAXK@Z.c)
 */

__int64 __fastcall DragNDropProcessorLegacy::StartDrag(
        DragNDropProcessorLegacy *this,
        struct tagMsgRoutingInfo *a2,
        unsigned int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 appended; // rsi
  __int64 v8; // r11
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 v15; // r10
  unsigned __int64 v16; // rsi
  int v17; // r8d
  unsigned int v18; // r12d
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int16 v23; // [rsp+20h] [rbp-49h]
  int v24; // [rsp+20h] [rbp-49h]
  __int64 v25; // [rsp+70h] [rbp+7h] BYREF
  __int64 v26; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v27[8]; // [rsp+80h] [rbp+17h] BYREF
  __int64 v28; // [rsp+D0h] [rbp+67h] BYREF
  unsigned int v29; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v30; // [rsp+E8h] [rbp+7Fh] BYREF

  v29 = a3;
  v5 = *((_QWORD *)this + 4);
  v28 = 0LL;
  if ( (*(int (__fastcall **)(__int64, struct tagMsgRoutingInfo *, __int64 *))(*(_QWORD *)v5 + 112LL))(v5, a2, &v28) >= 0 )
  {
    appended = std::_Fnv1a_append_bytes(v6, (const unsigned __int8 *const)&v29, 4uLL);
    v9 = appended & *(_QWORD *)(v8 + 48);
    while ( 1 )
    {
      v10 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
              v8,
              &v30,
              v9);
      if ( v11 == *v10 )
        break;
      if ( *(_DWORD *)(v11 + 16) == a3 )
        goto LABEL_7;
    }
    v11 = *(_QWORD *)(v8 + 8);
LABEL_7:
    if ( v11 != *((_QWORD *)this + 19) )
      goto LABEL_8;
    v13 = appended & *((_QWORD *)this + 16);
    while ( 1 )
    {
      v14 = std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::_End(
              (__int64)this + 80,
              &v30,
              v13);
      if ( v15 == *v14 )
        break;
      if ( *(_DWORD *)(v15 + 16) == a3 )
        goto LABEL_15;
    }
    v15 = *((_QWORD *)this + 11);
LABEL_15:
    if ( v15 == *((_QWORD *)this + 11) )
    {
LABEL_8:
      InputETW::DragNDrop::StartDragFailedLegacy(a3);
      v12 = *((_QWORD *)this + 8);
      v30 = v28;
      v23 = 4;
      CoreUICallSend(v12, &v30, 1LL, 1LL, v23, &unk_1801C742D, a3);
    }
    else
    {
      v16 = *(_QWORD *)(v15 + 20);
      v17 = *(_DWORD *)(v15 + 28);
      v18 = *(_DWORD *)(v15 + 32);
      v27[0] = 0LL;
      v26 = v16;
      v25 = 0LL;
      v30 = v16;
      DragNDropProcessorLegacy::HitTest(
        (__int64)this,
        v16,
        v17,
        v27,
        (unsigned __int64 *)&v26,
        &v25,
        (unsigned __int64 *)&v30);
      v19 = v30;
      v20 = v26;
      InputETW::DragNDrop::DragStartedLegacy(v29, v16, v27[0], v26, v25, v30, v18);
      v21 = *((_QWORD *)this + 8);
      v25 = v28;
      v27[0] = v20;
      LOWORD(v24) = 0;
      v30 = v19;
      v26 = v16;
      if ( (int)CoreUICallSend(v21, &v25, 1LL, 1LL, v24, &unk_1801C741E, v29) >= 0 )
      {
        std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
          (__int64)this + 144,
          (__int64)v27,
          &v29,
          &v28);
        return 0LL;
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 4) + 160LL))(*((_QWORD *)this + 4), v28);
  }
  return 0LL;
}
