/*
 * XREFs of IopAddAddressRangeToRemovePagesArray @ 0x14055A2A4
 * Callers:
 *     IopRemovePageDumpRange @ 0x1405511AC (IopRemovePageDumpRange.c)
 * Callees:
 *     IopCompactRemovePagesArray @ 0x14055AA70 (IopCompactRemovePagesArray.c)
 */

void __fastcall IopAddAddressRangeToRemovePagesArray(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rbx
  _DWORD *v5; // rdx
  unsigned int v6; // r10d
  __int64 v7; // r9
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9

  if ( IopRemovePagesArray && a2 )
  {
    v4 = a1 + a2 - 1;
    if ( *(_DWORD *)IopRemovePagesArray == *(_DWORD *)(IopRemovePagesArray + 4) )
      IopCompactRemovePagesArray();
    v5 = (_DWORD *)IopRemovePagesArray;
    v6 = 0;
    v7 = 0LL;
    if ( *(_DWORD *)IopRemovePagesArray )
    {
      v8 = *(_QWORD *)(IopRemovePagesArray + 16);
      while ( 1 )
      {
        v9 = *(_QWORD *)(IopRemovePagesArray + 16LL * v6 + 16);
        v10 = *(_QWORD *)(IopRemovePagesArray + 16LL * v6 + 8);
        if ( v9 < v8 )
          v7 = v6;
        v11 = v9 + v10;
        if ( v9 >= v8 )
          v9 = v8;
        v12 = v11 - 1;
        v8 = v9;
        if ( (v11 - 1 >= *(_QWORD *)(*(_QWORD *)(CrashdmpDumpBlock + 8) + 48LL) || a1 <= v11) && (!v10 || v4 >= v10 - 1) )
          break;
        if ( ++v6 >= *(_DWORD *)IopRemovePagesArray )
          goto LABEL_24;
      }
      if ( a1 < v10 )
      {
        *(_QWORD *)(IopRemovePagesArray + 16LL * v6 + 8) = a1;
        if ( v4 > v12 )
          *(_QWORD *)&v5[4 * v6 + 4] = a2;
        else
          *(_QWORD *)&v5[4 * v6 + 4] = v11 - a1;
      }
      else if ( v4 > v12 )
      {
        *(_QWORD *)(IopRemovePagesArray + 16LL * v6 + 16) = v4 - v10 + 1;
      }
    }
    else
    {
      v8 = 0LL;
LABEL_24:
      if ( v6 >= *(_DWORD *)(IopRemovePagesArray + 4) )
      {
        if ( v8 < a2 )
        {
          v14 = 2 * v7;
          *(_QWORD *)(IopRemovePagesArray + 8 * v14 + 8) = a1;
          *(_QWORD *)&v5[2 * v14 + 4] = a2;
        }
      }
      else
      {
        v13 = 2LL * v6;
        *(_QWORD *)(IopRemovePagesArray + 8 * v13 + 8) = a1;
        *(_QWORD *)&v5[2 * v13 + 4] = a2;
        ++*v5;
      }
    }
  }
}
