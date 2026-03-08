/*
 * XREFs of ?CompleteIndependentFlipNotifyToken@CFlipToken@@UEAA_NXZ @ 0x1C0078930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CFlipToken::CompleteIndependentFlipNotifyToken(CFlipToken *this)
{
  if ( !*((_BYTE *)this + 560) )
    return 0;
  *((_BYTE *)this + 564) = 1;
  return 1;
}
