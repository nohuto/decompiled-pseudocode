/*
 * XREFs of ?bValid@WIDENER@@QEBAHXZ @ 0x1C0150D64
 * Callers:
 *     ?bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C0150DA6 (-bWiden@EPATHOBJ@@QEAAHAEAV1@PEAU_XFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0150E1A (-bWiden@WIDENER@@IEAAHXZ.c)
 *     ??0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEBU_LINEATTRS@@@Z @ 0x1C02F2FFC (--0WIDENER@@QEAA@AEAVEPATHOBJ@@AEAVEXFORMOBJ@@PEBU_LINEATTRS@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall WIDENER::bValid(WIDENER *this)
{
  _BOOL8 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 143) && !*((_DWORD *)this + 314) && *((_QWORD *)this + 124) && !*((_DWORD *)this + 276) )
  {
    if ( *((_QWORD *)this + 104) )
      return *((_DWORD *)this + 236) == 0;
  }
  return result;
}
