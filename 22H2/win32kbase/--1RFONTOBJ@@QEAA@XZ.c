/*
 * XREFs of ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088B74
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C0152180 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::~RFONTOBJ(RFONTOBJ *this)
{
  if ( *(_QWORD *)this )
  {
    if ( (*(_DWORD *)(*(_QWORD *)this + 712LL) & 0x81) != 0 && qword_1C0294BC8 && (int)qword_1C0294BC8() >= 0 )
    {
      if ( qword_1C0294BD0 )
        qword_1C0294BD0(this);
    }
    RFONTOBJ::vReleaseCache(this);
  }
}
