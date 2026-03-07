void __fastcall CResourceTable::~CResourceTable(CResourceTable *this)
{
  __int64 **v2; // rdi
  __int64 *v3; // r8
  void *v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx

  *(_QWORD *)this = &CResourceTable::`vftable';
  v2 = (__int64 **)((char *)this + 64);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == (__int64 *)v2 )
      break;
    if ( (__int64 **)v3[1] != v2 || (v5 = (__int64 *)*v3, *(__int64 **)(*v3 + 8) != v3) )
      __fastfail(3u);
    *v2 = v5;
    v5[1] = (__int64)v2;
    v6 = *(v3 - 1);
    v7 = (unsigned __int64)v3 & -(__int64)(v3 != (__int64 *)8);
    *v3 = v7;
    v3[1] = v7;
    (*(void (**)(void))(v6 + 8))();
  }
  ReleaseInterface<CProcessAttribution>((char *)this + 56);
  v4 = (void *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  operator delete(v4);
}
