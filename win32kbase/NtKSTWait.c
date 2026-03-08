/*
 * XREFs of NtKSTWait @ 0x1C00CC330
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserKSTWait @ 0x1C007BCBC (UserKSTWait.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
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
