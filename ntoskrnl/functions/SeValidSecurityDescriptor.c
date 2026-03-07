BOOLEAN __stdcall SeValidSecurityDescriptor(ULONG Length, PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edx
  char *v10; // rcx
  __int64 v11; // rcx
  unsigned int v13; // edi
  char *v14; // rcx

  if ( Length < 0x14 )
    return 0;
  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return 0;
  if ( *((__int16 *)SecurityDescriptor + 1) >= 0 )
    return 0;
  v4 = *((unsigned int *)SecurityDescriptor + 1);
  if ( !(_DWORD)v4 )
    return 0;
  if ( ((v4 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
    return 0;
  if ( (unsigned int)v4 > Length )
    return 0;
  if ( Length - (unsigned int)v4 < 0xC )
    return 0;
  if ( *((_BYTE *)SecurityDescriptor + v4) != 1 )
    return 0;
  v5 = *((unsigned __int8 *)SecurityDescriptor + v4 + 1);
  if ( (unsigned __int8)v5 > 0xFu )
    return 0;
  if ( Length - (unsigned int)v4 < 4 * v5 + 8 )
    return 0;
  v6 = *((unsigned int *)SecurityDescriptor + 2);
  if ( (_DWORD)v6 )
  {
    if ( ((v6 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
      return 0;
    if ( (unsigned int)v6 > Length )
      return 0;
    if ( Length - (unsigned int)v6 < 0xC )
      return 0;
    if ( *((_BYTE *)SecurityDescriptor + v6) != 1 )
      return 0;
    v7 = *((unsigned __int8 *)SecurityDescriptor + v6 + 1);
    if ( (unsigned __int8)v7 > 0xFu || Length - (unsigned int)v6 < 4 * v7 + 8 )
      return 0;
  }
  if ( ((v8 = *((unsigned int *)SecurityDescriptor + 4), !(_DWORD)v8)
     || ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v8
     && (unsigned int)v8 <= Length
     && (v9 = Length - v8, Length - (unsigned int)v8 >= 8)
     && (v10 = (char *)SecurityDescriptor + v8, v9 >= *((unsigned __int16 *)v10 + 1))
     && (unsigned __int8)RtlValidAcl(v10))
    && ((v11 = *((unsigned int *)SecurityDescriptor + 3), !(_DWORD)v11)
     || ((v11 + 3) & 0xFFFFFFFFFFFFFFFCuLL) == v11
     && (unsigned int)v11 <= Length
     && (v13 = Length - v11, v13 >= 8)
     && (v14 = (char *)SecurityDescriptor + v11, v13 >= *((unsigned __int16 *)v14 + 1))
     && (unsigned __int8)RtlValidAcl(v14)) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
