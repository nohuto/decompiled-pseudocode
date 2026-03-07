void __fastcall anonymous_namespace_::SendFramesReport(__int64 *a1)
{
  SIZE_T size_of; // rax
  _QWORD *v3; // rax
  _BYTE *v4; // r14
  int v5; // ebx
  SIZE_T v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  int v9; // r15d
  _BYTE *v10; // rsi
  __int64 **v11; // r13
  __int64 **i; // rdi
  __int64 *v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rax
  _BYTE *v16; // rsi
  _BYTE *v17; // rsi
  _BYTE *v18; // rsi
  unsigned int v19; // ebx
  _BYTE *v20; // rsi
  _BYTE *v21; // rsi
  _BYTE *v22; // rsi
  _BYTE *v23; // rsi
  _BYTE *v24; // rsi
  _BYTE *v25; // rsi
  _BYTE *v26; // rsi
  _BYTE *v27; // rsi
  _BYTE *v28; // rsi
  unsigned int v29; // ebx
  _BYTE *v30; // rsi
  unsigned int v31; // ebx
  char *v32; // rsi
  void **v33; // rax
  void **v34; // r9
  void **v35; // r8
  _BYTE *v36; // r9
  __int64 v37; // rsi
  unsigned __int64 v38; // r10
  __int64 inserted; // rax
  __int64 v40; // rdx
  int v41; // r13d
  __int64 v42; // rax
  __int64 *k; // rbx
  __int64 v44; // rax
  unsigned __int64 v45; // r10
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 **v48; // rax
  __int64 *j; // rax
  void *v50; // rbx
  __int64 v51; // r8
  __int128 v52; // xmm0
  __int64 v53; // rdx
  __int64 v54; // rdi
  __int64 m; // rbx
  void **v56; // rax
  DWORD CurrentProcessId; // eax
  void *v58; // rbx
  void **v59; // rax
  __int64 v60; // rdx
  int v61; // ecx
  void **v62; // rax
  int v63; // esi
  __int64 v64; // rcx
  void **v65; // rax
  __int64 v66; // rax
  void *v67; // rdi
  __int64 v68; // r8
  __int128 v69; // xmm0
  __int64 *v70; // rcx
  signed int LastError; // eax
  char v72[8]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v73; // [rsp+90h] [rbp-78h] BYREF
  _BYTE *v74; // [rsp+A0h] [rbp-68h]
  __int64 v75; // [rsp+A8h] [rbp-60h] BYREF
  void *v76[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int16 v77; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v79[24]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v80; // [rsp+E8h] [rbp-20h]
  _QWORD *v81; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v82; // [rsp+F8h] [rbp-10h]
  DWORD pSessionId; // [rsp+100h] [rbp-8h] BYREF
  __int64 v84; // [rsp+108h] [rbp+0h] BYREF
  __int64 v85; // [rsp+110h] [rbp+8h] BYREF
  __int64 v86; // [rsp+118h] [rbp+10h]
  __int128 v87; // [rsp+128h] [rbp+20h] BYREF
  __int64 v88; // [rsp+138h] [rbp+30h]
  char v89[8]; // [rsp+148h] [rbp+40h] BYREF
  void *v90[2]; // [rsp+150h] [rbp+48h] BYREF
  void *v91; // [rsp+160h] [rbp+58h] BYREF
  int v92; // [rsp+168h] [rbp+60h]
  _QWORD v93[5]; // [rsp+170h] [rbp+68h] BYREF
  __int64 v94; // [rsp+198h] [rbp+90h] BYREF
  int v95; // [rsp+1A0h] [rbp+98h]
  void *v96[2]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v97; // [rsp+1B8h] [rbp+B0h]
  unsigned __int64 v98; // [rsp+1C0h] [rbp+B8h]
  void *v99[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v100; // [rsp+1D8h] [rbp+D0h]
  unsigned __int64 v101; // [rsp+1E0h] [rbp+D8h]
  void *v102[3]; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int64 v103; // [rsp+200h] [rbp+F8h]
  void *retaddr; // [rsp+240h] [rbp+138h]

  v98 = 15LL;
  v96[0] = 0LL;
  v97 = 0LL;
  v82 = 0LL;
  size_of = std::_Get_size_of_n<48>(1uLL);
  v3 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v74 = 0LL;
  v4 = 0LL;
  v73 = 0LL;
  *v3 = v3;
  v5 = 0;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  v81 = v3;
  v76[1] = 0LL;
  v6 = std::_Get_size_of_n<48>(1uLL);
  v7 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(v6);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  v76[0] = v7;
  v8 = **(_QWORD **)(*a1 + 160);
  v75 = v8;
  while ( !*(_BYTE *)(v8 + 25) )
  {
    v78 = v8 + 32;
    *(_DWORD *)(*(_QWORD *)std::map<std::wstring const *,unsigned int>::_Try_emplace<std::wstring const *,>(
                             v76,
                             &v87,
                             &v78)
              + 40LL) = v5++;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::wstring>>,std::_Iterator_base0>::operator++(&v75);
    v8 = v75;
  }
  v9 = 0;
  v10 = (_BYTE *)*((_QWORD *)&v73 + 1);
  v11 = *(__int64 ***)(*a1 + 120);
  for ( i = *(__int64 ***)(*a1 + 112); i != v11; ++i )
  {
    v13 = *i;
    v14 = *((_DWORD *)*i + 26);
    v75 = **i;
    v78 = v13[12];
    v15 = std::map<unsigned __int64,unsigned int>::_Try_emplace<unsigned __int64 const &,>(
            (__int64 *)&v81,
            (__int64)&v91);
    v72[0] = v14;
    *(_DWORD *)(*(_QWORD *)v15 + 40LL) = v9++;
    if ( v10 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v10, v72);
      v4 = v74;
      v16 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v10 = v14;
      v16 = v10 + 1;
      *((_QWORD *)&v73 + 1) = v16;
    }
    v72[0] = BYTE1(v14);
    if ( v16 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v16, v72);
      v4 = v74;
      v17 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v16 = BYTE1(v14);
      v17 = v16 + 1;
      *((_QWORD *)&v73 + 1) = v17;
    }
    v72[0] = BYTE2(v14);
    if ( v17 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v17, v72);
      v4 = v74;
      v18 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v17 = BYTE2(v14);
      v18 = v17 + 1;
      *((_QWORD *)&v73 + 1) = v18;
    }
    v19 = HIBYTE(v14);
    v72[0] = v19;
    if ( v18 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v18, v72);
      v4 = v74;
      v20 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v18 = v19;
      v20 = v18 + 1;
      *((_QWORD *)&v73 + 1) = v20;
    }
    v72[0] = v75;
    if ( v20 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v20, v72);
      v4 = v74;
      v21 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v20 = v75;
      v21 = v20 + 1;
      *((_QWORD *)&v73 + 1) = v21;
    }
    v72[0] = BYTE1(v75);
    if ( v21 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v21, v72);
      v4 = v74;
      v22 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v21 = BYTE1(v75);
      v22 = v21 + 1;
      *((_QWORD *)&v73 + 1) = v22;
    }
    v72[0] = BYTE2(v75);
    if ( v22 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v22, v72);
      v4 = v74;
      v23 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v22 = BYTE2(v75);
      v23 = v22 + 1;
      *((_QWORD *)&v73 + 1) = v23;
    }
    v72[0] = BYTE3(v75);
    if ( v23 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v23, v72);
      v4 = v74;
      v24 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v23 = BYTE3(v75);
      v24 = v23 + 1;
      *((_QWORD *)&v73 + 1) = v24;
    }
    v72[0] = BYTE4(v75);
    if ( v24 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v24, v72);
      v4 = v74;
      v25 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v24 = BYTE4(v75);
      v25 = v24 + 1;
      *((_QWORD *)&v73 + 1) = v25;
    }
    v72[0] = BYTE5(v75);
    if ( v25 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v25, v72);
      v4 = v74;
      v26 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v25 = BYTE5(v75);
      v26 = v25 + 1;
      *((_QWORD *)&v73 + 1) = v26;
    }
    v72[0] = BYTE6(v75);
    if ( v26 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v26, v72);
      v4 = v74;
      v27 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v26 = BYTE6(v75);
      v27 = v26 + 1;
      *((_QWORD *)&v73 + 1) = v27;
    }
    v72[0] = HIBYTE(v75);
    if ( v27 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v27, v72);
      v4 = v74;
      v28 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v27 = HIBYTE(v75);
      v28 = v27 + 1;
      *((_QWORD *)&v73 + 1) = v28;
    }
    if ( v78 )
    {
      std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Find_lower_bound<std::wstring const *>(
        v76,
        v79,
        &v78);
      inserted = *(_QWORD *)&v79[16];
      if ( *(_BYTE *)(*(_QWORD *)&v79[16] + 25LL) || v38 < *(_QWORD *)(*(_QWORD *)&v79[16] + 32LL) )
      {
        std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Check_grow_by_1(v76);
        v50 = v76[0];
        std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
          &v85,
          v76);
        v51 = v86;
        v52 = *(_OWORD *)v79;
        *(_QWORD *)(v86 + 32) = v78;
        *(_DWORD *)(v51 + 40) = 0;
        *(_QWORD *)v51 = v50;
        *(_QWORD *)(v51 + 8) = v50;
        *(_QWORD *)(v51 + 16) = v50;
        *(_WORD *)(v51 + 24) = 0;
        v86 = 0LL;
        v87 = v52;
        inserted = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const * const,unsigned int>>>::_Insert_node(
                     v76,
                     &v87);
      }
      v29 = *(_DWORD *)(inserted + 40) + 1;
    }
    else
    {
      v29 = 0;
    }
    v72[0] = v29;
    if ( v28 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v28, v72);
      v4 = v74;
      v30 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v28 = v29;
      v30 = v28 + 1;
      *((_QWORD *)&v73 + 1) = v30;
    }
    v31 = v29 >> 8;
    v72[0] = v31;
    if ( v30 == v4 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, v30, v72);
      v32 = (char *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      *v30 = v31;
      v32 = v30 + 1;
      *((_QWORD *)&v73 + 1) = v32;
    }
    v33 = v96;
    if ( v98 >= 0x10 )
      v33 = (void **)v96[0];
    v97 = 0LL;
    *(_BYTE *)v33 = 0;
    anonymous_namespace_::ProcessAttributionResourceCountersEncoder::Serialize(*i + 1, v96);
    v34 = v96;
    v35 = v96;
    if ( v98 >= 0x10 )
      v34 = (void **)v96[0];
    v36 = (char *)v34 + v97;
    if ( v98 >= 0x10 )
      v35 = (void **)v96[0];
    std::vector<char>::_Insert_range<char *>((__int64)&v73, v32, v35, v36);
    v37 = *((_QWORD *)&v73 + 1);
    v4 = v74;
    v72[0] = 0;
    if ( *((_BYTE **)&v73 + 1) == v74 )
    {
      std::vector<char>::_Emplace_reallocate<char>(&v73, *((_QWORD *)&v73 + 1), v72);
      v4 = v74;
      v10 = (_BYTE *)*((_QWORD *)&v73 + 1);
    }
    else
    {
      **((_BYTE **)&v73 + 1) = 0;
      v10 = (_BYTE *)(v37 + 1);
      *((_QWORD *)&v73 + 1) = v10;
    }
  }
  v40 = *a1 + 160;
  v77 = v82;
  EncodeStringsList(v102, v40);
  v90[1] = 0LL;
  v90[0] = (void *)std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void___::_Buyheadnode_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_______();
  v99[0] = 0LL;
  *(_QWORD *)v79 = v99;
  v41 = 0;
  v42 = *a1;
  v100 = 0LL;
  v101 = 15LL;
  *(_QWORD *)&v79[8] = 0LL;
  *(_DWORD *)&v79[16] = 0;
  Base853Encoder::AppendVarInt((Base853Encoder *)v79, *(_DWORD *)(v42 + 152));
  k = **(__int64 ***)(*a1 + 144);
  while ( !*((_BYTE *)k + 25) )
  {
    v44 = std::map<unsigned __int64,unsigned int>::_Try_emplace<unsigned __int64 const &,>(
            (__int64 *)&v81,
            (__int64)&v91);
    Base853Encoder::AppendVarInt((Base853Encoder *)v79, *(_DWORD *)(*(_QWORD *)v44 + 40LL));
    Base853Encoder::AppendVarInt((Base853Encoder *)v79, *((_DWORD *)k + 10));
    v75 = k[6];
    if ( v75 )
    {
      std::_Tree<std::_Tmap_traits<std::wstring const *,unsigned int,std::less<std::wstring const *>,std::allocator<std::pair<std::wstring const * const,unsigned int>>,0>>::_Find_lower_bound<std::wstring const *>(
        v76,
        &v87,
        &v75);
      v46 = v88;
      if ( *(_BYTE *)(v88 + 25) || v45 < *(_QWORD *)(v88 + 32) )
      {
        std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Check_grow_by_1(v76);
        v67 = v76[0];
        std::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>::_Tree_temp_node_alloc<std::allocator<std::_Tree_node<std::pair<std::wstring const * const,unsigned int>,void *>>>(
          &v85,
          v76);
        v68 = v86;
        v69 = v87;
        *(_QWORD *)(v86 + 32) = v75;
        *(_DWORD *)(v68 + 40) = 0;
        *(_QWORD *)v68 = v67;
        *(_QWORD *)(v68 + 8) = v67;
        *(_QWORD *)(v68 + 16) = v67;
        *(_WORD *)(v68 + 24) = 0;
        v86 = 0LL;
        v87 = v69;
        v46 = std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const * const,unsigned int>>>::_Insert_node(
                v76,
                &v87);
      }
      v47 = *(_DWORD *)(v46 + 40) + 1;
    }
    else
    {
      v47 = 0;
    }
    Base853Encoder::AppendVarInt((Base853Encoder *)v79, v47);
    *(_DWORD *)(*(_QWORD *)std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const___(
                             v89,
                             &v94,
                             k + 4)
              + 48LL) = v41++;
    v48 = (__int64 **)k[2];
    if ( *((_BYTE *)v48 + 25) )
    {
      for ( j = (__int64 *)k[1]; !*((_BYTE *)j + 25) && k == (__int64 *)j[2]; j = (__int64 *)j[1] )
        k = j;
      k = j;
    }
    else
    {
      v70 = *v48;
      for ( k = (__int64 *)k[2]; !*((_BYTE *)v70 + 25); v70 = (__int64 *)*v70 )
        k = v70;
    }
  }
  Base853Encoder::EnsureZeroesAreSerialized((Base853Encoder *)v79);
  if ( *(_DWORD *)&v79[12] )
    Base853Encoder::EncodeBlock((Base853Encoder *)v79);
  *(_DWORD *)v79 = 0;
  v80 = 0LL;
  v72[0] = 0;
  *(_OWORD *)&v79[8] = 0LL;
  std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(&v79[8], 0LL, v72);
  v53 = *(_QWORD *)&v79[16];
  v72[0] = 0;
  if ( *(_QWORD *)&v79[16] == v80 )
  {
    std::vector<unsigned char>::_Emplace_reallocate<unsigned char>(&v79[8], *(_QWORD *)&v79[16], v72);
  }
  else
  {
    **(_BYTE **)&v79[16] = 0;
    *(_QWORD *)&v79[16] = v53 + 1;
  }
  v54 = *(_QWORD *)(*a1 + 24);
  for ( m = *(_QWORD *)(*a1 + 16); ; m += 480LL )
  {
    v97 = 0LL;
    v56 = v96;
    if ( m == v54 )
      break;
    if ( v98 >= 0x10 )
      v56 = (void **)v96[0];
    *(_BYTE *)v56 = 0;
    anonymous_namespace_::SequenceEncoder::Serialize(m, &v81, v89, v96);
    anonymous_namespace_::PackedStringArrayBuilder::Append(v79, v96);
  }
  if ( v98 >= 0x10 )
    v56 = (void **)v96[0];
  *(_BYTE *)v56 = 0;
  anonymous_namespace_::GlobalResourceCountersEncoder::Serialize((unsigned int *)(*a1 + 40), (__int64)v96);
  anonymous_namespace_::QpcToFileTimeAndGetCurrentFileTime(*(_QWORD *)(*(_QWORD *)(*a1 + 16) + 464LL), &v84, v93);
  CurrentProcessId = GetCurrentProcessId();
  if ( !ProcessIdToSessionId(CurrentProcessId, &pSessionId) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    ModuleFailFastForHRESULT((unsigned int)LastError, retaddr);
  }
  v58 = (void *)v73;
  if ( (unsigned int)dword_1803E0B40 > 5 && tlgKeywordOn((__int64)&dword_1803E0B40, 0x400000000000LL) )
  {
    v59 = v99;
    v60 = *(_QWORD *)&v79[8];
    if ( v101 >= 0x10 )
      v59 = (void **)v99[0];
    v61 = *(_DWORD *)v79;
    v93[1] = v59;
    v62 = v102;
    if ( v103 >= 0x10 )
      v62 = (void **)v102[0];
    v63 = (_DWORD)v10 - (_DWORD)v58;
    v93[2] = v62;
    **(_BYTE **)&v79[8] = v79[0];
    v64 = (unsigned int)(v61 >> 8);
    v95 = (unsigned __int16)(*(_WORD *)&v79[16] - v60);
    *(_QWORD *)&v87 = &v77;
    v65 = v96;
    *(_BYTE *)(v60 + 1) = v64;
    v94 = v60;
    if ( v98 >= 0x10 )
      v65 = (void **)v96[0];
    v93[3] = v65;
    v93[4] = v84;
    v66 = *a1 + 176;
    v91 = v58;
    v84 = v66;
    LODWORD(v78) = pSessionId;
    v85 = v93[0];
    v92 = v63;
    DWORD2(v87) = 2;
    LODWORD(v75) = 0;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapSz<char>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapSz<char>,_tlgWrapSz<char>>(
      v64,
      &unk_18037BE69);
  }
  std::vector<unsigned char>::_Tidy((__int64)&v79[8]);
  if ( v101 >= 0x10 )
    std::_Deallocate<16,0>(v99[0], v101 + 1);
  v100 = 0LL;
  LOBYTE(v99[0]) = 0;
  v101 = 15LL;
  std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Erase_tree_std::allocator_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____void_______(
    (__int64)v90,
    (__int64)v90,
    *((_QWORD *)v90[0] + 1));
  std::_Deallocate<16,0>(v90[0], 0x38uLL);
  if ( v103 >= 0x10 )
    std::_Deallocate<16,0>(v102[0], v103 + 1);
  v102[2] = 0LL;
  v103 = 15LL;
  LOBYTE(v102[0]) = 0;
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    v76,
    v76,
    *((_QWORD *)v76[0] + 1));
  std::_Deallocate<16,0>(v76[0], 0x30uLL);
  if ( v58 )
    std::_Deallocate<16,0>(v58, v4 - (_BYTE *)v58);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned __int64 const,Microsoft::BamoImpl::BufferStream *>,void *>>>(
    &v81,
    &v81,
    v81[1]);
  std::_Deallocate<16,0>(v81, 0x30uLL);
  if ( v98 >= 0x10 )
    std::_Deallocate<16,0>(v96[0], v98 + 1);
}
