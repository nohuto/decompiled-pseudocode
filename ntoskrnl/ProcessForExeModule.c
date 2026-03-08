/*
 * XREFs of ProcessForExeModule @ 0x14046221A
 * Callers:
 *     EtwpCovSampContextGetModule @ 0x1409EE4AC (EtwpCovSampContextGetModule.c)
 * Callees:
 *     EtwpCovSampModuleReference @ 0x1408A4F92 (EtwpCovSampModuleReference.c)
 */

__int64 __fastcall ProcessForExeModule(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 8) & 0x400) != 0 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a2 + 48) = a3;
      *(_DWORD *)(a2 + 40) = *(_DWORD *)(a3 + 124);
      *(_DWORD *)(a2 + 44) = *(_DWORD *)(a3 + 128);
      return EtwpCovSampModuleReference(a1, a3);
    }
  }
  return result;
}
