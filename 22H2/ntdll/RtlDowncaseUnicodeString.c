/*
 * XREFs of RtlDowncaseUnicodeString @ 0x18007C6E0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 *     NLS_DOWNCASE @ 0x18007C780 (NLS_DOWNCASE.c)
 */

__int64 __fastcall RtlDowncaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  __int64 StringRoutine; // rax
  unsigned int v8; // r10d
  __int16 v9; // ax
  __int64 v10; // r9

  v5 = *a2;
  v6 = 0;
  if ( a3 )
  {
    *(_WORD *)(a1 + 2) = v5;
    StringRoutine = NtdllpAllocateStringRoutine(v5);
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
    LOWORD(v5) = *a2;
  }
  else if ( (unsigned __int16)v5 > *(_WORD *)(a1 + 2) )
  {
    return 2147483653LL;
  }
  v8 = (unsigned __int16)v5 >> 1;
  while ( v6 < v8 )
  {
    v9 = NLS_DOWNCASE(*(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v6));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v10) = v9;
    ++v6;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
