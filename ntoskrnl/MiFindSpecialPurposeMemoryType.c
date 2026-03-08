/*
 * XREFs of MiFindSpecialPurposeMemoryType @ 0x14065DBE8
 * Callers:
 *     MiAddSpecialPurposeMemoryPrepare @ 0x140A44160 (MiAddSpecialPurposeMemoryPrepare.c)
 *     MiFindSpecialPurposeMemoryTypeByPartition @ 0x140A445E8 (MiFindSpecialPurposeMemoryTypeByPartition.c)
 *     MiInitializePartitionSpecialPurposeMemory @ 0x140A4470C (MiInitializePartitionSpecialPurposeMemory.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

_QWORD *__fastcall MiFindSpecialPurposeMemoryType(__int64 a1, const void *a2)
{
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v2 = (_QWORD *)(a1 + 16944);
  for ( i = *(_QWORD **)(a1 + 16944); ; i = (_QWORD *)*i )
  {
    if ( i == v2 )
      return 0LL;
    if ( !memcmp(i + 3, a2, 0x20uLL) )
      break;
  }
  return i;
}
