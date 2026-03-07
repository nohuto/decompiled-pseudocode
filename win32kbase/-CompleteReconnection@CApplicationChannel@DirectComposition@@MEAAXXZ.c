void __fastcall DirectComposition::CApplicationChannel::CompleteReconnection(
        DirectComposition::CApplicationChannel *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  char v4; // cl
  __int64 v5; // rax
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // rax
  _QWORD *i; // rcx
  unsigned __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0LL;
  while ( 1 )
  {
    v2 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 112),
           &v9);
    v3 = v2;
    if ( !v2 )
      break;
    v2[1] = *((_QWORD *)this + 51);
    *((_QWORD *)this + 51) = v2;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v2 + 56LL))(v2) )
      *((_DWORD *)v3 + 4) |= 2u;
    for ( i = (_QWORD *)v3[5]; i; i = (_QWORD *)i[4] )
    {
      *i = *((_QWORD *)this + 56);
      *((_QWORD *)this + 56) = i;
    }
  }
  v4 = *((_BYTE *)this + 241);
  if ( *((_QWORD *)this + 332) )
    v4 |= 1u;
  if ( *((_QWORD *)this + 333) )
    v4 |= 2u;
  if ( (v4 & 8) != 0 )
    v4 |= 4u;
  if ( *((_QWORD *)this + 335) )
    *((_BYTE *)this + 240) |= 0x80u;
  v5 = *((_QWORD *)this + 5);
  *((_BYTE *)this + 241) = v4 | 0x10;
  *((_DWORD *)this + 6) = 0;
  v6 = *(struct _ERESOURCE **)(v5 + 8);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v6, 1u);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CApplicationChannel *)((char *)this + 2592),
    *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 208LL));
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
  KeLeaveCriticalRegion();
  if ( (*((_BYTE *)this + 240) & 1) == 0 )
  {
    v7 = *((_QWORD *)this + 21);
    if ( !v7 || !*(_QWORD *)(v7 + 40) )
      DirectComposition::CApplicationChannel::Commit(this, 0LL, 0, 0, 0LL, 0LL, 0LL, 0);
  }
}
