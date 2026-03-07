__int64 __fastcall CAdapterCollection::PopulateFromInfo(
        CAdapterCollection *this,
        struct CSM_TOKEN_ADAPTER_INFO *a2,
        void **a3,
        unsigned int a4)
{
  int v7; // edi
  _QWORD *v8; // r14
  __int64 v9; // rsi
  unsigned int v10; // edx
  struct CAdapter *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  struct CAdapter *v15; // [rsp+60h] [rbp+8h] BYREF
  void **v16; // [rsp+70h] [rbp+18h]

  v16 = a3;
  v7 = 0;
  ExAcquirePushLockExclusiveEx((char *)this + 40, 0LL);
  v8 = (_QWORD *)((char *)this + 24);
  *((_BYTE *)this + 48) = 1;
  if ( (_QWORD *)*v8 != v8 )
    CAdapterCollection::InternalDiscard(this);
  v9 = 0LL;
  *((_DWORD *)this + 1) = a4;
  if ( a4 )
  {
    while ( 1 )
    {
      v10 = *((_DWORD *)this + 2);
      v15 = 0LL;
      v7 = CAdapter::Create((struct CSM_TOKEN_ADAPTER_INFO *)((char *)a2 + 24 * v9), v10, &v15);
      if ( v7 < 0 )
        break;
      v11 = v15;
      if ( v15 )
        v12 = (_QWORD *)((char *)v15 + 8);
      else
        v12 = 0LL;
      v13 = (_QWORD *)*((_QWORD *)this + 4);
      if ( (_QWORD *)*v13 != v8 )
        __fastfail(3u);
      *v12 = v8;
      v12[1] = v13;
      *v13 = v12;
      *((_QWORD *)this + 4) = v12;
      v16[v9] = (void *)*((_QWORD *)v11 + 6);
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= a4 )
        goto LABEL_9;
    }
    CAdapterCollection::InternalDiscard(this);
  }
LABEL_9:
  CPushLockCriticalSection::Release((CAdapterCollection *)((char *)this + 40));
  return (unsigned int)v7;
}
