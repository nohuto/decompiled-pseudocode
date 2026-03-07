CCyclicResourceListEntry *__fastcall CCyclicResourceListEntry::CCyclicResourceListEntry(
        CCyclicResourceListEntry *this,
        struct CResourceTable *a2)
{
  char *v2; // rdx
  _QWORD *v3; // r9
  __int64 v4; // rax
  CCyclicResourceListEntry *result; // rax

  *(_QWORD *)this = &CCyclicResourceListEntry::`vftable';
  v2 = (char *)a2 + 64;
  v3 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  *((_QWORD *)this + 1) = v3;
  *((_QWORD *)this + 2) = v3;
  v4 = *(_QWORD *)v2;
  if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 )
    __fastfail(3u);
  *v3 = v4;
  *(_QWORD *)((((unsigned __int64)this + 8) & -(__int64)(this != 0LL)) + 8) = v2;
  *(_QWORD *)(v4 + 8) = v3;
  result = this;
  *(_QWORD *)v2 = v3;
  return result;
}
