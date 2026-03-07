__int64 __fastcall CDrawListBatchManager::AddBatchCommand(__int64 a1, __int64 *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = *a2;
  v3 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1, &v7, 1LL);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x91u, 0LL);
  else
    *a2 = 0LL;
  return v5;
}
