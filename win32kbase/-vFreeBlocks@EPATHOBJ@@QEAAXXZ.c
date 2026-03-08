/*
 * XREFs of ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C01816C0
 * Callers:
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00DE138 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C01815E8 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0181920 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 * Callees:
 *     freepathalloc @ 0x1C0181AB0 (freepathalloc.c)
 */

void __fastcall EPATHOBJ::vFreeBlocks(EPATHOBJ *this)
{
  _DWORD *v2; // rcx
  _DWORD *v3; // rbx

  v2 = *(_DWORD **)(*((_QWORD *)this + 1) + 24LL);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD **)v2;
      if ( v2[4] == 4032 )
        freepathalloc(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 24LL) = 0LL;
}
