/*
 * XREFs of MiVadIsMetadataBitmap @ 0x1407D76A0
 * Callers:
 *     MiLockVadRange @ 0x1407D74B8 (MiLockVadRange.c)
 *     NtAreMappedFilesTheSame @ 0x14086F640 (NtAreMappedFilesTheSame.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiVadIsMetadataBitmap(__int64 a1)
{
  int v1; // r8d
  _QWORD *i; // rax

  v1 = 0;
  for ( i = (_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 440); *i != a1; i += 4 )
  {
    if ( (unsigned int)++v1 >= 2 )
      return 0LL;
  }
  return 1LL;
}
