/*
 * XREFs of CmpFindNameInListFromIndex @ 0x1407B42D0
 * Callers:
 *     CmQueryValueKey @ 0x1407B4730 (CmQueryValueKey.c)
 * Callees:
 *     NLS_UPCASE @ 0x140267AD0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     RtlCompareUnicodeStrings @ 0x140684CA0 (RtlCompareUnicodeStrings.c)
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407B470C (HvpGetCellContextReinitialize.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpFindNameInListFromIndex(
        ULONG_PTR BugCheckParameter3,
        unsigned int *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        int a5,
        unsigned int *a6,
        _DWORD *a7)
{
  unsigned __int16 *v9; // rsi
  unsigned int *v10; // r13
  unsigned int v11; // r12d
  __int64 CellFlat; // rax
  __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned int v15; // r15d
  _DWORD *v16; // r13
  __int64 v17; // rax
  unsigned __int8 *v18; // r10
  unsigned __int64 v19; // rdi
  unsigned __int16 *v20; // r9
  unsigned __int16 v21; // si
  unsigned __int16 v22; // r11
  unsigned int v23; // ebx
  LONG v24; // ebx
  unsigned int v25; // eax
  unsigned int v26; // ebx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v29; // r11
  struct _LIST_ENTRY *v30; // rax
  __int64 v31; // [rsp+30h] [rbp-58h] BYREF
  __int64 v32; // [rsp+38h] [rbp-50h] BYREF
  __int64 v33; // [rsp+40h] [rbp-48h]

  v32 = 0LL;
  v31 = 0LL;
  v9 = a3;
  v10 = a2;
  HvpGetCellContextReinitialize(&v32);
  HvpGetCellContextReinitialize(&v31);
  v11 = *v10;
  if ( *v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v10[1]);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v33 = CellFlat;
    v13 = 0LL;
    v14 = CellFlat;
    if ( a4 < v11 )
      v13 = a4;
    v15 = 0;
    if ( v11 )
    {
      while ( 1 )
      {
        v16 = (_DWORD *)(v14 + 4 * v13);
        v17 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
            ? HvpGetCellFlat(BugCheckParameter3, (unsigned int)*v16)
            : HvpGetCellPaged(BugCheckParameter3);
        v18 = (unsigned __int8 *)(v17 + 20);
        v19 = *(unsigned __int16 *)(v17 + 2);
        if ( (*(_BYTE *)(v17 + 16) & 1) != 0 )
        {
          v20 = (unsigned __int16 *)*((_QWORD *)v9 + 1);
          v21 = *v9 >> 1;
          if ( v21 )
          {
            while ( (_WORD)v19 )
            {
              v22 = *v20++;
              v23 = *v18++;
              if ( v22 != (_WORD)v23 )
              {
                if ( v22 >= 0x61u )
                {
                  if ( v22 > 0x7Au )
                  {
                    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                    v22 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v29);
                  }
                  else
                  {
                    v22 -= 32;
                  }
                }
                if ( v23 >= 0x61 )
                {
                  if ( v23 > 0x7A )
                  {
                    v30 = PsGetCurrentServerSiloGlobals();
                    LOWORD(v23) = NLS_UPCASE((__int64)v30[77].Flink, v23);
                  }
                  else
                  {
                    LOWORD(v23) = v23 - 32;
                  }
                }
                v24 = v22 - (unsigned __int16)v23;
                if ( v24 )
                  goto LABEL_16;
              }
              LOWORD(v19) = v19 - 1;
              if ( !--v21 )
                break;
            }
          }
          v24 = v21 - (unsigned __int16)v19;
LABEL_16:
          v9 = a3;
        }
        else
        {
          v24 = RtlCompareUnicodeStrings(
                  *((PCWCH *)v9 + 1),
                  (unsigned __int64)*v9 >> 1,
                  (PCWCH)(v17 + 20),
                  v19 >> 1,
                  1u);
        }
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v31);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v31);
        if ( !v24 )
          break;
        v14 = v33;
        v25 = v13 + 1;
        ++v15;
        v13 = 0LL;
        if ( v25 != v11 )
          v13 = v25;
        if ( v15 >= v11 )
        {
          v10 = a2;
          goto LABEL_24;
        }
      }
      v26 = 0;
      *a7 = *v16;
      if ( a6 )
        *a6 = v13;
    }
    else
    {
LABEL_24:
      v26 = -1073741772;
      *a7 = -1;
      if ( a6 )
        *a6 = *v10;
    }
    if ( v33 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v32);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v32);
    }
    return v26;
  }
  else
  {
    *a7 = -1;
    if ( a6 )
      *a6 = 0;
    return 3221225524LL;
  }
}
