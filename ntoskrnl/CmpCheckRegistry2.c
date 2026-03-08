/*
 * XREFs of CmpCheckRegistry2 @ 0x1407B3F40
 * Callers:
 *     CmCheckRegistry @ 0x14072DEB4 (CmCheckRegistry.c)
 * Callees:
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140781788 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpCheckLexicographicalOrder @ 0x1407B0610 (CmpCheckLexicographicalOrder.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     CmpCheckKey @ 0x1407B4B80 (CmpCheckKey.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x140A21A3C (CmpRemoveSubKeyCellNoCellRef.c)
 */

__int64 __fastcall CmpCheckRegistry2(
        ULONG_PTR BugCheckParameter3,
        int a2,
        int a3,
        __int64 a4,
        char a5,
        RTL_BITMAP *BitMapHeader,
        __int64 a7,
        int *a8)
{
  int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  int *v13; // rcx
  unsigned int *v14; // r13
  int v15; // r15d
  __int64 v16; // r12
  unsigned int *v17; // rsi
  int v18; // eax
  int v19; // eax
  unsigned int v20; // edi
  ULONG_PTR v21; // rdx
  int v22; // eax
  __int64 CellFlat; // rax
  unsigned int v24; // r14d
  ULONG_PTR v25; // rdx
  _WORD *CellPaged; // rax
  _WORD *v27; // r15
  int v28; // edi
  __int64 v29; // rdi
  __int64 v30; // rax
  _WORD *v31; // rcx
  unsigned int v32; // eax
  int v33; // eax
  __int64 v34; // r14
  int v36; // eax
  int v37; // r14d
  int v38; // r9d
  _BOOL8 v39; // rax
  int v40; // eax
  int v41; // eax
  int v42; // [rsp+20h] [rbp-58h]
  __int64 v43; // [rsp+40h] [rbp-38h]
  __int64 v44; // [rsp+48h] [rbp-30h] BYREF
  __int64 v45; // [rsp+50h] [rbp-28h] BYREF
  __int64 v46; // [rsp+58h] [rbp-20h] BYREF
  _BOOL8 v47; // [rsp+60h] [rbp-18h]
  int v48; // [rsp+B0h] [rbp+38h]
  char v50; // [rsp+C8h] [rbp+50h]

  v47 = 0LL;
  v45 = 0LL;
  v50 = 0;
  v10 = a2;
  HvpGetCellContextReinitialize(&v45);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(BugCheckParameter3 + 24))(10240LL, 0LL, 1935887683LL);
  v43 = v11;
  if ( !v11 )
  {
    v20 = -1073741670;
    SetFailureLocation(a7, 0, 13, -1073741670, 0);
    return v20;
  }
  v12 = a7;
  if ( a7 )
    *(_QWORD *)(a7 + 232) = v11;
  v13 = a8;
  v14 = (unsigned int *)(v11 - 20);
  v15 = 0;
  *(_DWORD *)(v11 + 12) = 0;
  *(_BYTE *)(v11 + 16) = 0;
  v16 = 0LL;
  *(_DWORD *)v11 = a3;
  *a8 = 0;
  v17 = (unsigned int *)v11;
  *(_QWORD *)(v11 + 4) = -1LL;
  v48 = 0;
  while ( 1 )
  {
    if ( *((_BYTE *)v17 + 16) )
      goto LABEL_15;
    v18 = *v13;
    *((_BYTE *)v17 + 16) = 1;
    if ( v18 != -1 )
      *v13 = v18 + 1;
    v19 = CmpCheckKey(BugCheckParameter3, a5, BitMapHeader, v12);
    v20 = v19;
    if ( v19 == -2147483606 )
    {
      v50 = 1;
      goto LABEL_10;
    }
    if ( v19 < 0 )
      break;
LABEL_10:
    if ( (v10 & 0x100000) != 0 && v16 )
    {
      v21 = v14[2];
      if ( (_DWORD)v21 != -1 )
      {
        v22 = CmpCheckLexicographicalOrder(BugCheckParameter3, v21, *v17);
        v20 = v22;
        if ( v22 < 0 )
        {
          if ( v22 != -1073741492 )
          {
            v42 = 37;
            v38 = v22;
            goto LABEL_94;
          }
          v36 = 48;
          v37 = v10 & 0x20000;
          goto LABEL_77;
        }
      }
      v14[2] = *v17;
    }
LABEL_15:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, *v17);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    if ( !CellFlat )
    {
      v20 = -1073741492;
      v42 = 64;
      v38 = -1073741492;
LABEL_94:
      SetFailureLocation(a7, 0, 13, v38, v42);
LABEL_95:
      v34 = v43;
      goto LABEL_52;
    }
    v24 = v17[3];
    if ( v24 < *(_DWORD *)(CellFlat + 20) )
    {
      v25 = *(unsigned int *)(CellFlat + 28);
      v46 = 0xFFFFFFFFLL;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v25);
      else
        CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
      v27 = CellPaged;
      if ( !CellPaged )
      {
        v47 = 0LL;
        v41 = 80;
LABEL_88:
        v20 = -1073741670;
LABEL_89:
        SetFailureLocation(a7, v47, 13, v20, v41);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v45);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v45);
        goto LABEL_95;
      }
      v44 = 0xFFFFFFFFLL;
      if ( *CellPaged == 26994 && (v29 = 0LL, CellPaged[1]) )
      {
        while ( 1 )
        {
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v30 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)&v27[2 * v29 + 2]);
          else
            v30 = HvpGetCellPaged(BugCheckParameter3);
          v31 = (_WORD *)v30;
          if ( !v30 )
          {
            v28 = -1;
            goto LABEL_30;
          }
          v32 = *(unsigned __int16 *)(v30 + 2);
          if ( v24 < v32 )
            break;
          v24 -= v32;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v44);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v44);
          v29 = (unsigned int)(v29 + 1);
          if ( (unsigned int)v29 >= (unsigned __int16)v27[1] )
            goto LABEL_28;
        }
        if ( ((*v31 - 26220) & 0xFDFF) != 0 )
          v28 = *(_DWORD *)&v31[2 * v24 + 2];
        else
          v28 = *(_DWORD *)&v31[4 * v24 + 2];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v44);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v44);
      }
      else
      {
LABEL_28:
        if ( ((*v27 - 26220) & 0xFDFF) != 0 )
          v28 = *(_DWORD *)&v27[2 * v24 + 2];
        else
          v28 = *(_DWORD *)&v27[4 * v24 + 2];
      }
LABEL_30:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v46);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v46);
      if ( v28 == -1 )
      {
        v47 = 0LL;
        v41 = 88;
        goto LABEL_88;
      }
      ++v16;
      ++v17[3];
      v15 = v48 + 1;
      v14 += 5;
      ++v48;
      v17 += 5;
      if ( v16 == 512 )
      {
        v20 = -1073741492;
        v41 = 96;
        goto LABEL_89;
      }
      v17[1] = *v14;
      *v17 = v28;
      v17[2] = -1;
      v17[3] = 0;
      *((_BYTE *)v17 + 16) = 0;
    }
    else
    {
      --v15;
      --v16;
      v14 -= 5;
      v48 = v15;
      v17 -= 5;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v45);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v45);
    if ( v16 < 0 )
    {
      if ( (a2 & 0x20000) == 0 )
      {
        v33 = CmpCheckAndFixSecurityCellsRefcount(BugCheckParameter3);
        v20 = v33;
        if ( v33 < 0 )
        {
          v42 = 112;
          v38 = v33;
          goto LABEL_94;
        }
      }
      v34 = v43;
      if ( v50 )
        v20 = -2147483606;
      else
        v20 = 0;
      goto LABEL_52;
    }
    v13 = a8;
    v10 = a2;
    v12 = a7;
  }
  if ( v19 != -1073741492 )
    goto LABEL_95;
  v37 = v10 & 0x20000;
  if ( v37 )
  {
    v39 = 0LL;
  }
  else if ( BYTE2(NlsMbOemCodePageTag) )
  {
    v39 = 1LL;
  }
  else
  {
    v39 = (CmpBootType & 6) != 0;
  }
  v47 = v39;
  v36 = 16;
LABEL_77:
  SetFailureLocation(a7, v47, 13, v20, v36);
  if ( v37 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 || !v15 )
  {
    v20 = -1073741492;
    SetFailureLocation(a7, 0, 13, -1073741492, 24);
    goto LABEL_95;
  }
  v34 = v43;
  v40 = CmpRemoveSubKeyCellNoCellRef(BugCheckParameter3, *(unsigned int *)(v43 + 20LL * v15 + 4));
  v20 = v40;
  if ( v40 >= 0 )
  {
    v20 = -1073741267;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
  }
  else
  {
    SetFailureLocation(a7, 0, 13, v40, 32);
  }
LABEL_52:
  (*(void (__fastcall **)(__int64, __int64))(BugCheckParameter3 + 32))(v34, 10240LL);
  return v20;
}
