__int64 __fastcall SeSecureBootQueryInformation(int a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  char *v6; // rdi
  const void *v8; // r10
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax

  v4 = 0LL;
  v5 = 0;
  if ( a1 != 143 )
  {
    if ( a1 == 145 )
    {
      *a4 = 2;
      if ( a3 >= 2 )
      {
        *(_BYTE *)a2 = dword_140C70C04 & 1;
        *(_BYTE *)(a2 + 1) = (dword_140C70C04 & 8) != 0;
        return v5;
      }
      return (unsigned int)-1073741820;
    }
    if ( a1 != 171 )
    {
      if ( a1 != 179 )
        return (unsigned int)-1073741821;
      v8 = g_SecureBootActivePlatformManifest;
      if ( !g_SecureBootActivePlatformManifest )
        return (unsigned int)-1058340858;
      v9 = g_SecureBootActivePlatformManifestSize;
      v10 = g_SecureBootActivePlatformManifestSize + 4;
      *a4 = g_SecureBootActivePlatformManifestSize + 4;
      if ( a3 >= v10 )
      {
        memmove((void *)(a2 + 4), v8, v9);
        return v5;
      }
      return (unsigned int)-1073741820;
    }
  }
  v6 = (char *)qword_140D17BD0;
  if ( !qword_140D17BD0 )
    return (unsigned int)-2143092730;
  if ( a1 == 171 )
  {
    *a4 = 28;
    v4 = a2;
    v11 = *((_DWORD *)v6 + 14) + 28;
  }
  else
  {
    v11 = 24;
  }
  *a4 = v11;
  if ( a3 < v11 )
    return (unsigned int)-1073741820;
  *(_OWORD *)a2 = *(_OWORD *)(v6 + 4);
  *(_DWORD *)(a2 + 16) = *((_DWORD *)v6 + 5);
  *(_DWORD *)(a2 + 20) = *((_DWORD *)v6 + 8);
  if ( a1 == 171 )
  {
    memmove((void *)(v4 + 28), v6 + 60, *((unsigned int *)v6 + 14));
    *(_DWORD *)(v4 + 24) = *((_DWORD *)v6 + 14);
  }
  return v5;
}
