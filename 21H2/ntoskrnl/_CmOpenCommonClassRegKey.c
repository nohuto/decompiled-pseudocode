/*
 * XREFs of _CmOpenCommonClassRegKey @ 0x14063A184
 * Callers:
 *     _CmOpenInterfaceClassRegKey @ 0x14062F7A4 (_CmOpenInterfaceClassRegKey.c)
 *     _CmOpenInstallerClassRegKey @ 0x14063A9DC (_CmOpenInstallerClassRegKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140639F28 (_CmOpenCommonClassRegKeyWorker.c)
 */

__int64 __fastcall CmOpenCommonClassRegKey(
        __int64 a1,
        const WCHAR *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  unsigned int v11; // esi
  __int64 (__fastcall *v12)(__int64, const WCHAR *, _QWORD, __int64, int, _QWORD *); // rdi
  int v13; // eax
  int v14; // eax
  int v15; // ebx
  int v17; // eax
  _QWORD v19[12]; // [rsp+50h] [rbp-71h] BYREF

  memset(v19, 0, 0x58uLL);
  if ( (unsigned __int8)a3 == 32 )
  {
    v11 = 2;
  }
  else
  {
    if ( (unsigned __int8)a3 != 64 )
    {
      v15 = -1073741811;
      goto LABEL_7;
    }
    v11 = 4;
  }
  v12 = *(__int64 (__fastcall **)(__int64, const WCHAR *, _QWORD, __int64, int, _QWORD *))(a1 + 504);
  LODWORD(v19[3]) = a5;
  v19[4] = a7;
  BYTE4(v19[3]) = a6;
  v19[2] = __PAIR64__(a4, a3);
  if ( v12 )
  {
    v13 = v12(a1, a2, v11, 11LL, 1, v19);
    if ( v13 == -1073741822 )
    {
      v12 = 0LL;
    }
    else
    {
      if ( v13 == -1073741536 )
        goto LABEL_17;
      if ( v13 )
        return (unsigned int)-1073741595;
    }
  }
  v14 = CmOpenCommonClassRegKeyWorker(a1, a2, v19[2], SHIDWORD(v19[2]), v19[3], SBYTE4(v19[3]), v19[4], &v19[5]);
  v15 = v14;
  if ( !v12 )
    goto LABEL_7;
  LODWORD(v19[0]) = v14;
  v17 = v12(a1, a2, v11, 11LL, 2, v19);
  if ( v17 == -1073741822 )
    goto LABEL_7;
  if ( v17 == -1073741536 )
  {
LABEL_17:
    v15 = v19[0];
    goto LABEL_7;
  }
  if ( v17 )
    return (unsigned int)-1073741595;
LABEL_7:
  if ( v15 >= 0 && a8 )
    *a8 = v19[5];
  return (unsigned int)v15;
}
