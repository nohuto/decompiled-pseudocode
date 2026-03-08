/*
 * XREFs of NtRIMSetDeadzoneRotation @ 0x1C01A2A60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     RIMSetDeadzoneRotation @ 0x1C01AADD8 (RIMSetDeadzoneRotation.c)
 */

__int64 __fastcall NtRIMSetDeadzoneRotation(unsigned int a1)
{
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    return 5LL;
  RIMSetDeadzoneRotation(a1);
  return 0LL;
}
