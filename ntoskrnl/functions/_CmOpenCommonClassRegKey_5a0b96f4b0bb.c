__int64 __fastcall CmOpenCommonClassRegKey(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned int v11; // esi
  __int64 (__fastcall *v12)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v17; // eax
  int v18; // [rsp+28h] [rbp-99h]
  _QWORD v20[12]; // [rsp+50h] [rbp-71h] BYREF

  memset(v20, 0, 0x58uLL);
  if ( (unsigned __int8)a3 == 32 )
  {
    v11 = 2;
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
      return (unsigned int)-1073741811;
    v11 = 4;
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 504);
  LODWORD(v20[3]) = a5;
  v20[4] = a7;
  BYTE4(v20[3]) = a6;
  v20[2] = __PAIR64__(a4, a3);
  if ( v12 )
  {
    v13 = v12(a1, a2, v11, 11LL, 1, v20);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
      {
LABEL_16:
        v15 = v20[0];
        goto LABEL_8;
      }
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  LOBYTE(v18) = BYTE4(v20[3]);
  v14 = CmOpenCommonClassRegKeyWorker(a1, a2, LODWORD(v20[2]), HIDWORD(v20[2]), v20[3], v18, v20[4], &v20[5]);
  v15 = v14;
  if ( v12 )
  {
    LODWORD(v20[0]) = v14;
    v17 = v12(a1, a2, v11, 11LL, 2, v20);
    if ( v17 != -1073741822 )
    {
      if ( v17 != -1073741536 )
      {
        if ( !v17 )
          goto LABEL_8;
        return (unsigned int)-1073741595;
      }
      goto LABEL_16;
    }
  }
LABEL_8:
  if ( v15 >= 0 && a8 )
    *a8 = v20[5];
  return (unsigned int)v15;
}
