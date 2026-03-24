/*
 * XREFs of AdtpCleanupParameterAllocations @ 0x1403C0224
 * Callers:
 *     AdtpWriteToEtwEx @ 0x1405C20A4 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x1407B8E98 (AdtpWriteToEtw.c)
 * Callees:
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall AdtpCleanupParameterAllocations(_BYTE *a1, ULONG_PTR *a2, unsigned int a3)
{
  __int64 v4; // rsi
  PSLIST_ENTRY result; // rax

  if ( a3 )
  {
    v4 = a3;
    do
    {
      if ( *a1 )
        result = ExFreeHeapPool(*a2);
      ++a1;
      a2 += 2;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
