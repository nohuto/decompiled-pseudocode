/*
 * XREFs of ?ExtTextOutRect@@YAHAEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x1C00B4620
 * Callers:
 *     GreExtTextOutRect @ 0x1C00AA21C (GreExtTextOutRect.c)
 *     ?GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z @ 0x1C00B4A7C (-GreBatchTextOutRect@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUTRECT@@K@Z.c)
 * Callees:
 *     bCvtPts1 @ 0x1C0084CF0 (bCvtPts1.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0092390 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00B1630 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C00B3108 (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C00B3134 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00B4A34 (-_SurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00B4CCC (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00B61E0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     bFToL @ 0x1C00FB538 (bFToL.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C016E4B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExtTextOutRect(struct XDCOBJ *a1, struct tagRECT *a2)
{
  __int64 v3; // rdx
  unsigned int v5; // ebx
  int v6; // eax
  LONG left; // ecx
  LONG top; // r8d
  LONG right; // edx
  LONG bottom; // r9d
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r12
  int v19; // r8d
  BOOL v20; // r15d
  int v21; // r9d
  int v22; // edx
  int v23; // eax
  struct REGION *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r14
  struct ECLIPOBJ *v28; // rdx
  __int64 v29; // rcx
  LONG v32; // eax
  LONG v33; // eax
  __int128 *v34; // r13
  unsigned __int64 v35; // [rsp+60h] [rbp-19h] BYREF
  int v36; // [rsp+68h] [rbp-11h]
  int v37; // [rsp+6Ch] [rbp-Dh]
  __int128 v38; // [rsp+70h] [rbp-9h] BYREF
  __int128 v39; // [rsp+80h] [rbp+7h] BYREF

  v3 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v3 + 36) & 0x10000) != 0 )
    return 0;
  v5 = 1;
  v36 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 208LL);
  v37 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 108LL) & 1;
  EXFORMOBJ::vInit((EXFORMOBJ *)&v35, a1, 0x204u, 0x80000000);
  v6 = *(_DWORD *)(v35 + 32);
  if ( (v6 & 1) == 0 )
    return (unsigned int)GreExtTextOutWLocked(
                           a1,
                           0,
                           0,
                           2,
                           a2,
                           0LL,
                           0,
                           0LL,
                           *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 213LL),
                           0LL,
                           0);
  left = a2->left;
  top = a2->top;
  right = a2->right;
  bottom = a2->bottom;
  LODWORD(v39) = a2->left;
  *(_QWORD *)((char *)&v39 + 4) = __PAIR64__(right, top);
  HIDWORD(v39) = bottom;
  if ( (v6 & 0x43) != 0x43 )
  {
    bCvtPts1(v35, &v39, 2LL);
    bottom = HIDWORD(v39);
    right = DWORD2(v39);
    top = DWORD1(v39);
    left = v39;
  }
  if ( v37 )
  {
    ++left;
    ++right;
    LODWORD(v39) = left;
    DWORD2(v39) = right;
  }
  if ( left > right )
  {
    v32 = left;
    LODWORD(v39) = right;
    left = right;
    DWORD2(v39) = v32;
    right = v32;
  }
  if ( top > bottom )
  {
    v33 = top;
    DWORD1(v39) = bottom;
    top = bottom;
    HIDWORD(v39) = v33;
    bottom = v33;
  }
  if ( left == right || top == bottom )
    return v5;
  v11 = *(_QWORD *)a1;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
  {
    XDCOBJ::vAccumulate(a1, (struct ERECTL *)&v39);
    v11 = *(_QWORD *)a1;
  }
  v12 = *(_QWORD *)(v11 + 496);
  if ( !v12 )
    return v5;
  if ( ((*(_DWORD *)(v12 + 116) & 8) != 0 || *(_QWORD *)(v12 + 224)) && (*(_WORD *)(v12 + 102) & 0x200) != 0
    || !(unsigned int)_SurfaceAccessCheck((struct SURFACE *)v12) )
  {
    EngSetLastError(5u);
    return 0;
  }
  v13 = *(_QWORD *)a1;
  v14 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1LL;
  v15 = *(int *)(*(_QWORD *)a1 + 8 * v14 + 1016);
  if ( (unsigned __int64)(v15 + (int)v39 + 0x80000000LL) <= 0xFFFFFFFF
    && (unsigned __int64)(v15 + SDWORD2(v39) + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v16 = *(int *)(v13 + 8 * v14 + 1020);
    if ( (unsigned __int64)(v16 + SDWORD1(v39) + 0x80000000LL) <= 0xFFFFFFFF
      && (unsigned __int64)(v16 + SHIDWORD(v39) + 0x80000000LL) <= 0xFFFFFFFF )
    {
      v17 = (unsigned int)(v15 + v39);
      *(_QWORD *)&v38 = 0LL;
      LODWORD(v39) = v17;
      v18 = 0LL;
      v19 = *(_DWORD *)(v13 + 8 * v14 + 1016) + DWORD2(v39);
      v20 = 0;
      v21 = *(_DWORD *)(v13 + 8 * v14 + 1020) + DWORD1(v39);
      *(_QWORD *)((char *)&v39 + 4) = __PAIR64__(v19, v21);
      v22 = HIDWORD(v39) + *(_DWORD *)(v13 + 8 * v14 + 1020);
      HIDWORD(v39) = v22;
      if ( (int)v17 >= *(_DWORD *)(v13 + 1000) && v19 <= *(_DWORD *)(v13 + 1008) && v21 >= *(_DWORD *)(v13 + 1004) )
        v20 = v22 <= *(_DWORD *)(v13 + 1012);
      v23 = *(_DWORD *)(v13 + 520);
      if ( (v23 & 1) != 0 && (v23 & 2) == 0 )
      {
        v34 = &v39;
        do
        {
          if ( !(unsigned int)bFToL(v17, (char *)&v39 + 4 * (unsigned int)v18, 6LL) )
            break;
          LODWORD(v18) = v18 + 1;
          v34 = (__int128 *)((char *)v34 + 4);
        }
        while ( (unsigned int)v18 < 4 );
        v18 = v38;
      }
      if ( !v20 )
      {
        v18 = v13 + 1776;
        v24 = DC::prgnRao((DC *)v13) ? DC::prgnRao((DC *)v13) : DC::prgnVisSnap((DC *)v13);
        XCLIPOBJ::vSetup((XCLIPOBJ *)(v13 + 1776), v24, (struct ERECTL *)&v39, 2);
        v39 = *(_OWORD *)(v13 + 1780);
        if ( ERECTL::bEmpty((ERECTL *)&v39) )
          return v5;
      }
      v25 = *(_QWORD *)a1;
      v26 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
      v27 = *(_QWORD *)a1 + 1616LL;
      v28 = (struct ECLIPOBJ *)*(unsigned int *)(v26 + 152);
      if ( (((unsigned __int8)v28 | *(_BYTE *)(*(_QWORD *)a1 + 316LL)) & 8) != 0 )
      {
        *(_DWORD *)(v26 + 152) = (unsigned int)v28 & 0xFFFFFFF7;
        *(_DWORD *)(*(_QWORD *)a1 + 316LL) &= ~8u;
        EBRUSHOBJ::vInitBrush(
          v27,
          *(_QWORD *)a1,
          gpbrBackground,
          *(_QWORD *)(*(_QWORD *)a1 + 88LL),
          *(_QWORD *)(v12 + 128),
          v12,
          (*(_DWORD *)(*(_QWORD *)a1 + 72LL) >> 15) & 1);
        v25 = *(_QWORD *)a1;
      }
      if ( (*(_DWORD *)(v25 + 36) & 0xE0) != 0 && (*(_DWORD *)(v27 + 120) & 0x100) == 0 )
      {
        v38 = v39;
        XDCOBJ::vAccumulateTight(a1, v28, (struct ERECTL *)&v38);
      }
      ++*(_DWORD *)(v12 + 92);
      v29 = *(_QWORD *)a1 + 1200LL;
      if ( (*(_DWORD *)(v12 + 112) & 1) != 0 )
        return (unsigned int)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD, __int128 *, _QWORD, _QWORD, __int64, __int64, int))(*(_QWORD *)(v12 + 48) + 2832LL))(
                               v12 + 24,
                               0LL,
                               0LL,
                               v18,
                               0LL,
                               &v39,
                               0LL,
                               0LL,
                               v27,
                               v29,
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
                               v27,
                               v29,
                               61680);
    }
  }
  return 0LL;
}
