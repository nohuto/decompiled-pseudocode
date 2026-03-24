/*
 * XREFs of ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0272F04
 * Callers:
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C0277D20 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008BAB0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0125320 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeSrcDco(DEVLOCKBLTOBJ *this, __int64 a2, __int64 a3)
{
  struct XDCOBJ *v3; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rbx
  __int64 CurrentProcess; // rax

  v3 = (DEVLOCKBLTOBJ *)((char *)this + 176);
  v5 = *((_QWORD *)this + 22);
  if ( v5 && *((_BYTE *)v3 + 49) )
  {
    v6 = *(_QWORD *)(v5 + 48);
    if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
    {
      *(_DWORD *)(v5 + 36) &= ~0x4000u;
      DC::pSurface(*(DC **)v3, *(struct SURFACE **)(v6 + 2552));
    }
    v7 = *((_QWORD *)this + 29);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 72);
      CurrentProcess = PsGetCurrentProcess(v5, v6, a3);
      MmUnmapViewOfSection(CurrentProcess, v8);
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, v3);
    DLODCOBJ::vUnlock(v3);
    *(_QWORD *)v3 = 0LL;
  }
  return 1LL;
}
