__int64 __fastcall CPreComputeContext::PreCompute(CPreComputeContext *this, struct CVisualTree *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // r13
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  unsigned int i; // edi
  __int64 v10; // rcx
  _BYTE *v11; // r12
  struct CThreadContext **v12; // r15
  struct CThreadContext *v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // edx
  char *v21; // rsi
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  __int64 v25; // rcx
  struct CThreadContext *v26; // rax
  DwmDbg::DbgString *v27; // rdi
  CVisualTreePath *v28; // rbx
  DwmDbg::DbgString *v29; // rax
  char *v30; // rcx
  __int64 v31; // r8
  CPreComputeContext::SubTreeContext *v32; // rbx
  CPreComputeContext::SubTreeContext *v33; // r15
  bool v34; // [rsp+20h] [rbp-49h]
  unsigned __int64 v35; // [rsp+30h] [rbp-39h] BYREF
  char *v36; // [rsp+38h] [rbp-31h] BYREF
  char *v37; // [rsp+40h] [rbp-29h] BYREF
  __int64 v38[3]; // [rsp+48h] [rbp-21h] BYREF
  char v39; // [rsp+60h] [rbp-9h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
  {
    v23 = (*(__int64 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2);
    McTemplateU0xq_EventWriteTransfer(v24, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Start, a2, v23);
  }
  v4 = *((_QWORD *)g_pComposition + 78);
  if ( v4 && *(_BYTE *)(v4 + 8) )
    *(_BYTE *)(v4 + 10) = 1;
  if ( 0x823EE08FB823EE09uLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) )
    detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
      this,
      0LL);
  v5 = (_DWORD *)((char *)this + 1392);
  LODWORD(v35) = 0;
  *((_DWORD *)this + 348) = 0;
  v6 = CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Push((char *)this + 1392, &v35);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x1B7u, 0LL);
    v11 = (char *)this + 1960;
LABEL_46:
    v32 = *(CPreComputeContext::SubTreeContext **)this;
    v33 = (CPreComputeContext::SubTreeContext *)*((_QWORD *)this + 1);
    while ( v32 != v33 )
    {
      CPreComputeContext::SubTreeContext::EndWalk(v32, v8);
      v32 = (CPreComputeContext::SubTreeContext *)((char *)v32 + 456);
    }
    goto LABEL_23;
  }
  LODWORD(v35) = (_DWORD)FLOAT_1_0;
  *((_DWORD *)this + 440) = 0;
  *((_DWORD *)this + 356) = 0;
  CWatermarkStack<float,2,2,10>::Push((char *)this + 1424, &v35);
  *((_DWORD *)this + 364) = 0;
  v35 = _mm_unpacklo_ps((__m128)0LL, (__m128)LODWORD(FLOAT_N1_0)).m128_u64[0];
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Push((char *)this + 1456, &v35);
  v35 = 0LL;
  *((_DWORD *)this + 372) = 0;
  CWatermarkStack<void *,2,2,10>::Push((char *)this + 1488, &v35);
  for ( i = 0; i < *((_DWORD *)this + 386); ++i )
  {
    v25 = *(_QWORD *)(*((_QWORD *)this + 190) + 16LL * i);
    if ( v25 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  *((_DWORD *)this + 386) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1520, 16LL);
  v10 = *((_QWORD *)this + 203);
  if ( v10 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    *((_QWORD *)this + 203) = 0LL;
  }
  *((_DWORD *)this + 432) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1704, 8LL);
  v11 = (char *)this + 1960;
  *((_BYTE *)this + 1960) = 0;
  v12 = (struct CThreadContext **)((char *)a2 + 64);
  if ( dword_1803E0760 )
  {
    v26 = *v12;
    v35 = (unsigned __int64)v26;
    if ( (*((_BYTE *)v26 + 272) & 5) != 0 || *((int *)v26 + 66) > 0 || *((int *)v26 + 67) > 0 )
    {
      v27 = DwmDbg::DbgString::DbgString(&v36, word_180338FC0);
      v28 = CVisualTreePath::CVisualTreePath((CVisualTreePath *)v38, a2);
      v29 = DwmDbg::DbgString::DbgString(&v37, "PreCompute-StartWalk");
      DwmDbg::Backdrops::LogTreeWalkEtwEvent(v29, v35, a2, v28, v27);
      v30 = (char *)v38[0];
      v31 = (v38[1] - v38[0]) >> 4;
      if ( v31 )
      {
        detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,4,1,detail::liberal_expansion_policy>>::clear_region(
          v38,
          0LL,
          v31);
        v30 = (char *)v38[0];
      }
      v38[0] = 0LL;
      if ( v30 == &v39 )
        v30 = 0LL;
      operator delete(v30);
    }
  }
  v13 = *v12;
  *((_QWORD *)this + 243) = a2;
  v14 = CVisualTreeIterator::WalkSubtree<CPreComputeContext>((unsigned __int64)this + 1880, *v12, v13, this, v34);
  v8 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x1DCu, 0LL);
    goto LABEL_46;
  }
  if ( *v5 )
    --*v5;
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((__int64)this + 1392);
  CWatermarkStack<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Optimize((char *)this + 1760);
  v16 = *((_DWORD *)this + 356);
  if ( v16 )
    *((_DWORD *)this + 356) = v16 - 1;
  CWatermarkStack<float,2,2,10>::Optimize();
  v17 = *((_DWORD *)this + 364);
  if ( v17 )
    *((_DWORD *)this + 364) = v17 - 1;
  CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Optimize();
  v18 = *((_DWORD *)this + 372);
  if ( v18 )
    *((_DWORD *)this + 372) = v18 - 1;
  CWatermarkStack<void *,2,2,10>::Optimize();
LABEL_23:
  if ( 0x823EE08FB823EE09uLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) )
    detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear_region(
      this,
      0LL);
  *v11 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 184LL))(a2) )
  {
    CPreComputeContext::UpdateWindowInputSinkHints(this);
    v20 = *((_DWORD *)this + 462);
    v21 = (char *)this + 1824;
    if ( v20 )
      NtUpdateInputSinkTransforms(*(_QWORD *)v21);
    *((_DWORD *)v21 + 6) = 0;
    DynArrayImpl<0>::ShrinkToSize(v21, 72LL);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v19, &EVTDESC_MILEVENT_MEDIA_UCE_PRECOMPUTEEVENT_Stop, a2);
  return v8;
}
