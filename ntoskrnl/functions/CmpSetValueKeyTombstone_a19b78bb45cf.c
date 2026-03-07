__int64 __fastcall CmpSetValueKeyTombstone(
        ULONG_PTR a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int *v5; // rbx
  int v9; // edi
  unsigned int v10; // ebx
  unsigned int *v12; // [rsp+20h] [rbp-28h]
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = -1;
  v5 = (unsigned int *)(a2 + 36);
  if ( !*(_DWORD *)(a2 + 36) || (v9 = HvpMarkCellDirty(a1, *(unsigned int *)(a2 + 40), 0), v9 >= 0) )
  {
    v9 = CmpAddValueKeyTombstone(a1, a3, a5, (int *)&v13);
    if ( v9 < 0 )
    {
      v10 = v13;
    }
    else
    {
      v12 = v5;
      v10 = v13;
      v9 = CmpAddValueToListEx(a1, v13, a4, a5, v12, 1);
      if ( v9 >= 0 )
      {
        v10 = -1;
        v9 = 0;
      }
    }
    if ( v10 != -1 )
      CmpFreeValue(a1, v10);
  }
  return (unsigned int)v9;
}
