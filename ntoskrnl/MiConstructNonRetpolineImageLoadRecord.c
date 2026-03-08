/*
 * XREFs of MiConstructNonRetpolineImageLoadRecord @ 0x140A31548
 * Callers:
 *     MiLogRetpolineImageLoadEvents @ 0x140784A44 (MiLogRetpolineImageLoadEvents.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlUnicodeStringCopy @ 0x1402B3164 (RtlUnicodeStringCopy.c)
 */

char *__fastcall MiConstructNonRetpolineImageLoadRecord(__int64 a1)
{
  const UNICODE_STRING *v1; // rsi
  char *result; // rax
  char *v4; // rbx
  unsigned __int16 Length; // ax

  v1 = (const UNICODE_STRING *)(a1 + 88);
  result = (char *)MiAllocatePool(256, *(unsigned __int16 *)(a1 + 88) + 40LL, 0x524E6D4Du);
  v4 = result;
  if ( result )
  {
    Length = v1->Length;
    *((_OWORD *)v4 + 1) = 0LL;
    *((_WORD *)v4 + 9) = Length;
    *((_QWORD *)v4 + 3) = v4 + 40;
    RtlUnicodeStringCopy((PUNICODE_STRING)v4 + 1, v1);
    *((_DWORD *)v4 + 8) = *(_DWORD *)(a1 + 120);
    *((_DWORD *)v4 + 9) = *(_DWORD *)(a1 + 156);
    return v4;
  }
  return result;
}
