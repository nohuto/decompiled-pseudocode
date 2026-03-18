/*
 * XREFs of ?bActive@RFONTOBJ@@QEBAHXZ @ 0x1C0270718
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C015154C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A5B8C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RFONTOBJ::bActive(RFONTOBJ *this)
{
  return *(_DWORD *)(*(_QWORD *)this + 660LL) != 0;
}
