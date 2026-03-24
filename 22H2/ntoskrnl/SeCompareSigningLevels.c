/*
 * XREFs of SeCompareSigningLevels @ 0x14077F140
 * Callers:
 *     MiCreateSystemSection @ 0x1403728BC (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x140657B40 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C1DB20 )
    return ((__int64 (*)(void))qword_140C1DB20)();
  return result;
}
