/*
 * XREFs of vRestoreRegion @ 0x1C00944C0
 * Callers:
 *     GreRestoreDCInternal @ 0x1C00BEFB0 (GreRestoreDCInternal.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall vRestoreRegion(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  bool v4; // zf

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 168LL);
  if ( v2 )
  {
    v4 = (*(_DWORD *)(v2 + 32))-- == 1;
    if ( v4 )
      REGION::vDeleteREGION((PSLIST_ENTRY)v2);
  }
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 160LL);
  if ( v3 )
  {
    v4 = (*(_DWORD *)(v3 + 32))-- == 1;
    if ( v4 )
      REGION::vDeleteREGION((PSLIST_ENTRY)v3);
  }
}
