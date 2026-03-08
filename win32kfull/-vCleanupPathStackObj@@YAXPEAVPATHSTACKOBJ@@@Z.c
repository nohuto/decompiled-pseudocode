/*
 * XREFs of ?vCleanupPathStackObj@@YAXPEAVPATHSTACKOBJ@@@Z @ 0x1C0288F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vCleanupPathStackObj(struct PATHSTACKOBJ *a1)
{
  if ( a1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) )
      EPATHOBJ::vFreeBlocks(a1);
  }
}
