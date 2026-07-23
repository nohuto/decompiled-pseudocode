/*
 * XREFs of RtlpLookupOrCreateLowBox @ 0x14027C03C
 * Callers:
 *     RtlpHashStringToAtom @ 0x1406857D0 (RtlpHashStringToAtom.c)
 * Callees:
 *     RtlpQueryLowBoxId @ 0x14027C158 (RtlpQueryLowBoxId.c)
 *     RtlpAllocateAtom @ 0x140622F24 (RtlpAllocateAtom.c)
 */

__int64 __fastcall RtlpLookupOrCreateLowBox(__int64 a1, __int64 a2, char a3)
{
  int LowBoxId; // esi
  __int64 *v6; // rbx
  __int64 result; // rax
  __int16 v8; // cx
  __int16 v9; // r8
  __int64 v10; // rcx
  __int16 v11; // cx

  if ( (*(_DWORD *)(a1 + 24) & 1) != 0 )
    LowBoxId = 0;
  else
    LowBoxId = RtlpQueryLowBoxId();
  v6 = (__int64 *)(a2 + 16);
  if ( !LowBoxId )
    return a2 + 16;
  for ( result = *v6; (__int64 *)result != v6; result = *(_QWORD *)result )
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
    v10 = *v6;
    if ( *(__int64 **)(*v6 + 8) != v6 )
      __fastfail(3u);
    *(_QWORD *)result = v10;
    *(_QWORD *)(result + 8) = v6;
    *(_QWORD *)(v10 + 8) = result;
    *v6 = result;
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
