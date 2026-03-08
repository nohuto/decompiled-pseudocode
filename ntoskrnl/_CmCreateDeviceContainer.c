/*
 * XREFs of _CmCreateDeviceContainer @ 0x1406828C0
 * Callers:
 *     _CmAddDeviceToContainerWorker @ 0x1406851BC (_CmAddDeviceToContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     _CmCreateDeviceContainerWorker @ 0x140682A20 (_CmCreateDeviceContainerWorker.c)
 */

__int64 __fastcall CmCreateDeviceContainer(__int64 a1, __int64 a2, __int64 a3, HANDLE *a4, _BYTE *a5)
{
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rdi
  int v9; // eax
  int DeviceContainerWorker; // eax
  int v11; // ebx
  int v12; // eax
  HANDLE v14[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v14, 0, 0x58uLL);
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  HIDWORD(v14[4]) = 0;
  LODWORD(v14[2]) = 4;
  if ( v8 )
  {
    v9 = v8(a1, a2, 5LL);
    if ( v9 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v9 == -1073741536 )
        goto LABEL_17;
      if ( v9 )
        goto LABEL_19;
    }
  }
  DeviceContainerWorker = CmCreateDeviceContainerWorker(
                            a1,
                            a2,
                            v14[2],
                            (unsigned int)&v14[3],
                            (__int64)&v14[4],
                            SWORD2(v14[4]));
  v11 = DeviceContainerWorker;
  if ( v8 )
  {
    LODWORD(v14[0]) = DeviceContainerWorker;
    v12 = v8(a1, a2, 5LL);
    if ( v12 != -1073741822 )
    {
      if ( v12 != -1073741536 )
      {
        if ( !v12 )
          goto LABEL_9;
LABEL_19:
        v11 = -1073741595;
        goto LABEL_20;
      }
LABEL_17:
      v11 = (int)v14[0];
    }
  }
LABEL_9:
  if ( v11 >= 0 && a4 )
  {
    *a4 = v14[3];
LABEL_12:
    if ( a5 )
      *a5 = v14[4];
    return (unsigned int)v11;
  }
LABEL_20:
  if ( v14[3] )
    ZwClose(v14[3]);
  if ( v11 >= 0 )
    goto LABEL_12;
  return (unsigned int)v11;
}
