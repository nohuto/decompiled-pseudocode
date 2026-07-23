/*
 * XREFs of _CmDeleteDeviceContainer @ 0x14072C32C
 * Callers:
 *     _CmRemoveDeviceFromContainerWorker @ 0x14072C0D0 (_CmRemoveDeviceFromContainerWorker.c)
 *     _CmAddDeviceToContainerWorker @ 0x140759440 (_CmAddDeviceToContainerWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmDeleteDeviceContainerWorker @ 0x14072C484 (_CmDeleteDeviceContainerWorker.c)
 */

__int64 __fastcall CmDeleteDeviceContainer(__int64 a1, __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64, __int64); // rdi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // eax
  _DWORD v12[22]; // [rsp+40h] [rbp-88h] BYREF

  memset(v12, 0, sizeof(v12));
  v4 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 504);
  if ( v4 )
  {
    v5 = v4(a1, a2, 5LL);
    if ( v5 == -1073741822 )
    {
      v4 = 0LL;
    }
    else
    {
      if ( v5 == -1073741536 )
        return v12[0];
      if ( v5 )
        return (unsigned int)-1073741595;
    }
  }
  v6 = CmDeleteDeviceContainerWorker(a1, a2, v12[4]);
  v7 = v6;
  if ( !v4 )
    return v7;
  v12[0] = v6;
  v9 = v4(a1, a2, 5LL);
  v10 = v9;
  if ( v9 == -1073741822 )
    return v7;
  if ( v9 == -1073741536 )
    return v12[0];
  v11 = v7;
  if ( v10 )
    return (unsigned int)-1073741595;
  return v11;
}
