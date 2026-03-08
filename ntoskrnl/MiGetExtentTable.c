/*
 * XREFs of MiGetExtentTable @ 0x14063B540
 * Callers:
 *     MiDeleteFileExtentList @ 0x140A31150 (MiDeleteFileExtentList.c)
 * Callees:
 *     <none>
 */

char *__fastcall MiGetExtentTable(int a1)
{
  return (char *)&unk_140C65518 + 8 * a1;
}
