struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPath(DMMVIDPNTOPOLOGY *this)
{
  char *v1; // r9
  DMMVIDPNTOPOLOGY *v2; // rax
  char *v3; // r8
  int v4; // r10d
  char *i; // rax
  int v6; // edx
  char *v7; // rcx

  v1 = (char *)this + 24;
  v2 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v3 = 0LL;
  v4 = 32;
  if ( v2 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    for ( i = (char *)v2 - 8; i; v4 = v6 )
    {
      v6 = *((_DWORD *)i + 26);
      v7 = (char *)*((_QWORD *)i + 1);
      if ( v6 < v4 )
        v3 = i;
      i = v7 - 8;
      if ( v7 == v1 )
        i = 0LL;
      if ( v6 >= v4 )
        v6 = v4;
    }
  }
  return (struct DMMVIDPNPRESENTPATH *)v3;
}
