void __fastcall ShrinkableArray<CBatchCommand *,UniqueLifetime<CBatchCommand *>>::Optimize(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // edx
  __int64 v6; // r14
  unsigned int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // r15
  CBatchCommand *v10; // rcx
  void *v11; // rbx
  int v12; // ecx
  void *v13[2]; // [rsp+30h] [rbp-30h] BYREF
  int v14; // [rsp+40h] [rbp-20h]
  int v15; // [rsp+44h] [rbp-1Ch]
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+50h] [rbp-10h]
  int v18; // [rsp+54h] [rbp-Ch]

  v1 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 24);
  if ( v1 > 0x10 && *(_DWORD *)(a1 + 36) < v1 / 3 )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v4 = v1 >> 1;
    *(_OWORD *)v13 = 0LL;
    if ( (int)DynArrayImpl<0>::Grow((unsigned __int64)v13, 8u, v4, 1, 0LL) >= 0 )
    {
      v6 = 0LL;
      if ( v3 > v4 )
      {
        v7 = v3;
        v3 = v4;
        v6 = v7 - v4;
        if ( (_DWORD)v6 )
        {
          v8 = 0LL;
          v9 = (unsigned int)v6;
          do
          {
            v10 = *(CBatchCommand **)(v8 + *(_QWORD *)a1);
            if ( v10 )
              CBatchCommand::`scalar deleting destructor'(v10, v5);
            v8 += 8LL;
            --v9;
          }
          while ( v9 );
        }
      }
      v11 = v13[0];
      memcpy_0(v13[0], (const void *)(*(_QWORD *)a1 + 8 * v6), 8LL * v3);
      v12 = v15;
      v13[0] = *(void **)a1;
      v15 = *(_DWORD *)(a1 + 20);
      v16 = *(_DWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 24) = v3;
      *(_QWORD *)a1 = v11;
      *(_DWORD *)(a1 + 20) = v12;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v13);
  }
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = v3;
}
