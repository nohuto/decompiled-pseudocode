/*
 * XREFs of ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C013A9D0
 * Callers:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C013A9A8 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A898 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall XDCOBJ::SaveAttributesHelper(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax
  _BOOL8 result; // rax

  result = 1;
  if ( !*((_DWORD *)this + 3) )
  {
    UserAttr = XDCOBJ::GetUserAttr(this);
    if ( UserAttr )
    {
      if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
        return 0;
    }
  }
  return result;
}
