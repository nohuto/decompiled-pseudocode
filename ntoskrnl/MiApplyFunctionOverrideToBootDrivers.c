/*
 * XREFs of MiApplyFunctionOverrideToBootDrivers @ 0x140B3AAB0
 * Callers:
 *     MiApplyBootLoadedDriversFixups @ 0x140B3ACB4 (MiApplyBootLoadedDriversFixups.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14032E710 (MI_IS_PHYSICAL_ADDRESS.c)
 *     RtlApplyFunctionOverrideFixupsToImage @ 0x1403712F4 (RtlApplyFunctionOverrideFixupsToImage.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiApplyFunctionOverrideToBootDrivers(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned int v4; // ebp
  int v5; // eax
  _QWORD v7[14]; // [rsp+30h] [rbp-98h] BYREF

  v1 = a1 + 16;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 != a1 + 16 )
  {
    do
    {
      v3 = *(_QWORD *)(v2 + 48);
      v4 = *(_DWORD *)(v2 + 64);
      if ( v3 != PsNtosImageBase && v3 != PsHalImageBase && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(*(_QWORD *)(v2 + 48)) )
      {
        if ( (MiFlags & 0x8000) != 0 )
        {
          memset(v7, 0, 0x68uLL);
          v7[1] = v3;
          v7[2] = 1LL;
          v5 = VslpEnterIumSecureMode(2u, 226, 0, (__int64)v7);
        }
        else
        {
          v5 = RtlApplyFunctionOverrideFixupsToImage(v3, v4);
        }
        if ( ((v5 + 0x80000000) & 0x80000000) == 0 && v5 != -1073741637 )
          KeBugCheckEx(0x1Au, 0x1084uLL, v2, *(_QWORD *)(v2 + 48), v5);
      }
      v2 = *(_QWORD *)v2;
    }
    while ( v2 != v1 );
  }
  return 0LL;
}
