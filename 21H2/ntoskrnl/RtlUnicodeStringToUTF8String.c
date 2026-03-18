/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x1409BED90
 * Callers:
 *     <none>
 * Callees:
 *     CountUnicodeToUTF8 @ 0x1402D7E54 (CountUnicodeToUTF8.c)
 *     ExpAllocateStringRoutine @ 0x1406BE560 (ExpAllocateStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x140759F40 (RtlUnicodeToUTF8N.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlUnicodeStringToUTF8String(__int64 a1, unsigned int **a2, char a3)
{
  unsigned int v5; // edx
  char v7; // bp
  __int64 result; // rax
  ULONG v9; // edi
  PVOID StringRoutine; // rax
  ULONG v11; // ecx
  ULONG v12; // edx
  NTSTATUS v13; // edi
  __int16 v14; // r8
  ULONG UTF8StringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  v5 = *(unsigned __int16 *)a2;
  UTF8StringActualByteCount = 0;
  v7 = 0;
  result = CountUnicodeToUTF8(a2[1], v5, &UTF8StringActualByteCount);
  if ( (int)result >= 0 )
  {
    v9 = UTF8StringActualByteCount + 1;
    UTF8StringActualByteCount = v9;
    if ( v9 > 0xFFFF )
      return 3221225712LL;
    if ( a3 )
    {
      StringRoutine = ExpAllocateStringRoutine(v9);
      *(_QWORD *)(a1 + 8) = StringRoutine;
      if ( !StringRoutine )
        return 3221225495LL;
      *(_WORD *)(a1 + 2) = v9;
      LOWORD(v11) = v9;
    }
    else
    {
      v11 = *(unsigned __int16 *)(a1 + 2);
      if ( v9 > v11 )
      {
        if ( !(_WORD)v11 )
          return 2147483653LL;
        v7 = 1;
      }
    }
    v13 = RtlUnicodeToUTF8N(
            *(PCHAR *)(a1 + 8),
            (unsigned __int16)v11 - 1,
            &UTF8StringActualByteCount,
            (PCWCH)a2[1],
            *(unsigned __int16 *)a2);
    if ( v13 < 0 )
    {
      if ( a3 )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 8), v12);
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_WORD *)(a1 + 2) = 0;
      }
    }
    else
    {
      v14 = UTF8StringActualByteCount;
      *(_BYTE *)(UTF8StringActualByteCount + *(_QWORD *)(a1 + 8)) = 0;
      *(_WORD *)a1 = v14;
      if ( v7 )
        return (unsigned int)-2147483643;
    }
    return (unsigned int)v13;
  }
  return result;
}
