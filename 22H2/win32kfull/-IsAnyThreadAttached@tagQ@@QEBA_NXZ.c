/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0015028
 * Callers:
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     xxxDesktopThread @ 0x1C0069C00 (xxxDesktopThread.c)
 *     xxxHardErrorControl @ 0x1C0223D54 (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

char __fastcall tagQ::IsAnyThreadAttached(tagQ *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 60) || *((_QWORD *)this + 61) )
    return 1;
  return result;
}
