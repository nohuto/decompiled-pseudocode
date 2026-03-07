__int64 __fastcall COcclusionContext::Compute(COcclusionContext *this, __int64 a2, _QWORD *a3, float a4, _OWORD *a5)
{
  float v9; // xmm6_4
  bool v10; // r12
  char v11; // dl
  unsigned int v12; // ebp
  unsigned int v13; // r8d
  gsl::details *v14; // rcx
  __int64 Bounds; // rax
  __int64 v16; // rdx
  int v17; // r8d
  __int64 v18; // r9
  float v19; // xmm0_4
  float v20; // xmm3_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int64 Count; // rax
  __int64 v29; // r9
  unsigned __int64 v30; // rdx
  HANDLE ProcessHeap; // rax
  char *v32; // rax
  CVisualTreePath *v33; // rbx
  char *v34; // rax
  unsigned int v35; // edx
  CVisualTreePath **v36; // rax
  CVisualTreePath *v37; // rcx
  int v38; // eax
  unsigned int v39; // ecx
  struct CComposition *v40; // rcx
  __int64 v41; // rax
  unsigned int v42; // esi
  __int64 v43; // rcx
  char **v44; // rbx
  char *v45; // rsi
  __int64 v46; // rax
  __int64 result; // rax
  unsigned int i; // esi
  __int64 v49; // rdx
  unsigned __int64 v50; // r8
  __int64 v51; // rcx
  HANDLE v52; // rax
  __int128 v53; // [rsp+30h] [rbp-68h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  struct CThreadContext *v55; // [rsp+A0h] [rbp+8h] BYREF

  v9 = 0.0;
  v10 = COERCE_FLOAT(LODWORD(a4) & _xmm) < 0.0000011920929;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(this, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, a2, 0LL);
  *((_QWORD *)this + 1) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 179) = 0LL;
  *((_DWORD *)this + 118) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 448, 36LL);
  *((_DWORD *)this + 357) = 0;
  if ( *((_BYTE *)this + 1204) )
    *((_BYTE *)this + 1204) = 0;
  CMILMatrix::SetToIdentity((COcclusionContext *)((char *)this + 1208));
  CMILMatrix::SetToIdentity((COcclusionContext *)((char *)this + 1276));
  if ( v11 )
  {
    for ( i = 0; i < *((_DWORD *)this + 118); ++i )
      CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)(*((_QWORD *)this + 56) + 36LL * i), 0LL);
  }
  *((_QWORD *)this + 128) = 0LL;
  v12 = 0;
  v13 = 0;
  if ( *(_DWORD *)a3 )
  {
    v14 = 0LL;
    do
    {
      if ( (unsigned __int64)v13 >= *a3 )
      {
        gsl::details::terminate(v14);
        JUMPOUT(0x18008725ALL);
      }
      *(_OWORD *)((char *)this + 16 * (_QWORD)v14 + 1032) = *(_OWORD *)(a3[1] + 16LL * v13);
      Bounds = CVisualTree::GetBounds(a2);
      if ( *(float *)Bounds > *((float *)this + 2 * v16 + 258) )
        *((_DWORD *)this + 2 * v16 + 258) = *(_DWORD *)Bounds;
      v19 = *(float *)(Bounds + 4);
      v20 = *((float *)this + 2 * v16 + 259);
      if ( v19 > v20 )
      {
        *((float *)this + 2 * v16 + 259) = v19;
        v20 = v19;
      }
      v21 = *(float *)(Bounds + 8);
      v22 = *((float *)this + 2 * v16 + 260);
      if ( v22 > v21 )
      {
        *((float *)this + 2 * v16 + 260) = v21;
        v22 = v21;
      }
      v23 = *(float *)(Bounds + 12);
      v24 = *((float *)this + 2 * v16 + 261);
      if ( v24 > v23 )
      {
        *((float *)this + 2 * v16 + 261) = v23;
        v24 = v23;
      }
      if ( v22 <= *((float *)this + 2 * v16 + 258) || v24 <= v20 )
      {
        *((_QWORD *)this + v16 + 130) = 0LL;
        *((_QWORD *)this + v16 + 129) = 0LL;
      }
      v14 = (gsl::details *)*((_QWORD *)this + 128);
      if ( *((float *)this + 4 * (_QWORD)v14 + 260) > *((float *)this + 4 * (_QWORD)v14 + 258)
        && *((float *)this + 4 * *((_QWORD *)this + 128) + 261) > *((float *)this + 4 * *((_QWORD *)this + 128) + 259) )
      {
        if ( !v10 )
          TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(
            (float *)((char *)this + v18 + 1032),
            a4,
            a4);
        *((float *)this + *((_QWORD *)this + 128) + 290) = (float)(*((float *)this + 4 * *((_QWORD *)this + 128) + 261)
                                                                 - *((float *)this + 4 * *((_QWORD *)this + 128) + 259))
                                                         * (float)(*((float *)this + 4 * *((_QWORD *)this + 128) + 260)
                                                                 - *((float *)this + 4 * *((_QWORD *)this + 128) + 258));
        v25 = *((_QWORD *)this + 128);
        v9 = v9 + *((float *)this + v25 + 290);
        v14 = (gsl::details *)(v25 + 1);
        *((_QWORD *)this + 128) = v25 + 1;
      }
      v13 = v17 + 1;
    }
    while ( v13 < *(_DWORD *)a3 );
  }
  **((_DWORD **)this + 168) = 0;
  if ( (!*((_QWORD *)this + 128) || COERCE_FLOAT(LODWORD(v9) & _xmm) < 0.0000011920929)
    && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 64LL) + 96LL) & 0x8000) == 0 )
  {
    goto LABEL_36;
  }
  v26 = *((_QWORD *)this + 177);
  if ( v26 )
    v27 = *(_QWORD *)(v26 + 1784);
  else
    v27 = *(_QWORD *)(a2 + 64);
  if ( (int)CThreadContext::GetCurrent(&v55) >= 0 )
  {
    Count = CPtrArrayBase::GetCount((struct CThreadContext *)((char *)v55 + 24));
    v30 = 0LL;
    if ( Count )
    {
      while ( v27 != CPtrArrayBase::operator[](v29 + 24, v30) )
      {
        v30 = v49 + 1;
        if ( v30 >= v50 )
          goto LABEL_31;
      }
      v12 = -2147467260;
      goto LABEL_36;
    }
  }
LABEL_31:
  *((_OWORD *)this + 96) = *a5;
  COcclusionContext::CheckOverlayCandidateCollectionEnabled(this);
  *((_BYTE *)this + 1424) = 0;
  ProcessHeap = GetProcessHeap();
  v32 = (char *)HeapAlloc(ProcessHeap, 0, 0x38uLL);
  v33 = (CVisualTreePath *)v32;
  if ( !v32 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v34 = v32 + 24;
  *(_QWORD *)&v53 = 0LL;
  *(_QWORD *)v33 = v34;
  *((_QWORD *)v33 + 1) = v34;
  *((_QWORD *)&v53 + 1) = a2;
  *((_QWORD *)v33 + 2) = (char *)v33 + 56;
  *(_OWORD *)detail::vector_facade<CVisualTreePath::VisualTreePathUnit,detail::buffer_impl<CVisualTreePath::VisualTreePathUnit,2,1,detail::liberal_expansion_policy>>::reserve_region(
               v33,
               0LL,
               1LL) = v53;
  v36 = (CVisualTreePath **)((char *)this + 16);
  if ( (struct CThreadContext **)((char *)this + 16) == &v55 )
  {
    v37 = v33;
    goto LABEL_68;
  }
  v37 = *v36;
  *v36 = v33;
  if ( v37 )
LABEL_68:
    CVisualTreePath::`scalar deleting destructor'(v37, v35);
  *((_QWORD *)this + 16) = a2;
  v38 = CVisualTreeIterator::WalkSubtree<COcclusionContext>(
          (unsigned __int64)this + 64,
          *(_QWORD *)(a2 + 64),
          v27,
          this);
  v12 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0xBCu, 0LL);
    goto LABEL_39;
  }
  if ( *((_QWORD *)this + 177) && !*((_BYTE *)this + 1424) )
  {
    v12 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, -2147418113, 0xC4u, 0LL);
    goto LABEL_39;
  }
LABEL_36:
  v40 = g_pComposition;
  v41 = 0LL;
  if ( g_pComposition )
    v41 = *((_QWORD *)g_pComposition + 62);
  *((_QWORD *)this + 3) = v41;
LABEL_39:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0xq_EventWriteTransfer(v40, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, a2, 0LL);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 36) = 0;
  v42 = 0;
  for ( *((_DWORD *)this + 44) = 0; v42 < *((_DWORD *)this + 58); ++v42 )
  {
    v51 = *(_QWORD *)(*((_QWORD *)this + 26) + 16LL * v42);
    if ( v51 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
  }
  *((_DWORD *)this + 58) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 208, 16LL);
  v43 = *((_QWORD *)this + 39);
  if ( v43 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 8LL))(v43);
    *((_QWORD *)this + 39) = 0LL;
  }
  *((_DWORD *)this + 104) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 392, 8LL);
  **((_DWORD **)this + 168) = 0;
  v44 = (char **)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v44 )
  {
    v45 = *v44;
    v46 = (v44[1] - *v44) >> 4;
    if ( v46 )
      v44[1] -= 16 * v46;
    *v44 = 0LL;
    if ( v45 == (char *)(v44 + 3) )
      v45 = 0LL;
    if ( v45 )
    {
      v52 = GetProcessHeap();
      HeapFree(v52, 0, v45);
    }
    operator delete(v44, 0x38uLL);
  }
  result = v12;
  *((_OWORD *)this + 96) = 0u;
  return result;
}
