/*
 * XREFs of ?RemoveTrackerBindings@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x18023532C
 * Callers:
 *     ?DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18022EC60 (-DetachFromChannel@CInteractionTracker@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D7984 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801B052C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@PEAX@std@@@1@@Z @ 0x180232CE4 (--$-0V-$allocator@U-$_List_node@U-$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingMode.c)
 *     ??$_Emplace_reallocate@AEBQEAVCInteractionTracker@@@?$vector@PEAVCInteractionTracker@@V?$allocator@PEAVCInteractionTracker@@@std@@@std@@QEAAPEAPEAVCInteractionTracker@@QEAPEAV2@AEBQEAV2@@Z @ 0x180232F10 (--$_Emplace_reallocate@AEBQEAVCInteractionTracker@@@-$vector@PEAVCInteractionTracker@@V-$allocat.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@std@@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@std@@@std@@@1@AEBQEAVCInteractionTracker@@@Z @ 0x18023360C (--$find@X@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@PEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@V?$_Uhash_compare@PEAVCInteractionTracker@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@3@@3@V?$allocator@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@@3@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@QEAVCInteractionTracker@@V?$unordered_map@PEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTracker@@@std@@U?$equal_to@PEAVCInteractionTracker@@@4@V?$allocator@U?$pair@QEAVCInteractionTracker@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@std@@PEAX@2@PEAU32@@Z @ 0x180236314 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@PEAVCInteractionTracker@@V-$unordered_map@PEAVCInterac.c)
 */

void __fastcall CInteractionTrackerBindingManager::RemoveTrackerBindings(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTracker *a2)
{
  _QWORD *v2; // r12
  _QWORD *v4; // rbx
  _QWORD **v5; // rax
  struct CInteractionTracker *v6; // r13
  _BYTE *v7; // rsi
  _BYTE *v8; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 appended; // rax
  _QWORD *v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  struct CInteractionTracker *v18; // rax
  void *v19; // r15
  _QWORD *i; // rdi
  _QWORD *v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // [rsp+20h] [rbp-59h]
  _QWORD **v25; // [rsp+20h] [rbp-59h]
  __int128 v26; // [rsp+28h] [rbp-51h] BYREF
  __int128 v27; // [rsp+38h] [rbp-41h] BYREF
  _BYTE *v28; // [rsp+48h] [rbp-31h]
  char v29[8]; // [rsp+50h] [rbp-29h] BYREF
  _QWORD **v30; // [rsp+58h] [rbp-21h]
  void *v31; // [rsp+68h] [rbp-11h]
  __int128 v32; // [rsp+70h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  _QWORD *v34; // [rsp+E0h] [rbp+67h] BYREF
  struct CInteractionTracker *v35; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v36; // [rsp+F0h] [rbp+77h] BYREF
  struct CInteractionTracker *v37; // [rsp+F8h] [rbp+7Fh] BYREF

  v35 = a2;
  v2 = (_QWORD *)((char *)this + 72);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
    (_QWORD *)this + 9,
    &v34,
    (const unsigned __int8 *)&v35);
  v4 = v34;
  if ( v34 == *((_QWORD **)this + 10) )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      895LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x80070057LL,
      v24);
  v28 = 0LL;
  v27 = 0LL;
  std::vector<CInteractionTracker *>::_Emplace_reallocate<CInteractionTracker * const &>((const void **)&v27, 0LL, &v35);
  std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>(
    (__int64)v29,
    (__int64)(v4 + 3));
  v5 = v30;
  v6 = v35;
  v7 = v28;
  v8 = (_BYTE *)*((_QWORD *)&v27 + 1);
  v9 = *v30;
  v25 = v30;
  while ( v9 != v5 )
  {
    v26 = *((_OWORD *)v9 + 1);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
      v2,
      &v34,
      (const unsigned __int8 *)&v26);
    v10 = v34;
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
      v34 + 3,
      &v36,
      (const unsigned __int8 *)&v35);
    appended = std::_Fnv1a_append_bytes(v11, (const unsigned __int8 *const)(v36 + 16), 8uLL);
    v14 = v10[6];
    v15 = 2 * (v10[9] & appended);
    if ( *(_QWORD **)(v14 + 16 * (v10[9] & appended) + 8) == v13 )
    {
      if ( *(_QWORD **)(v14 + 16 * (v10[9] & appended)) == v13 )
      {
        v16 = v10[4];
        *(_QWORD *)(v14 + 8 * v15) = v16;
      }
      else
      {
        v16 = v13[1];
      }
      *(_QWORD *)(v14 + 8 * v15 + 8) = v16;
    }
    else if ( *(_QWORD **)(v14 + 16 * (v10[9] & appended)) == v13 )
    {
      *(_QWORD *)(v14 + 16 * (v10[9] & appended)) = *v13;
    }
    v17 = *v13;
    --v10[5];
    *(_QWORD *)v13[1] = v17;
    *(_QWORD *)(v17 + 8) = v13[1];
    std::_Deallocate<16,0>(v13, 0x20uLL);
    (*(void (__fastcall **)(struct CInteractionTracker *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( !v10[5] )
    {
      v18 = (struct CInteractionTracker *)v10[2];
      v37 = v18;
      if ( v18 != v6 )
      {
        if ( v8 == v7 )
        {
          std::vector<CInteractionTracker *>::_Emplace_reallocate<CInteractionTracker * const &>(
            (const void **)&v27,
            v8,
            &v37);
          v7 = v28;
          v8 = (_BYTE *)*((_QWORD *)&v27 + 1);
        }
        else
        {
          *(_QWORD *)v8 = v18;
          v8 += 8;
          *((_QWORD *)&v27 + 1) = v8;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v26 + 16LL))(v26);
    v5 = v25;
    v9 = (_QWORD *)*v9;
  }
  v19 = (void *)v27;
  for ( i = (_QWORD *)v27; i != (_QWORD *)v8; ++i )
  {
    v34 = (_QWORD *)*i;
    v21 = v34;
    std::_Hash<std::_Umap_traits<CInteractionTracker *,enum InteractionTrackerBindingModeFlags,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,enum InteractionTrackerBindingModeFlags>>,0>>::find<void>(
      v2,
      &v36,
      (const unsigned __int8 *)&v34);
    std::_Hash<std::_Umap_traits<CInteractionTracker *,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>,std::_Uhash_compare<CInteractionTracker *,std::hash<CInteractionTracker *>,std::equal_to<CInteractionTracker *>>,std::allocator<std::pair<CInteractionTracker * const,std::unordered_map<CInteractionTracker *,enum InteractionTrackerBindingModeFlags>>>,0>>::_Unchecked_erase(
      v2,
      v36);
    if ( v21[80] )
    {
      v22 = v21[80];
      v21[80] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
  }
  std::_Deallocate<16,0>(v31, (v32 - (_QWORD)v31) & 0xFFFFFFFFFFFFFFF8uLL);
  v31 = 0LL;
  v32 = 0LL;
  std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<CResource const * const,CWeakResourceReference *>,void *>>>(
    v23,
    v30);
  std::_Deallocate<16,0>(v30, 0x20uLL);
  if ( v19 )
    std::_Deallocate<16,0>(v19, (v7 - (_BYTE *)v19) & 0xFFFFFFFFFFFFFFF8uLL);
}
