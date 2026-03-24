/*
 * XREFs of HvlSvmGetSystemCapabilities @ 0x1404F6CE0
 * Callers:
 *     HvlpInitializeSvmIommuSupport @ 0x1404F930C (HvlpInitializeSvmIommuSupport.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HviGetHypervisorFeatures @ 0x1403A9020 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x1404F9E00 (HvlpGetRegister128.c)
 *     HviGetHardwareFeatures @ 0x1405BEEB0 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BEF30 (HviGetHypervisorVendorAndMaxFunction.c)
 */

char __fastcall HvlSvmGetSystemCapabilities(__int64 a1)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ecx
  int v7; // eax
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r8
  _DWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r9
  __int128 v14; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v15; // [rsp+38h] [rbp-D0h]
  __int128 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v17; // [rsp+58h] [rbp-B0h]
  __int128 v18; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v19; // [rsp+78h] [rbp-90h] BYREF
  __int128 v20; // [rsp+88h] [rbp-80h] BYREF
  __int128 v21; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v22[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v23[2064]; // [rsp+B8h] [rbp-50h] BYREF

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = HvlpRootFlags;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v18 = 0LL;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    result = HvlEnlightenments;
    if ( (HvlEnlightenments & 0x80u) != 0 )
    {
      result = HviGetHypervisorFeatures(&v19);
      if ( (HIDWORD(v19) & 0x10000) != 0 )
      {
        result = HviGetHypervisorVendorAndMaxFunction(&v20, v3, v4, v5);
        if ( (unsigned int)v20 >= 0x40000008 )
        {
          result = HvlpGetRegister128(517LL, &v18);
          v6 = v18;
          if ( (v18 & 1) != 0 )
          {
            v7 = DWORD1(v18);
            *(_DWORD *)a1 |= 1u;
            *(_DWORD *)(a1 + 4) = v7;
            *(_DWORD *)(a1 + 12) = DWORD2(v18);
            *(_DWORD *)(a1 + 8) = v6 >> 11;
            result = HvlpFlags;
            if ( (HvlpFlags & 2) != 0 )
            {
              HviGetHardwareFeatures(&v21);
              if ( (v21 & 0x80u) == 0LL )
                *(_DWORD *)a1 |= 2u;
              v8 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v16, 1, (__int64)v22, 8LL);
              v9 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v14, 2, (__int64)v23, 1032LL);
              v10 = *((_QWORD *)&v15 + 1);
              v11 = v9;
              v12 = *((_QWORD *)&v17 + 1);
              *v8 = 0LL;
              *(_DWORD *)v8 = 11;
              if ( !(unsigned __int16)HvcallInitiateHypercall(123, v12, v10, v13) )
              {
                *(_DWORD *)(a1 + 16) = *v11;
                *(_DWORD *)(a1 + 20) = v11[1];
              }
              HvlpReleaseHypercallPage((__int64)&v14);
              return HvlpReleaseHypercallPage((__int64)&v16);
            }
          }
        }
      }
    }
  }
  return result;
}
