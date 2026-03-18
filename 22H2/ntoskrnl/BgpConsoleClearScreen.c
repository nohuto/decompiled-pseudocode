/*
 * XREFs of BgpConsoleClearScreen @ 0x140AF23F0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x140AF2428 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( qword_140CF7BA0 )
    v0 = BgpConsoleClearScreenEx();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
