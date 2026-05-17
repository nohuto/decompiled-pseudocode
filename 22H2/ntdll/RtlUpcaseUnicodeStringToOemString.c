/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x180062340
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180022E70 (NtdllpFreeStringRoutine.c)
 *     RtlpDidUnicodeToOemWork @ 0x180062424 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800624D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800627A0 (RtlxUnicodeStringToOemSize.c)
 *     NtdllpAllocateStringRoutine @ 0x18006EBB0 (NtdllpAllocateStringRoutine.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToOemString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // eax
  int v7; // ebx
  __int64 StringRoutine; // rax
  unsigned int v10; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(a2);
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  *a1 = v6 - 1;
  if ( a3 )
  {
    a1[1] = v6;
    StringRoutine = NtdllpAllocateStringRoutine(v6);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)(v6 - 1) >= a1[1] )
  {
    return 2147483653LL;
  }
  v7 = RtlUpcaseUnicodeToOemN(*((_QWORD *)a1 + 1), *a1, (unsigned int)&v10, *((_QWORD *)a2 + 1), *a2);
  if ( v7 >= 0 && !(unsigned __int8)RtlpDidUnicodeToOemWork(a1, a2) )
    v7 = -1073741470;
  if ( v7 >= 0 )
  {
    *(_BYTE *)(v10 + *((_QWORD *)a1 + 1)) = 0;
    v7 = 0;
  }
  if ( v7 < 0 )
  {
    if ( a3 )
    {
      NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v7;
}
