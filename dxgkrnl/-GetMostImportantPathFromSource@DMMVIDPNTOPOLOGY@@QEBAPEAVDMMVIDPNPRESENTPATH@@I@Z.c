struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPathFromSource(DMMVIDPNTOPOLOGY *this, int a2)
{
  char *v2; // r11
  DMMVIDPNTOPOLOGY *v3; // r8
  char *v4; // r9
  int v5; // r10d
  char *v6; // r8
  char *v7; // rcx

  v2 = (char *)this + 24;
  v3 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v4 = 0LL;
  v5 = 32;
  if ( v3 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v6 = (char *)v3 - 8;
    while ( v6 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v6 + 11) + 24LL) == a2 && *((_DWORD *)v6 + 26) < v5 )
      {
        v4 = v6;
        v5 = *((_DWORD *)v6 + 26);
      }
      v7 = (char *)*((_QWORD *)v6 + 1);
      v6 = v7 - 8;
      if ( v7 == v2 )
        v6 = 0LL;
    }
  }
  return (struct DMMVIDPNPRESENTPATH *)v4;
}
