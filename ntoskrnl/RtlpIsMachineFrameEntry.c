/*
 * XREFs of RtlpIsMachineFrameEntry @ 0x1402D8764
 * Callers:
 *     RtlpUnwindPrologue @ 0x140281BF0 (RtlpUnwindPrologue.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlpIsMachineFrameEntry(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v3; // eax

  v3 = 0;
  if ( !a3 )
    return 0;
  while ( a1 != *a2 )
  {
    ++v3;
    ++a2;
    if ( v3 >= a3 )
      return 0;
  }
  return 1;
}
