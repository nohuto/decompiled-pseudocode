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
  int v15; // ecx
  ULONG v16; // eax
  int v17; // ecx
  int v18; // r14d
  PHYSICAL_ADDRESS *v19; // rdi
  int v20; // ecx
  int v21; // edi
  int v22; // ebx
  char v23; // al
  __int64 v24; // rax
  int v25; // edx
  __int64 (__fastcall *result)(_DWORD *); // rax
  __int64 v27; // [rsp+28h] [rbp-59h] BYREF
  __int128 v28; // [rsp+38h] [rbp-49h] BYREF
  __int64 v29; // [rsp+48h] [rbp-39h]
  __int64 v30; // [rsp+50h] [rbp-31h]
  __int128 v31; // [rsp+58h] [rbp-29h] BYREF
  __int128 v32; // [rsp+68h] [rbp-19h] BYREF
  __int128 v33; // [rsp+78h] [rbp-9h] BYREF
  __int128 v34; // [rsp+88h] [rbp+7h] BYREF
  __int128 v35; // [rsp+98h] [rbp+17h] BYREF
  _BYTE v36[16]; // [rsp+A8h] [rbp+27h] BYREF

  v27 = 0LL;
  v29 = 0LL;
  v32 = 0LL;
  LODWORD(v30) = 0;
  v0 = 0;
  v31 = 0LL;
  HvlEnableIdleYield = 0;
  v35 = 0LL;
  v33 = 0LL;
  v28 = 0LL;
  HviGetEnlightenmentInformation(&v31);
  v34 = 0LL;
  HviGetHypervisorFeatures(&v34);
  HviGetHypervisorFeatures(&v35);
  HviGetHardwareFeatures(&v33);
  v1 = v31;
  if ( (v31 & 1) != 0 )
  {
    v0 = 8388615;
  }
  else if ( (v31 & 2) != 0 )
  {
    v0 = 8388614;
  }
  else if ( (v31 & 4) != 0 )
  {
    if ( (v31 & 0x20000) != 0 || (v0 = 8388612, v1 = v31, KeGetCurrentPrcb()->CpuVendor == 2) )
      v0 = 4;
  }
  v2 = v34;
  if ( (v34 & 0x10) != 0 )
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
  v3 = HIDWORD(v35);
  if ( (HIDWORD(v35) & 0x40000) != 0 )
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
  v7 = (HIDWORD(v35) >> 4) & 1;
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
  if ( (BYTE12(v35) & 0x20) == 0 )
    v10 = v9;
  if ( SDWORD1(v31) > 0 )
  {
    _BitScanReverse(&v11, DWORD1(v31));
    v10 |= 0x40u;
    HvlLongSpinCountMask = DWORD1(v31) | ((1 << v11) - 1);
  }
  if ( (v34 & 0x100000000000LL) != 0 && (unsigned __int8)HvlpTryToLockCpuManagementVersion() )
    HvlpFlags |= 2u;
  if ( (v3 & 0x10000000) != 0 )
  {
    v10 |= 0x4000000u;
    if ( !v7 )
      v10 &= ~0x4000000u;
  }
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpGetRegister128(516LL, &v32);
    v12 = v32;
    v13 = v10 | 0x400;
    if ( (BYTE4(v32) & 1) == 0 )
      v13 = v10;
    v14 = v13 | 0x10000000;
    if ( (BYTE4(v32) & 8) == 0 )
      v14 = v13;
    v15 = v14 | 0x20000;
    if ( (BYTE4(v32) & 2) == 0 )
      v15 = v14;
    v10 = v15 | 0x40000;
    if ( (BYTE4(v32) & 4) == 0 )
      v10 = v15;
    if ( (v32 & 1) != 0 )
      HvlpRootFlags |= 0x20u;
    if ( (v32 & 2) != 0 )
      HvlpRootFlags |= 0x40u;
    if ( (int)v32 < 0 )
    {
      HvlpRootFlags |= 0x187u;
      v10 |= 0x10000u;
      HvlHyperVRootPartition = 1;
      if ( (unsigned int)HvlpQueryHypervisorSchedulerType() == 4 )
        v10 |= 0x40000u;
    }
    v16 = HvlpRootFlags;
    if ( (HvlpRootFlags & 1) != 0 && (v12 & 4) != 0 )
    {
      v16 = HvlpRootFlags | 0x200;
      HvlpRootFlags |= 0x200u;
    }
    if ( (v2 & 0x10000000000LL) != 0 )
    {
      v16 |= 0x10u;
      HvlpRootFlags = v16;
    }
    if ( (v1 & 0x1000) != 0 )
      HvlpRootFlags = v16 | 0x400;
  }
  v17 = v10 | 0x800;
  if ( (v3 & 0x80u) == 0 )
    v17 = v10;
  if ( (v3 & 8) == 0 )
    HvlpFlags |= 4u;
  v18 = v17 | 0x100;
  if ( (v2 & 0x202) != 0x202 )
    v18 = v17;
  if ( (v2 & 0x200000000LL) != 0 )
  {
    v19 = HvlpAcquireHypercallPage((__int64)&v28, 2, (__int64)v36, 8LL);
    HvcallInitiateHypercall(70);
    HvlpReleaseHypercallPage((__int64)&v28);
    HvlPartitionId = v19->QuadPart;
  }
  v20 = v18 | 0x2000;
  if ( (v3 & 0x400) == 0 )
    v20 = v18;
  if ( (v2 & 4) != 0 )
    HvlpFlags |= 0x20u;
  if ( (v3 & 0x4000) == 0 )
    HvlpFlags |= 0x2000u;
  if ( (v2 & 0x1000000000000LL) != 0 )
    HvlpFlags |= 0x40u;
  v21 = v20 | 0x8000;
  if ( (v34 & 0x20000000000000LL) == 0 )
    v21 = v20;
  if ( (v1 & 0x2000) != 0 )
  {
    v22 = v21 | 0x80000;
    if ( (VslGetNestedPageProtectionFlags() & 2) == 0 )
      v22 = v21;
  }
  else
  {
    v22 = v21;
    if ( (HvlpFlags & 0x40) != 0 )
      HvlpFlags |= 0x20000u;
  }
  if ( (v33 & 0x800000) != 0 )
    HvlpFlags |= 0x1000000u;
  if ( (v1 & 0x8000) != 0 && (v22 & 0x100) != 0 )
    HvlpFlags |= 0x4000u;
  if ( (v33 & 0x10000) != 0 )
    HvlpFlags |= 0x40000u;
  v23 = HvlpQueryExtendedCapabilities(&v27);
  v24 = v27 & -(__int64)(v23 != 0);
  if ( (v24 & 0x10) != 0 )
    HvlpFlags |= 0x8000u;
  if ( (v24 & 0x20) != 0 )
    HvlpFlags |= 0x10000u;
  if ( (v24 & 8) != 0 )
    HvlpFlags |= 0x180000u;
  if ( (v24 & 0x40) != 0 )
    HvlpFlags |= 0x200000u;
  v25 = v22 | 0x200000;
  if ( (v24 & 2) == 0 )
    v25 = v22;
  if ( (v24 & 4) != 0 )
  {
    v25 |= 0x400000u;
    if ( (v24 & 0x80u) != 0LL )
      v25 |= 0x8000000u;
  }
  result = HvlGetEnlightenmentInfo;
  qword_140C01B20 = (__int64)HvlGetEnlightenmentInfo;
  HvlpEnlightenments = ~HvlpRescindedEnlightenments & v25;
  HvlEnlightenments = ~HvlpRescindedEnlightenments & v25;
  return result;
}
