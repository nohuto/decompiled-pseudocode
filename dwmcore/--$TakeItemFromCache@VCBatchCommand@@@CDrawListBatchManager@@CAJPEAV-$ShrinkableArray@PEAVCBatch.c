__int64 __fastcall CDrawListBatchManager::TakeItemFromCache<CBatchCommand>(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  unsigned int v6; // eax
  CBatchCommand *v8; // rax
  unsigned int v9; // ecx
  CBatchCommand *v10; // rsi
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edx
  CBatchCommand *v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v8 = (CBatchCommand *)DefaultHeap::Alloc(0xB8uLL);
    v10 = v8;
    if ( !v8 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x16Du, 0LL);
      return v2;
    }
    *(_DWORD *)v8 = 0;
    v14 = v8;
    v11 = DynArray<CBatchCommand *,0>::AddMultipleAndSet(a1, &v14, 1LL);
    v2 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x16Fu, 0LL);
      CBatchCommand::`scalar deleting destructor'(v10, v13);
      return v2;
    }
  }
  v5 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
  *a2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  v6 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v5;
  if ( v6 >= (unsigned int)v5 )
    v6 = v5;
  *(_DWORD *)(a1 + 32) = v6;
  return v2;
}
