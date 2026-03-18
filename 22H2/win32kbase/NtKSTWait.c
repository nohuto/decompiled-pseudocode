/*
 * XREFs of NtKSTWait @ 0x1C00BD120
 * Callers:
 *     <none>
 * Callees:
 *     UserKSTWait @ 0x1C0055434 (UserKSTWait.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0057EC8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

__int64 NtKSTWait()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp) )
    return (unsigned int)UserKSTWait();
  else
    UserSetLastError(5);
  return v0;
}
