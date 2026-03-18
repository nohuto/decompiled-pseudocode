/*
 * XREFs of ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0090EF0
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0090DF0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00D96B4 (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C016A1E0 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 * Callees:
 *     freepathalloc @ 0x1C0090F40 (freepathalloc.c)
 */

void __fastcall EPATHOBJ::vFreeBlocks(EPATHOBJ *this)
{
  __int64 v1; // rax
  _DWORD *v3; // rcx
  _DWORD *v4; // rbx

  v1 = *((_QWORD *)this + 1);
  v3 = *(_DWORD **)(v1 + 24);
  if ( v3 )
  {
    do
    {
      v4 = *(_DWORD **)v3;
      if ( v3[4] == 4032 )
        freepathalloc(v3);
      v3 = v4;
    }
    while ( v4 );
    v1 = *((_QWORD *)this + 1);
  }
  *(_QWORD *)(v1 + 24) = 0LL;
}
