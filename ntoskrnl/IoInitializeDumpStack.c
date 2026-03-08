/*
 * XREFs of IoInitializeDumpStack @ 0x14054E39C
 * Callers:
 *     PopRestoreHiberContext @ 0x140AA139C (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140AA1810 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     IopDumpTraceInitializeDumpStackFailure @ 0x140550988 (IopDumpTraceInitializeDumpStackFailure.c)
 */

__int64 __fastcall IoInitializeDumpStack(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = -1073741823;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140C6A8B8 )
    {
      v2 = qword_140C6A8B8(a1, 0LL);
      v1 = v2;
      if ( v2 < 0 )
        IopDumpTraceInitializeDumpStackFailure((unsigned int)v2);
    }
  }
  return v1;
}
