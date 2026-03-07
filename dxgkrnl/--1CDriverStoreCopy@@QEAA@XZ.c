void __fastcall CDriverStoreCopy::~CDriverStoreCopy(CDriverStoreCopy *this)
{
  void *v2; // rcx
  char *v3; // rdi
  char *v4; // rcx
  __int64 v5; // rax
  char *v6; // rbx
  char *v7; // rcx
  __int64 v8; // rax

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 != (void *)-1LL )
  {
    ZwClose(v2);
    *((_QWORD *)this + 2) = -1LL;
  }
  v3 = (char *)this + 1592;
  while ( 1 )
  {
    v4 = *(char **)v3;
    if ( *(char **)(*(_QWORD *)v3 + 8LL) != v3 || (v5 = *(_QWORD *)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
LABEL_15:
      __fastfail(3u);
    *(_QWORD *)v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    if ( v4 == v3 )
      break;
    ExFreePoolWithTag(v4 - 520, 0);
  }
  if ( *(_QWORD *)this )
  {
    ExFreePoolWithTag(*(PVOID *)this, 0);
    *(_QWORD *)this = 0LL;
  }
  v6 = (char *)this + 1608;
  while ( 1 )
  {
    v7 = *(char **)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 )
      goto LABEL_15;
    v8 = *(_QWORD *)v7;
    if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
      goto LABEL_15;
    *(_QWORD *)v6 = v8;
    *(_QWORD *)(v8 + 8) = v6;
    if ( v7 == v6 )
      break;
    operator delete(v7);
  }
}
