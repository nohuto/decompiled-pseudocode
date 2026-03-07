unsigned __int8 __fastcall DMMVIDPN::IsFunctional(DMMVIDPN *this)
{
  char *v1; // rdi
  DMMVIDPN *v2; // rbx
  DMMVIDPNPRESENTPATH *v3; // rbx
  char *v4; // rax

  v1 = (char *)this + 120;
  v2 = (DMMVIDPN *)*((_QWORD *)this + 15);
  if ( v2 == (DMMVIDPN *)((char *)this + 120) )
    return 1;
  v3 = (DMMVIDPN *)((char *)v2 - 8);
  if ( !v3 )
    return 1;
  while ( DMMVIDPNPRESENTPATH::IsFunctional(v3) )
  {
    v4 = (char *)*((_QWORD *)v3 + 1);
    v3 = (DMMVIDPNPRESENTPATH *)(v4 - 8);
    if ( v4 == v1 )
      v3 = 0LL;
    if ( !v3 )
      return 1;
  }
  return 0;
}
