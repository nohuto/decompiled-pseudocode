__int64 __fastcall CDrawListBatchManager::RawAddBatchCommands(__int64 a1, unsigned int *a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx

  v2 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1, *((_QWORD *)a2 + 1), *a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0xA2u, 0LL);
  return v4;
}
