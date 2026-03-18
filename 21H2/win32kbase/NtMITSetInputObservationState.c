/*
 * XREFs of NtMITSetInputObservationState @ 0x1C0155B00
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     SetUMInputObservationState @ 0x1C01E86C4 (SetUMInputObservationState.c)
 */

__int64 __fastcall NtMITSetInputObservationState(unsigned int a1, unsigned int a2, unsigned int a3)
{
  if ( CInputThreadBase::IsInputThread(gpInputThread) )
    return SetUMInputObservationState(a1, a2, a3);
  else
    return 3221225506LL;
}
