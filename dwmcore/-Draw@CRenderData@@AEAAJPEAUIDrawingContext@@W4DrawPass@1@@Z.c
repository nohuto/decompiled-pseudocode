__int64 __fastcall CRenderData::Draw(unsigned int *a1, unsigned int *a2, unsigned __int64 a3)
{
  CRenderData *v3; // r12
  unsigned int *v4; // rbx
  unsigned int **v5; // rax
  struct CTreeData *p_Blink; // rdi
  __int64 v7; // r9
  unsigned int *v8; // r13
  struct CDrawingContext *v9; // r15
  struct CDrawListCache *v10; // r10
  unsigned int v11; // r11d
  unsigned int **v12; // r14
  unsigned __int64 v13; // rax
  int v14; // esi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  int i; // ebx
  _QWORD *v18; // rbx
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rbx
  _BYTE *v23; // rbx
  _BYTE *v24; // rbx
  __int64 v25; // r8
  __int64 v26; // rax
  void *v27; // rbx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v31; // rax
  struct _LIST_ENTRY *v32; // r14
  CVisual *v33; // rsi
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int128 v35; // xmm6
  int v36; // eax
  unsigned __int64 v37; // rax
  int NextItemSafe; // eax
  int DrawListCacheForCommandRun; // eax
  unsigned int v40; // ecx
  int v41; // eax
  struct CDrawListCache *v42; // rbx
  int v43; // eax
  unsigned int v44; // ecx
  int v45; // eax
  int v46; // eax
  struct _LIST_ENTRY *TreeDataListHead; // rax
  int v48; // eax
  unsigned int v49; // ecx
  HANDLE v50; // rax
  unsigned int **v51; // rcx
  unsigned int v52; // eax
  int v53; // eax
  unsigned int v54; // ecx
  HANDLE ProcessHeap; // rax
  HANDLE v56; // rax
  HANDLE v57; // rax
  char v58; // [rsp+40h] [rbp-C0h]
  char v59[3]; // [rsp+41h] [rbp-BFh] BYREF
  int v60; // [rsp+44h] [rbp-BCh]
  unsigned int v61; // [rsp+48h] [rbp-B8h] BYREF
  int v62; // [rsp+4Ch] [rbp-B4h]
  struct CDrawListCache *v63; // [rsp+50h] [rbp-B0h]
  unsigned int v64; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v65; // [rsp+5Ch] [rbp-A4h]
  struct CDrawListCache *v66; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v67; // [rsp+68h] [rbp-98h]
  CRenderData *v68; // [rsp+70h] [rbp-90h]
  CRenderData *v69; // [rsp+78h] [rbp-88h]
  void *v70[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int128 v71; // [rsp+90h] [rbp-70h]
  unsigned int *v72; // [rsp+A0h] [rbp-60h]
  unsigned int *v73; // [rsp+A8h] [rbp-58h]
  unsigned int *v74; // [rsp+B0h] [rbp-50h] BYREF
  unsigned int *v75; // [rsp+B8h] [rbp-48h]
  unsigned int v76; // [rsp+C0h] [rbp-40h]
  _OWORD v77[5]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v78; // [rsp+120h] [rbp+20h]
  _BYTE *v79; // [rsp+128h] [rbp+28h]
  _BYTE *v80; // [rsp+130h] [rbp+30h]
  __int64 *v81; // [rsp+138h] [rbp+38h]
  _BYTE v82[32]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v83; // [rsp+160h] [rbp+60h] BYREF
  LPVOID v84; // [rsp+170h] [rbp+70h] BYREF
  _BYTE *v85; // [rsp+178h] [rbp+78h]
  LPVOID *v86; // [rsp+180h] [rbp+80h]
  _BYTE v87[1920]; // [rsp+190h] [rbp+90h] BYREF
  LPVOID v88; // [rsp+910h] [rbp+810h] BYREF
  _BYTE *v89; // [rsp+918h] [rbp+818h]
  int *v90; // [rsp+920h] [rbp+820h]
  _BYTE v91[1920]; // [rsp+930h] [rbp+830h] BYREF
  int v92; // [rsp+10B0h] [rbp+FB0h] BYREF
  LPVOID lpMem; // [rsp+10B8h] [rbp+FB8h] BYREF
  _BYTE *v94; // [rsp+10C0h] [rbp+FC0h]
  char *v95; // [rsp+10C8h] [rbp+FC8h]
  _BYTE v96[348]; // [rsp+10D0h] [rbp+FD0h] BYREF
  char v97; // [rsp+122Ch] [rbp+112Ch] BYREF
  int v98; // [rsp+1230h] [rbp+1130h]
  __int64 v99; // [rsp+1240h] [rbp+1140h]
  int v100; // [rsp+1248h] [rbp+1148h]
  __int16 v101; // [rsp+124Ch] [rbp+114Ch]

  v69 = (CRenderData *)a1;
  v3 = 0LL;
  v65 = a3;
  v78 = 0LL;
  v79 = v82;
  v83 = 0LL;
  v80 = v82;
  v4 = a1 + 18;
  v5 = (unsigned int **)*((_QWORD *)a1 + 13);
  v81 = &v83;
  v84 = v87;
  v85 = v87;
  v86 = &v88;
  v88 = v91;
  v89 = v91;
  v90 = &v92;
  lpMem = v96;
  v94 = v96;
  v95 = &v97;
  p_Blink = 0LL;
  v92 = 0;
  v7 = (unsigned int)a3;
  v98 = 0;
  v8 = a2;
  v99 = 0LL;
  v9 = 0LL;
  v100 = 0;
  v10 = 0LL;
  v101 = 0;
  v60 = 0;
  v63 = 0LL;
  v66 = 0LL;
  v58 = 0;
  memset(v77, 0, 32);
  if ( v5 )
  {
    v51 = (unsigned int **)*((_QWORD *)a1 + 10);
    if ( *v51 != v4 )
      __fastfail(3u);
    *v5 = v4;
    v5[1] = (unsigned int *)v51;
    *v51 = (unsigned int *)v5;
    *((_QWORD *)v4 + 1) = v5;
    *((_QWORD *)v4 + 4) = 0LL;
  }
  v11 = 0;
  v72 = v4;
  v73 = 0LL;
  v62 = 0;
  v71 = 0uLL;
  if ( !(_DWORD)a3 )
  {
    if ( a2 )
      v9 = (struct CDrawingContext *)(a2 - 4);
    v31 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, unsigned __int64, _QWORD))(*((_QWORD *)v9 + 3) + 32LL))(
            (_QWORD *)v9 + 3,
            a2,
            a3,
            (unsigned int)a3);
    v32 = (struct _LIST_ENTRY *)*((_QWORD *)v9 + 1007);
    v33 = (CVisual *)v31;
    if ( ((unsigned __int8 (__fastcall *)(struct _LIST_ENTRY *))v32->Flink[11].Blink)(v32) )
    {
      p_Blink = (CVisual *)((char *)v33 + 336);
    }
    else
    {
      TreeDataListHead = CVisual::GetTreeDataListHead(v33);
      if ( TreeDataListHead )
      {
        Flink = TreeDataListHead->Flink;
        if ( TreeDataListHead->Flink != TreeDataListHead )
        {
          while ( 1 )
          {
            p_Blink = (struct CTreeData *)&Flink[-23].Blink;
            if ( Flink[2].Flink == v32 )
              break;
            Flink = Flink->Flink;
            if ( Flink == TreeDataListHead )
              goto LABEL_102;
          }
        }
      }
    }
    if ( !p_Blink )
    {
LABEL_102:
      v14 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)Flink, 0LL, 0, -2003292412, 0xDAu, 0LL);
      goto LABEL_14;
    }
    v7 = v65;
    v10 = 0LL;
    v11 = 0;
  }
  v12 = *(unsigned int ***)v4;
  if ( v4 == *(unsigned int **)v4 )
    goto LABEL_13;
  v13 = *((unsigned int *)v12 + 5);
  a2 = (unsigned int *)(v12 + 3);
  v67 = (unsigned int *)(v12 + 3);
  v14 = -2147467259;
  v74 = (unsigned int *)(v12 + 3);
  v76 = v13;
  if ( (_DWORD)v13 )
  {
    if ( (unsigned int)v13 < 8
      || (v15 = *a2, (unsigned int)v15 < 8)
      || (v15 & 3) != 0
      || (a3 = (unsigned int)v15, v15 > v13) )
    {
      v16 = v65;
      v3 = v69;
    }
    else
    {
      v3 = (CRenderData *)((char *)v12 + 28);
      a2 = (unsigned int *)((char *)a2 + (unsigned int)v15);
      v61 = *((_DWORD *)v12 + 7);
      v16 = (unsigned int)(v15 - 4);
      v67 = a2;
      v14 = 0;
    }
  }
  else
  {
    v14 = 1;
    v16 = 0LL;
    if ( *v12 != v4 )
      v14 = -2147467259;
  }
  if ( v14 )
  {
    if ( v14 >= 0 )
      goto LABEL_12;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v14, 0xDFu, 0LL);
    goto LABEL_14;
  }
  if ( !v3 && (_DWORD)v16 )
  {
    ((void (__fastcall *)(unsigned __int64, unsigned int *, unsigned __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
      v16,
      a2,
      a3,
      v7);
    __debugbreak();
  }
  *(_QWORD *)&v71 = (unsigned int)v16;
  v68 = (CRenderData *)v70[0];
  *((_QWORD *)&v71 + 1) = v3;
  while ( 1 )
  {
    v35 = v71;
    if ( v10 || (_DWORD)v7 )
    {
      v59[0] = 0;
      if ( (_DWORD)v7 )
        goto LABEL_57;
    }
    else
    {
      DrawListCacheForCommandRun = CRenderData::GetDrawListCacheForCommandRun(v69, v9, p_Blink, v11, &v66);
      v14 = DrawListCacheForCommandRun;
      if ( DrawListCacheForCommandRun < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, DrawListCacheForCommandRun, 0xEDu, 0LL);
        v63 = v66;
        goto LABEL_14;
      }
      v63 = v66;
      v58 = 0;
      v59[0] = 0;
    }
    *(_OWORD *)v70 = v35;
    v41 = CRenderData::TryDrawCommandAsDrawList(v69, v9, v61, (CRenderData *)v70, (__int64)v59);
    v14 = v41;
    if ( v41 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v41, 0xF9u, 0LL);
      goto LABEL_14;
    }
    if ( v59[0] )
    {
      v58 = 1;
      goto LABEL_62;
    }
    v10 = v63;
LABEL_57:
    if ( v58 )
    {
      v48 = CRenderData::FlushDrawListCache((CRenderData *)v16, v9, v10, (struct CDrawListEntryBuilder *)v77);
      v14 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x109u, 0LL);
        goto LABEL_14;
      }
      Microsoft::WRL::ComPtr<CGenericInkTipPointSource>::InternalRelease(&v66);
      v63 = v66;
      v58 = 0;
    }
    if ( v61 == 453 )
    {
      v45 = (*(__int64 (__fastcall **)(unsigned int *, _QWORD, unsigned __int64))(*(_QWORD *)v8 + 104LL))(
              v8,
              *(_QWORD *)(*((_QWORD *)v69 + 17) + 8LL * *((unsigned int *)v3 + 1)),
              a3);
      v14 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v45, 0x119u, 0LL);
        goto LABEL_14;
      }
      ++v60;
    }
    else if ( v61 == 452 )
    {
      if ( !v60 )
      {
        v14 = -2003292412;
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2003292412, 0x129u, 0LL);
        goto LABEL_14;
      }
      v46 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *, unsigned __int64))(*(_QWORD *)v8 + 96LL))(
              v8,
              a2,
              a3);
      v14 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v46, 0x123u, 0LL);
        goto LABEL_14;
      }
      --v60;
    }
    else
    {
      *(_OWORD *)v70 = v35;
      v36 = CRenderData::DrawCommandAsLegacy((_DWORD)v69, (_DWORD)v8, a3, v61, (__int64)v70);
      v14 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v36, 0x12Eu, 0LL);
        goto LABEL_14;
      }
    }
    if ( v14 == 1 )
      break;
LABEL_62:
    a2 = v67;
    v37 = (unsigned __int64)v74 + v76 - (_QWORD)v67;
    if ( v37 )
    {
      if ( v37 >= 8 )
      {
        a3 = *v67;
        if ( (unsigned int)a3 >= 8 && (a3 & 3) == 0 && a3 <= v37 )
        {
          v16 = (unsigned __int64)(v67 + 1);
          v61 = v67[1];
          v68 = (CRenderData *)(v67 + 1);
          v64 = a3 - 4;
          NextItemSafe = 0;
          v14 = 0;
          v67 = (unsigned int *)((char *)v67 + a3);
LABEL_79:
          a2 = (unsigned int *)v64;
          if ( !v16 && v64 )
          {
            ((void (__fastcall *)(_QWORD, _QWORD))`gsl::details::get_terminate_handler'::`2'::handler)(0LL, v64);
            __debugbreak();
          }
          v71 = __PAIR128__(v16, v64);
          v3 = (CRenderData *)v16;
          goto LABEL_66;
        }
      }
      v16 = (unsigned __int64)v68;
      NextItemSafe = -2147467259;
    }
    else
    {
      a2 = *v12;
      v16 = 0LL;
      v68 = 0LL;
      v70[0] = 0LL;
      v64 = 0;
      NextItemSafe = 1;
      if ( a2 != v4 )
      {
        v52 = a2[5];
        v74 = a2 + 6;
        v75 = a2 + 6;
        v73 = a2;
        v76 = v52;
        NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)&v74, &v61, v70, &v64);
        v4 = v72;
        v12 = (unsigned int **)v73;
        if ( NextItemSafe == 1 && *(unsigned int **)v73 != v72 )
        {
          NextItemSafe = -2147467259;
          v14 = -2147467259;
LABEL_111:
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, NextItemSafe, 0x13Du, 0LL);
          goto LABEL_14;
        }
        v67 = v75;
        v16 = (unsigned __int64)v70[0];
        v68 = (CRenderData *)v70[0];
      }
    }
    v14 = NextItemSafe;
    if ( !NextItemSafe )
      goto LABEL_79;
    *((_QWORD *)&v71 + 1) = v3;
    if ( NextItemSafe < 0 )
      goto LABEL_111;
LABEL_66:
    v11 = ++v62;
    if ( NextItemSafe )
      break;
    v10 = v63;
    LODWORD(v7) = v65;
  }
  if ( !v58 )
    goto LABEL_12;
  v42 = v63;
  v43 = CRenderData::FlushDrawListCache((CRenderData *)v16, v9, v63, (struct CDrawListEntryBuilder *)v77);
  v14 = v43;
  if ( v43 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x146u, 0LL);
    goto LABEL_14;
  }
  if ( v42 )
  {
    v63 = 0LL;
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v42);
  }
LABEL_12:
  if ( v14 == 1 )
LABEL_13:
    v14 = 0;
LABEL_14:
  for ( i = v60; i; v60 = i )
  {
    v53 = (*(__int64 (__fastcall **)(unsigned int *, unsigned int *, unsigned __int64, __int64))(*(_QWORD *)v8 + 96LL))(
            v8,
            a2,
            a3,
            v7);
    v14 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x155u, 0LL);
      goto LABEL_14;
    }
    --i;
  }
  if ( v63 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v63);
  v18 = v79;
  v19 = v80;
  while ( v18 != v19 )
  {
    if ( *v18 )
    {
      (*(void (__fastcall **)(_QWORD, unsigned int *, unsigned __int64, __int64))(*(_QWORD *)*v18 + 8LL))(
        *v18,
        a2,
        a3,
        v7);
      *v18 = 0LL;
    }
    ++v18;
  }
  v20 = (v80 - v79) >> 3;
  if ( v20 )
    v80 -= 8 * v20;
  v21 = v78;
  LOBYTE(v100) = 0;
  if ( v78 )
  {
    v78 = 0LL;
    (*(void (__fastcall **)(__int64, unsigned int *, unsigned __int64, __int64))(*(_QWORD *)v21 + 8LL))(v21, a2, a3, v7);
  }
  if ( v99 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v99);
  v22 = lpMem;
  if ( (v94 - (_BYTE *)lpMem) >> 1 )
  {
    detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,174,1,detail::liberal_expansion_policy>>::clear_region(
      &lpMem,
      0LL,
      (v94 - (_BYTE *)lpMem) >> 1,
      v7);
    v22 = lpMem;
  }
  lpMem = 0LL;
  if ( v22 != v96 && v22 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v22);
  }
  v23 = v88;
  if ( (v89 - (_BYTE *)v88) >> 4 )
  {
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      &v88,
      0LL);
    v23 = v88;
  }
  v88 = 0LL;
  if ( v23 != v91 && v23 )
  {
    v56 = GetProcessHeap();
    HeapFree(v56, 0, v23);
  }
  v24 = v84;
  v25 = (v85 - (_BYTE *)v84) >> 4;
  if ( v25 )
  {
    detail::vector_facade<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::clear_region(
      &v84,
      0LL);
    v24 = v84;
  }
  v84 = 0LL;
  if ( v24 != v87 && v24 )
  {
    v57 = GetProcessHeap();
    HeapFree(v57, 0, v24);
  }
  if ( v83 )
    (*(void (__fastcall **)(__int64, unsigned int *, __int64, __int64))(*(_QWORD *)v83 + 16LL))(v83, a2, v25, v7);
  v26 = (v80 - v79) >> 3;
  if ( v26 )
    v80 -= 8 * v26;
  v27 = v79;
  v28 = v79 == v82;
  v79 = 0LL;
  if ( v28 )
    v27 = 0LL;
  if ( v27 )
  {
    v50 = GetProcessHeap();
    HeapFree(v50, 0, v27);
  }
  v29 = v78;
  if ( v78 )
  {
    v78 = 0LL;
    (*(void (__fastcall **)(__int64, unsigned int *, __int64, __int64))(*(_QWORD *)v29 + 8LL))(v29, a2, v25, v7);
  }
  return (unsigned int)v14;
}
