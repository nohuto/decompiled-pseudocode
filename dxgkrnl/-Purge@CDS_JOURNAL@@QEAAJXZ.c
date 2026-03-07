__int64 __fastcall CDS_JOURNAL::Purge(CDS_JOURNAL *this)
{
  char *v1; // rbx
  char **v2; // rax
  char **v3; // rcx

  v1 = (char *)this + 24;
  while ( 1 )
  {
    v2 = (char **)*((_QWORD *)v1 + 1);
    if ( *v2 != v1 || (v3 = (char **)v2[1], *v3 != (char *)v2) )
      __fastfail(3u);
    *((_QWORD *)v1 + 1) = v3;
    *v3 = v1;
    if ( v2 == (char **)v1 )
      break;
    operator delete(v2);
  }
  return 0LL;
}
