/*
 * XREFs of ??1XFERDCOBJ@@QEAA@XZ @ 0x1C0277950
 * Callers:
 *     ?GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z @ 0x1C02781E8 (-GreExtEscape@@YAHPEAUHDC__@@HHPEADH1W4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall XFERDCOBJ::~XFERDCOBJ(XFERDCOBJ *this)
{
  if ( *((_DWORD *)this + 12) )
    PopThreadGuardedObject((char *)this + 16);
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
