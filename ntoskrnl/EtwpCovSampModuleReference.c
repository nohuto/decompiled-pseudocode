/*
 * XREFs of EtwpCovSampModuleReference @ 0x1408A4F92
 * Callers:
 *     ProcessForExeModule @ 0x14046221A (ProcessForExeModule.c)
 *     EtwpCovSampProcessAddModule @ 0x1409EFA84 (EtwpCovSampProcessAddModule.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCovSampModuleReference(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
  if ( result <= 1 )
    __fastfail(0xEu);
  if ( *(_QWORD *)(a2 + 64) == 2LL && !*(_DWORD *)(a2 + 132) )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1636));
  return result;
}
