/*
 * XREFs of ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x1C0014278
 * Callers:
 *     xxxDesktopThread @ 0x1C0093DC0 (xxxDesktopThread.c)
 *     zzzReattachThreads @ 0x1C00CD3A8 (zzzReattachThreads.c)
 *     xxxHardErrorControl @ 0x1C0226A64 (xxxHardErrorControl.c)
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
