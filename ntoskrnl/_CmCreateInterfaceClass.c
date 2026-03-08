/*
 * XREFs of _CmCreateInterfaceClass @ 0x14087BA38
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x1406C59F0 (_PnpDispatchInterfaceClass.c)
 *     PiCMOpenClassKey @ 0x14085C868 (PiCMOpenClassKey.c)
 *     _CmCreateDeviceInterfaceWorker @ 0x14087B924 (_CmCreateDeviceInterfaceWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmCreateInterfaceClassWorker @ 0x14087BBB0 (_CmCreateInterfaceClassWorker.c)
 */

__int64 __fastcall CmCreateInterfaceClass(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rsi
  int v11; // eax
  int InterfaceClassWorker; // eax
  int v13; // ebx
  int v14; // eax
  HANDLE v16[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v16, 0, 0x58uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  if ( a3 || (LODWORD(v16[2]) = 1, a4) )
    LODWORD(v16[2]) = a3;
  HIDWORD(v16[4]) = a6;
  if ( v10 )
  {
    v11 = v10(a1, a2, 4LL);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_19;
      if ( v11 )
        goto LABEL_20;
    }
  }
  InterfaceClassWorker = CmCreateInterfaceClassWorker(
                           a1,
                           a2,
                           v16[2],
                           (unsigned int)&v16[3],
                           (__int64)&v16[4],
                           SWORD2(v16[4]));
  v13 = InterfaceClassWorker;
  if ( v10 )
  {
    LODWORD(v16[0]) = InterfaceClassWorker;
    v14 = v10(a1, a2, 4LL);
    if ( v14 != -1073741822 )
    {
      if ( v14 != -1073741536 )
      {
        if ( !v14 )
          goto LABEL_11;
LABEL_20:
        v13 = -1073741595;
        goto LABEL_13;
      }
LABEL_19:
      v13 = (int)v16[0];
    }
  }
LABEL_11:
  if ( v13 >= 0 && a4 )
  {
    *a4 = v16[3];
LABEL_16:
    if ( a5 )
      *a5 = v16[4];
    return (unsigned int)v13;
  }
LABEL_13:
  if ( v16[3] )
    ZwClose(v16[3]);
  if ( v13 >= 0 )
    goto LABEL_16;
  return (unsigned int)v13;
}
