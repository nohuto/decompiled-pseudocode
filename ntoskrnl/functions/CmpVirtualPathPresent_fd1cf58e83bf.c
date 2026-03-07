bool __fastcall CmpVirtualPathPresent(__m128i *a1)
{
  volatile signed __int32 *v1; // r14
  __int64 v3; // rsi
  char PathByName; // al
  ULONG_PTR v5; // rdi
  bool v6; // bl
  __int64 CellFlat; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+38h] BYREF
  __int64 v11; // [rsp+80h] [rbp+40h] BYREF
  PVOID v12; // [rsp+88h] [rbp+48h] BYREF

  v11 = 0xFFFFFFFFLL;
  v1 = (volatile signed __int32 *)CmpMasterHive;
  BugCheckParameter3[0] = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v3 = 0LL;
  v12 = 0LL;
  if ( (int)CmpGetCmHiveFromVirtualPath((__int64)a1, (__int64)&v12) >= 0
    && (int)CmpBlockTwoHiveWrites(v1, (__int64)v12, 1) >= 0 )
  {
    PathByName = CmpFindPathByName(0LL, a1, 0LL, (unsigned int *)&BugCheckParameter4, BugCheckParameter3);
    v5 = BugCheckParameter3[0];
    v6 = PathByName;
    if ( BugCheckParameter3[0] )
    {
      if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(BugCheckParameter3[0], (unsigned int)BugCheckParameter4, &v11);
      else
        CellFlat = HvpGetCellPaged(BugCheckParameter3[0], BugCheckParameter4, (unsigned int *)&v11);
      v3 = CellFlat;
    }
    if ( v6 )
    {
      if ( v3 )
      {
        v6 = CmpVEEnabled && _bittest16((const signed __int16 *)(v3 + 2), 8u);
        goto LABEL_16;
      }
      v6 = 0;
    }
    else if ( v3 )
    {
LABEL_16:
      if ( (*(_BYTE *)(v5 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v5, &v11);
      else
        HvpReleaseCellPaged(v5, (unsigned int *)&v11);
    }
    CmpUnblockTwoHiveWrites(v1, (volatile signed __int32 *)v12);
    return v6;
  }
  return 0;
}
