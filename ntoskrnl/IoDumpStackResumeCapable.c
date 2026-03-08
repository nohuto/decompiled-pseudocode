/*
 * XREFs of IoDumpStackResumeCapable @ 0x14054D798
 * Callers:
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 IoDumpStackResumeCapable()
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C6A8E8 )
      return ((__int64 (*)(void))qword_140C6A8E8)();
  }
  return result;
}
