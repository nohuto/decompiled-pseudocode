/*
 * XREFs of ?GetAppcommandQueue@@YAPEAUtagQ@@XZ @ 0x1C01E8700
 * Callers:
 *     EditionHandleAndPostKeyEvent @ 0x1C009F110 (EditionHandleAndPostKeyEvent.c)
 * Callees:
 *     <none>
 */

struct tagQ *GetAppcommandQueue(void)
{
  __int64 v0; // rax

  if ( gpqForeground
    && ((v0 = *(_QWORD *)(gpqForeground + 120LL)) != 0 || (v0 = *(_QWORD *)(gpqForeground + 128LL)) != 0) )
  {
    return *(struct tagQ **)(*(_QWORD *)(v0 + 16) + 432LL);
  }
  else
  {
    return 0LL;
  }
}
