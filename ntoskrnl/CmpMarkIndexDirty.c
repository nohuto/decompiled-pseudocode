__int64 __fastcall CmpMarkIndexDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, unsigned int a3)
{
  unsigned int v5; // r15d
  struct _PRIVILEGE_SET *v6; // r14
  __int64 CellFlat; // rax
  __int64 v8; // rdi
  unsigned __int16 v9; // si
  __int64 Pool; // rax
  __int64 CellPaged; // rax
  int v12; // esi
  unsigned int i; // edi
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0LL;
  v15 = 0LL;
  v5 = BugCheckParameter4;
  v6 = 0LL;
  HvpGetCellContextReinitialize(&v15);
  HvpGetCellContextReinitialize(&v16);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v8 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  if ( (*(_BYTE *)(CellFlat + 2) & 0x20) == 0 )
    goto LABEL_7;
  v9 = 2 * *(_WORD *)(CellFlat + 72);
  Pool = CmpAllocatePool(256LL, v9, 540626243LL);
  v6 = (struct _PRIVILEGE_SET *)Pool;
  if ( Pool )
  {
    CmpCopyCompressedName(Pool, v9, v8 + 76, *(unsigned __int16 *)(v8 + 72));
LABEL_7:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v5);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3);
    if ( CellPaged )
    {
      v12 = 0;
      for ( i = -1073741772; v12 < *(_DWORD *)(BugCheckParameter3 + 216); ++v12 )
      {
        i = CmpMarkIndexDirtyInStorageType(BugCheckParameter3, v12);
        if ( i != -1073741772 )
          break;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v15);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v15);
    }
    else
    {
      i = -1073741670;
    }
    if ( v6 )
      CmSiFreeMemory(v6);
    goto LABEL_16;
  }
  i = -1073741670;
LABEL_16:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v16);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v16);
  return i;
}
