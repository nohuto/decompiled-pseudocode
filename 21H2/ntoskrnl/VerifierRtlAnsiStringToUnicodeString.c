/*
 * XREFs of VerifierRtlAnsiStringToUnicodeString @ 0x1409E6770
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViRtlReplaceStringBuffer @ 0x1409E6D3C (ViRtlReplaceStringBuffer.c)
 */

__int64 __fastcall VerifierRtlAnsiStringToUnicodeString(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+48h] [rbp+20h] BYREF

  result = ((__int64 (*)(void))pXdvRtlAnsiStringToUnicodeString)();
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      ViRtlReplaceStringBuffer(a1, &v7, retaddr);
      return v7;
    }
  }
  return result;
}
