/*
 * XREFs of ProcgrpQueryMaximumProcessorCount @ 0x1C0009AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcgrpQueryMaximumProcessorCount()
{
  unsigned __int8 *v0; // rax

  v0 = *(unsigned __int8 **)&KeNumberProcessors;
  return *v0;
}
