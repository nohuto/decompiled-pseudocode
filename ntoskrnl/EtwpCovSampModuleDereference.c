/*
 * XREFs of EtwpCovSampModuleDereference @ 0x1408A4F50
 * Callers:
 *     EtwpCovSampImageNotify @ 0x1408A4E40 (EtwpCovSampImageNotify.c)
 *     EtwpCovSampProcessRemoveModule @ 0x1408A528C (EtwpCovSampProcessRemoveModule.c)
 *     EtwpCovSampProcessCleanup @ 0x1409EFCC8 (EtwpCovSampProcessCleanup.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall EtwpCovSampModuleDereference(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 result; // rax

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 64), 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  result = v2 - 1;
  if ( v3 )
  {
    if ( result )
      __fastfail(0xEu);
  }
  else if ( result == 1 && !*(_DWORD *)(a2 + 132) && a1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 1636));
  }
  return result;
}
