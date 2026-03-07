NTSTATUS __stdcall KeInitializeTriageDumpDataArray(PKTRIAGE_DUMP_DATA_ARRAY KtriageDumpDataArray, ULONG Size)
{
  NTSTATUS result; // eax

  if ( !KtriageDumpDataArray )
    return -1073741811;
  if ( Size < 0x40 )
    return -1073741789;
  KtriageDumpDataArray->List.Blink = &KtriageDumpDataArray->List;
  KtriageDumpDataArray->NumBlocksTotal = (Size - 48) >> 4;
  result = 0;
  KtriageDumpDataArray->List.Flink = &KtriageDumpDataArray->List;
  KtriageDumpDataArray->NumBlocksUsed = 0;
  KtriageDumpDataArray->VirtMemSize = 0;
  *(_QWORD *)&KtriageDumpDataArray->ComponentNameBufferLength = 0x2000000LL;
  KtriageDumpDataArray->Blocks[0].Address = 0LL;
  return result;
}
