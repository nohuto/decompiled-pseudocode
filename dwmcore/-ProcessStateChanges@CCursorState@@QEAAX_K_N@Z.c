void __fastcall CCursorState::ProcessStateChanges(CCursorState *this, __int64 a2, char a3)
{
  char v3; // r12
  _QWORD *v4; // r15
  char v5; // bl
  char v9; // r14
  int v10; // xmm6_4
  int v11; // xmm7_4
  char v12; // dl
  int v13; // eax
  __int64 v14; // rcx
  char v15; // al
  __int64 i; // rax
  __int64 v17; // rcx
  char v18; // dl
  unsigned __int64 v19; // rbx
  void ***v20; // r14
  __int64 *v21; // rsi
  __int64 v22; // rdx
  void ***v23; // rbx
  void **v24; // rsi
  _BYTE *v25; // r13
  std::_Ref_count_base *v26; // rax
  std::_Ref_count_base **v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rdx
  __int64 v32; // rcx
  float *v33; // rcx
  void **v34; // r11
  float *j; // r10
  void **v36; // r10
  char v37; // [rsp+48h] [rbp-39h]
  __int64 v38; // [rsp+50h] [rbp-31h] BYREF
  __int64 v39; // [rsp+58h] [rbp-29h] BYREF
  std::_Ref_count_base *v40; // [rsp+60h] [rbp-21h]
  std::_Ref_count_base *v41[2]; // [rsp+68h] [rbp-19h] BYREF
  char v42; // [rsp+E8h] [rbp+67h]
  __int64 v43; // [rsp+F0h] [rbp+6Fh] BYREF
  char v44; // [rsp+F8h] [rbp+77h]
  char v45; // [rsp+100h] [rbp+7Fh]

  v43 = a2;
  v3 = *((_BYTE *)this + 104);
  v4 = (_QWORD *)((char *)this + 184);
  v5 = 0;
  v42 = 0;
  v44 = 0;
  v37 = 0;
  std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(&v39, (_QWORD *)this + 23);
  v9 = *((_BYTE *)this + 72);
  v10 = *((_DWORD *)this + 51);
  v11 = *((_DWORD *)this + 52);
  v45 = v9;
  EnterCriticalSection(&g_CursorManager);
  v12 = 1;
  if ( *((_BYTE *)this + 21) )
  {
    std::shared_ptr<CCursorState::ShapeData>::operator=(&v39, (_QWORD *)this + 4);
    *(_OWORD *)v41 = 0LL;
    std::shared_ptr<CRegion>::operator=((_QWORD *)this + 4, (__int64 *)v41);
    if ( v41[1] )
      std::_Ref_count_base::_Decref(v41[1]);
    v9 = *((_BYTE *)this + 18);
    v12 = 1;
    v13 = *((_DWORD *)this + 7);
    v5 = 1;
    v45 = v9;
    a3 = 1;
    v42 = 1;
    *((_BYTE *)this + 19) = 1;
    *((_DWORD *)this + 44) = v13;
    *((_BYTE *)this + 21) = 0;
  }
  v14 = v39;
  v15 = *((_BYTE *)this + 16) && v39 && !v9;
  *((_BYTE *)this + 104) = v15;
  if ( v5 || v15 != v3 )
    *((_BYTE *)this + 105) = v15;
  if ( *((_BYTE *)this + 20) )
  {
    if ( v14 )
      a3 = 1;
    *((_DWORD *)this + 50) = *((_DWORD *)this + 6);
    *((_BYTE *)this + 20) = 0;
  }
  if ( *((_BYTE *)this + 19) )
  {
    v10 = *((_DWORD *)this + 12);
    v11 = *((_DWORD *)this + 13);
    v44 = *((_BYTE *)this + 17);
    if ( *((_BYTE *)this + 106)
      && (v14 || !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)this + 34)) )
    {
      v37 = v12;
      a3 = v12;
    }
    *((_BYTE *)this + 19) = 0;
  }
  LeaveCriticalSection(&g_CursorManager);
  if ( g_disableHardwareCursors )
  {
    for ( i = *((_QWORD *)this + 10); i != *((_QWORD *)this + 11); i += 144LL )
    {
      if ( *(_BYTE *)(i + 140) )
      {
        a3 = 1;
        break;
      }
    }
  }
  v17 = *((_QWORD *)this + 32);
  v18 = 0;
  if ( v17 )
  {
    v19 = 10LL * *((_QWORD *)this + 33);
    while ( 1 )
    {
      v17 = *((_QWORD *)this + 32);
      v20 = (void ***)((char *)this + 248);
      if ( !v17 )
        break;
      v21 = (__int64 *)**v20;
      if ( a2 - v21[2] < v19 )
        break;
      v22 = *v21;
      *((_QWORD *)this + 32) = v17 - 1;
      *(_QWORD *)v21[1] = v22;
      *(_QWORD *)(v22 + 8) = v21[1];
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)(v21 + 3));
      std::_Deallocate<16,0>(v21, 0x50uLL);
      v18 = 1;
    }
    a3 = 1;
  }
  else
  {
    v20 = (void ***)((char *)this + 248);
  }
  if ( v44
    && *v4
    && ((v23 = v20, !v17)
     || (v23 = (void ***)((char *)this + 248),
         (unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 8LL) + 16LL)) >= *((_QWORD *)this + 33))) )
  {
    CCursorState::EnsureCompositionResources(this);
    v24 = *v23;
    v38 = *((_QWORD *)this + 14);
    if ( v23[1] == (void **)0x333333333333333LL )
      std::_Xlength_error("list too long");
    v25 = (char *)this + 72;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>(
      v41,
      (__int64)v23,
      &v43,
      &v38,
      (char *)this + 72,
      (const __m128i *)((char *)this + 136),
      (__int128 *)((char *)this + 152));
    v23[1] = (void **)((char *)v23[1] + 1);
    v26 = v41[1];
    v27 = (std::_Ref_count_base **)v24[1];
    v41[1] = 0LL;
    *(_QWORD *)v26 = v24;
    *((_QWORD *)v26 + 1) = v27;
    v24[1] = v26;
    *v27 = v26;
    std::_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<CCursorState::TrailPoint,void *>>>((__int64)v41);
    v18 = 1;
    a3 = 1;
  }
  else
  {
    v25 = (char *)this + 72;
  }
  if ( *((_QWORD *)this + 32) )
  {
    CCursorState::ScheduleCompositionPass(this);
    v18 = 0;
  }
  *((_BYTE *)this + 107) = v18;
  *((_DWORD *)this + 51) = v10;
  *((_DWORD *)this + 52) = v11;
  if ( a3 || *((_BYTE *)this + 104) != v3 )
  {
    if ( v42 )
    {
      v28 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = 0LL;
      if ( v28 )
      {
        v29 = v28 + 8 + *(int *)(*(_QWORD *)(v28 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
      }
      *((_BYTE *)this + 106) = 0;
      std::_Destroy_range<std::allocator<std::shared_ptr<CCursorState::ShapeData>>>(
        *((_QWORD *)this + 27),
        *((_QWORD *)this + 28));
      *((_QWORD *)this + 28) = *((_QWORD *)this + 27);
      std::shared_ptr<CRegion>::operator=(v4, &v39);
      v30 = *v4 == 0LL;
      *v25 = v45;
      if ( !v30 )
        std::vector<std::shared_ptr<CCursorState::ShapeData>>::emplace_back<std::shared_ptr<CCursorState::ShapeData> &>(
          (__int64 *)this + 27,
          v4);
    }
    else
    {
      if ( *((_BYTE *)this + 104) == v3 )
        goto LABEL_59;
      v31 = *((_QWORD *)this + 14);
      *((_QWORD *)this + 14) = 0LL;
      if ( v31 )
      {
        v32 = v31 + 8 + *(int *)(*(_QWORD *)(v31 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      *((_BYTE *)this + 106) = 0;
    }
    ++*((_DWORD *)this + 60);
LABEL_59:
    CCursorState::EnsureDestRectAndTransform(this, v37);
    v33 = (float *)((char *)this + 120);
    *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)this + 136);
    v34 = *v20;
    for ( j = (float *)**v20; j != (float *)v34; j = (float *)*v36 )
      TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v33, j + 9);
    CResource::NotifyOnChanged(*((_QWORD *)this + 8), 0, 0LL);
  }
  if ( v40 )
    std::_Ref_count_base::_Decref(v40);
}
