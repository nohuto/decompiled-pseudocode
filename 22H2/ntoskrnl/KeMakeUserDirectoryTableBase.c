/*
 * XREFs of KeMakeUserDirectoryTableBase @ 0x140291918
 * Callers:
 *     MiDeleteProcessShadow @ 0x14029160C (MiDeleteProcessShadow.c)
 *     MmStealTopLevelPage @ 0x1403D6DAC (MmStealTopLevelPage.c)
 *     MiAllocateProcessShadow @ 0x14070615C (MiAllocateProcessShadow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeUserDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 1;
  return a1;
}
