/*
 * XREFs of MmGetSessionLocaleId @ 0x1407ED514
 * Callers:
 *     NtQueryDefaultLocale @ 0x14077BC50 (NtQueryDefaultLocale.c)
 *     PspUserThreadStartup @ 0x1407ED430 (PspUserThreadStartup.c)
 * Callees:
 *     <none>
 */

__int64 MmGetSessionLocaleId()
{
  _KPROCESS *Process; // rcx
  unsigned __int64 v1; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].Affinity.StaticBitmap[25];
  if ( !v1 || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    return (unsigned int)PsDefaultThreadLocaleId;
  else
    return *(unsigned int *)(v1 + 72);
}
