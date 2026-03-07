bool __fastcall DMMVIDPNTOPOLOGY::IsSourceInTopology(DMMVIDPNTOPOLOGY *this, int a2)
{
  char *v2; // r8
  char *v3; // rcx
  char *v4; // rcx
  char *v6; // rax

  v2 = (char *)this + 24;
  v3 = (char *)*((_QWORD *)this + 3);
  if ( v3 == v2 )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = v3 - 8;
    while ( v4 )
    {
      if ( *(_DWORD *)(*((_QWORD *)v4 + 11) + 24LL) == a2 )
        break;
      v6 = (char *)*((_QWORD *)v4 + 1);
      v4 = v6 - 8;
      if ( v6 == v2 )
        v4 = 0LL;
    }
  }
  return v4 != 0LL;
}
