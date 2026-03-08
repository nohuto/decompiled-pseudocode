/*
 * XREFs of VfSpRtlUnicodeStringToAnsiString_Exit @ 0x140AE56F0
 * Callers:
 *     <none>
 * Callees:
 *     ViSpRtlReplaceStringBuffer @ 0x140AE5774 (ViSpRtlReplaceStringBuffer.c)
 */

__int64 __fastcall VfSpRtlUnicodeStringToAnsiString_Exit(__int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    if ( *(int *)(a1 + 32) >= 0 )
      return ViSpRtlReplaceStringBuffer(*(_QWORD *)(a1 + 24), *(_QWORD *)a1);
  }
  return result;
}
