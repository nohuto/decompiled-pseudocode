/*
 * XREFs of NtMITDispatchCompletion @ 0x1C007DC50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserDispatchMITCompletion @ 0x1C007DB68 (UserDispatchMITCompletion.c)
 */

__int64 __fastcall NtMITDispatchCompletion(int a1, unsigned int a2)
{
  if ( CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    UserDispatchMITCompletion(a1, a2);
  else
    UserSetLastError(5);
  return 0LL;
}
