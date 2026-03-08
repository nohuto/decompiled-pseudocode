/*
 * XREFs of vRestoreRegion @ 0x1C00B1BD0
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00A49CC (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00558E0 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall vRestoreRegion(__int64 a1)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rcx
  bool v4; // zf

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 168LL);
  if ( v2 )
  {
    v4 = (*(_DWORD *)(v2 + 76))-- == 1;
    if ( v4 )
      REGION::vDeleteREGION(v2);
  }
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 160LL);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 76))-- == 1;
    if ( v4 )
      REGION::vDeleteREGION(v3);
  }
}
