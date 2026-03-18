/*
 * XREFs of SeCompareSigningLevels @ 0x140811D10
 * Callers:
 *     MiCreateSystemSection @ 0x1402D9E3C (MiCreateSystemSection.c)
 *     NtCreateUserProcess @ 0x14066D650 (NtCreateUserProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C1B8E0 )
    return ((__int64 (*)(void))qword_140C1B8E0)();
  return result;
}
