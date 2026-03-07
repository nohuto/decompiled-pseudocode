__int64 __fastcall CAdapterCollection::ReferenceAdapter(
        CAdapterCollection *this,
        struct _LUID a2,
        struct CAdapter **a3)
{
  CPushLockCriticalSection *v3; // rbp
  DWORD LowPart; // ebx
  unsigned int v7; // esi
  char *v8; // r9
  char *v9; // rdx
  struct CAdapter *v10; // rdi
  LONG HighPart; // [rsp+4Ch] [rbp+14h]

  HighPart = a2.HighPart;
  *a3 = 0LL;
  v3 = (CAdapterCollection *)((char *)this + 40);
  LowPart = a2.LowPart;
  v7 = -1073741275;
  ExAcquirePushLockSharedEx((char *)this + 40, 0LL);
  *((_BYTE *)v3 + 8) = 0;
  v8 = (char *)this + 24;
  v9 = (char *)*((_QWORD *)this + 4);
  if ( v9 != (char *)this + 24 )
  {
    while ( 1 )
    {
      v10 = (struct CAdapter *)((unsigned __int64)(v9 - 8) & -(__int64)(v9 != 0LL));
      if ( LowPart == *((_DWORD *)v10 + 6)
        && HighPart == *(_DWORD *)(((unsigned __int64)(v9 - 8) & -(__int64)(v9 != 0LL)) + 0x1C) )
      {
        break;
      }
      v9 = (char *)*((_QWORD *)v9 + 1);
      if ( v9 == v8 )
        goto LABEL_7;
    }
    (**(void (__fastcall ***)(__int64))v10)((unsigned __int64)(v9 - 8) & -(__int64)(v9 != 0LL));
    v7 = 0;
    *a3 = v10;
  }
LABEL_7:
  CPushLockCriticalSection::Release(v3);
  return v7;
}
