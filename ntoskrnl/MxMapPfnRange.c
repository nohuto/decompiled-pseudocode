/*
 * XREFs of MxMapPfnRange @ 0x140B37F18
 * Callers:
 *     MiCreateSparsePfnDatabase @ 0x140B37C80 (MiCreateSparsePfnDatabase.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     MiRestrictRangeToNode @ 0x140370AB4 (MiRestrictRangeToNode.c)
 *     MxMapVa @ 0x140B3819C (MxMapVa.c)
 */

__int64 __fastcall MxMapPfnRange(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, int a3)
{
  int v3; // r13d
  ULONG_PTR v4; // r14
  ULONG_PTR v5; // r12
  ULONG_PTR v6; // rdi
  __int64 v7; // rdi
  ULONG_PTR v8; // rsi
  ULONG_PTR v9; // r15
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r15
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-58h] BYREF
  int v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+2Ch] [rbp-4Ch]
  __int64 v22; // [rsp+30h] [rbp-48h]
  ULONG_PTR v23; // [rsp+38h] [rbp-40h]
  __int64 v24; // [rsp+40h] [rbp-38h]

  v19 = 0LL;
  v21 = 0;
  v3 = a3;
  v24 = 0LL;
  v4 = a2;
  v5 = BugCheckParameter2;
  v6 = 48 * BugCheckParameter2 - 0x220000000000LL;
  if ( v6 == (v6 & 0xFFFFFFFFFFE00000uLL) )
    v7 = 0LL;
  else
    v7 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 == -1LL
    || 48 * (BugCheckParameter2 + a2) - 0x220000000000LL == ((48 * (BugCheckParameter2 + a2) - 0x220000000000LL) & 0xFFFFFFFFFFE00000uLL) )
  {
    v8 = 0LL;
  }
  else
  {
    v8 = (((48 * (BugCheckParameter2 + a2) - 0x220000000001LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  v22 = v7;
  v23 = v8;
  if ( !a2 )
    return 1LL;
  while ( 1 )
  {
    v9 = v4;
    if ( v4 == -1LL )
    {
      v4 = 0LL;
      v10 = MmPfnDatabase + (MxPfnAllocation << 12);
    }
    else
    {
      v9 = MiRestrictRangeToNode(v5, v4);
      v4 -= v9;
      v10 = 48 * (v5 + v9) - 0x220000000000LL;
    }
    v20 = *((_DWORD *)MiSearchNumaNodeTable(v5) + 2);
    v11 = ((48 * v5 - 0x220000000000LL) >> 9) & 0x7FFFFFFFF8LL;
    v5 += v9;
    v12 = v11 - 0x98000000000LL;
    v13 = (((unsigned __int64)(v10 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( v12 <= v13 )
      break;
LABEL_22:
    if ( !v4 )
      return 1LL;
  }
  while ( 1 )
  {
    if ( v12 == v7 || (v14 = v3, v12 == v8) )
      v14 = 1;
    LODWORD(v24) = 0;
    v21 = v14;
    v19 = (__int64)(v12 << 25) >> 16;
    if ( !(unsigned int)MxMapVa(&v19) )
      return 0LL;
    v15 = v24;
    if ( (_DWORD)v24 )
    {
      if ( (int)v24 > 0 )
      {
        v16 = (unsigned int)v24;
        do
        {
          v12 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v16;
        }
        while ( v16 );
        v15 = v24;
        v3 = a3;
      }
      v12 += 8LL;
      if ( v15 > 0 )
      {
        v17 = (unsigned int)v15;
        do
        {
          v12 = (__int64)(v12 << 25) >> 16;
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      v12 += 8LL;
    }
    if ( v12 > v13 )
      goto LABEL_22;
  }
}
