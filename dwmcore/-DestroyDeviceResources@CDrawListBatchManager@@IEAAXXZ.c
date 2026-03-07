void __fastcall CDrawListBatchManager::DestroyDeviceResources(CDrawListBatchManager *this)
{
  unsigned int v2; // edx
  CDrawListEntryBatch::CSharedDirect3DResources *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  CBatchCommand *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  CDrawListBatchManager::CloseCurrentDrawListEntryBatch((__int64)this, &v10);
  if ( v10 )
    CMILRefCountBaseT<IMILRefCount>::InternalRelease(v10 + 8);
  v3 = (CDrawListEntryBatch::CSharedDirect3DResources *)*((_QWORD *)this + 15);
  if ( v3 )
  {
    CDrawListEntryBatch::CSharedDirect3DResources::DestroyDeviceResources(v3);
    v4 = *((_QWORD *)this + 15);
    *((_QWORD *)this + 15) = 0LL;
    if ( v4 )
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(v4);
  }
  if ( *((_DWORD *)this + 16) )
  {
    v5 = *((unsigned int *)this + 16);
    v6 = 0LL;
    do
    {
      v7 = *(CBatchCommand **)(v6 + *((_QWORD *)this + 5));
      if ( v7 )
        CBatchCommand::`scalar deleting destructor'(v7, v2);
      v6 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 18) = 0;
  if ( *((_DWORD *)this + 26) )
  {
    v8 = *((unsigned int *)this + 26);
    v9 = 0LL;
    do
    {
      CMILRefCountBaseT<IMILRefCount>::InternalRelease(*(_QWORD *)(*((_QWORD *)this + 10) + v9) + 8LL);
      v9 += 8LL;
      --v8;
    }
    while ( v8 );
  }
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = 0;
}
