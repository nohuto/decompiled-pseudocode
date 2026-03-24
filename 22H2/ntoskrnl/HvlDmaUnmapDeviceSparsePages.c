/*
 * XREFs of HvlDmaUnmapDeviceSparsePages @ 0x1404F4A50
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038FC00 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaUnmapDeviceSparsePages(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  bool v4; // zf
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r14
  int v11; // r15d
  int v12; // esi
  _QWORD *v13; // rcx
  unsigned int v14; // r8d
  _QWORD *v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 v19; // bx
  __int64 v20; // rax
  __int64 v21; // [rsp+38h] [rbp-79h]
  __int64 v22; // [rsp+40h] [rbp-71h]
  __int128 v23; // [rsp+48h] [rbp-69h] BYREF
  __int128 v24; // [rsp+58h] [rbp-59h]
  _BYTE v25[112]; // [rsp+68h] [rbp-49h] BYREF

  v4 = *(_BYTE *)(a1 + 4) == 0;
  v23 = 0LL;
  v24 = 0LL;
  if ( !v4 )
    return 3221225659LL;
  v9 = *a3;
  result = 0LL;
  v10 = 0LL;
  if ( *a3 )
  {
    v11 = 0;
    v12 = 200;
    do
    {
      if ( v9 <= 0xB )
      {
        v13 = v25;
        if ( v9 >= 0xB )
          v14 = 11;
        else
          v14 = *(_DWORD *)a3;
        LOBYTE(a4) = 1;
        v12 |= 0x10000u;
      }
      else
      {
        v13 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v23, 1, 0LL, 0LL);
        if ( *a3 >= 0x1FD )
          v14 = 509;
        else
          v14 = *(_DWORD *)a3;
        LOBYTE(a4) = 0;
        v12 &= ~0x10000u;
      }
      LODWORD(v21) = v12;
      v13[1] = 0LL;
      v13[2] = 0LL;
      *v13 = -1LL;
      *((_DWORD *)v13 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v13 + 5) = *(_DWORD *)a1;
      if ( v14 )
      {
        v15 = v13 + 3;
        v16 = a2 + 8 * v10 - 24 - (_QWORD)v13;
        v17 = v14;
        do
        {
          *v15 = *(_QWORD *)((char *)v15 + v16) << 12;
          ++v15;
          --v17;
        }
        while ( v17 );
      }
      v11 ^= ((unsigned __int16)v14 ^ (unsigned __int16)v11) & 0xFFF;
      HIDWORD(v21) = v11;
      if ( (_BYTE)a4 )
      {
        v18 = HvcallFastExtended(v21, (__int64)v25, 8 * v14 + 24, 0LL, 0);
        v19 = v18;
        WORD2(v22) = WORD2(v18);
      }
      else
      {
        v22 = HvcallInitiateHypercall(v12, *((__int64 *)&v24 + 1), 0LL, a4);
        v19 = v22;
        HvlpReleaseHypercallPage((__int64)&v23);
      }
      v20 = WORD2(v22) & 0xFFF;
      v10 += v20;
      *a3 -= v20;
      result = HvlpHvToNtStatus(v19);
    }
    while ( (int)result >= 0 && v9 );
  }
  *a3 = v10;
  return result;
}
