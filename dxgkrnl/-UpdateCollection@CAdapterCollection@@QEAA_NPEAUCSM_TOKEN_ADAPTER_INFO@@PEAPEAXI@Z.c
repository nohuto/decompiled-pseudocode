char __fastcall CAdapterCollection::UpdateCollection(
        CAdapterCollection *this,
        struct CSM_TOKEN_ADAPTER_INFO *a2,
        void **a3,
        unsigned int a4)
{
  char v7; // bl
  _QWORD **v8; // r15
  _QWORD *v9; // r8
  __int64 v10; // rbp
  __int64 v11; // rdi
  int v12; // eax
  _DWORD v14[2]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+28h] [rbp-70h]
  __int128 v16; // [rsp+30h] [rbp-68h]
  __int128 v17; // [rsp+40h] [rbp-58h]
  __int64 v18; // [rsp+50h] [rbp-48h]
  unsigned int v20; // [rsp+B8h] [rbp+20h]

  v7 = 1;
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  *((_BYTE *)this + 48) = 1;
  if ( *((_DWORD *)this + 1) != a4 )
  {
LABEL_13:
    v7 = 0;
    CAdapterCollection::InternalDiscard(this);
    goto LABEL_11;
  }
  v20 = 0;
  if ( a4 )
  {
    v8 = (_QWORD **)((char *)this + 24);
    do
    {
      v9 = *v8;
      v10 = 0LL;
      if ( *v8 == v8 )
        goto LABEL_13;
      while ( 1 )
      {
        v11 = (unsigned __int64)(v9 - 1) & -(__int64)(v9 != 0LL);
        if ( *(_QWORD *)a2 == __PAIR64__(*(_DWORD *)(v11 + 0x1C), *(_DWORD *)(v11 + 0x18)) )
          break;
        v9 = (_QWORD *)*v9;
        v10 = (unsigned int)(v10 + 1);
        if ( v9 == v8 )
          goto LABEL_13;
      }
      v12 = *(_DWORD *)(((unsigned __int64)(v9 - 1) & -(__int64)(v9 != 0LL)) + 0x2C);
      if ( v12 )
      {
        v18 = 0LL;
        v14[0] = v12;
        v16 = 0LL;
        v14[1] = 1;
        v17 = 0LL;
        v15 = 1LL;
        if ( (int)DxgkGetDeviceStateInternal(v14, 0LL) < 0 || (_DWORD)v15 != 1 )
          goto LABEL_13;
      }
      if ( CAdapter::UpdateRenderFence((CAdapter *)v11, *((void **)a2 + 1)) < 0 )
        goto LABEL_13;
      a2 = (struct CSM_TOKEN_ADAPTER_INFO *)((char *)a2 + 24);
      ++v20;
      a3[v10] = *(void **)(v11 + 48);
    }
    while ( v20 < a4 );
  }
LABEL_11:
  CPushLockCriticalSection::Release((CAdapterCollection *)((char *)this + 40));
  return v7;
}
