/*
 * XREFs of SeCompareSigningLevels @ 0x14077F240
 * Callers:
 *     MiCreateSystemSection @ 0x1403720DC (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C1DB00 )
    return ((__int64 (*)(void))qword_140C1DB00)();
  return result;
}
