/*
 * XREFs of CmpSetValueKeyExisting @ 0x1406DFA78
 * Callers:
 *     CmSetValueKey @ 0x1406DD4B0 (CmSetValueKey.c)
 *     CmpPreserveSystemHiveData @ 0x1408796BC (CmpPreserveSystemHiveData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     HvAllocateCell @ 0x140656A94 (HvAllocateCell.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     CmpSetValueDataExisting @ 0x1406A3E6C (CmpSetValueDataExisting.c)
 *     HvReallocateCell @ 0x1406DF1A0 (HvReallocateCell.c)
 *     CmpMarkValueDataDirty @ 0x1406DFD78 (CmpMarkValueDataDirty.c)
 *     CmpSetValueDataNew @ 0x1406E1C64 (CmpSetValueDataNew.c)
 *     CmpFreeValueData @ 0x1406E42A4 (CmpFreeValueData.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyExisting(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3,
        int a4,
        void *Src,
        size_t Size,
        int a7)
{
  __int16 v7; // r15
  int v9; // ebx
  unsigned int v11; // eax
  unsigned int v12; // r13d
  __int16 v13; // r12
  unsigned int v14; // r15d
  __int64 v15; // rax
  void *v16; // rcx
  int Cell; // ebx
  int v19; // eax
  __int16 v20; // [rsp+30h] [rbp-20h]
  __int64 v21; // [rsp+34h] [rbp-1Ch] BYREF
  int v22; // [rsp+3Ch] [rbp-14h]
  __int64 v23[2]; // [rsp+40h] [rbp-10h] BYREF

  v7 = 0;
  v23[0] = 0LL;
  v21 = 0xFFFFFFFF00000000uLL;
  v22 = 0;
  v9 = 0;
  if ( !(unsigned __int8)HvMarkCellDirty(BugCheckParameter2, a2, 0LL) )
    return 3221225853LL;
  v11 = *(_DWORD *)(a3 + 4);
  v12 = v11 + 0x80000000;
  if ( v11 >= 0x80000000 )
  {
    v13 = 0;
  }
  else
  {
    v12 = *(_DWORD *)(a3 + 4);
    if ( *(_DWORD *)(BugCheckParameter2 + 212) >= 4u && v11 - 16345 <= 0x7FFFC026 )
      v13 = 2;
    else
      v13 = 1;
  }
  if ( (unsigned int)Size <= 4 )
    goto LABEL_10;
  if ( *(_DWORD *)(BugCheckParameter2 + 212) < 4u || (unsigned int)(Size - 16345) > 0x7FFFC026 )
  {
    v7 = 1;
LABEL_10:
    v20 = v7;
    goto LABEL_11;
  }
  v7 = 2;
  v20 = 2;
LABEL_11:
  if ( !(unsigned __int8)CmpMarkValueDataDirty(BugCheckParameter2) )
    return 3221225853LL;
  if ( v7 )
  {
    v14 = *(_DWORD *)(a3 + 8);
    if ( v20 != 1 )
    {
      if ( v20 != 2 )
        return (unsigned int)v9;
      if ( v13 == 2 )
      {
        v9 = CmpSetValueDataExisting(BugCheckParameter2, Src, Size, a7, *(_DWORD *)(a3 + 8));
        if ( v9 < 0 )
          return (unsigned int)v9;
      }
      else
      {
        v9 = CmpSetValueDataNew(BugCheckParameter2, Src, (unsigned int)Size, (__int64)&v21);
        if ( v9 < 0 )
          return (unsigned int)v9;
        if ( v13 && v12 )
          HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 8));
        v14 = v21;
      }
      *(_DWORD *)(a3 + 12) = a4;
      *(_WORD *)(a3 + 16) &= ~2u;
      *(_DWORD *)(a3 + 4) = Size;
      *(_DWORD *)(a3 + 8) = v14;
      return 0;
    }
    if ( v13 == 1 && v12 )
    {
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, char *))(BugCheckParameter2 + 8))(
              BugCheckParameter2,
              v14,
              (char *)&v21 + 4);
      v16 = (void *)v15;
      if ( v15 )
      {
        if ( (unsigned int)Size <= -4 - *(_DWORD *)(v15 - 4) )
        {
          Cell = v14;
          goto LABEL_19;
        }
        (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, (char *)&v21 + 4);
        v23[0] = 0LL;
        v19 = HvReallocateCell(BugCheckParameter2, v14, Size, 1, v23, (__int64 *)((char *)&v21 + 4));
        Cell = v19;
        if ( v19 != -1 )
        {
          *(_DWORD *)(a3 + 8) = v19;
LABEL_29:
          v16 = (void *)v23[0];
LABEL_19:
          memmove(v16, Src, (unsigned int)Size);
          (*(void (__fastcall **)(ULONG_PTR, char *))(BugCheckParameter2 + 16))(BugCheckParameter2, (char *)&v21 + 4);
          *(_DWORD *)(a3 + 12) = a4;
          *(_WORD *)(a3 + 16) &= ~2u;
          *(_DWORD *)(a3 + 8) = Cell;
          *(_DWORD *)(a3 + 4) = Size;
          if ( v13 == 2 )
            CmpFreeValueData(BugCheckParameter2, v14);
          return 0;
        }
      }
    }
    else
    {
      Cell = HvAllocateCell(BugCheckParameter2, Size, a7, v23, (__int64 *)((char *)&v21 + 4));
      if ( Cell != -1 )
        goto LABEL_29;
    }
    return (unsigned int)-1073741670;
  }
  if ( v13 == 1 && v12 || v13 == 2 )
    CmpFreeValueData(BugCheckParameter2, *(unsigned int *)(a3 + 8));
  *(_DWORD *)(a3 + 8) = 0;
  *(_DWORD *)(a3 + 4) = Size + 0x80000000;
  memmove((void *)(a3 + 8), Src, (unsigned int)Size);
  *(_DWORD *)(a3 + 12) = a4;
  *(_WORD *)(a3 + 16) &= ~2u;
  return 0LL;
}
