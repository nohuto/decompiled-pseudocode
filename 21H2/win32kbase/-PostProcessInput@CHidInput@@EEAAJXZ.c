/*
 * XREFs of ?PostProcessInput@CHidInput@@EEAAJXZ @ 0x1C01E2880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHidInput::PostProcessInput(CHidInput *this)
{
  if ( *((_BYTE *)this + 1336) )
  {
    *((_BYTE *)this + 1336) = 0;
    KeSetEvent((PRKEVENT)gpevtPTPOperation, 1, 0);
  }
  return 0LL;
}
