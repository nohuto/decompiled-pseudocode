/*
 * XREFs of HvlGetSystemPasidCapabilities @ 0x140542050
 * Callers:
 *     HvlpInitializeSvmIommuSupport @ 0x140545EE4 (HvlpInitializeSvmIommuSupport.c)
 * Callees:
 *     HviGetHypervisorFeatures @ 0x14037F8A0 (HviGetHypervisorFeatures.c)
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x140546850 (HvlpGetRegister128.c)
 *     HviGetHardwareFeatures @ 0x140612F60 (HviGetHardwareFeatures.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140612FD4 (HviGetHypervisorVendorAndMaxFunction.c)
 */

char __fastcall HvlGetSystemPasidCapabilities(__int64 a1)
{
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned int v6; // ecx
  int v7; // eax
  PHYSICAL_ADDRESS *v8; // rbx
  PHYSICAL_ADDRESS *v9; // rsi
  __m256i v10; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v11[4]; // [rsp+40h] [rbp-C8h] BYREF
  int v12; // [rsp+60h] [rbp-A8h]
  __int128 v13; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v14; // [rsp+78h] [rbp-90h] BYREF
  __int128 v15; // [rsp+88h] [rbp-80h] BYREF
  __int128 v16; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v17[16]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v18[2064]; // [rsp+B8h] [rbp-50h] BYREF

  v11[3] = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v12 = 0;
  LODWORD(v11[0]) = 0;
  result = HvlpRootFlags;
  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  *(_OWORD *)&v11[1] = 0LL;
  memset(&v10.m256i_u64[1], 0, 24);
  v13 = 0LL;
  if ( (HvlpRootFlags & 1) != 0 )
  {
    result = HvlEnlightenments;
    if ( (HvlEnlightenments & 0x80u) != 0 )
    {
      result = HviGetHypervisorFeatures(&v14);
      if ( (HIDWORD(v14) & 0x10000) != 0 )
      {
        result = HviGetHypervisorVendorAndMaxFunction(&v15, v3, v4, v5);
        if ( (unsigned int)v15 >= 0x40000008 )
        {
          result = HvlpGetRegister128(517LL, &v13);
          v6 = v13;
          if ( (v13 & 3) != 0 )
          {
            *(_DWORD *)(a1 + 4) = DWORD1(v13);
            *(_DWORD *)(a1 + 8) = v6 >> 11;
            if ( (v6 & 2) != 0 )
              *(_DWORD *)a1 |= 4u;
            if ( (v6 & 1) != 0 )
            {
              v7 = DWORD2(v13);
              *(_DWORD *)a1 |= 1u;
              *(_DWORD *)(a1 + 12) = v7;
            }
            result = HvlpFlags;
            if ( (HvlpFlags & 2) != 0 )
            {
              HviGetHardwareFeatures(&v16);
              if ( (v16 & 0x80u) == 0LL )
                *(_DWORD *)a1 |= 2u;
              v8 = HvlpAcquireHypercallPage((__int64)&v11[1], 1, (__int64)v17, 8LL);
              v9 = HvlpAcquireHypercallPage((__int64)&v10.m256i_i64[1], 2, (__int64)v18, 1032LL);
              v8->QuadPart = 0LL;
              v8->LowPart = 11;
              if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
              {
                *(_DWORD *)(a1 + 16) = v9->LowPart;
                *(_DWORD *)(a1 + 20) = v9->HighPart;
              }
              HvlpReleaseHypercallPage((__int64)&v10.m256i_i64[1]);
              return HvlpReleaseHypercallPage((__int64)&v11[1]);
            }
          }
        }
      }
    }
  }
  return result;
}
