/*
 * XREFs of VmpProcessInvalidateSlat @ 0x1405F8654
 * Callers:
 *     VmpFlushTbVaRange @ 0x1405F6DF0 (VmpFlushTbVaRange.c)
 *     VmpInvalidateSlatBatched @ 0x1405F73F8 (VmpInvalidateSlatBatched.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     VmpInvalidateSingleGpaRange @ 0x14045E678 (VmpInvalidateSingleGpaRange.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x1405F7AAC (VmpLogTbFlushSlatInvalidate.c)
 */

__int64 __fastcall VmpProcessInvalidateSlat(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // r14

  if ( VmpTraceLoggingProvider && *(_DWORD *)VmpTraceLoggingProvider && tlgKeywordOn(VmpTraceLoggingProvider, 2LL) )
    VmpLogTbFlushSlatInvalidate(v7, v8);
  v9 = a4;
  v10 = ((a2 + 511) & 0xFFFFFFFFFFFFFE00uLL) - a2;
  result = v10 + 512;
  if ( a4 < v10 + 512 )
  {
    LODWORD(v10) = 0;
    v12 = 0LL;
  }
  else
  {
    v9 = ((_WORD)a4 - (_WORD)v10) & 0x1FF;
    v12 = a4 - v9 - v10;
    if ( v10 )
      result = VmpInvalidateSingleGpaRange(*(_QWORD *)(a1 + 72), a2, ((a2 + 511) & 0xFFFFFFFFFFFFFE00uLL) - a2, 0);
  }
  if ( v12 )
    result = VmpInvalidateSingleGpaRange(*(_QWORD *)(a1 + 72), (int)v10 + (int)a2, v12 >> 9, 1);
  if ( v9 )
    return VmpInvalidateSingleGpaRange(*(_QWORD *)(a1 + 72), (int)a2 + (int)v10 + (int)v12, v9, 0);
  return result;
}
