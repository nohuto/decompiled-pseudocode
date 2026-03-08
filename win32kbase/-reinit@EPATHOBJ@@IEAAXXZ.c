/*
 * XREFs of ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C01815E8
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C01811A8 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C01816C0 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall EPATHOBJ::reinit(EPATHOBJ *this)
{
  if ( *((_QWORD *)this + 1) )
  {
    EPATHOBJ::vFreeBlocks(this);
    *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 1) + 40LL) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 1) + 48LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 56LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 52LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 60LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 64LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 68LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 80LL) = 3;
    *(_QWORD *)(*((_QWORD *)this + 1) + 72LL) = 0LL;
    *(_DWORD *)(*((_QWORD *)this + 1) + 88LL) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 92LL) = 0;
    *(_QWORD *)this = 0LL;
  }
}
