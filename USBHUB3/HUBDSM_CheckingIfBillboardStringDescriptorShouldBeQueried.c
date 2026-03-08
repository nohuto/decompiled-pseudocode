/*
 * XREFs of HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried @ 0x1C00223E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBDTX_LogBillboardEvent @ 0x1C002D020 (HUBDTX_LogBillboardEvent.c)
 */

__int64 __fastcall HUBDSM_CheckingIfBillboardStringDescriptorShouldBeQueried(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // ebx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_BYTE *)(**(_QWORD **)(v1 + 2648) + 3LL) )
  {
    return 4089;
  }
  else
  {
    v2 = 4061;
    HUBDTX_LogBillboardEvent(v1, 0LL);
  }
  return v2;
}
