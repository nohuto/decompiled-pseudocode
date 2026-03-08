/*
 * XREFs of BgpConsoleClearScreen @ 0x140AEE3F0
 * Callers:
 *     <none>
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     BgpConsoleClearScreenEx @ 0x140AEE428 (BgpConsoleClearScreenEx.c)
 */

__int64 BgpConsoleClearScreen()
{
  unsigned int v0; // ebx

  BgpFwAcquireLock();
  if ( qword_140CF7760 )
    v0 = BgpConsoleClearScreenEx();
  else
    v0 = -1073741823;
  BgpFwReleaseLock();
  return v0;
}
