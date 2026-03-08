/*
 * XREFs of MiFreeForkMaps @ 0x1406621B0
 * Callers:
 *     MiCloneVads @ 0x140660C98 (MiCloneVads.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiFinishLastForkPageTable @ 0x140661F1C (MiFinishLastForkPageTable.c)
 */

unsigned __int64 __fastcall MiFreeForkMaps(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 result; // rax
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v1 = *(_QWORD *)(a1 + 56);
  if ( v1 )
    result = MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)(((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL), 1u);
  v4 = (__int64 *)(a1 + 8);
  v5 = 3LL;
  do
  {
    if ( *v4 != -1 )
      result = MiFinishLastForkPageTable(a1, *v4);
    ++v4;
    --v5;
  }
  while ( v5 );
  return result;
}
