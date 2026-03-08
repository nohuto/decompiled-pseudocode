/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x14054E2C0
 * Callers:
 *     PopHiberInitializeResources @ 0x140985824 (PopHiberInitializeResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2))(void)
{
  __int64 (*result)(void); // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_140C6A8F0;
    if ( qword_140C6A8F0 )
      return (__int64 (*)(void))qword_140C6A8F0();
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
