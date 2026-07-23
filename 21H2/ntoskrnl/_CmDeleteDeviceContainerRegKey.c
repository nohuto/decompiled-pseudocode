/*
 * XREFs of _CmDeleteDeviceContainerRegKey @ 0x14072C664
 * Callers:
 *     _CmDeleteDeviceContainerWorker @ 0x14072C484 (_CmDeleteDeviceContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x14072C740 (_CmDeleteDeviceContainerRegKeyWorker.c)
 */

__int64 __fastcall CmDeleteDeviceContainerRegKey(__int64 a1, __int64 a2, int a3)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // rdi
  int v7; // eax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  _DWORD v14[22]; // [rsp+40h] [rbp-88h] BYREF

  memset(v14, 0, sizeof(v14));
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  v14[5] = 0;
  v14[4] = a3;
  LOBYTE(v14[6]) = 1;
  if ( v6 )
  {
    v7 = v6(a1, a2, 5LL);
    if ( v7 == -1073741822 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( v7 == -1073741536 )
        return v14[0];
      if ( v7 )
        return (unsigned int)-1073741595;
    }
  }
  v8 = CmDeleteDeviceContainerRegKeyWorker(a1, a2, v14[4]);
  v9 = v8;
  if ( !v6 )
    return v9;
  v14[0] = v8;
  v11 = v6(a1, a2, 5LL);
  v12 = v11;
  if ( v11 == -1073741822 )
    return v9;
  if ( v11 == -1073741536 )
    return v14[0];
  v13 = v9;
  if ( v12 )
    return (unsigned int)-1073741595;
  return v13;
}
