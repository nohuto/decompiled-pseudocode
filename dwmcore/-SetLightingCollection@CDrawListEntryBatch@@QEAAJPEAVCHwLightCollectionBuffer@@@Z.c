__int64 __fastcall CDrawListEntryBatch::SetLightingCollection(
        struct CHwLightCollectionBuffer **this,
        struct CHwLightCollectionBuffer *a2)
{
  int v2; // ebx
  struct CHwLightCollectionBuffer *v6; // rcx
  CBatchCommand *v7; // rcx
  CBatchCommand *v8; // rcx
  struct CHwLightCollectionBuffer *v9; // rax
  CBatchOptimizer *v10; // rcx
  unsigned int v11; // edx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14[2]; // [rsp+38h] [rbp-18h] BYREF
  char v15; // [rsp+40h] [rbp-10h]
  CBatchCommand *v16; // [rsp+60h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 == this[5] )
    return (unsigned int)v2;
  ++dword_1803E29DC;
  v6 = this[3];
  v16 = 0LL;
  *(_QWORD *)v14 = 0LL;
  v15 = 1;
  v2 = CDrawListBatchManager::TakeItemFromCache<CBatchCommand>((char *)v6 + 64, v14);
  if ( v15 )
  {
    v7 = v16;
    v16 = *(CBatchCommand **)v14;
    if ( v7 )
      CBatchCommand::`scalar deleting destructor'(v7, v14[0]);
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, v2, 0xC5u, 0LL);
  }
  else
  {
    v8 = v16;
    *(_DWORD *)v16 = 2;
    wil::com_ptr_t<CHwLightCollectionBuffer,wil::err_returncode_policy>::com_ptr_t<CHwLightCollectionBuffer,wil::err_returncode_policy>(
      (char *)v8 + 8,
      a2);
    v9 = this[3];
    v10 = (CBatchOptimizer *)*((_QWORD *)v9 + 20);
    if ( v10 )
    {
      CBatchOptimizer::AddStateSettingCommand(v10, &v16);
LABEL_9:
      this[5] = a2;
      goto LABEL_10;
    }
    v12 = CDrawListBatchManager::AddBatchCommand((__int64)v9 + 24, (__int64 *)&v16);
    v2 = v12;
    if ( v12 >= 0 )
      goto LABEL_9;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xCFu, 0LL);
  }
LABEL_10:
  if ( v16 )
    CBatchCommand::`scalar deleting destructor'(v16, v11);
  return (unsigned int)v2;
}
