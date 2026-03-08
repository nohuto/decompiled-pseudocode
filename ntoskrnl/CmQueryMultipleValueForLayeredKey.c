/*
 * XREFs of CmQueryMultipleValueForLayeredKey @ 0x140A11200
 * Callers:
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     CmpGetKeyNodeForKcb @ 0x1406B7CA4 (CmpGetKeyNodeForKcb.c)
 *     CmpIsValueTombstone @ 0x1406BB868 (CmpIsValueTombstone.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindNameInListWithStatus @ 0x1407A8DA0 (CmpFindNameInListWithStatus.c)
 *     CmpGetValueData @ 0x1407AAC20 (CmpGetValueData.c)
 *     CmpUnlockKcbStack @ 0x1407ABFF8 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407AF294 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpLockKcbStackShared @ 0x1407AF490 (CmpLockKcbStackShared.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AF24F0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmQueryMultipleValueForLayeredKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v7; // rsi
  __int64 v8; // r15
  void *v9; // r12
  unsigned int v10; // r13d
  int started; // edi
  __int64 v12; // rax
  unsigned int v13; // r14d
  __int64 v14; // rdi
  unsigned __int16 v15; // cx
  __int64 v16; // rdx
  __int16 i; // r14
  __int64 KcbAtLayerHeight; // rax
  int v19; // r8d
  __int64 v20; // rsi
  int v21; // eax
  __int64 KeyNodeForKcb; // rax
  __int64 v23; // rcx
  int v24; // eax
  char v25; // r14
  ULONG_PTR v26; // rcx
  __int64 CellFlat; // rax
  ULONG_PTR v28; // rcx
  unsigned int v29; // eax
  unsigned int v30; // edi
  unsigned int v31; // r14d
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  char v38; // [rsp+41h] [rbp-B7h]
  _BYTE BugCheckParameter4[14]; // [rsp+42h] [rbp-B6h] BYREF
  __int64 v40; // [rsp+50h] [rbp-A8h] BYREF
  void *Src; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v42; // [rsp+60h] [rbp-98h] BYREF
  unsigned int Size; // [rsp+68h] [rbp-90h] BYREF
  int Size_4; // [rsp+6Ch] [rbp-8Ch]
  __int64 v45; // [rsp+70h] [rbp-88h] BYREF
  __int64 v46; // [rsp+78h] [rbp-80h]
  __int64 v47; // [rsp+80h] [rbp-78h]
  __int64 v48; // [rsp+88h] [rbp-70h]
  __int64 v49; // [rsp+90h] [rbp-68h]
  __int128 v50; // [rsp+98h] [rbp-60h] BYREF
  __int128 v51; // [rsp+A8h] [rbp-50h]

  v40 = 0LL;
  v45 = 0LL;
  v42 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  WORD1(v50) = -1;
  v7 = 0LL;
  HvpGetCellContextReinitialize(&v40);
  HvpGetCellContextReinitialize(&v45);
  v8 = 0LL;
  v47 = 0LL;
  v9 = 0LL;
  Src = 0LL;
  BugCheckParameter4[0] = 0;
  HvpGetCellContextReinitialize(&v42);
  v10 = 0;
  *(_DWORD *)&BugCheckParameter4[6] = 0;
  v38 = 0;
  v48 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v50, v48);
  if ( started < 0 )
  {
    v25 = 0;
  }
  else
  {
    CmpLockKcbStackShared((__int64)&v50);
    BugCheckParameter4[1] = 1;
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
    {
      v25 = 1;
    }
    else
    {
      v12 = 0LL;
      v13 = 0;
      while ( 1 )
      {
        Size_4 = v12;
        if ( (unsigned int)v12 >= a3 )
          break;
        v49 = 3 * v12;
        v14 = *(_QWORD *)(a2 + 24 * v12);
        v46 = v14;
        v15 = *(_WORD *)v14;
        if ( *(_WORD *)v14 )
        {
          v16 = *(_QWORD *)(v14 + 8);
          do
          {
            if ( *(_WORD *)(v16 + 2 * (((unsigned __int64)v15 - 1) >> 1)) )
              break;
            v15 -= 2;
            *(_WORD *)v14 = v15;
          }
          while ( v15 );
        }
        *(_DWORD *)&BugCheckParameter4[2] = -1;
        for ( i = *(_WORD *)(v48 + 66); i >= 0; --i )
        {
          KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v50, i);
          v20 = KcbAtLayerHeight;
          if ( a1 && *(__int16 *)(KcbAtLayerHeight + 66) == *(unsigned __int16 *)(a1 + 4) )
          {
            v21 = *(unsigned __int8 *)(KcbAtLayerHeight + 65);
            if ( !(_BYTE)v21 )
              v21 = v19;
          }
          else
          {
            v21 = 0;
            if ( *(_WORD *)(v20 + 66) )
              v21 = *(unsigned __int8 *)(v20 + 65);
          }
          if ( v21 == 1 )
            break;
          if ( *(_DWORD *)(v20 + 40) != -1 )
          {
            KeyNodeForKcb = CmpGetKeyNodeForKcb(v20, (__int64)&v45, 0);
            started = CmpFindNameInListWithStatus(
                        *(_QWORD *)(v20 + 32),
                        (_DWORD *)(KeyNodeForKcb + 36),
                        v14,
                        0,
                        0LL,
                        (__int64)&BugCheckParameter4[2]);
            v23 = *(_QWORD *)(v20 + 32);
            if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v23, &v45);
            else
              HvpReleaseCellPaged(v23, (unsigned int *)&v45);
            if ( started >= 0 )
            {
              v8 = v20;
              v47 = v20;
              break;
            }
            if ( started != -1073741772 )
              goto LABEL_33;
            if ( a1 && *(__int16 *)(v20 + 66) == *(unsigned __int16 *)(a1 + 4) )
            {
              v24 = *(unsigned __int8 *)(v20 + 65);
              if ( !(_BYTE)v24 )
                v24 = 2;
            }
            else
            {
              v24 = 0;
              if ( *(_WORD *)(v20 + 66) )
                v24 = *(unsigned __int8 *)(v20 + 65);
            }
            if ( v24 )
              break;
            v14 = v46;
          }
        }
        if ( *(_DWORD *)&BugCheckParameter4[2] == -1 )
        {
          started = -1073741772;
LABEL_33:
          v7 = 0LL;
          goto LABEL_34;
        }
        v26 = *(_QWORD *)(v8 + 32);
        if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v26, *(unsigned int *)&BugCheckParameter4[2], &v40);
        else
          CellFlat = HvpGetCellPaged(v26, *(unsigned int *)&BugCheckParameter4[2], (unsigned int *)&v40);
        v7 = CellFlat;
        v46 = CellFlat;
        if ( CmpIsValueTombstone(*(_QWORD *)(v8 + 32), CellFlat) )
        {
          started = -1073741772;
LABEL_34:
          v25 = 1;
          goto LABEL_68;
        }
        v29 = *(_DWORD *)(v7 + 4);
        v30 = v29 + 0x80000000;
        if ( v29 < 0x80000000 )
          v30 = *(_DWORD *)(v7 + 4);
        Size = v30;
        v10 = (v10 + 7) & 0xFFFFFFF8;
        v31 = (*(_DWORD *)&BugCheckParameter4[6] + 7) & 0xFFFFFFF8;
        if ( v38 || v30 + v10 > *a5 || v30 + v10 < v10 )
        {
          v38 = 1;
        }
        else
        {
          if ( !CmpGetValueData(
                  v28,
                  *(unsigned int *)&BugCheckParameter4[2],
                  v7,
                  &Size,
                  (__int64)&Src,
                  (__int64)BugCheckParameter4) )
          {
            started = -1073741670;
            v9 = Src;
            goto LABEL_34;
          }
          v30 = Size;
          memmove((void *)(a4 + v10), Src, Size);
          v32 = v49;
          *(_DWORD *)(a2 + 8 * v49 + 16) = *(_DWORD *)(v7 + 12);
          *(_DWORD *)(a2 + 8 * v32 + 8) = v30;
          *(_DWORD *)(a2 + 8 * v32 + 12) = v10;
          v10 += v30;
          if ( BugCheckParameter4[0] )
          {
            ExFreePoolWithTag(Src, 0);
          }
          else
          {
            v33 = *(_QWORD *)(v8 + 32);
            if ( (*(_BYTE *)(v33 + 140) & 1) != 0 )
              HvpReleaseCellFlat(v33, &v42);
            else
              HvpReleaseCellPaged(v33, (unsigned int *)&v42);
          }
          v9 = 0LL;
          Src = 0LL;
        }
        v13 = v30 + v31;
        *(_DWORD *)&BugCheckParameter4[6] = v13;
        v34 = *(_QWORD *)(v8 + 32);
        if ( (*(_BYTE *)(v34 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v34, &v40);
        else
          HvpReleaseCellPaged(v34, (unsigned int *)&v40);
        v12 = (unsigned int)(Size_4 + 1);
      }
      *a5 = v10;
      if ( a6 )
        *a6 = v13;
      v7 = 0LL;
      v25 = 1;
      if ( v38 )
        started = -2147483643;
      else
        started = 0;
    }
  }
LABEL_68:
  if ( v9 )
  {
    if ( BugCheckParameter4[0] )
    {
      ExFreePoolWithTag(v9, 0);
    }
    else
    {
      v35 = *(_QWORD *)(v8 + 32);
      if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v35, &v42);
      else
        HvpReleaseCellPaged(v35, (unsigned int *)&v42);
    }
  }
  if ( v7 )
  {
    v36 = *(_QWORD *)(v8 + 32);
    if ( (*(_BYTE *)(v36 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v36, &v40);
    else
      HvpReleaseCellPaged(v36, (unsigned int *)&v40);
  }
  if ( v25 )
    CmpUnlockKcbStack((__int64)&v50);
  if ( *((_QWORD *)&v51 + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&v51 + 1));
  return (unsigned int)started;
}
