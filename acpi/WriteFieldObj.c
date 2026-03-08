/*
 * XREFs of WriteFieldObj @ 0x1C0006080
 * Callers:
 *     <none>
 * Callees:
 *     ReadSystemMem @ 0x1C0005CC0 (ReadSystemMem.c)
 *     HeapFree @ 0x1C004EE4C (HeapFree.c)
 *     AccessFieldData @ 0x1C0051AD8 (AccessFieldData.c)
 *     PushAccFieldObj @ 0x1C00525E8 (PushAccFieldObj.c)
 */

__int64 __fastcall WriteFieldObj(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  int *v6; // rdi
  int v7; // eax
  int *v8; // rdx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int64 SystemMem; // rax
  unsigned __int64 *v17; // rsi
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  int v24; // ecx
  int v25; // ecx
  unsigned int v26; // eax
  int v27; // ecx
  __int64 v28; // rcx

  v3 = a3;
  if ( !a3 )
  {
    v6 = (int *)(a2 + 16);
    v7 = *(_DWORD *)(a2 + 16);
    v8 = (int *)(a2 + 16);
    v9 = v7 & 0xF;
    if ( !v9 )
      goto LABEL_7;
    v10 = v9 - 1;
    if ( !v10 )
      goto LABEL_10;
    v11 = v10 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return v3;
    }
    else
    {
      while ( 1 )
      {
        v23 = *(_DWORD *)(a2 + 56);
        v8 = v6;
        *(_DWORD *)(a2 + 96) += v23;
        v24 = *(_DWORD *)(a2 + 100);
        ++*(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 100) = 0;
        v25 = v24 - 8 * v23;
        v26 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 104) += v25;
        v27 = *v6;
        if ( v26 >= *(_DWORD *)(a2 + 60) )
        {
          *v6 = v27 + 1;
          goto LABEL_25;
        }
        *v6 = v27 - 2;
LABEL_7:
        v12 = *v8;
        if ( *(_DWORD *)(a2 + 80) >= *(_DWORD *)(a2 + 60) )
          break;
        *v8 = v12 + 1;
        v13 = *(_QWORD *)(a2 + 32);
        if ( *(_WORD *)(v13 + 2) == 5 )
        {
          v14 = **(_QWORD **)(v13 + 32);
          if ( *(_WORD *)(v14 + 66) == 132 )
            return (unsigned int)PushAccFieldObj(
                                   a1,
                                   WriteFieldObj,
                                   **(_QWORD **)(v14 + 96) + 64LL,
                                   *(_QWORD *)(**(_QWORD **)(v14 + 96) + 96LL) + 8LL,
                                   a2 + 96,
                                   4);
        }
LABEL_10:
        ++*v6;
        v15 = *(_QWORD *)(a2 + 40);
        if ( v15 < *(_QWORD *)(a2 + 48) )
          SystemMem = ReadSystemMem(v15, *(unsigned int *)(a2 + 56), *(_QWORD *)(a2 + 64));
        else
          SystemMem = 0LL;
        v17 = (unsigned __int64 *)(a2 + 88);
        if ( *(_DWORD *)(a2 + 80) )
        {
          v18 = *(unsigned int *)(a2 + 56);
          v19 = SystemMem >> *(_DWORD *)(a2 + 72);
          v20 = v18 + *(_QWORD *)(a2 + 40);
          *v17 = v19;
          *(_QWORD *)(a2 + 40) = v20;
          if ( v20 < *(_QWORD *)(a2 + 48) )
          {
            SystemMem = ReadSystemMem(v20, (unsigned int)v18, *(_QWORD *)(a2 + 64));
            v19 = *v17;
          }
          else
          {
            SystemMem = 0LL;
          }
        }
        else
        {
          v19 = 0LL;
        }
        v21 = v19 | *(_QWORD *)(a2 + 64) & (SystemMem << *(_DWORD *)(a2 + 76));
        v22 = *(_QWORD *)(a2 + 32);
        *v17 = v21;
        v3 = AccessFieldData(a1, v22, (int)a2 + 96, (int)a2 + 88, 0);
        if ( v3 == 32772 || a2 != *(_QWORD *)(a1 + 416) )
          return v3;
      }
      *v8 = v12 + 3;
    }
  }
LABEL_25:
  v28 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v28 + 8);
  HeapFree(v28);
  return v3;
}
