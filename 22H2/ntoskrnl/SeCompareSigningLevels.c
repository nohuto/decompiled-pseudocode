/*
 * XREFs of SeCompareSigningLevels @ 0x1407E9DF0
 * Callers:
 *     MiCreateSystemSection @ 0x14035F150 (MiCreateSystemSection.c)
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 SeCompareSigningLevels()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_140C37A00 )
    return ((__int64 (*)(void))qword_140C37A00)();
  return result;
}
