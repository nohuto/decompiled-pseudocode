/*
 * XREFs of SeCompareSigningLevels @ 0x14079AD80
 * Callers:
 *     MiCreateSystemSection @ 0x14036BD9C (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C37600 )
    return ((__int64 (*)(void))qword_140C37600)();
  return result;
}
