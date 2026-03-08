/*
 * XREFs of IopAddRunTimeTriageDataBlocks @ 0x14054FDC8
 * Callers:
 *     IoFillTriageDumpBuffer @ 0x14054DAD0 (IoFillTriageDumpBuffer.c)
 * Callees:
 *     IopAddTriageDumpDataBlock @ 0x1403848EC (IopAddTriageDumpDataBlock.c)
 *     IopGetMaxValidMemorySize @ 0x140550E80 (IopGetMaxValidMemorySize.c)
 *     IopGetMaxValidMemorySizeDown @ 0x140550EF8 (IopGetMaxValidMemorySizeDown.c)
 */

__int64 __fastcall IopAddRunTimeTriageDataBlocks(
        unsigned int a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  __int64 MaxValidMemorySizeDown; // rbx
  int MaxValidMemorySize; // eax
  unsigned __int16 v12; // cx
  char *v13; // rbx
  unsigned __int64 v14; // r9
  __int64 result; // rax

  MaxValidMemorySizeDown = (unsigned int)IopGetMaxValidMemorySizeDown(*(_QWORD *)(a4 + 248));
  MaxValidMemorySize = IopGetMaxValidMemorySize(*(_QWORD *)(a4 + 248), 256LL);
  IopAddTriageDumpDataBlock(
    a1,
    a2,
    a3,
    *(_QWORD *)(a4 + 248) - MaxValidMemorySizeDown,
    MaxValidMemorySize + MaxValidMemorySizeDown);
  v12 = 144;
  v13 = &IopRunTimeContextOffsets;
  do
  {
    v14 = *(_QWORD *)(v12 + a4);
    if ( v14 < a5 || v14 >= a6 )
      IopAddTriageDumpDataBlock(a1, a2, a3, v14 & 0xFFFFFFFFFFFFF000uLL, 0x1000u);
    v13 += 2;
    result = *(unsigned __int16 *)v13;
    v12 = result;
  }
  while ( (_WORD)result != 0xFFFF );
  return result;
}
