/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C005A234
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C017F900 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x81) != 0 && qword_1C02D5D38 && (int)qword_1C02D5D38() >= 0 )
    {
      if ( qword_1C02D5D40 )
        qword_1C02D5D40(this);
    }
    RFONTOBJ::vReleaseCache(this);
  }
}
