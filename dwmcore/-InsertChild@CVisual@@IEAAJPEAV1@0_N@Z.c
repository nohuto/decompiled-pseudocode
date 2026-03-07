__int64 __fastcall CVisual::InsertChild(CVisual *this, struct CVisual *a2, struct CVisual *a3, char a4)
{
  struct CManipulationManager *v7; // r14
  __int64 v8; // rax
  const char *v9; // r9
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rax
  int v14; // eax
  unsigned int v15; // ecx
  CVisual *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  _BYTE *v25; // rbx
  char v26; // al
  char v27; // cl
  int v28; // r8d
  bool v29; // zf
  int v30; // ecx
  unsigned int v31; // ebx
  unsigned int Count; // eax
  _QWORD *v34; // r12
  __int64 v35; // rax
  _BYTE *v36; // rax
  unsigned __int64 v37; // r11
  __int64 v38; // r10
  unsigned __int64 v39; // rdx
  struct CVisual *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  _BYTE *v43; // rdx
  unsigned int i; // eax
  _QWORD ***v45; // rcx
  _QWORD **v46; // rcx
  _QWORD *j; // rax
  __int64 v48; // rcx
  _BYTE *v49; // rdx
  unsigned int k; // eax
  _QWORD ***v51; // rcx
  _QWORD **v52; // rcx
  _QWORD *m; // rax
  __int64 v54; // rcx
  _BYTE *v55; // rdx
  unsigned int n; // eax
  _QWORD ***v57; // rcx
  _QWORD **v58; // rcx
  _QWORD *ii; // rax
  __int64 v60; // rbx
  __int64 v61; // rbp
  __int64 v62; // rax
  __int64 v63; // r15
  __int64 v64; // r13
  __int64 v65; // rax
  struct CManipulationManager *v66; // rax
  __int64 ProjectedShadowCasters; // rax
  CProjectedShadowCaster **v68; // rbp
  CProjectedShadowCaster **jj; // rbx
  __int64 v70; // rbx
  __int64 v71; // rbp
  __int64 v72; // rax
  CComposition *v73; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct CManipulationManager *v75; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v76; // [rsp+78h] [rbp+10h]

  v75 = this;
  v7 = this;
  if ( *((CVisual **)a2 + 11) == this )
  {
    v31 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x236u, 0LL);
  }
  else
  {
    v8 = *((_QWORD *)this + 10);
    v9 = (const char *)(v8 & 2);
    v10 = v8 & 1;
    v11 = (unsigned __int64 *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
    if ( v9 )
      v12 = *v11;
    else
      v12 = v10;
    if ( a3 )
    {
      if ( !v12 )
        goto LABEL_110;
      v37 = v12 - 1;
      v38 = 8 * v12 + 8;
      do
      {
        if ( v9 )
          v39 = *v11;
        else
          v39 = v10;
        if ( v37 < v39 )
        {
          v29 = v39 == 1;
          v40 = (struct CVisual *)v11;
          if ( !v29 )
            v40 = *(struct CVisual **)((char *)v11 + v38);
          if ( v40 == a3 )
            break;
        }
        --v37;
        v38 -= 8LL;
        --v12;
      }
      while ( v12 );
      if ( !v12 )
LABEL_110:
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x24C,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visual.cpp",
          v9);
      if ( !a4 )
        --v12;
    }
    else
    {
      v13 = 0LL;
      if ( !a4 )
        v13 = v12;
      v12 = v13;
    }
    v14 = CPtrArrayBase::InsertAt((struct CManipulationManager *)((char *)v7 + 80), (unsigned __int64)a2, v12);
    v76 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x254u, 0LL);
    }
    else
    {
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 8LL))(a2);
      v16 = (CVisual *)*((_QWORD *)a2 + 11);
      if ( v16 )
        CVisual::RemoveChild(v16, a2);
      *((_QWORD *)a2 + 73) = 0LL;
      *((_QWORD *)a2 + 11) = v7;
      v17 = *((_QWORD *)a2 + 29);
      if ( *(int *)v17 < 0 )
      {
        v42 = *(unsigned int *)(v17 + 4);
        v43 = (_BYTE *)(v17 + 8);
        for ( i = 0; i < (unsigned int)v42; ++v43 )
        {
          if ( *v43 == 1 )
            break;
          ++i;
        }
        if ( i >= (unsigned int)v42 )
          v45 = 0LL;
        else
          v45 = (_QWORD ***)(v17 + v42 + 15 + 8LL * i - (((_BYTE)v42 + 15) & 7));
        v46 = *v45;
        if ( v46 )
        {
          for ( j = *v46; j != v46; j = (_QWORD *)*j )
            *(j - 14) = 0LL;
        }
      }
      *((_BYTE *)a2 + 497) = 1;
      v18 = *((_QWORD *)a2 + 29);
      if ( *(int *)v18 < 0 )
      {
        v48 = *(unsigned int *)(v18 + 4);
        v49 = (_BYTE *)(v18 + 8);
        for ( k = 0; k < (unsigned int)v48; ++v49 )
        {
          if ( *v49 == 1 )
            break;
          ++k;
        }
        if ( k >= (unsigned int)v48 )
          v51 = 0LL;
        else
          v51 = (_QWORD ***)(v48 + 15 + v18 + 8LL * k - (((_BYTE)v48 + 15) & 7));
        v52 = *v51;
        if ( v52 )
        {
          for ( m = *v52; m != v52; m = (_QWORD *)*m )
            *((_BYTE *)m - 199) = 1;
        }
      }
      *((_BYTE *)a2 + 498) = 1;
      v19 = *((_QWORD *)a2 + 29);
      if ( *(int *)v19 < 0 )
      {
        v54 = *(unsigned int *)(v19 + 4);
        v55 = (_BYTE *)(v19 + 8);
        for ( n = 0; n < (unsigned int)v54; ++v55 )
        {
          if ( *v55 == 1 )
            break;
          ++n;
        }
        if ( n >= (unsigned int)v54 )
          v57 = 0LL;
        else
          v57 = (_QWORD ***)(v54 + 15 + v19 + 8LL * n - (((_BYTE)v54 + 15) & 7));
        v58 = *v57;
        if ( v58 )
        {
          for ( ii = *v58; ii != v58; ii = (_QWORD *)*ii )
            *((_BYTE *)ii - 198) = 1;
        }
      }
      if ( (**((_DWORD **)a2 + 29) & 0x40000) != 0 )
      {
        ProjectedShadowCasters = CVisual::GetProjectedShadowCasters((__int64)a2);
        v68 = *(CProjectedShadowCaster ***)(ProjectedShadowCasters + 8);
        for ( jj = *(CProjectedShadowCaster ***)ProjectedShadowCasters; jj != v68; ++jj )
          CProjectedShadowCaster::InvalidateMaskContent(*jj);
      }
      if ( (*((_BYTE *)a2 + 103) & 1) != 0 )
      {
        v20 = *((_QWORD *)v7 + 3);
        if ( (v20 & 2) != 0 )
          v20 = *(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v20) = v20 & 1;
        if ( (_DWORD)v20 )
        {
          v60 = 0LL;
          v61 = (unsigned int)v20;
          do
          {
            v62 = CPtrArrayBase::operator[]((char *)v7 + 24, v60);
            if ( v62 != *((_QWORD *)v7 + 11) )
              (*(void (__fastcall **)(__int64, _QWORD, struct CManipulationManager *))(*(_QWORD *)v62 + 72LL))(
                v62,
                0LL,
                v7);
            ++v60;
            --v61;
          }
          while ( v61 );
        }
        (*(void (__fastcall **)(struct CManipulationManager *))(*(_QWORD *)v7 + 160LL))(v7);
        v21 = *((_QWORD *)v7 + 11);
        *((_BYTE *)v7 + 96) |= 0x11u;
        if ( (*((_BYTE *)v7 + 103) & 1) != 0 )
        {
          do
          {
            if ( !v21 )
              break;
            if ( (*(_BYTE *)(v21 + 96) & 0x11) == 0x11 )
              break;
            *(_BYTE *)(v21 + 96) |= 0x11u;
            CVisual::NotifyVisualTreeListeners(v21, 0LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 160LL))(v21);
            v41 = v21;
            v21 = *(_QWORD *)(v21 + 88);
          }
          while ( (*(_BYTE *)(v41 + 103) & 1) != 0 );
        }
        v22 = *((_QWORD *)a2 + 3);
        if ( (v22 & 2) != 0 )
          v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v22) = v22 & 1;
        if ( (_DWORD)v22 )
        {
          v70 = 0LL;
          v71 = (unsigned int)v22;
          do
          {
            v72 = CPtrArrayBase::operator[]((char *)a2 + 24, v70);
            if ( v72 != *((_QWORD *)a2 + 11) )
              (*(void (__fastcall **)(__int64, __int64, struct CVisual *))(*(_QWORD *)v72 + 72LL))(v72, 1LL, a2);
            ++v70;
            --v71;
          }
          while ( v71 );
        }
        v23 = (*(__int64 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 160LL))(a2);
        *((_BYTE *)a2 + 96) |= 4u;
        v24 = v23;
        if ( v23 )
          ++*(_DWORD *)(v23 + 28);
        v25 = (_BYTE *)*((_QWORD *)a2 + 11);
        if ( (*((_BYTE *)a2 + 103) & 1) != 0 )
        {
          do
          {
            if ( !v25 )
              break;
            v26 = v25[96];
            if ( v26 < 0 )
              break;
            v25[96] = v26 | 0x80;
            Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v25 + 24));
            v34 = v25 + 88;
            if ( Count )
            {
              v63 = 0LL;
              v64 = Count;
              do
              {
                v65 = CPtrArrayBase::operator[](v25 + 24, v63);
                if ( v65 != *v34 )
                  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)v65 + 72LL))(v65, 1LL, v25);
                ++v63;
                --v64;
              }
              while ( v64 );
            }
            v35 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v25 + 160LL))(v25);
            if ( v35 && v24 != v35 )
            {
              ++*(_DWORD *)(v35 + 24);
              v24 = v35;
            }
            v36 = v25;
            v25 = (_BYTE *)*v34;
          }
          while ( (v36[103] & 1) != 0 );
          v7 = v75;
        }
        if ( (*((_BYTE *)a2 + 101) & 0x40) != 0 )
        {
          v75 = 0LL;
          v73 = (CComposition *)*((_QWORD *)v7 + 2);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
          if ( (int)CComposition::GetManipulationManager(v73, &v75) >= 0 )
            CManipulationManager::QueueMidManipulationUpdate(v75, 2LL, a2);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
        }
        v27 = *((_BYTE *)a2 + 272);
        v28 = *((_DWORD *)a2 + 67) + 1;
        if ( (v27 & 4) == 0 )
          v28 = *((_DWORD *)a2 + 67);
        v29 = (v27 & 1) == 0;
        v30 = *((_DWORD *)a2 + 66) + 1;
        if ( v29 )
          v30 = *((_DWORD *)a2 + 66);
        if ( v30 || v28 )
        {
          v66 = v7;
          do
          {
            *((_DWORD *)v7 + 66) += v30;
            *((_DWORD *)v7 + 67) += v28;
            v7 = (struct CManipulationManager *)*((_QWORD *)v7 + 11);
            if ( v66 )
            {
              v66 = (struct CManipulationManager *)*((_QWORD *)v66 + 11);
              if ( v66 )
                v66 = (struct CManipulationManager *)*((_QWORD *)v66 + 11);
            }
          }
          while ( v7 != v66 );
        }
      }
    }
    return v76;
  }
  return v31;
}
