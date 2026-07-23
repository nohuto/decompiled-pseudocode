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
  int v13; // eax
  unsigned int v14; // eax
  __int64 v15; // rax
  unsigned __int16 v16; // ax
  unsigned __int16 v17; // bx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int16 v21; // cx
  __int64 v22; // r8
  _OWORD v25[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v26[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  _QWORD v30[22]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v31[112]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v32[288]; // [rsp+1C0h] [rbp+C0h] BYREF

  v29 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  memset(v30, 0, 0xA8uLL);
  if ( a3 )
  {
    LODWORD(v30[0]) = 1310721;
    memset((char *)v30 + 4, 0, 0xA4uLL);
    v7 = *((unsigned __int16 *)a3 + 4);
    v8 = *a3;
    if ( (_WORD)v7 )
      LOWORD(v30[0]) = v7 + 1;
    v30[v7 + 1] |= v8;
  }
  v9 = 0;
  while ( 1 )
  {
    v10 = 0;
    v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v26, 2, (__int64)v31, 56LL);
    v12 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v25, 1, (__int64)v32, 144LL);
    memset(v12, 0, 0x48uLL);
    *(_OWORD *)(v12 + 5) = *a2;
    *(_OWORD *)(v12 + 7) = a2[1];
    if ( a3 )
    {
      v13 = HvlpAffinityToHvProcessorSet(v30, v12 + 8, (v25[0] & 2) != 0 ? 64 : 4016);
      if ( v13 == -1 )
      {
        HvlpReleaseHypercallPage((__int64)v25);
        v12 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v25, 1, 0LL, 0LL);
        memset(v12, 0, 0x48uLL);
        *(_OWORD *)(v12 + 5) = *a2;
        *(_OWORD *)(v12 + 7) = a2[1];
        v13 = HvlpAffinityToHvProcessorSet(v30, v12 + 8, 4016LL);
      }
      *((_DWORD *)v12 + 15) |= 2u;
      v14 = v13 + 80;
      v10 = v14 - 72;
      if ( v14 <= 0x48 )
        v10 = 0;
    }
    else
    {
      *(_OWORD *)(v12 + 7) = 0LL;
    }
    *v12 = -1LL;
    v12[1] = a1;
    v12[2] = 1LL;
    v15 = v12[2];
    if ( v9 )
      v15 = 3LL;
    v12[2] = v15;
    v16 = HvcallInitiateHypercall(((v10 + 7) << 14) & 0x3FE0000 | 0x7C);
    v17 = v16;
    if ( v16 )
    {
      v18 = HvlpHvToNtStatus(v16);
    }
    else
    {
      *a4 = *(_OWORD *)v11;
      v27 = *((_OWORD *)v11 + 1);
      v28 = *((_OWORD *)v11 + 2);
      v18 = 0;
      v29 = v11[6];
    }
    HvlpReleaseHypercallPage((__int64)v25);
    HvlpReleaseHypercallPage((__int64)v26);
    if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory(v17, v19) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v21, v20, v22) < 0 )
      v9 = 1;
  }
  if ( v18 >= 0 )
    HvlpLogIommuEvent(&v27);
  return (unsigned int)v18;
}
