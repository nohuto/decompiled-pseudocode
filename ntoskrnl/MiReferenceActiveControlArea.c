/*
 * XREFs of MiReferenceActiveControlArea @ 0x14034C41C
 * Callers:
 *     MiReferenceControlArea @ 0x140331908 (MiReferenceControlArea.c)
 *     MiReferenceExistingControlArea @ 0x140361BD4 (MiReferenceExistingControlArea.c)
 * Callees:
 *     MiBuildWakeList @ 0x140332B34 (MiBuildWakeList.c)
 *     MiRemoveUnusedSegment @ 0x14034C47C (MiRemoveUnusedSegment.c)
 */

__int64 *__fastcall MiReferenceActiveControlArea(_DWORD *a1, __int64 a2)
{
  __int64 *v4; // rax
  __int64 *v5; // rsi

  v4 = MiBuildWakeList(a2, 4);
  ++*(_QWORD *)(a2 + 24);
  v5 = v4;
  MiRemoveUnusedSegment(a2);
  if ( (*a1 & 1) != 0 )
    *(_DWORD *)(a2 + 56) |= 0x8000u;
  else
    ++*(_QWORD *)(a2 + 48);
  return v5;
}
