/*
 * XREFs of HvlRetargetDeviceInterrupt @ 0x1404F5F80
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404FA7B0 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlRetargetDeviceInterrupt(__int64 a1, _OWORD *a2, _OWORD *a3, __int64 *a4, _OWORD *a5)
{
  _OWORD *v9; // r14
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // ebx
  _QWORD *v15; // rax
  int v16; // ecx
  int v17; // eax
  unsigned __int16 v18; // ax
  unsigned int v19; // ebx
  _BYTE v21[40]; // [rsp+28h] [rbp-E0h] BYREF
  PHYSICAL_ADDRESS v22[5]; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD v23[44]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v24[32]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v25[256]; // [rsp+148h] [rbp+40h] BYREF

  memset(&v21[8], 0, 32);
  memset(v22, 0, 32);
  memset(&v23[2], 0, 0xA0uLL);
  v9 = 0LL;
  v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v21[8], 1, (__int64)v25, 128LL);
  *(_OWORD *)v10 = 0LL;
  *((_OWORD *)v10 + 1) = 0LL;
  *((_OWORD *)v10 + 2) = 0LL;
  v10[6] = 0LL;
  *(_OWORD *)(v10 + 5) = *a3;
  v23[0] = 1310721;
  memset(&v23[1], 0, 0xA4uLL);
  v11 = *((unsigned __int16 *)a4 + 4);
  v12 = *a4;
  if ( (_WORD)v11 )
    LOWORD(v23[0]) = v11 + 1;
  *(_QWORD *)&v23[2 * v11 + 2] |= v12;
  v13 = HvlpAffinityToHvProcessorSet(v23, v10 + 6, (v21[8] & 2) != 0 ? 64 : 4032);
  if ( v13 == -1 )
  {
    HvlpReleaseHypercallPage((__int64)&v21[8]);
    v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v21[8], 1, 0LL, 0LL);
    *(_OWORD *)v10 = 0LL;
    *((_OWORD *)v10 + 1) = 0LL;
    *((_OWORD *)v10 + 2) = 0LL;
    v10[6] = 0LL;
    *(_OWORD *)(v10 + 5) = *a3;
    v13 = HvlpAffinityToHvProcessorSet(v23, v10 + 6, 4032LL);
  }
  *((_DWORD *)v10 + 11) |= 2u;
  v14 = v13 + 64;
  *v10 = -1LL;
  v10[1] = a1;
  *((_OWORD *)v10 + 1) = *a2;
  if ( a5 )
  {
    v15 = HvlpAcquireHypercallPage(v22, 2, (__int64)v24, 16LL);
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
  }
  else
  {
    v19 = 0;
    if ( !a5 )
      goto LABEL_16;
    *a5 = *v9;
  }
  if ( a5 )
    HvlpReleaseHypercallPage((__int64)v22);
LABEL_16:
  HvlpReleaseHypercallPage((__int64)&v21[8]);
  return v19;
}
