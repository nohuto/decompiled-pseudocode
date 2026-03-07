struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetPathFromTarget(DMMVIDPNTOPOLOGY *this, int a2)
{
  char *v2; // r9
  DMMVIDPNTOPOLOGY *v4; // rdx
  char *v5; // rdx
  char *v7; // rcx

  v2 = (char *)this + 24;
  v4 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  if ( v4 == (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
    return 0LL;
  v5 = (char *)v4 - 8;
  while ( v5 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v5 + 12) + 24LL) == a2 )
      break;
    v7 = (char *)*((_QWORD *)v5 + 1);
    v5 = v7 - 8;
    if ( v7 == v2 )
      v5 = 0LL;
  }
  return (struct DMMVIDPNPRESENTPATH *)v5;
}
