__int64 __fastcall CStereoscopicContentManager::CalculateViewTransformForVisualTree(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5)
{
  __int64 *v6; // rax
  __int64 v9; // rcx
  char v11; // r14
  unsigned int v12; // r12d
  char v13; // di
  _QWORD *v14; // r10
  __int128 v15; // xmm0
  char v16; // al
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // r9
  __int64 v21; // rdi
  _OWORD *v22; // rdi
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int128 v25; // xmm3
  _BYTE v26[16]; // [rsp+30h] [rbp-51h] BYREF
  __int64 v27; // [rsp+40h] [rbp-41h]
  __int128 v28; // [rsp+50h] [rbp-31h]
  __int128 v29; // [rsp+60h] [rbp-21h]
  __int128 v30; // [rsp+70h] [rbp-11h]
  __int128 v31; // [rsp+80h] [rbp-1h]
  int v32; // [rsp+90h] [rbp+Fh]
  struct _RTL_CRITICAL_SECTION *v33; // [rsp+D0h] [rbp+4Fh] BYREF

  *(_DWORD *)(a2 + 64) = 0;
  v6 = *(__int64 **)(a1 + 16);
  if ( v6 == *(__int64 **)(a1 + 24) )
    goto LABEL_6;
  while ( 1 )
  {
    v9 = *v6;
    if ( *v6 )
      break;
LABEL_5:
    if ( ++v6 == *(__int64 **)(a1 + 24) )
      goto LABEL_6;
  }
  while ( v9 != *(_QWORD *)(a3 + 64) )
  {
    v9 = *(_QWORD *)(v9 + 88);
    if ( !v9 )
      goto LABEL_5;
  }
  v11 = 0;
  v12 = *(_DWORD *)(*v6 + 216);
  v13 = 0;
  v28 = _xmm;
  v29 = _xmm;
  v30 = _xmm;
  v31 = _xmm;
  LOBYTE(v32) = 0;
  v33 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  std::_Tree<std::_Tmap_traits<unsigned int,StereoscopicSlateData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,StereoscopicSlateData>>,0>>::_Find_lower_bound<unsigned int>(
    (__int64 *)(a1 + 328),
    (__int64)v26,
    &a5);
  if ( !*(_BYTE *)(v27 + 25) && a5 >= *(_DWORD *)(v27 + 28) && v27 != *v14 )
  {
    v15 = *(_OWORD *)(v27 + 32);
    v13 = 1;
    v17 = *(_OWORD *)(v27 + 48);
    v32 = *(_DWORD *)(v27 + 96);
    v16 = v32;
    v28 = v15;
    v18 = *(_OWORD *)(v27 + 64);
    v29 = v17;
    v19 = *(_OWORD *)(v27 + 80);
    *(_BYTE *)(v27 + 96) = 0;
    v11 = v16;
    v30 = v18;
    v31 = v19;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v33);
  if ( !v13 )
  {
LABEL_6:
    CMILMatrix::SetToIdentity((CMILMatrix *)a2);
  }
  else
  {
    v33 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
    v21 = *(_QWORD *)std::map<unsigned int,StereoscopicViewData>::_Try_emplace<unsigned int const &,>(
                       (__int64 *)(a1 + 80),
                       (__int64)v26,
                       &a5,
                       v20);
    if ( v11 )
      CStereoscopicContentManager::CalculateViewTransformsForSlate(a1, v12);
    if ( a4 )
      v22 = (_OWORD *)(v21 + 160);
    else
      v22 = (_OWORD *)(v21 + 96);
    v23 = v22[1];
    v24 = v22[2];
    v25 = v22[3];
    *(_OWORD *)a2 = *v22;
    *(_OWORD *)(a2 + 16) = v23;
    *(_OWORD *)(a2 + 32) = v24;
    *(_OWORD *)(a2 + 48) = v25;
    *(_DWORD *)(a2 + 64) = 0;
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v33);
  }
  return a2;
}
