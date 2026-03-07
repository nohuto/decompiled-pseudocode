__int64 __fastcall ExtTextOutRect(struct XDCOBJ *this, struct tagRECT *a2, const struct RFONTOBJ::Tag *a3)
{
  unsigned int v6; // esi
  int v7; // eax
  LONG left; // edx
  LONG top; // r9d
  LONG right; // r8d
  LONG bottom; // r10d
  __int64 v12; // r15
  __int64 v13; // rbx
  int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // rdi
  __int64 v18; // r12
  int v19; // edx
  BOOL v20; // edi
  int v21; // r9d
  int v22; // r8d
  int v23; // eax
  __int64 v24; // r8
  __int64 v25; // r13
  struct ECLIPOBJ *v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rbx
  struct Gre::Base::SESSION_GLOBALS *v29; // rax
  struct REGION *v32; // rax
  LONG v33; // eax
  LONG v34; // eax
  __int128 *v35; // r13
  __int128 v36; // [rsp+60h] [rbp-19h] BYREF
  __int64 v37; // [rsp+70h] [rbp-9h] BYREF
  int v38; // [rsp+7Ch] [rbp+3h]
  __int128 v39; // [rsp+80h] [rbp+7h] BYREF

  if ( !*(_QWORD *)this || (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0x10000) != 0 )
    return 0;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v37, this, 0x80000204);
  v6 = 1;
  v7 = *(_DWORD *)(v37 + 32);
  if ( (v7 & 1) == 0 )
    return (unsigned int)GreExtTextOutWLocked(
                           this,
                           0,
                           0,
                           2u,
                           a2,
                           0LL,
                           0,
                           0LL,
                           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 213LL),
                           0LL,
                           0,
                           a3);
  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  LODWORD(v39) = a2->left;
  *(_QWORD *)((char *)&v39 + 4) = __PAIR64__(right, top);
  HIDWORD(v39) = bottom;
  if ( (v7 & 0x43) != 0x43 )
  {
    bCvtPts1(v37, &v39, 2LL);
    bottom = HIDWORD(v39);
    right = DWORD2(v39);
    top = DWORD1(v39);
    left = v39;
  }
  if ( v38 )
  {
    ++left;
    ++right;
    LODWORD(v39) = left;
    DWORD2(v39) = right;
  }
  if ( left > right )
  {
    v33 = left;
    left = right;
    LODWORD(v39) = right;
    right = v33;
    DWORD2(v39) = v33;
  }
  if ( top > bottom )
  {
    v34 = top;
    DWORD1(v39) = bottom;
    top = bottom;
    HIDWORD(v39) = v34;
    bottom = v34;
  }
  if ( left == right || top == bottom )
    return v6;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(this, (struct ERECTL *)&v39);
  v12 = *(_QWORD *)(*(_QWORD *)this + 496LL);
  if ( !v12 )
    return v6;
  if ( ((*(_DWORD *)(v12 + 116) & 8) != 0 || *(_QWORD *)(v12 + 224))
    && _bittest16((const signed __int16 *)(v12 + 102), 9u)
    || !(unsigned int)_SurfaceAccessCheck(*(struct SURFACE **)(*(_QWORD *)this + 496LL)) )
  {
    EngSetLastError(5u);
    return 0;
  }
  v13 = *(_QWORD *)this;
  v14 = v39;
  v15 = *(_DWORD *)(*(_QWORD *)this + 40LL) & 1LL;
  v16 = *(int *)(*(_QWORD *)this + 8 * v15 + 1016);
  if ( (unsigned __int64)(v16 + (int)v39 + 0x80000000LL) <= 0xFFFFFFFF
    && (unsigned __int64)(v16 + SDWORD2(v39) + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v17 = *(int *)(v13 + 8 * v15 + 1020);
    if ( (unsigned __int64)(v17 + SDWORD1(v39) + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v17 + SHIDWORD(v39) + 0x80000000LL) <= 0xFFFFFFFF )
    {
      *(_QWORD *)&v36 = 0LL;
      LODWORD(v39) = v16 + v39;
      v18 = 0LL;
      v19 = *(_DWORD *)(v13 + 8 * v15 + 1016) + DWORD2(v39);
      v20 = 0;
      v21 = *(_DWORD *)(v13 + 8 * v15 + 1020) + DWORD1(v39);
      *(_QWORD *)((char *)&v39 + 4) = __PAIR64__(v19, v21);
      v22 = *(_DWORD *)(v13 + 8 * v15 + 1020) + HIDWORD(v39);
      HIDWORD(v39) = v22;
      if ( (int)v16 + v14 >= *(_DWORD *)(v13 + 1000) && v19 <= *(_DWORD *)(v13 + 1008) && v21 >= *(_DWORD *)(v13 + 1004) )
        v20 = v22 <= *(_DWORD *)(v13 + 1012);
      v23 = *(_DWORD *)(v13 + 520);
      if ( (v23 & 1) != 0 && (v23 & 2) == 0 )
      {
        v35 = &v39;
        do
        {
          if ( !(unsigned int)bFToL(v15, (char *)&v39 + 4 * (unsigned int)v18, 6LL) )
            break;
          LODWORD(v18) = v18 + 1;
          v35 = (__int128 *)((char *)v35 + 4);
        }
        while ( (unsigned int)v18 < 4 );
        v18 = v36;
      }
      if ( !v20 )
      {
        v18 = v13 + 1768;
        v32 = XDCOBJ::prgnEffRao(this);
        XCLIPOBJ::vSetup((XCLIPOBJ *)(v13 + 1768), v32, (struct ERECTL *)&v39, 2);
        v39 = *(_OWORD *)(v13 + 1772);
        if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v39) )
          return v6;
      }
      v24 = *(_QWORD *)(*(_QWORD *)this + 976LL);
      v25 = *(_QWORD *)this + 1608LL;
      v26 = (struct ECLIPOBJ *)*(unsigned int *)(v24 + 152);
      if ( ((*(_BYTE *)(*(_QWORD *)this + 316LL) | *(_BYTE *)(v24 + 152)) & 8) != 0 )
      {
        *(_DWORD *)(v24 + 152) = (unsigned int)v26 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)this + 316LL) &= ~8u;
        v27 = *(_QWORD *)(v12 + 128);
        v28 = *(_QWORD *)(*(_QWORD *)this + 88LL);
        v29 = Gre::Base::Globals((Gre::Base *)0xFFFFFFF7LL);
        EBRUSHOBJ::vInitBrush(
          v25,
          *(_QWORD *)this,
          *((_QWORD *)v29 + 31),
          v28,
          v27,
          v12,
          (*(_DWORD *)(*(_QWORD *)this + 72LL) >> 15) & 1);
      }
      if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 && (*(_DWORD *)(v25 + 120) & 0x100) == 0 )
      {
        v36 = v39;
        XDCOBJ::vAccumulateTight(this, v26, (struct ERECTL *)&v36);
      }
      ++*(_DWORD *)(v12 + 92);
      if ( (*(_DWORD *)(v12 + 112) & 1) != 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)(v12 + 48) + 2808LL))(
                               v12 + 24,
                               0LL,
                               0LL,
                               v18,
                               0LL,
                               &v39,
                               0LL,
                               0LL,
                               v25,
                               *(_QWORD *)this + 1192LL,
                               61680);
      else
        return (unsigned int)((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64, __int64, int))EngBitBlt)(
                               v12 + 24,
                               0LL,
                               0LL,
                               v18,
                               0LL,
                               &v39,
                               0LL,
                               0LL,
                               v25,
                               *(_QWORD *)this + 1192LL,
                               61680);
    }
  }
  return 0LL;
}
