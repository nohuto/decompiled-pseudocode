/*
 * XREFs of ?IsSuspended@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAA_NXZ @ 0x1C035D610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::IsSuspended(DXG_HOST_COMPOSITIONOBJECTCHANNEL *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 17) || *((_BYTE *)this + 16) )
    return 1;
  return result;
}
