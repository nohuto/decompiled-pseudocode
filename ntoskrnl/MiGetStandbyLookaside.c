/*
 * XREFs of MiGetStandbyLookaside @ 0x140319E70
 * Callers:
 *     MiUnlinkPageFromListEx @ 0x140264100 (MiUnlinkPageFromListEx.c)
 *     MiReplaceStandbyLookaside @ 0x1402C6D1C (MiReplaceStandbyLookaside.c)
 *     MiPurgingPageFromLookaside @ 0x1402C75C0 (MiPurgingPageFromLookaside.c)
 *     MiSynchronizeFastPageInsert @ 0x140319210 (MiSynchronizeFastPageInsert.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetStandbyLookaside(__int64 *a1, int a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *a1;
  v3 = *((unsigned int *)a1 + 6);
  if ( !a2 )
    return (v3 << 9) + v2 + 7424;
  if ( a2 == 1 )
    return (v3 << 9) + v2 + 11520;
  return 25408LL * *((unsigned int *)a1 + 2)
       + ((v3 + 8LL * *((unsigned int *)a1 + 7)) << 9)
       + *(_QWORD *)(v2 + 16)
       + 6080LL;
}
