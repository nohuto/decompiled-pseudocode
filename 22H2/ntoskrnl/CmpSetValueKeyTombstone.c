/*
 * XREFs of CmpSetValueKeyTombstone @ 0x14086EA4C
 * Callers:
 *     CmDeleteValueKey @ 0x1406DF334 (CmDeleteValueKey.c)
 * Callees:
 *     CmpFreeValue @ 0x1406E4228 (CmpFreeValue.c)
 *     CmpAddValueKeyTombstone @ 0x14086E53C (CmpAddValueKeyTombstone.c)
 *     CmpAddValueToList @ 0x14087B408 (CmpAddValueToList.c)
 *     HvMarkCellDirty @ 0x14087BD38 (HvMarkCellDirty.c)
 */

__int64 __fastcall CmpSetValueKeyTombstone(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        unsigned __int16 *a3,
        int a4,
        int a5)
{
  __int64 v5; // rbx
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edi

  v5 = a2 + 36;
  if ( !*(_DWORD *)(a2 + 36) || (unsigned __int8)HvMarkCellDirty(BugCheckParameter2, *(unsigned int *)(a2 + 40), 0LL) )
  {
    v10 = CmpAddValueKeyTombstone(BugCheckParameter2, a3);
    v11 = v10;
    if ( v10 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      v9 = CmpAddValueToList(BugCheckParameter2, v10, a4, a5, v5);
      if ( v9 >= 0 )
      {
        v11 = -1;
        v9 = 0;
      }
      if ( v11 != -1 )
        CmpFreeValue(BugCheckParameter2, v11);
    }
  }
  else
  {
    return (unsigned int)-1073741443;
  }
  return (unsigned int)v9;
}
