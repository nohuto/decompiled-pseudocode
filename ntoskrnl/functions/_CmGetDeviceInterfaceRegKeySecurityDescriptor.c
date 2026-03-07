__int64 __fastcall CmGetDeviceInterfaceRegKeySecurityDescriptor(__int64 a1, int a2, _QWORD *a3)
{
  void *v5; // rcx
  unsigned int v6; // ebx
  int RegKeySecurityDescriptor; // eax
  void *v9; // [rsp+48h] [rbp+20h] BYREF

  v5 = 0LL;
  v9 = 0LL;
  v6 = 0;
  if ( !a2 || (a2 & 0xFFFFFCCC) != 0 )
  {
    v6 = -1073741811;
  }
  else
  {
    *a3 = 0LL;
    if ( (a2 & 0xF00) != 0 || (_BYTE)a2 != 50 || !*(_BYTE *)(a1 + 4) )
      return v6;
    RegKeySecurityDescriptor = CmGetRegKeySecurityDescriptor(*(_DWORD *)a1 >= 0xA000000u, &v9);
    v5 = v9;
    v6 = RegKeySecurityDescriptor;
    if ( RegKeySecurityDescriptor >= 0 )
    {
      *a3 = v9;
      return v6;
    }
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
