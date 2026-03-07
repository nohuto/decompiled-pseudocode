__int64 __fastcall CTokenManager::EnsureTokenQueue(
        CTokenManager *this,
        struct CompositionSurfaceObject *a2,
        struct CTokenManager::TokenQueueTableEntry **a3)
{
  struct _RTL_GENERIC_TABLE *v3; // rbp
  int v5; // ebx
  _QWORD *inserted; // rdi
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int8 v9; // [rsp+50h] [rbp+8h] BYREF
  struct CTokenQueue *v10; // [rsp+58h] [rbp+10h] BYREF

  v8[0] = a2;
  v3 = (struct _RTL_GENERIC_TABLE *)((char *)this + 200);
  v8[1] = 0LL;
  v9 = 0;
  v5 = 0;
  inserted = RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 200), v8, 0x10u, &v9);
  if ( inserted )
  {
    if ( v9 )
    {
      v10 = 0LL;
      v5 = CTokenQueue::Create(&v10);
      if ( v5 < 0 )
      {
        RtlDeleteElementGenericTable(v3, inserted);
        inserted = 0LL;
      }
      else
      {
        inserted[1] = v10;
      }
    }
  }
  else
  {
    v5 = -1073741801;
  }
  if ( a3 )
    *a3 = (struct CTokenManager::TokenQueueTableEntry *)inserted;
  return (unsigned int)v5;
}
