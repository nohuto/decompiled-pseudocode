/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x180102DE0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x18005BF00 (RtlUnicodeToUTF8N.c)
 *     CountUnicodeToUTF8 @ 0x18005C1B8 (CountUnicodeToUTF8.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlUnicodeStringToUTF8String(__int16 *a1, unsigned int **a2, char a3)
{
  int v6; // edi
  __int64 result; // rax
  __int64 v8; // rax
  unsigned __int16 v9; // cx
  __int64 StringRoutine; // rax
  unsigned __int16 v11; // ax
  int v12; // esi
  unsigned int v13; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  result = CountUnicodeToUTF8(a2[1], (unsigned int)*(unsigned __int16 *)a2 + 2, &v13);
  if ( (int)result >= 0 )
  {
    v8 = v13;
    if ( v13 > 0xFFFF )
      return 3221225712LL;
    v9 = v13 - 1;
    *a1 = v13 - 1;
    if ( a3 )
    {
      a1[1] = v8;
      StringRoutine = NtdllpAllocateStringRoutine(v8);
      *((_QWORD *)a1 + 1) = StringRoutine;
      if ( !StringRoutine )
        return 3221225495LL;
      v9 = *a1;
    }
    else
    {
      v11 = a1[1];
      if ( v9 >= v11 )
      {
        if ( !v11 )
          return 2147483653LL;
        v9 = v11 - 1;
        v6 = -2147483643;
        *a1 = v11 - 1;
      }
    }
    v12 = RtlUnicodeToUTF8N(*((_BYTE **)a1 + 1), v9, &v13, a2[1], *(unsigned __int16 *)a2);
    if ( v12 < 0 )
    {
      if ( a3 )
      {
        NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
        *((_QWORD *)a1 + 1) = 0LL;
      }
    }
    else
    {
      v12 = v6;
      *(_BYTE *)(v13 + *((_QWORD *)a1 + 1)) = 0;
    }
    return (unsigned int)v12;
  }
  return result;
}
