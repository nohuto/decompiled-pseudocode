/*
 * XREFs of MiVadIsCfgBitmap @ 0x14061E20C
 * Callers:
 *     MiLockVadRange @ 0x14061E040 (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x1406A0330 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsCfgBitmap(__int64 a1)
{
  int v1; // r8d
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 456); *i != a1; i += 4 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
