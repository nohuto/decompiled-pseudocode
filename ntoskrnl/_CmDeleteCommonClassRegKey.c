/*
 * XREFs of _CmDeleteCommonClassRegKey @ 0x140A5E35C
 * Callers:
 *     _CmDeleteInstallerClassWorker @ 0x140A5FE90 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140A60258 (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140A5E4A8 (_CmDeleteCommonClassRegKeyWorker.c)
 */

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
