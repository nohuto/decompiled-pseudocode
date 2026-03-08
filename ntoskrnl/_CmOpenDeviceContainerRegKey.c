/*
 * XREFs of _CmOpenDeviceContainerRegKey @ 0x140682CAC
 * Callers:
 *     _CmCreateDeviceContainerWorker @ 0x140682A20 (_CmCreateDeviceContainerWorker.c)
 *     _PnpDispatchDeviceContainer @ 0x140682AC0 (_PnpDispatchDeviceContainer.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140682DC0 (_CmOpenDeviceContainerRegKeyWorker.c)
 */

__int64 __fastcall CmOpenDeviceContainerRegKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        _DWORD *a8)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rdi
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v15; // eax
  _QWORD v16[11]; // [rsp+40h] [rbp-59h] BYREF

  memset(v16, 0, sizeof(v16));
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  LODWORD(v16[3]) = a5;
  BYTE4(v16[3]) = a6;
  v16[2] = 80LL;
  v16[4] = a7;
  if ( v10 )
  {
    v11 = v10(a1, a2, 5LL);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
      {
LABEL_12:
        v13 = v16[0];
        goto LABEL_5;
      }
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = CmOpenDeviceContainerRegKeyWorker(a1, a2, LODWORD(v16[2]));
  v13 = v12;
  if ( v10 )
  {
    LODWORD(v16[0]) = v12;
    v15 = v10(a1, a2, 5LL);
    if ( v15 != -1073741822 )
    {
      if ( v15 != -1073741536 )
      {
        if ( !v15 )
          goto LABEL_5;
        return (unsigned int)-1073741595;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v13 >= 0 && a8 )
    *a8 = v16[5];
  return (unsigned int)v13;
}
