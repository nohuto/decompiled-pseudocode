/*
 * XREFs of EtwpLevelKeywordEnabled @ 0x140231970
 * Callers:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwTraceThreadWorkOnBehalfUpdate @ 0x140231900 (EtwTraceThreadWorkOnBehalfUpdate.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     EtwpFailLogging @ 0x1402FABEC (EtwpFailLogging.c)
 *     EtwProviderEnabled @ 0x140367E30 (EtwProviderEnabled.c)
 *     EtwpFailLoggingOld @ 0x14040C914 (EtwpFailLoggingOld.c)
 *     EtwpDiskProvTraceDisk @ 0x1405FB638 (EtwpDiskProvTraceDisk.c)
 *     EtwWriteString @ 0x1405FCA30 (EtwWriteString.c)
 * Callees:
 *     <none>
 */

bool __fastcall EtwpLevelKeywordEnabled(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned __int8 v3; // al

  if ( !*(_DWORD *)a1 )
    return 0;
  v3 = *(_BYTE *)(a1 + 4);
  if ( a2 > v3 )
  {
    if ( v3 )
      return 0;
  }
  if ( (*(_DWORD *)(a1 + 8) & 0x40) != 0 && !a3 )
    return 1;
  if ( (a3 & *(_QWORD *)(a1 + 16)) == 0 )
    return 0;
  return (a3 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24);
}
