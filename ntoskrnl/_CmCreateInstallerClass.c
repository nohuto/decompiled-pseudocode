/*
 * XREFs of _CmCreateInstallerClass @ 0x140A5E144
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x14074D6F0 (_PnpDispatchInstallerClass.c)
 *     PiCMOpenClassKey @ 0x14085C868 (PiCMOpenClassKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmCreateInstallerClassWorker @ 0x140A5E2B0 (_CmCreateInstallerClassWorker.c)
 */

__int64 __fastcall CmCreateInstallerClass(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, int, HANDLE *); // rsi
  int v11; // eax
  int InstallerClassWorker; // eax
  int v13; // ebx
  int v14; // eax
  HANDLE v16[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v16, 0, 0x58uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, HANDLE *))(a1 + 504);
  if ( a3 || (LODWORD(v16[2]) = 1, a4) )
    LODWORD(v16[2]) = a3;
  HIDWORD(v16[4]) = a6;
  if ( v10 )
  {
    v11 = v10(a1, a2, 2LL, 2LL, 1, v16);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_15;
      if ( v11 )
        goto LABEL_17;
    }
  }
  InstallerClassWorker = CmCreateInstallerClassWorker(
                           a1,
                           a2,
                           v16[2],
                           (unsigned int)&v16[3],
                           (__int64)&v16[4],
                           SWORD2(v16[4]));
  v13 = InstallerClassWorker;
  if ( v10 )
  {
    LODWORD(v16[0]) = InstallerClassWorker;
    v14 = v10(a1, a2, 2LL, 2LL, 2, v16);
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        if ( !v14 )
          goto LABEL_11;
LABEL_17:
        v13 = -1073741595;
        goto LABEL_18;
      }
LABEL_15:
      v13 = (int)v16[0];
    }
  }
LABEL_11:
  if ( v13 >= 0 && a4 )
  {
    *a4 = v16[3];
LABEL_21:
    if ( a5 )
      *a5 = v16[4];
    return (unsigned int)v13;
  }
LABEL_18:
  if ( v16[3] )
    ZwClose(v16[3]);
  if ( v13 >= 0 )
    goto LABEL_21;
  return (unsigned int)v13;
}
