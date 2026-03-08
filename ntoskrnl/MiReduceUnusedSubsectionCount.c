/*
 * XREFs of MiReduceUnusedSubsectionCount @ 0x140214D4C
 * Callers:
 *     MiRemoveUnusedSubsection @ 0x140214CC0 (MiRemoveUnusedSubsection.c)
 *     MiDeleteEmptySubsections @ 0x14036AC38 (MiDeleteEmptySubsections.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall MiReduceUnusedSubsectionCount(unsigned int *a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rcx
  signed __int64 result; // rax
  unsigned int v7; // eax

  v1 = *(_QWORD *)(qword_140C67048 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  v2 = a1[11];
  v3 = 8 * v2;
  if ( (unsigned __int64)(8 * v2) > 0xFE0 )
  {
    v7 = (8 * (_WORD)v2) & 0xFFF;
    if ( v3 >= 0x10000 || v7 > 0xFC0 )
    {
      v5 = (v3 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v4 = v3 + 15;
  }
  else
  {
    v4 = v3 + 31;
  }
  v5 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  result = _InterlockedExchangeAdd64(&qword_140C651D8, -(__int64)v5);
  *(_QWORD *)(v1 + 1760) -= v5;
  return result;
}
