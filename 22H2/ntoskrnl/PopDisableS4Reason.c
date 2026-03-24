/*
 * XREFs of PopDisableS4Reason @ 0x1403AF5B8
 * Callers:
 *     PopEnableHiberFile @ 0x14079B350 (PopEnableHiberFile.c)
 * Callees:
 *     <none>
 */

__int64 PopDisableS4Reason()
{
  return *(_QWORD *)(*(_QWORD *)qword_140C4E648 + 6920LL) >= 0x100000000uLL ? 8 : 0;
}
