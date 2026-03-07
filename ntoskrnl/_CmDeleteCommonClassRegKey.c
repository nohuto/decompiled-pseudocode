__int64 __fastcall CmDeleteCommonClassRegKey(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  unsigned int v9; // esi
  __int64 (__fastcall *v10)(__int64, __int64, _QWORD, __int64, int, _DWORD *); // rdi
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  int v16; // [rsp+20h] [rbp-71h]
  _DWORD v17[24]; // [rsp+40h] [rbp-51h] BYREF

  memset(v17, 0, 0x58uLL);
  if ( (unsigned __int8)a3 == 32 )
  {
    v9 = 2;
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
      return (unsigned int)-1073741811;
    v9 = 4;
  }
  v10 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _DWORD *))(a1 + 504);
  v17[7] = 0;
  v17[5] = a4;
  v17[4] = a3;
  LOBYTE(v17[6]) = a5;
  if ( v10 )
  {
    v11 = v10(a1, a2, v9, 12LL, 1, v17);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        return v17[0];
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  LOBYTE(v16) = v17[6];
  v12 = CmDeleteCommonClassRegKeyWorker(a1, a2, v17[4], v17[5], v16);
  v13 = v12;
  if ( !v10 )
    return v13;
  v17[0] = v12;
  v14 = v10(a1, a2, v9, 12LL, 2, v17);
  if ( v14 == -1073741822 )
    return v13;
  if ( v14 == -1073741536 )
    return v17[0];
  if ( v14 )
    return (unsigned int)-1073741595;
  return v13;
}
