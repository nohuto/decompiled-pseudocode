/*
 * XREFs of ?SaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C0053730
 * Callers:
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0046C90 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ @ 0x1C004AC60 (-GetUserAttr@XDCOBJ@@AEAAPEAU_DC_ATTR@@XZ.c)
 *     ?SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z @ 0x1C0052D10 (-SaveAttributes@DC@@QEAAHPEAU_DC_ATTR@@@Z.c)
 */

__int64 __fastcall XDCOBJ::SaveAttributes(XDCOBJ *this)
{
  struct _DC_ATTR *UserAttr; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) != 0 )
    return 1LL;
  if ( *((_DWORD *)this + 3)
    || (UserAttr = XDCOBJ::GetUserAttr(this)) == 0LL
    || (unsigned int)DC::SaveAttributes(*(DC **)this, UserAttr) )
  {
    *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
    *((_DWORD *)this + 2) = 1;
    return 1LL;
  }
  return 0LL;
}
