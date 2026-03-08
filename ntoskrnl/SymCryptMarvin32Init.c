/*
 * XREFs of SymCryptMarvin32Init @ 0x1403F06DC
 * Callers:
 *     HvpGenerateLogEntryChecksums @ 0x14072E328 (HvpGenerateLogEntryChecksums.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptMarvin32Init(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0

  v2 = *a2;
  *(_DWORD *)(a1 + 40) = 0;
  *(_OWORD *)(a1 + 16) = v2;
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 32) = a2;
}
