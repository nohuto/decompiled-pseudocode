__int64 __fastcall CmpCheckLeaf(ULONG_PTR BugCheckParameter3, int a2, _WORD *a3, unsigned int a4, __int64 a5)
{
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  _WORD *v9; // r13
  __int64 CellMap; // rax
  __int64 v11; // rdi
  __int64 CellPaged; // rax
  __int64 BinAddress; // rax
  int *v14; // rcx
  int v15; // r9d
  int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v18; // edx
  __int64 v19; // r8
  bool v20; // bl
  __int64 CellFlat; // rax
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // r10d
  unsigned __int8 *v25; // r9
  __int16 v26; // ax
  int i; // ebx
  unsigned __int16 v28; // dx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v31; // dx
  int FastLeafHintForUnicodeString; // eax
  int v33; // edi
  int v34; // eax
  int v35; // [rsp+30h] [rbp-48h] BYREF
  int v36; // [rsp+34h] [rbp-44h]
  __int64 v37; // [rsp+38h] [rbp-40h] BYREF
  __int64 v38; // [rsp+40h] [rbp-38h] BYREF
  __m128i v39; // [rsp+48h] [rbp-30h] BYREF
  char v41; // [rsp+B0h] [rbp+38h]

  v37 = 0LL;
  v41 = 0;
  v39 = 0LL;
  HvpGetCellContextReinitialize(&v37);
  if ( ((*a3 - 26220) & 0xFDFF) != 0 )
    return 0LL;
  v7 = 0;
  if ( !a3[1] )
    return 0LL;
  v36 = 23;
  do
  {
    v8 = *(_DWORD *)&a3[4 * v7 + 2];
    v9 = &a3[4 * v7];
    v38 = 0LL;
    LOWORD(v35) = 0;
    HvpGetCellContextReinitialize(&v38);
    HvpGetBinContextInitialize(&v35);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      goto LABEL_20;
    if ( (v8 & 0x7FFFFFFF) < *(_DWORD *)(632 * ((unsigned __int64)v8 >> 31) + BugCheckParameter3 + 280) && (v8 & 7) == 0 )
    {
      CellMap = HvpGetCellMap(BugCheckParameter3, v8);
      v11 = CellMap;
      if ( CellMap )
      {
        if ( (*(_BYTE *)(CellMap + 8) & 2) == 0 )
        {
          CellPaged = HvpGetCellPaged(BugCheckParameter3);
          if ( !CellPaged || CellPaged == 4 )
            goto LABEL_20;
          BinAddress = HvpMapEntryGetBinAddress(CellPaged - 4, v11, &v35);
          v15 = (int)v14;
          v16 = *v14;
          v17 = v15 - BinAddress;
          v18 = -v16;
          v20 = 0;
          if ( v16 < 0 && v18 - 8 <= 0xFFFF8 )
          {
            v19 = *(unsigned int *)(BinAddress + 8);
            if ( v18 <= (unsigned __int64)(v19 - 32) && v17 - v16 <= (unsigned int)v19 && v17 >= 0x20 )
              v20 = 1;
          }
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v38);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v38);
          if ( v20 )
          {
LABEL_20:
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(BugCheckParameter3, *((unsigned int *)v9 + 1));
            else
              CellFlat = HvpGetCellPaged(BugCheckParameter3);
            v22 = CellFlat;
            if ( !CellFlat )
            {
              SetFailureLocation(a5, 0, 23, -1073741670, 0);
              return 3221225626LL;
            }
            v23 = -4 - *(_DWORD *)(CellFlat - 4);
            if ( v23 < 0x4C || (v24 = *(unsigned __int16 *)(v22 + 72), v24 > v23 - 76) )
            {
LABEL_31:
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v37);
              else
                HvpReleaseCellPaged(BugCheckParameter3, &v37);
              goto LABEL_33;
            }
            v25 = (unsigned __int8 *)(v22 + 76);
            v26 = *(_WORD *)(v22 + 2) & 0x20;
            v39.m128i_i16[1] = *(_WORD *)(v22 + 72);
            v39.m128i_i16[0] = v24;
            v39.m128i_i64[1] = v22 + 76;
            if ( *a3 == 26732 )
            {
              if ( v26 )
              {
                for ( i = 0; v24; --v24 )
                {
                  v28 = *v25;
                  if ( (unsigned __int8)v28 >= 0x61u )
                  {
                    if ( (unsigned __int8)v28 > 0x7Au )
                    {
                      CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
                      v28 = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v31);
                    }
                    else
                    {
                      v28 -= 32;
                    }
                  }
                  ++v25;
                  i = v28 + 37 * i;
                }
                goto LABEL_30;
              }
              FastLeafHintForUnicodeString = CmpHashUnicodeComponent(&v39);
            }
            else
            {
              if ( v26 )
              {
                i = 0;
                v35 = 0;
                if ( v24 < 4 )
                {
                  if ( !v24 )
                    goto LABEL_30;
                }
                else
                {
                  v24 = 4;
                }
                memmove(&v35, v25, v24);
                i = v35;
LABEL_30:
                if ( *((_DWORD *)v9 + 2) != i )
                {
                  v33 = -1073741492;
                  v41 = 1;
                  if ( (a2 & 0x20000) != 0 || !BYTE2(NlsMbOemCodePageTag) && (CmpBootType & 6) == 0 )
                  {
                    v34 = 16;
                    v36 = 23;
                    goto LABEL_59;
                  }
                  SetFailureLocation(a5, 1, 23, -1073741492, 32);
                  v33 = HvpMarkCellDirty(BugCheckParameter3, a4);
                  if ( v33 < 0 )
                  {
                    v34 = 48;
LABEL_59:
                    SetFailureLocation(a5, 0, v36, v33, v34);
                    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(BugCheckParameter3, &v37);
                    else
                      HvpReleaseCellPaged(BugCheckParameter3, &v37);
                    return (unsigned int)v33;
                  }
                  *((_DWORD *)v9 + 2) = i;
                  *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 4088LL) |= 4u;
                }
                goto LABEL_31;
              }
              FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString((unsigned __int16 *)&v39);
            }
            i = FastLeafHintForUnicodeString;
            goto LABEL_30;
          }
        }
      }
    }
LABEL_33:
    ++v7;
  }
  while ( v7 < (unsigned __int16)a3[1] );
  if ( !v41 )
    return 0LL;
  return 2147483690LL;
}
