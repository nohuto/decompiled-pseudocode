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
  __int64 v14; // r9
  unsigned int v15; // ebx
  _QWORD *v16; // rax
  __int64 v17; // r8
  int v18; // ecx
  int v19; // eax
  unsigned __int16 v20; // ax
  unsigned int v21; // ebx
  __int128 v23; // [rsp+30h] [rbp-D8h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C8h]
  __int128 v25; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A8h]
  _DWORD v27[44]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v28[32]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v29[256]; // [rsp+148h] [rbp+40h] BYREF

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  memset(&v27[2], 0, 0xA0uLL);
  v9 = 0LL;
  v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v23, 1, (__int64)v29, 128LL);
  *(_OWORD *)v10 = 0LL;
  *((_OWORD *)v10 + 1) = 0LL;
  *((_OWORD *)v10 + 2) = 0LL;
  v10[6] = 0LL;
  *(_OWORD *)(v10 + 5) = *a3;
  v27[0] = 1310721;
  memset(&v27[1], 0, 0xA4uLL);
  v11 = *((unsigned __int16 *)a4 + 4);
  v12 = *a4;
  if ( (_WORD)v11 )
    LOWORD(v27[0]) = v11 + 1;
  *(_QWORD *)&v27[2 * v11 + 2] |= v12;
  v13 = HvlpAffinityToHvProcessorSet(v27, v10 + 6, (v23 & 2) != 0 ? 64 : 4032);
  if ( v13 == -1 )
  {
    HvlpReleaseHypercallPage((__int64)&v23);
    v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v23, 1, 0LL, 0LL);
    *(_OWORD *)v10 = 0LL;
    *((_OWORD *)v10 + 1) = 0LL;
    *((_OWORD *)v10 + 2) = 0LL;
    v10[6] = 0LL;
    *(_OWORD *)(v10 + 5) = *a3;
    v13 = HvlpAffinityToHvProcessorSet(v27, v10 + 6, 4032LL);
  }
  *((_DWORD *)v10 + 11) |= 2u;
  v15 = v13 + 64;
  *v10 = -1LL;
  v10[1] = a1;
  *((_OWORD *)v10 + 1) = *a2;
  if ( a5 )
  {
    v16 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v25, 2, (__int64)v28, 16LL);
    v17 = *((_QWORD *)&v26 + 1);
    v18 = 127;
    v9 = v16;
  }
  else
  {
    v17 = 0LL;
    v18 = 126;
  }
  v19 = (v15 << 14) - 802816;
  if ( v15 <= 0x38 )
    v19 = 114688;
  v20 = HvcallInitiateHypercall(v18 | v19 & 0x3FE0000u, *((__int64 *)&v24 + 1), v17, v14);
  if ( v20 )
  {
    v21 = HvlpHvToNtStatus(v20);
  }
  else
  {
    v21 = 0;
    if ( !a5 )
      goto LABEL_16;
    *a5 = *v9;
  }
  if ( a5 )
    HvlpReleaseHypercallPage((__int64)&v25);
LABEL_16:
  HvlpReleaseHypercallPage((__int64)&v23);
  return v21;
}
