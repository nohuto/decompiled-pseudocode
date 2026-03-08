/*
 * XREFs of CmpAddSecurityCellToCache @ 0x14071CF00
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1406B845C (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14071C9C4 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInsertSecurityCellList @ 0x14078F5D4 (CmpInsertSecurityCellList.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14030DD50 (CmpFindSecurityCellCacheIndex.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpSecConvKey @ 0x1407A5440 (CmpSecConvKey.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpAddSecurityCellToCache(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        char a3,
        __int64 a4)
{
  unsigned int v5; // ebp
  int v7; // ecx
  __int64 CellFlat; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // ecx
  int v14; // eax
  __int64 v15; // r8
  ULONG_PTR *v16; // rax
  ULONG_PTR v17; // rcx
  ULONG_PTR **v18; // rdx
  __int64 v19; // rbx
  unsigned int v20; // eax
  __int64 v21; // rcx
  const void *v23; // rbx
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // esi
  void *v27; // rax
  unsigned int v28; // ecx
  _DWORD v29[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v30; // [rsp+68h] [rbp+20h] BYREF
  int v31; // [rsp+6Ch] [rbp+24h]

  v31 = HIDWORD(a4);
  v29[0] = -1;
  v30 = 0;
  v5 = BugCheckParameter4;
  v29[1] = 0;
  if ( CmpFindSecurityCellCacheIndex(BugCheckParameter3, BugCheckParameter4, &v30) == 1 )
    return 0LL;
  v7 = *(_DWORD *)(BugCheckParameter3 + 1876);
  if ( *(_DWORD *)(BugCheckParameter3 + 1872) == v7 )
  {
    v23 = *(const void **)(BugCheckParameter3 + 1888);
    v24 = v7 + 16;
    v25 = v7 + 256;
    v26 = 16 * *(_DWORD *)(BugCheckParameter3 + 1876);
    if ( a3 != 1 )
      v25 = v24;
    *(_DWORD *)(BugCheckParameter3 + 1876) = v25;
    v27 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(BugCheckParameter3 + 24))(
                    (unsigned int)(16 * v25),
                    0LL,
                    1666403651LL);
    v28 = *(_DWORD *)(BugCheckParameter3 + 1872);
    *(_QWORD *)(BugCheckParameter3 + 1888) = v27;
    if ( !v27 )
    {
      *(_QWORD *)(BugCheckParameter3 + 1888) = v23;
      *(_DWORD *)(BugCheckParameter3 + 1876) = v28;
      return 3221225626LL;
    }
    memmove(v27, v23, 16LL * v28);
    if ( v23 )
      (*(void (__fastcall **)(const void *, _QWORD))(BugCheckParameter3 + 32))(v23, v26);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v9 = CellFlat;
  if ( CellFlat )
  {
    v10 = (unsigned int)(*(_DWORD *)(CellFlat + 16) + 32);
    if ( *(_DWORD *)(CellFlat + 16) < 0xFFFFFFE0 && (_DWORD)v10 != 32 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(v10, 0LL, 1666403651LL);
      v12 = v11;
      if ( v11 )
      {
        memmove((void *)(v11 + 32), (const void *)(v9 + 20), *(unsigned int *)(v9 + 16));
        *(_DWORD *)v12 = v5;
        v13 = *(_DWORD *)(v9 + 16);
        *(_DWORD *)(v12 + 28) = 0;
        *(_DWORD *)(v12 + 24) = v13;
        v14 = CmpSecConvKey(*(unsigned int *)(v9 + 16), v9 + 20);
        *(_DWORD *)(v12 + 4) = v14;
        v15 = 16LL * (v14 & 0x3F);
        v16 = (ULONG_PTR *)(v12 + 8);
        v17 = v15 + BugCheckParameter3 + 1896;
        v18 = *(ULONG_PTR ***)(v17 + 8);
        if ( *v18 != (ULONG_PTR *)v17 )
          __fastfail(3u);
        v19 = v30;
        *v16 = v17;
        *(_QWORD *)(v12 + 16) = v18;
        *v18 = v16;
        *(_QWORD *)(v17 + 8) = v16;
        v20 = *(_DWORD *)(BugCheckParameter3 + 1872);
        if ( (unsigned int)v19 < v20 )
          memmove(
            (void *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * (unsigned int)(v19 + 1)),
            (const void *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * (unsigned int)v19),
            16LL * (v20 - (unsigned int)v19));
        v21 = 2 * v19;
        *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 8 * v21) = v5;
        *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 8 * v21 + 8) = v12;
        ++*(_DWORD *)(BugCheckParameter3 + 1872);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v29);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v29);
        return 0LL;
      }
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v29);
  }
  return 3221225626LL;
}
