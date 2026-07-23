/*
 * XREFs of _CmCreateInstallerClass @ 0x140974CC0
 * Callers:
 *     PiCMOpenClassKey @ 0x140622BDC (PiCMOpenClassKey.c)
 *     _PnpDispatchInstallerClass @ 0x14073EFA0 (_PnpDispatchInstallerClass.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmCreateInstallerClassWorker @ 0x140974E3C (_CmCreateInstallerClassWorker.c)
 */

__int64 __fastcall CmCreateInstallerClass(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, int, HANDLE *); // rsi
  int v11; // eax
  int InstallerClassWorker; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  HANDLE v18[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v18, 0, 0x58uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, HANDLE *))(a1 + 504);
  if ( a3 || (LODWORD(v18[2]) = 1, a4) )
    LODWORD(v18[2]) = a3;
  HIDWORD(v18[4]) = a6;
  if ( v10 )
  {
    v11 = v10(a1, a2, 2LL, 2LL, 1, v18);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_17;
      if ( v11 )
      {
        v13 = -1073741595;
        goto LABEL_20;
      }
    }
  }
  InstallerClassWorker = CmCreateInstallerClassWorker(
                           a1,
                           a2,
                           v18[2],
                           (unsigned int)&v18[3],
                           (__int64)&v18[4],
                           SWORD2(v18[4]));
  v13 = InstallerClassWorker;
  if ( !v10 )
    goto LABEL_13;
  LODWORD(v18[0]) = InstallerClassWorker;
  v14 = v10(a1, a2, 2LL, 2LL, 2, v18);
  v15 = v14;
  if ( v14 == -1073741822 )
    goto LABEL_13;
  if ( v14 == -1073741536 )
  {
LABEL_17:
    v13 = (int)v18[0];
    goto LABEL_13;
  }
  v16 = v13;
  if ( v15 )
    v16 = -1073741595;
  v13 = v16;
LABEL_13:
  if ( v13 >= 0 && a4 )
  {
    *a4 = v18[3];
    goto LABEL_22;
  }
LABEL_20:
  if ( v18[3] )
    ZwClose(v18[3]);
LABEL_22:
  if ( v13 >= 0 && a5 )
    *a5 = v18[4];
  return (unsigned int)v13;
}
