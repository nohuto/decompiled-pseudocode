/*
 * XREFs of HvlRetargetDeviceInterrupt @ 0x1405431C0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1405472B0 (HvlpAffinityToHvProcessorSet.c)
 */

__int64 __fastcall HvlRetargetDeviceInterrupt(PHYSICAL_ADDRESS a1, _OWORD *a2, _OWORD *a3, __int64 *a4, _OWORD *a5)
{
  PHYSICAL_ADDRESS *v9; // r14
  PHYSICAL_ADDRESS *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // ebx
  PHYSICAL_ADDRESS *v15; // rax
  int v16; // ecx
  int v17; // eax
  unsigned __int16 v18; // ax
  unsigned int v19; // ebx
  __m256i v21; // [rsp+28h] [rbp-E0h] BYREF
  __m256i v22; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h]
  _DWORD v24[68]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v25[32]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v26[256]; // [rsp+1A8h] [rbp+A0h] BYREF

  v22.m256i_i32[0] = 0;
  LODWORD(v23) = 0;
  memset(&v21.m256i_u64[1], 0, 24);
  memset(&v22.m256i_u64[1], 0, 24);
  memset(&v24[2], 0, 0x100uLL);
  v9 = 0LL;
  v10 = HvlpAcquireHypercallPage((__int64)&v21.m256i_i64[1], 1, (__int64)v26, 128LL);
  *(_OWORD *)&v10->LowPart = 0LL;
  *(_OWORD *)&v10[2].LowPart = 0LL;
  *(_OWORD *)&v10[4].LowPart = 0LL;
  v10[6].QuadPart = 0LL;
  *(_OWORD *)&v10[5].LowPart = *a3;
  v24[0] = 2097153;
  memset(&v24[1], 0, 0x104uLL);
  v11 = *((unsigned __int16 *)a4 + 4);
  v12 = *a4;
  if ( (_WORD)v11 )
  {
    if ( HIWORD(v24[0]) <= (unsigned __int16)v11 )
      goto LABEL_5;
    LOWORD(v24[0]) = v11 + 1;
  }
  *(_QWORD *)&v24[2 * v11 + 2] |= v12;
LABEL_5:
  v13 = HvlpAffinityToHvProcessorSet(v24, &v10[6], (v21.m256i_i8[8] & 2) != 0 ? 64 : 4032);
  if ( v13 == -1 )
  {
    HvlpReleaseHypercallPage((__int64)&v21.m256i_i64[1]);
    v10 = HvlpAcquireHypercallPage((__int64)&v21.m256i_i64[1], 1, 0LL, 0LL);
    *(_OWORD *)&v10->LowPart = 0LL;
    *(_OWORD *)&v10[2].LowPart = 0LL;
    *(_OWORD *)&v10[4].LowPart = 0LL;
    v10[6].QuadPart = 0LL;
    *(_OWORD *)&v10[5].LowPart = *a3;
    v13 = HvlpAffinityToHvProcessorSet(v24, &v10[6], 4032LL);
  }
  v10[5].HighPart |= 2u;
  v14 = v13 + 64;
  v10->QuadPart = -1LL;
  v10[1] = a1;
  *(_OWORD *)&v10[2].LowPart = *a2;
  if ( a5 )
  {
    v15 = HvlpAcquireHypercallPage((__int64)&v22.m256i_i64[1], 2, (__int64)v25, 16LL);
    v16 = 127;
    v9 = v15;
  }
  else
  {
    v16 = 126;
  }
  v17 = (v14 << 14) - 802816;
  if ( v14 <= 0x38 )
    v17 = 114688;
  v18 = HvcallInitiateHypercall(v16 | v17 & 0x3FE0000u);
  if ( v18 )
  {
    v19 = HvlpHvToNtStatus(v18);
    if ( a5 )
      goto LABEL_16;
  }
  else
  {
    v19 = 0;
    if ( a5 )
    {
      *a5 = *(_OWORD *)&v9->LowPart;
LABEL_16:
      HvlpReleaseHypercallPage((__int64)&v22.m256i_i64[1]);
    }
  }
  HvlpReleaseHypercallPage((__int64)&v21.m256i_i64[1]);
  return v19;
}
