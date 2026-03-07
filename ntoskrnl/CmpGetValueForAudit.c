__int64 __fastcall CmpGetValueForAudit(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v8; // r12d
  void *v9; // r14
  __int64 CellFlat; // rax
  __int64 v11; // rsi
  unsigned int v12; // ebx
  void *Pool; // rax
  int v14; // eax
  size_t Size; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+50h] [rbp-10h] BYREF
  void *Src; // [rsp+58h] [rbp-8h] BYREF
  __int64 v20; // [rsp+90h] [rbp+30h] BYREF

  v4 = 0;
  v18 = 0LL;
  v17 = 0LL;
  Src = 0LL;
  LOBYTE(v20) = 0;
  v8 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v18);
  v9 = 0LL;
  HvpGetCellContextReinitialize(&v17);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, &v17);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v8, (unsigned int *)&v17);
  v11 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  LODWORD(Size) = 0;
  if ( !*(_DWORD *)(CellFlat + 4) )
    goto LABEL_12;
  if ( CmpGetValueData(BugCheckParameter3, v8, CellFlat, (unsigned int *)&Size, (__int64)&Src, (__int64)&v20) )
  {
    v4 = Size;
    if ( (_DWORD)Size )
    {
      Pool = (void *)CmpAllocatePool(256LL, (unsigned int)Size, a4);
      v9 = Pool;
      if ( !Pool )
        goto LABEL_8;
      memmove(Pool, Src, v4);
    }
LABEL_12:
    v14 = *(_DWORD *)(v11 + 12);
    *(_DWORD *)(a3 + 4) = v4;
    v12 = 0;
    *(_DWORD *)a3 = v14;
    *(_QWORD *)(a3 + 8) = v9;
    goto LABEL_13;
  }
LABEL_8:
  v12 = -1073741670;
LABEL_13:
  if ( Src )
  {
    if ( (_BYTE)v20 )
    {
      ExFreePoolWithTag(Src, 0);
    }
    else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    {
      HvpReleaseCellFlat(BugCheckParameter3, &v18);
    }
    else
    {
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v18);
    }
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v17);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v17);
  return v12;
}
