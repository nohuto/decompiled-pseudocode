/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1409B5BB0
 * Callers:
 *     DifRtlUpcaseUnicodeStringToAnsiStringWrapper @ 0x1405E9C20 (DifRtlUpcaseUnicodeStringToAnsiStringWrapper.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x140303E1C (AllocateOrValidateCharStringBuffer.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1407A00A0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1407A0310 (RtlxUnicodeStringToOemSize.c)
 *     ExFreePool @ 0x140AAB270 (ExFreePool.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToAnsiString(__int64 a1, const UNICODE_STRING *a2, char a3)
{
  ULONG v6; // eax
  __int64 result; // rax
  _WORD *v8; // r15
  PCHAR *v9; // rdi
  NTSTATUS v10; // ebx
  __int16 v11; // dx
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(a2);
  BytesInMultiByteString = v6;
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  v8 = (_WORD *)(a1 + 2);
  v9 = (PCHAR *)(a1 + 8);
  result = AllocateOrValidateCharStringBuffer(a3, v6, (__int64 *)(a1 + 8), (_WORD *)(a1 + 2));
  if ( (int)result >= 0 )
  {
    v10 = RtlUpcaseUnicodeToMultiByteN(*v9, (unsigned __int16)*v8, &BytesInMultiByteString, a2->Buffer, a2->Length);
    if ( v10 >= 0 )
    {
      v11 = BytesInMultiByteString;
      (*v9)[BytesInMultiByteString] = 0;
      *(_WORD *)a1 = v11;
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      if ( a3 )
      {
        ExFreePool(*v9);
        *v9 = 0LL;
        *v8 = 0;
      }
    }
    return (unsigned int)v10;
  }
  return result;
}
