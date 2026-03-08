/*
 * XREFs of RtlpLookupOrCreateLowBox @ 0x14035400C
 * Callers:
 *     RtlpHashStringToAtom @ 0x1407DA630 (RtlpHashStringToAtom.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x140354AA4 (RtlpQueryLowBoxId.c)
 *     RtlpAllocateAtom @ 0x1407DBAB0 (RtlpAllocateAtom.c)
 */

__int64 __fastcall RtlpLookupOrCreateLowBox(__int64 a1, __int64 a2, char a3)
{
  __int64 *v5; // rbx
  int LowBoxId; // esi
  __int64 result; // rax
  __int16 v8; // cx
  __int16 v9; // dx
  __int64 v10; // rcx
  __int16 v11; // cx

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    return a2 + 16;
  v5 = (__int64 *)(a2 + 16);
  LowBoxId = RtlpQueryLowBoxId();
  if ( !LowBoxId )
    return (__int64)v5;
  for ( result = *v5; (__int64 *)result != v5; result = *(_QWORD *)result )
  {
    if ( *(_DWORD *)(result + 16) == LowBoxId )
    {
      if ( a3 )
      {
        v8 = *(_WORD *)(result + 22);
        if ( (v8 & 4) == 0 )
        {
          v9 = *(_WORD *)(result + 20);
          if ( v9 == -1 )
            v8 |= 1u;
          else
            *(_WORD *)(result + 20) = v9 + 1;
          *(_WORD *)(result + 22) = v8 | 4;
        }
      }
      return result;
    }
  }
  result = RtlpAllocateAtom(24LL, 1282241601LL);
  if ( result )
  {
    v10 = *v5;
    if ( *(__int64 **)(*v5 + 8) != v5 )
      __fastfail(3u);
    *(_QWORD *)result = v10;
    *(_QWORD *)(result + 8) = v5;
    *(_QWORD *)(v10 + 8) = result;
    *v5 = result;
    *(_DWORD *)(result + 20) = 0;
    *(_DWORD *)(result + 16) = LowBoxId;
    if ( a3 )
    {
      *(_DWORD *)(result + 20) = 262145;
      v11 = *(_WORD *)(a2 + 36);
      if ( v11 == -1 )
        *(_WORD *)(a2 + 38) |= 1u;
      else
        *(_WORD *)(a2 + 36) = v11 + 1;
    }
  }
  return result;
}
