/*
 * XREFs of ExpHeapDumpNodeLinksValid @ 0x14060D070
 * Callers:
 *     ExpHeapDumpEnumLargeAllocs @ 0x14060CF78 (ExpHeapDumpEnumLargeAllocs.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x1403471E0 (MmIsAddressValidEx.c)
 */

__int64 __fastcall ExpHeapDumpNodeLinksValid(__int64 *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  if ( MmIsAddressValidEx((__int64)a1)
    && (!*a1 || MmIsAddressValidEx(*a1) && (__int64 *)(*(_QWORD *)(*a1 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a1) )
  {
    v3 = a1[1];
    if ( !v3 )
      return 1LL;
    if ( MmIsAddressValidEx(v3) )
    {
      LOBYTE(v2) = (*(_QWORD *)(a1[1] + 16) & 0xFFFFFFFFFFFFFFFCuLL) == (_QWORD)a1;
      return v2;
    }
  }
  return 0LL;
}
