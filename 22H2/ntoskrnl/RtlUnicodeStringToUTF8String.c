/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x1409198D0
 * Callers:
 *     <none>
 * Callees:
 *     CountUnicodeToUTF8 @ 0x1403248D4 (CountUnicodeToUTF8.c)
 *     ExpAllocateStringRoutine @ 0x140685CE0 (ExpAllocateStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x14069C740 (RtlUnicodeToUTF8N.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlUnicodeStringToUTF8String(__int16 *a1, unsigned int **a2, char a3)
{
  int v4; // edx
  int v7; // edi
  __int64 result; // rax
  SIZE_T v9; // rax
  unsigned __int16 v10; // cx
  PVOID StringRoutine; // rax
  unsigned __int16 v12; // ax
  ULONG v13; // edx
  NTSTATUS v14; // esi
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp+10h] BYREF
  ULONG UTF8StringActualByteCount; // [rsp+68h] [rbp+20h] BYREF

  v4 = *(unsigned __int16 *)a2;
  LODWORD(NumberOfBytes) = 0;
  UTF8StringActualByteCount = 0;
  v7 = 0;
  result = CountUnicodeToUTF8(a2[1], v4 + 2, (unsigned int *)&NumberOfBytes);
  if ( (int)result >= 0 )
  {
    v9 = (unsigned int)NumberOfBytes;
    if ( (unsigned int)NumberOfBytes > 0xFFFF )
      return 3221225712LL;
    v10 = NumberOfBytes - 1;
    *a1 = NumberOfBytes - 1;
    if ( a3 )
    {
      a1[1] = v9;
      StringRoutine = ExpAllocateStringRoutine(v9);
      *((_QWORD *)a1 + 1) = StringRoutine;
      if ( !StringRoutine )
        return 3221225495LL;
      v10 = *a1;
    }
    else
    {
      v12 = a1[1];
      if ( v10 >= v12 )
      {
        if ( !v12 )
          return 2147483653LL;
        v10 = v12 - 1;
        v7 = -2147483643;
        *a1 = v12 - 1;
      }
    }
    v14 = RtlUnicodeToUTF8N(*((PCHAR *)a1 + 1), v10, &UTF8StringActualByteCount, (PCWCH)a2[1], *(unsigned __int16 *)a2);
    if ( v14 < 0 )
    {
      if ( a3 )
      {
        ExFreePoolWithTag(*((PVOID *)a1 + 1), v13);
        *((_QWORD *)a1 + 1) = 0LL;
      }
    }
    else
    {
      v14 = v7;
      *(_BYTE *)(UTF8StringActualByteCount + *((_QWORD *)a1 + 1)) = 0;
    }
    return (unsigned int)v14;
  }
  return result;
}
