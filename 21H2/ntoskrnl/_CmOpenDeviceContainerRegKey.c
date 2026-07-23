/*
 * XREFs of _CmOpenDeviceContainerRegKey @ 0x1406080B0
 * Callers:
 *     _PnpDispatchDeviceContainer @ 0x140607E80 (_PnpDispatchDeviceContainer.c)
 *     _CmCreateDeviceContainerWorker @ 0x140759788 (_CmCreateDeviceContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406081C4 (_CmOpenDeviceContainerRegKeyWorker.c)
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
  int v16; // ecx
  int v17; // eax
  _QWORD v18[11]; // [rsp+40h] [rbp-59h] BYREF

  memset(v18, 0, sizeof(v18));
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  LODWORD(v18[3]) = a5;
  BYTE4(v18[3]) = a6;
  v18[2] = 80LL;
  v18[4] = a7;
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
        v13 = v18[0];
        goto LABEL_5;
      }
      if ( v11 )
        return (unsigned int)-1073741595;
    }
  }
  v12 = CmOpenDeviceContainerRegKeyWorker(a1, a2, LODWORD(v18[2]));
  v13 = v12;
  if ( v10 )
  {
    LODWORD(v18[0]) = v12;
    v15 = v10(a1, a2, 5LL);
    v16 = v15;
    if ( v15 != -1073741822 )
    {
      if ( v15 != -1073741536 )
      {
        v17 = v13;
        if ( v16 )
          v17 = -1073741595;
        v13 = v17;
        goto LABEL_5;
      }
      goto LABEL_12;
    }
  }
LABEL_5:
  if ( v13 >= 0 && a8 )
    *a8 = v18[5];
  return (unsigned int)v13;
}
