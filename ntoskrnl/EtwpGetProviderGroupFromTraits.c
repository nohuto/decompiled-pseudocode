char *__fastcall EtwpGetProviderGroupFromTraits(const char *a1)
{
  __int64 v1; // rdx
  unsigned __int16 *v2; // rbx
  unsigned __int16 *v3; // rdi
  size_t v4; // rax
  unsigned __int16 *v5; // rcx

  v1 = *(unsigned __int16 *)a1;
  v2 = (unsigned __int16 *)(a1 + 2);
  v3 = (unsigned __int16 *)&a1[v1];
  v4 = strnlen(a1 + 2, v1 - 3);
  v5 = (unsigned __int16 *)((char *)v2 + 1);
  while ( 1 )
  {
    v5 = (unsigned __int16 *)((char *)v5 + v4);
    if ( v5 >= v3 )
      break;
    v4 = *v5;
    if ( (_DWORD)v4 == 19 && *((_BYTE *)v5 + 2) == 1 )
      return (char *)v5 + 3;
  }
  return 0LL;
}
