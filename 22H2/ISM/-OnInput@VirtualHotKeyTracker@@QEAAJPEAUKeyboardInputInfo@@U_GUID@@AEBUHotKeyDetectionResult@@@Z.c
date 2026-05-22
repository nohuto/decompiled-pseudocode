/*
 * XREFs of ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801812BC
 * Callers:
 *     ?OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801803D0 (-OnInput@HotkeyContextualProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180011524 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180012DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??B?$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U?$default_delete@VMPCSpatialGestureRecognizerHandler@@@std@@@std@@QEBA_NXZ @ 0x1800182F0 (--B-$unique_ptr@VMPCSpatialGestureRecognizerHandler@@U-$default_delete@VMPCSpatialGestureRecogni.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_db9dc85612e9aa25d7d94e60c965daf1___ @ 0x18004A550 (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_VirtualHotKeyTracker--Ke.c)
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___ @ 0x18004A578 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_VirtualHotKeyTracker--.c)
 *     ?SynthesizeKeyEvent@VirtualHotKeyTracker@@AEAAXAEBUKeyEventData@1@U_GUID@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@@Z @ 0x18004A684 (-SynthesizeKeyEvent@VirtualHotKeyTracker@@AEAAXAEBUKeyEventData@1@U_GUID@@W4_SYNTHESIZE_KEYBOARD.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U?$pair@$$CBIV?$com_ptr_t@VBamoDockableDevicePrincipal@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18006B1E4 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U-$pair@$$CBIV-$com_ptr_t@VBamoDockableDevi.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800C9188 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKUContactStat.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800F68A8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 *     ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x180101D24 (-GetKeyboardInputData@KeyboardInputInfo@@QEAA-AU_KEYBOARD_INPUT_DATA@@XZ.c)
 *     ??4?$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013B708 (--4-$shared_ptr@VCustomCursorApplication@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x180180984 (--$_Assign_cast@AEAUKeyEventData@VirtualHotKeyTracker@@V-$_List_unchecked_const_iterator@V-$_Lis.c)
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@std@@@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@1@0@Z @ 0x180180A50 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_typ.c)
 *     ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x1801810FC (--$_Try_emplace@AEBU_GUID@@$$V@-$map@U_GUID@@V-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allo.c)
 *     ?_Unchecked_erase@?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@AEAA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@U_Iterator_base0@2@@2@V32@0@Z @ 0x180181938 (-_Unchecked_erase@-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKeyEventData@VirtualH.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall VirtualHotKeyTracker::OnInput(
        VirtualHotKeyTracker *this,
        struct KeyboardInputInfo *a2,
        struct _GUID *a3,
        const struct HotKeyDetectionResult *a4)
{
  struct _GUID *v5; // rbx
  char v7; // si
  __int64 v8; // r9
  __int16 v9; // cx
  __int64 **v10; // rdi
  __int64 *v11; // rax
  __int64 *v12; // rbx
  _QWORD *v13; // rax
  __int64 *v14; // r8
  __int64 *v15; // rcx
  __int128 v16; // xmm1
  int v17; // r9d
  __int128 *v18; // r14
  __int64 *v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // xmm1_8
  __int64 *v22; // r12
  int v23; // r9d
  int v24; // r9d
  __int64 *v25; // rbx
  __int64 *v26; // r12
  __int64 v27; // rbx
  _QWORD *v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 *v32; // rdi
  __int64 *v33; // rdx
  __int64 m128i_i64; // rcx
  int v35; // r9d
  __int64 v36; // rax
  __int64 *v37; // rbx
  int v38; // r9d
  int v39; // r9d
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // r14
  __int64 v43; // rbx
  _QWORD *v44; // rsi
  _QWORD *v45; // rax
  int v46; // r9d
  char v48; // [rsp+20h] [rbp-E0h]
  __int64 *v50; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-C0h]
  __int128 v53; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v54[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEYBOARD_INPUT_DATA v55; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v56[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v57[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v60; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-20h] BYREF
  __m128i *v62; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v63; // [rsp+100h] [rbp+0h] BYREF
  __int128 v64; // [rsp+110h] [rbp+10h]
  __int128 v65; // [rsp+120h] [rbp+20h] BYREF
  __int128 v66; // [rsp+130h] [rbp+30h] BYREF
  __m128i v67; // [rsp+140h] [rbp+40h] BYREF

  v5 = a3;
  v7 = *((_BYTE *)a2 + 70) & 1;
  v48 = v7;
  HIDWORD(v63) = 0;
  HIDWORD(v64) = 0;
  *(_QWORD *)&v64 = *((unsigned int *)a2 + 1);
  *(struct _KEYBOARD_INPUT_DATA *)&v63 = *KeyboardInputInfo::GetKeyboardInputData(a2, &v55);
  WORD4(v64) = *(_WORD *)(v8 + 34);
  v9 = *(_WORD *)(v8 + 36);
  WORD5(v64) = v9;
  v10 = (__int64 **)*((_QWORD *)this + 4);
  v11 = *v10;
  if ( v7 )
  {
    while ( v11 != (__int64 *)v10 && v9 != *((_WORD *)v11 + 21) )
      v11 = (__int64 *)*v11;
    v14 = v11;
    if ( v11 != (__int64 *)v10 )
    {
      while ( 1 )
      {
        v15 = (__int64 *)*v11;
        v11 = v15;
        if ( v15 == (__int64 *)v10 )
          break;
        if ( *(_WORD *)(v8 + 36) != *((_WORD *)v15 + 21) )
        {
          v16 = *((_OWORD *)v15 + 2);
          *((_OWORD *)v14 + 1) = *((_OWORD *)v15 + 1);
          *((_OWORD *)v14 + 2) = v16;
          v14 = (__int64 *)*v14;
        }
      }
    }
    std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase((char *)this + 32, v54);
  }
  else
  {
    while ( v11 != (__int64 *)v10 )
    {
      if ( *((_WORD *)v11 + 21) == v9 )
        goto LABEL_16;
      v11 = (__int64 *)*v11;
    }
    if ( *((_QWORD *)this + 5) == 0x555555555555555LL )
      std::_Xlength_error("list<T> too long");
    v12 = v10[1];
    v65 = (unsigned __int64)this + 32;
    v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
    *((_OWORD *)v13 + 1) = v63;
    *((_OWORD *)v13 + 2) = v64;
    *v13 = v10;
    v13[1] = v12;
    ++*((_QWORD *)this + 5);
    v10[1] = v13;
    *v12 = (__int64)v13;
    *((_QWORD *)&v65 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>((__int64)&v65);
    v5 = a3;
  }
LABEL_16:
  if ( std::unique_ptr<MPCSpatialGestureRecognizerHandler>::operator bool(a4) && !v7 )
  {
    v18 = (__int128 *)((char *)a4 + 16);
    if ( (*((_QWORD *)a4 + 2) != *(_QWORD *)&GUID_NULL.Data1 || *((_QWORD *)a4 + 3) != *(_QWORD *)GUID_NULL.Data4)
      && (*(_QWORD *)&v5->Data1 != *(_QWORD *)v18 || *(_QWORD *)v5->Data4 != *((_QWORD *)a4 + 3)) )
    {
      v19 = (__int64 *)*((_QWORD *)this + 4);
      v50 = v19;
      v20 = *v19;
      while ( (__int64 *)v20 != v19 )
      {
        v66 = *(_OWORD *)(v20 + 16);
        v67 = *(__m128i *)(v20 + 32);
        v21 = _mm_srli_si128(v67, 8).m128i_u64[0];
        if ( (unsigned __int16)(WORD1(v21) - 160) <= 5u || (unsigned __int16)(WORD1(v21) - 91) <= 1u )
        {
          std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
            (__int64 *)this + 6,
            (__int64)&v51,
            (char *)a4 + 16,
            v17);
          v22 = *(__int64 **)(v51 + 48);
          std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
            (__int64 *)this + 6,
            (__int64)&v55,
            (char *)a4 + 16,
            v23);
          v25 = *(__int64 **)(*(_QWORD *)&v55.UnitId + 48LL);
          do
            v25 = (__int64 *)*v25;
          while ( v25 != v22 && *((_WORD *)v25 + 21) != v67.m128i_i16[5] );
          std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
            (__int64 *)this + 6,
            (__int64)v56,
            (char *)a4 + 16,
            v24);
          if ( v25 == *(__int64 **)(v56[0] + 48LL) )
          {
            std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
              (__int64 *)this + 6,
              (__int64)v54,
              (char *)a4 + 16,
              v17);
            v26 = v54[0] + 6;
            v27 = v54[0][6];
            if ( v54[0][7] == 0x555555555555555LL )
              std::_Xlength_error("list<T> too long");
            v28 = *(_QWORD **)(v27 + 8);
            v65 = (unsigned __int64)v26;
            v29 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
            *((_OWORD *)v29 + 1) = v66;
            *((__m128i *)v29 + 2) = v67;
            *v29 = v27;
            v29[1] = v28;
            ++v26[1];
            *(_QWORD *)(v27 + 8) = v29;
            *v28 = v29;
            *((_QWORD *)&v65 + 1) = 0LL;
            std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>((__int64)&v65);
            v53 = *v18;
            VirtualHotKeyTracker::SynthesizeKeyEvent(v30, (__int64 *)&v66, &v53, 2u);
          }
        }
        v20 = *(_QWORD *)v20;
        v19 = v50;
      }
      v5 = a3;
      v7 = v48;
    }
  }
  if ( std::unique_ptr<MPCSpatialGestureRecognizerHandler>::operator bool(a4) && *((_BYTE *)a4 + 32) )
  {
    v53 = (__int128)*v5;
    VirtualHotKeyTracker::SynthesizeKeyEvent(v31, (__int64 *)&v63, &v53, 1u);
  }
  v32 = (__int64 *)*((_QWORD *)this + 6);
  v33 = (__int64 *)*v32;
  v50 = (__int64 *)*v32;
  while ( v33 != v32 )
  {
    v66 = *((_OWORD *)v33 + 2);
    v67 = 0uLL;
    std::list<VirtualHotKeyTracker::KeyEventData>::_Construct_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
      &v67,
      *(__int64 **)v33[6],
      (__int64 *)v33[6]);
    v65 = v66;
    if ( *(_OWORD *)v5 == v66 )
      goto LABEL_53;
    if ( v7 )
    {
      v57[0] = &v63;
      v57[1] = this;
      v57[2] = &v65;
      std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_7f079bc5e87df2e09bd622ff86c26e64___(
        v56,
        *(__int64 **)v67.m128i_i64[0],
        (__int64 *)v67.m128i_i64[0],
        (__int64)v57);
      std::list<VirtualHotKeyTracker::KeyEventData>::_Unchecked_erase(&v67, &v55);
      std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
        (__int64 *)this + 6,
        (__int64)&v62,
        &v65,
        v46);
      m128i_i64 = (__int64)v62[3].m128i_i64;
      if ( &v62[3] != &v67 )
        std::list<VirtualHotKeyTracker::KeyEventData>::_Assign_cast<VirtualHotKeyTracker::KeyEventData &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<VirtualHotKeyTracker::KeyEventData>>,std::_Iterator_base0>>(
          (__int64 ***)m128i_i64,
          *(_QWORD *)v67.m128i_i64[0],
          (__int64 *)v67.m128i_i64[0]);
      goto LABEL_52;
    }
    if ( std::unique_ptr<MPCSpatialGestureRecognizerHandler>::operator bool(a4) && *((_OWORD *)a4 + 1) == v66 )
    {
      v36 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)a4 != v36 || (m128i_i64 = 0x4000LL, (*(_WORD *)(v36 + 24) & 0x4000) == 0) )
      {
        std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
          (__int64 *)this + 6,
          (__int64)&v53,
          &v65,
          v35);
        v37 = *(__int64 **)(v53 + 48);
        std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
          (__int64 *)this + 6,
          (__int64)&v58,
          &v65,
          v38);
        std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_VirtualHotKeyTracker::KeyEventData_______lambda_db9dc85612e9aa25d7d94e60c965daf1___(
          v54,
          **(__int64 ***)(v58 + 48),
          v37,
          (__int64)&v63);
        std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
          (__int64 *)this + 6,
          (__int64)&v59,
          &v65,
          v39);
        if ( v54[0] == *(__int64 **)(v59 + 48) )
        {
          std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
            (__int64 *)this + 6,
            (__int64)&v60,
            &v65,
            v41);
          v42 = v60 + 48;
          v43 = *(_QWORD *)(v60 + 48);
          if ( *(_QWORD *)(v60 + 56) == 0x555555555555555LL )
            std::_Xlength_error("list<T> too long");
          v44 = *(_QWORD **)(v43 + 8);
          v51 = v60 + 48;
          v52 = 0LL;
          v45 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
          *((_OWORD *)v45 + 1) = v63;
          *((_OWORD *)v45 + 2) = v64;
          *v45 = v43;
          v45[1] = v44;
          ++*(_QWORD *)(v42 + 8);
          *(_QWORD *)(v43 + 8) = v45;
          *v44 = v45;
          v52 = 0LL;
          std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned int const,wil::com_ptr_t<BamoDockableDevicePrincipal,wil::err_returncode_policy>>,void *>>>((__int64)&v51);
          v7 = v48;
        }
        v61 = v65;
        VirtualHotKeyTracker::SynthesizeKeyEvent(v40, (__int64 *)&v63, &v61, 2u);
LABEL_52:
        v5 = a3;
      }
    }
LABEL_53:
    std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::PointerCache>,void *>>>(
      m128i_i64,
      v67.m128i_i64[0]);
    std::_Deallocate<16,0>((void *)v67.m128i_i64[0], (const struct std::nothrow_t *)0x30);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>>,std::_Iterator_base0>::operator++(&v50);
    v33 = v50;
  }
  std::shared_ptr<CustomCursorApplication>::operator=((_QWORD *)this + 2, a4);
  return 0LL;
}
