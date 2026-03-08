/*
 * XREFs of ?PostProcessInput@CHidInput@@EEAAJXZ @ 0x1C00F3970
 * Callers:
 *     <none>
 * Callees:
 *     InitiatePTPMouseProcessing @ 0x1C0217DF0 (InitiatePTPMouseProcessing.c)
 */

__int64 __fastcall CHidInput::PostProcessInput(CHidInput *this)
{
  if ( *((_BYTE *)this + 1424) )
  {
    *((_BYTE *)this + 1424) = 0;
    InitiatePTPMouseProcessing();
  }
  return 0LL;
}
