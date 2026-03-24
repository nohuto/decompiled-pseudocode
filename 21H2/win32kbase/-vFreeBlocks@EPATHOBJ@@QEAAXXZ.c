/*
 * XREFs of ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0021F70
 * Callers:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0021EE0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00C84CC (-bGarbageCollect@EPATHOBJGC@@QEAA_NXZ.c)
 *     ?reinit@EPATHOBJ@@IEAAXXZ @ 0x1C013D070 (-reinit@EPATHOBJ@@IEAAXXZ.c)
 * Callees:
 *     freepathalloc @ 0x1C0021FC0 (freepathalloc.c)
 */

void __fastcall EPATHOBJ::vFreeBlocks(EPATHOBJ *this)
{
  __int64 v1; // rax
  __int64 *v3; // rcx
  __int64 *v4; // rbx

  v1 = *((_QWORD *)this + 1);
  v3 = *(__int64 **)(v1 + 24);
  if ( v3 )
  {
    do
    {
      v4 = (__int64 *)*v3;
      if ( *((_DWORD *)v3 + 4) == 4032 )
        freepathalloc();
      v3 = v4;
    }
    while ( v4 );
    v1 = *((_QWORD *)this + 1);
  }
  *(_QWORD *)(v1 + 24) = 0LL;
}
