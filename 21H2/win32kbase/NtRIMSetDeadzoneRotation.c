/*
 * XREFs of NtRIMSetDeadzoneRotation @ 0x1C0180F90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     RIMSetDeadzoneRotation @ 0x1C0188E78 (RIMSetDeadzoneRotation.c)
 */

__int64 __fastcall NtRIMSetDeadzoneRotation(unsigned int a1)
{
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    return 5LL;
  RIMSetDeadzoneRotation(a1);
  return 0LL;
}
