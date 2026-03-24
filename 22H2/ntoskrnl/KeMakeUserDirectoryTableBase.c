/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x140355C04
 * Callers:
 *     MiDeleteProcessShadow @ 0x140285DE8 (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x140387ED8 (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x1406FE00C (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
