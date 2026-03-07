__int64 __fastcall CmGetDeviceRegKeySecurityDescriptor(__int64 a1, int a2, _QWORD *a3)
{
  void *v5; // rcx
  char v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int RegKeySecurityDescriptor; // eax
  void *v11; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v6 = 0;
  v7 = 0;
  v11 = 0LL;
  if ( !a2 || (a2 & 0xFFFFFCE8) != 0 )
  {
    v7 = -1073741811;
  }
  else
  {
    *a3 = 0LL;
    if ( (a2 & 0xF00) != 0 )
      return v7;
    v8 = (unsigned __int8)a2;
    if ( (unsigned __int8)a2 != 17 )
    {
      if ( (unsigned __int8)a2 == 18 )
      {
        if ( !*(_BYTE *)(a1 + 4) )
          return v7;
      }
      else if ( (unsigned int)(unsigned __int8)a2 - 19 > 1 )
      {
        return v7;
      }
    }
    if ( *(_DWORD *)a1 >= 0xA000000u && ((unsigned __int8)a2 == 17 || (unsigned __int8)a2 == 18 && *(_BYTE *)(a1 + 4)) )
      v6 = 1;
    LOBYTE(v8) = v6;
    RegKeySecurityDescriptor = CmGetRegKeySecurityDescriptor(v8, &v11);
    v5 = v11;
    v7 = RegKeySecurityDescriptor;
    if ( RegKeySecurityDescriptor >= 0 )
    {
      *a3 = v11;
      return v7;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v7;
}
