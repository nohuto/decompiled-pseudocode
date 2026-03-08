/*
 * XREFs of KiPrepareFlushParameters @ 0x1403C8E3C
 * Callers:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     KeFlushTb @ 0x140323CB0 (KeFlushTb.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x140387610 (KeFlushMultipleRangeCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403876F4 (KeFlushCurrentTbOnly.c)
 *     KeFlushSingleCurrentTb @ 0x140387AD4 (KeFlushSingleCurrentTb.c)
 *     KeFlushMultipleRangeTb @ 0x14038C374 (KeFlushMultipleRangeTb.c)
 * Callees:
 *     <none>
 */

void __fastcall KiPrepareFlushParameters(int a1, unsigned __int64 *a2, char *a3)
{
  char v3; // al
  int v4; // ecx
  int v5; // ecx

  if ( KiKvaShadow )
  {
    if ( !a1 || (v4 = a1 - 1) != 0 && v4 == 1 )
    {
      v3 = 0;
LABEL_4:
      *a2 = 0LL;
      *a3 = v3;
      return;
    }
LABEL_6:
    v3 = 1;
    goto LABEL_4;
  }
  if ( !a1 )
    goto LABEL_6;
  v5 = a1 - 1;
  if ( v5 )
  {
    if ( v5 != 1 )
      goto LABEL_6;
    *a2 = 0LL;
  }
  else
  {
    *a2 = KeGetCurrentThread()->ApcState.Process->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
  }
  *a3 = 0;
}
