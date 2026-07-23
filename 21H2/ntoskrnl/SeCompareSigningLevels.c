/*
 * XREFs of SeCompareSigningLevels @ 0x14077F400
 * Callers:
 *     MiCreateSystemSection @ 0x140371C2C (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C1DB20 )
    return ((__int64 (*)(void))qword_140C1DB20)();
  return result;
}
