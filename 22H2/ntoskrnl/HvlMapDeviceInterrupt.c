/*
 * XREFs of HvlMapDeviceInterrupt @ 0x1404F5670
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F1CE8 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpLogIommuEvent @ 0x1404F9A30 (HvlpLogIommuEvent.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1404FA7B0 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404FA958 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapDeviceInterrupt(__int64 a1, _OWORD *a2, __int64 *a3, _OWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rdx
  char v9; // r15
  unsigned int v10; // edi
  _QWORD *v11; // rsi
  _QWORD *v12; // rbx
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int16 v19; // ax
  unsigned __int16 v20; // bx
  int v21; // edi
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int16 v24; // cx
  __int64 v25; // r8
  __int128 v28; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v29; // [rsp+40h] [rbp-C0h]
  __int128 v30; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v31; // [rsp+60h] [rbp-A0h]
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  _QWORD v35[22]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v36[112]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v37[288]; // [rsp+1C0h] [rbp+C0h] BYREF

  v34 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  memset(v35, 0, 0xA8uLL);
  if ( a3 )
  {
    LODWORD(v35[0]) = 1310721;
    memset((char *)v35 + 4, 0, 0xA4uLL);
    v7 = *((unsigned __int16 *)a3 + 4);
    v8 = *a3;
    if ( (_WORD)v7 )
      LOWORD(v35[0]) = v7 + 1;
    v35[v7 + 1] |= v8;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = 0;
    v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v30, 2, (__int64)v36, 56LL);
    v12 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v28, 1, (__int64)v37, 144LL);
    memset(v12, 0, 0x48uLL);
    *(_OWORD *)(v12 + 5) = *a2;
    *(_OWORD *)(v12 + 7) = a2[1];
    if ( a3 )
    {
      v14 = HvlpAffinityToHvProcessorSet(v35, v12 + 8, (v28 & 2) != 0 ? 64 : 4016);
      if ( v14 == -1 )
      {
        HvlpReleaseHypercallPage((__int64)&v28);
        v12 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v28, 1, 0LL, 0LL);
        memset(v12, 0, 0x48uLL);
        *(_OWORD *)(v12 + 5) = *a2;
        *(_OWORD *)(v12 + 7) = a2[1];
        v14 = HvlpAffinityToHvProcessorSet(v35, v12 + 8, 4016LL);
      }
      *((_DWORD *)v12 + 15) |= 2u;
      v15 = v14 + 80;
      v10 = v15 - 72;
      if ( v15 <= 0x48 )
        v10 = 0;
    }
    else
    {
      *(_OWORD *)(v12 + 7) = 0LL;
    }
    *v12 = -1LL;
    v16 = *((_QWORD *)&v31 + 1);
    v17 = *((_QWORD *)&v29 + 1);
    v12[1] = a1;
    v12[2] = 1LL;
    v18 = v12[2];
    if ( v9 )
      v18 = 3LL;
    v12[2] = v18;
    v19 = HvcallInitiateHypercall(((v10 + 7) << 14) & 0x3FE0000 | 0x7C, v17, v16, v13);
    v20 = v19;
    if ( v19 )
    {
      v21 = HvlpHvToNtStatus(v19);
    }
    else
    {
      *a4 = *(_OWORD *)v11;
      v32 = *((_OWORD *)v11 + 1);
      v33 = *((_OWORD *)v11 + 2);
      v21 = 0;
      v34 = v11[6];
    }
    HvlpReleaseHypercallPage((__int64)&v28);
    HvlpReleaseHypercallPage((__int64)&v30);
    if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory(v20, v22) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v24, v23, v25) < 0 )
      v9 = 1;
  }
  if ( v21 >= 0 )
    HvlpLogIommuEvent(&v32);
  return (unsigned int)v21;
}
