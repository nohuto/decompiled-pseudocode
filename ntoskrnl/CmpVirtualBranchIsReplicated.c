/*
 * XREFs of CmpVirtualBranchIsReplicated @ 0x140A1798C
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x140A17568 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A17764 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     HvpGetCellPaged @ 0x1407B45C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     HvpGetCellFlat @ 0x1407F9410 (HvpGetCellFlat.c)
 *     CmpBlockTwoHiveWrites @ 0x140A10BB8 (CmpBlockTwoHiveWrites.c)
 *     CmpUnblockTwoHiveWrites @ 0x140A10D8C (CmpUnblockTwoHiveWrites.c)
 *     CmpFindPathByName @ 0x140A16940 (CmpFindPathByName.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x140A16E8C (CmpGetCmHiveFromVirtualPath.c)
 */

bool __fastcall CmpVirtualBranchIsReplicated(__int64 a1, __m128i *a2, char *a3)
{
  volatile signed __int32 *v6; // r15
  volatile signed __int32 *v7; // r14
  char PathByName; // al
  ULONG_PTR v11; // rdi
  char v12; // si
  __int64 CellPaged; // rax
  unsigned __int8 v14; // cf
  char v15; // al
  unsigned __int16 v16; // cx
  unsigned __int16 v17; // dx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING v19; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+40h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+50h] BYREF
  PVOID v22; // [rsp+A8h] [rbp+58h] BYREF

  v21 = 0xFFFFFFFFLL;
  LODWORD(BugCheckParameter4) = 0;
  BugCheckParameter3 = 0LL;
  v22 = 0LL;
  *a3 = 0;
  v6 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    if ( !a2->m128i_i16[0] )
      return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0;
    v7 = *(volatile signed __int32 **)(a1 + 32);
  }
  else
  {
    if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a2, (__int64)&v22) < 0 )
      return 0;
    v6 = (volatile signed __int32 *)CmpMasterHive;
    v7 = (volatile signed __int32 *)v22;
  }
  if ( (int)CmpBlockTwoHiveWrites(v6, (__int64)v7, 1) < 0 )
    return 0;
  PathByName = CmpFindPathByName(a1, a2, &v19, (unsigned int *)&BugCheckParameter4, &BugCheckParameter3);
  v11 = BugCheckParameter3;
  v12 = PathByName;
  if ( BugCheckParameter3
    && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0
      ? (CellPaged = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, (unsigned int *)&v21))
      : (CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v21)),
        CellPaged) )
  {
    if ( v12 )
    {
      if ( !CmpVEEnabled || !_bittest16((const signed __int16 *)(CellPaged + 2), 8u) )
        v12 = 0;
    }
    else
    {
      if ( !CmpVEEnabled || (v14 = _bittest16((const signed __int16 *)(CellPaged + 2), 8u), v15 = 1, !v14) )
        v15 = 0;
      v16 = 0;
      v17 = v19.Length >> 1;
      *a3 = v15;
      if ( v17 )
      {
        while ( v19.Buffer[v16] != 92 )
        {
          if ( ++v16 >= v17 )
            goto LABEL_31;
        }
        *a3 = 0;
      }
    }
LABEL_31:
    if ( (*(_BYTE *)(v11 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v11, &v21);
    else
      HvpReleaseCellPaged(v11, (unsigned int *)&v21);
  }
  else
  {
    v12 = 0;
  }
  CmpUnblockTwoHiveWrites(v6, v7);
  return v12;
}
