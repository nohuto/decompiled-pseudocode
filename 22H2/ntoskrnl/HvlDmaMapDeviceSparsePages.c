/*
 * XREFs of HvlDmaMapDeviceSparsePages @ 0x1404F4710
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038FC00 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F1CE8 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404FA958 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaMapDeviceSparsePages(__int64 a1, int a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v5; // r10
  unsigned __int64 v9; // rax
  unsigned int v10; // ecx
  unsigned __int64 v11; // r14
  int v12; // r15d
  int v13; // esi
  _QWORD *v14; // rcx
  unsigned int v15; // r8d
  char v16; // r9
  int v17; // eax
  __int64 *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // r10
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int16 v24; // bx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // [rsp+38h] [rbp-89h]
  __int64 v31; // [rsp+40h] [rbp-81h]
  _OWORD v33[2]; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v34[112]; // [rsp+78h] [rbp-49h] BYREF

  v5 = a3;
  memset(v33, 0, sizeof(v33));
  if ( *(_BYTE *)(a1 + 4) )
    return 3221225659LL;
  v9 = *a4;
  v10 = 0;
  v11 = 0LL;
  if ( *a4 )
  {
    v12 = 0;
    v13 = 199;
    do
    {
      if ( v9 <= 5 )
      {
        v14 = v34;
        if ( v9 >= 5 )
          v15 = 5;
        else
          v15 = *(_DWORD *)a4;
        v16 = 1;
        v13 |= 0x10000u;
      }
      else
      {
        v14 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v33, 1, 0LL, 0LL);
        if ( *a4 >= 0xFE )
          v15 = 254;
        else
          v15 = *(_DWORD *)a4;
        v5 = a3;
        v16 = 0;
        v13 &= ~0x10000u;
      }
      LODWORD(v30) = v13;
      v14[1] = 0LL;
      v14[2] = 0LL;
      v14[3] = 0LL;
      *v14 = -1LL;
      *((_DWORD *)v14 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v14 + 5) = *(_DWORD *)a1;
      v17 = 1024;
      if ( a2 )
        v17 = a2;
      *((_BYTE *)v14 + 24) = 0;
      *((_DWORD *)v14 + 7) = v17;
      if ( v15 )
      {
        v18 = (__int64 *)(v5 + 8 * v11);
        v19 = v14 + 5;
        v20 = v15;
        do
        {
          *(v19 - 1) = *v18 << 12;
          v21 = *v18++;
          *v19 = v21;
          v19 += 2;
          --v20;
        }
        while ( v20 );
      }
      v12 ^= ((unsigned __int16)v15 ^ (unsigned __int16)v12) & 0xFFF;
      HIDWORD(v30) = v12;
      if ( v16 )
      {
        v22 = HvcallFastExtended(v30, (__int64)v34, 16 * (v15 + 2), 0, 0);
        v24 = v22;
        WORD2(v31) = WORD2(v22);
      }
      else
      {
        v31 = HvcallInitiateHypercall(v13);
        v24 = v31;
        HvlpReleaseHypercallPage((__int64)v33);
      }
      v25 = WORD2(v31) & 0xFFF;
      *a4 -= v25;
      v11 += v25;
      if ( (unsigned __int8)HvlpHvStatusIsInsufficientMemory(v24, v23) )
        v29 = HvlpHandleInsufficientMemory(v27, v26, v28);
      else
        v29 = HvlpHvToNtStatus(v27);
      v10 = v29;
      if ( v29 < 0 )
        break;
      v9 = *a4;
      v5 = a3;
    }
    while ( *a4 );
  }
  *a4 = v11;
  return v10;
}
