ULONG __stdcall SeObjectCreateSaclAccessBits(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int16 v1; // ax
  ULONG v2; // edx
  __int64 v3; // rax
  char *v4; // rax
  char *v5; // rcx
  unsigned int v6; // r9d

  v1 = *((_WORD *)SecurityDescriptor + 1);
  if ( (v1 & 0x10) == 0 )
    return 0x1000000;
  v2 = 0;
  if ( v1 >= 0 )
  {
    v4 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v3 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v3 )
      return 0x1000000;
    v4 = (char *)SecurityDescriptor + v3;
  }
  if ( !v4 )
    return 0x1000000;
  v5 = v4 + 8;
  v6 = 0;
  if ( *((_WORD *)v4 + 2) )
  {
    while ( (unsigned __int8)(*v5 - 17) <= 1u || (unsigned __int8)(*v5 - 20) <= 1u )
    {
      ++v6;
      v5 += *((unsigned __int16 *)v5 + 1);
      if ( v6 >= *((unsigned __int16 *)v4 + 2) )
        return v2;
    }
    return 0x1000000;
  }
  return v2;
}
