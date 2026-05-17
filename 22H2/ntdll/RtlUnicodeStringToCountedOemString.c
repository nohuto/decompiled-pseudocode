/*
 * XREFs of RtlUnicodeStringToCountedOemString @ 0x1800EB240
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlpDidUnicodeToOemWork @ 0x180062424 (RtlpDidUnicodeToOemWork.c)
 *     RtlUnicodeToOemN @ 0x180062530 (RtlUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800627A0 (RtlxUnicodeStringToOemSize.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlUnicodeStringToCountedOemString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  __int64 result; // rax
  __int64 StringRoutine; // rax
  int v8; // esi
  char v9; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)RtlxUnicodeStringToOemSize((PWCH *)a2) - 1;
  if ( !(_DWORD)result )
  {
    *(_DWORD *)a1 = 0;
    *((_QWORD *)a1 + 1) = 0LL;
    return result;
  }
  if ( (unsigned int)result > 0xFFFF )
    return 3221225712LL;
  *a1 = result;
  if ( a3 )
  {
    a1[1] = result;
    StringRoutine = NtdllpAllocateStringRoutine((unsigned int)result);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)result > a1[1] )
  {
    return 2147483653LL;
  }
  v8 = RtlUnicodeToOemN(*((_QWORD *)a1 + 1), *a1, (__int64)&v9, *((_QWORD *)a2 + 1), *a2);
  if ( v8 >= 0 && !RtlpDidUnicodeToOemWork((__int64)a1, (__int64)a2) )
    v8 = -1073741470;
  if ( v8 >= 0 )
    v8 = 0;
  if ( v8 < 0 )
  {
    if ( a3 )
    {
      NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v8;
}
