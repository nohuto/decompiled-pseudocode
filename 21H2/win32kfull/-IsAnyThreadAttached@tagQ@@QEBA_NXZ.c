/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0117970
 * Callers:
 *     xxxDesktopThread @ 0x1C00A4360 (xxxDesktopThread.c)
 *     zzzReattachThreads @ 0x1C00A8E58 (zzzReattachThreads.c)
 *     xxxHardErrorControl @ 0x1C023CD7C (xxxHardErrorControl.c)
 * Callees:
 *     <none>
 */

char __fastcall tagQ::IsAnyThreadAttached(tagQ *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 59) || *((_QWORD *)this + 60) )
    return 1;
  return result;
}
