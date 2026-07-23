/*
 * XREFs of HvlpDetermineEnlightenments @ 0x1404FA044
 * Callers:
 *     HvlPhase0Initialize @ 0x140791B8C (HvlPhase0Initialize.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x140340410 (VslGetNestedPageProtectionFlags.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     HviGetEnlightenmentInformation @ 0x1403A8FE0 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A9020 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpQueryHypervisorSchedulerType @ 0x1403F04B0 (HvlpQueryHypervisorSchedulerType.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpGetRegister128 @ 0x1404F9E00 (HvlpGetRegister128.c)
 *     HvlpQueryExtendedCapabilities @ 0x1404FA630 (HvlpQueryExtendedCapabilities.c)
 *     HvlpTryToLockCpuManagementVersion @ 0x1404FA6D0 (HvlpTryToLockCpuManagementVersion.c)
 *     HviGetHardwareFeatures @ 0x1405BEEB0 (HviGetHardwareFeatures.c)
 */

__int64 (__fastcall *HvlpDetermineEnlightenments())(_DWORD *a1)
{
  int v0; // edi
  int v1; // esi
  __int64 v2; // rbx
  int v3; // r15d
  unsigned __int64 v4; // rax
  int v5; // ecx
  int v6; // r8d
  int v7; // r14d
  int v8; // edx
  int v9; // ecx
  int v10; // edi
  unsigned int v11; // ecx
  char v12; // r14
  int v13; // ecx
  int v14; // edx
  ULONG v15; // eax
  int v16; // ecx
  int v17; // r14d
  __int64 *v18; // rdi
  int v19; // ecx
  int v20; // edi
  int v21; // ebx
  char v22; // al
  __int64 v23; // rax
  int v24; // edx
  __int64 (__fastcall *result)(_DWORD *); // rax
  __int64 v26; // [rsp+28h] [rbp-59h] BYREF
  _OWORD v27[2]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v28; // [rsp+58h] [rbp-29h] BYREF
  __int128 v29; // [rsp+68h] [rbp-19h] BYREF
  __int128 v30; // [rsp+78h] [rbp-9h] BYREF
  __int128 v31; // [rsp+88h] [rbp+7h] BYREF
  __int128 v32; // [rsp+98h] [rbp+17h] BYREF
  _BYTE v33[16]; // [rsp+A8h] [rbp+27h] BYREF

  v26 = 0LL;
  v0 = 0;
  v29 = 0LL;
  HvlEnableIdleYield = 0;
  v28 = 0LL;
  v32 = 0LL;
  v30 = 0LL;
  memset(v27, 0, sizeof(v27));
  HviGetEnlightenmentInformation(&v28);
  v31 = 0LL;
  HviGetHypervisorFeatures(&v31);
  HviGetHypervisorFeatures(&v32);
  HviGetHardwareFeatures(&v30);
  v1 = v28;
  if ( (v28 & 1) != 0 )
  {
    v0 = 8388615;
  }
  else if ( (v28 & 2) != 0 )
  {
    v0 = 8388614;
  }
  else if ( (v28 & 4) != 0 )
  {
    if ( (v28 & 0x20000) != 0 || (v0 = 8388612, v1 = v28, KeGetCurrentPrcb()->CpuVendor == 2) )
      v0 = 4;
  }
  v2 = v31;
  if ( (v31 & 0x10) != 0 )
    HvlpFlags |= 0x80000u;
  if ( (v1 & 8) != 0 )
  {
    v0 |= 0x10u;
    HvlpFlags |= 1u;
  }
  if ( (v1 & 0x200) != 0 )
  {
    v0 |= 0x1000u;
    HvlpFlags |= 0x10u;
  }
  v3 = HIDWORD(v32);
  if ( (HIDWORD(v32) & 0x40000) != 0 )
  {
    v4 = __readmsr(0x40000001u);
    if ( (v4 & 2) == 0 )
      __writemsr(0x40000001u, v4 | 2);
    v0 |= 0x100000u;
  }
  if ( (v1 & 0x40000) != 0 )
    HvlpFlags |= 0x400000u;
  if ( (v1 & 0x10000) != 0 )
    HvlpFlags |= 0x800000u;
  v5 = v0 | 0x20000000;
  if ( (v1 & 0x100000) == 0 )
    v5 = v0;
  v6 = v5 | 0x80;
  v7 = (HIDWORD(v32) >> 4) & 1;
  if ( !v7 )
    v6 = v5;
  if ( (v1 & 0x800) != 0 )
    HvlpFlags |= 0x80u;
  v8 = v6 | 0x20;
  if ( (v1 & 0x20) == 0 )
    v8 = v6;
  v9 = v8 | 0x4000;
  if ( (v1 & 0x400) == 0 )
    v9 = v8;
  v10 = v9 | 0x200;
  if ( (BYTE12(v32) & 0x20) == 0 )
    v10 = v9;
  if ( SDWORD1(v28) > 0 )
  {
    _BitScanReverse(&v11, DWORD1(v28));
    v10 |= 0x40u;
    HvlLongSpinCountMask = DWORD1(v28) | ((1 << v11) - 1);
  }
  if ( (v31 & 0x100000000000LL) != 0 && (unsigned __int8)HvlpTryToLockCpuManagementVersion() )
    HvlpFlags |= 2u;
  if ( (v3 & 0x10000000) != 0 )
  {
    v10 |= 0x4000000u;
    if ( !v7 )
      v10 &= ~0x4000000u;
  }
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpGetRegister128(516, &v29);
    v12 = v29;
    v13 = v10 | 0x400;
    if ( (BYTE4(v29) & 1) == 0 )
      v13 = v10;
    v14 = v13 | 0x20000;
    if ( (BYTE4(v29) & 2) == 0 )
      v14 = v13;
    v10 = v14 | 0x40000;
    if ( (BYTE4(v29) & 4) == 0 )
      v10 = v14;
    if ( (v29 & 1) != 0 )
      HvlpRootFlags |= 0x20u;
    if ( (v29 & 2) != 0 )
      HvlpRootFlags |= 0x40u;
    if ( (int)v29 < 0 )
    {
      HvlpRootFlags |= 0x187u;
      v10 |= 0x10008u;
      HvlHyperVRootPartition = 1;
      if ( (unsigned int)HvlpQueryHypervisorSchedulerType() == 4 )
        v10 |= 0x40000u;
    }
    v15 = HvlpRootFlags;
    if ( (HvlpRootFlags & 1) != 0 && (v12 & 4) != 0 )
    {
      v15 = HvlpRootFlags | 0x200;
      HvlpRootFlags |= 0x200u;
    }
    if ( (v2 & 0x10000000000LL) != 0 )
    {
      v15 |= 0x10u;
      HvlpRootFlags = v15;
    }
    if ( (v1 & 0x1000) != 0 )
      HvlpRootFlags = v15 | 0x400;
  }
  v16 = v10 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v16 = v10;
  if ( (v3 & 8) == 0 )
    HvlpFlags |= 4u;
  v17 = v16 | 0x100;
  if ( (v2 & 0x202) != 0x202 )
    v17 = v16;
  if ( (v2 & 0x200000000LL) != 0 )
  {
    v18 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v27, 2, (__int64)v33, 8LL);
    HvcallInitiateHypercall(70);
    HvlpReleaseHypercallPage((__int64)v27);
    HvlPartitionId = *v18;
  }
  v19 = v17 | 0x2000;
  if ( (v3 & 0x400) == 0 )
    v19 = v17;
  if ( (v2 & 4) != 0 )
    HvlpFlags |= 0x20u;
  if ( (v3 & 0x4000) == 0 )
    HvlpFlags |= 0x2000u;
  if ( (v2 & 0x1000000000000LL) != 0 )
    HvlpFlags |= 0x40u;
  v20 = v19 | 0x8000;
  if ( (v2 & 0x20000000000000LL) == 0 )
    v20 = v19;
  if ( (v1 & 0x2000) != 0 )
  {
    v21 = v20 | 0x80000;
    if ( (VslGetNestedPageProtectionFlags() & 2) == 0 )
      v21 = v20;
  }
  else
  {
    v21 = v20;
    if ( (HvlpFlags & 0x40) != 0 )
      HvlpFlags |= 0x20000u;
  }
  if ( (v30 & 0x800000) != 0 )
    HvlpFlags |= 0x1000000u;
  if ( (v1 & 0x8000) != 0 && (v21 & 0x100) != 0 )
    HvlpFlags |= 0x4000u;
  if ( (v30 & 0x10000) != 0 )
    HvlpFlags |= 0x40000u;
  v22 = HvlpQueryExtendedCapabilities(&v26);
  v23 = v26 & -(__int64)(v22 != 0);
  if ( (v23 & 0x10) != 0 )
    HvlpFlags |= 0x8000u;
  if ( (v23 & 0x20) != 0 )
    HvlpFlags |= 0x10000u;
  if ( (v23 & 8) != 0 )
    HvlpFlags |= 0x100000u;
  if ( (v23 & 0x40) != 0 )
    HvlpFlags |= 0x200000u;
  v24 = v21 | 0x200000;
  if ( (v23 & 2) == 0 )
    v24 = v21;
  if ( (v23 & 4) != 0 )
  {
    v24 |= 0x400000u;
    if ( (v23 & 0x80u) != 0LL )
      v24 |= 0x8000000u;
  }
  result = HvlGetEnlightenmentInfo;
  qword_140C00710 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & v24;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & v24;
  return result;
}
