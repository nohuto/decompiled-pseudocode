/*
 * XREFs of ?GetDriverName@PDEV@@QEAAPEBGXZ @ 0x1C017F408
 * Callers:
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00EED00 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z @ 0x1C017F440 (-LogUmpdCallbackStatus@XDCOBJ@@AEAAXPEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall PDEV::GetDriverName(PDEV *this)
{
  const unsigned __int16 *result; // rax

  result = (const unsigned __int16 *)*((_QWORD *)this + 445);
  if ( !result )
  {
    result = L"unknown";
    if ( (*((_DWORD *)this + 10) & 0x8000) == 0 )
      return L"display";
  }
  return result;
}
