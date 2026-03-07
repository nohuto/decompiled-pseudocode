struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::FindPath(DMMVIDPNTOPOLOGY *this, int a2, int a3)
{
  char *v3; // r9
  DMMVIDPNTOPOLOGY *v5; // rdx
  char *v6; // rdx
  char *v8; // rcx

  v3 = (char *)this + 24;
  v5 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v5 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
    return 0LL;
  v6 = (char *)v5 - 8;
  while ( v6 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v6 + 11) + 24LL) == a2 && *(_DWORD *)(*((_QWORD *)v6 + 12) + 24LL) == a3 )
      break;
    v8 = (char *)*((_QWORD *)v6 + 1);
    v6 = v8 - 8;
    if ( v8 == v3 )
      v6 = 0LL;
  }
  return (struct DMMVIDPNPRESENTPATH *)v6;
}
