/*
 * XREFs of HvlDmaUnmapDeviceSparsePages @ 0x1405416E0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x1403C81E0 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 *     HvlpAcquireHypercallPage @ 0x14053E3C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x14053F010 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlDmaUnmapDeviceSparsePages(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  bool v3; // zf
  __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  int v10; // r14d
  int v11; // esi
  PHYSICAL_ADDRESS *v12; // rcx
  unsigned int v13; // r8d
  char v14; // r9
  PHYSICAL_ADDRESS *v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int16 v19; // bx
  __int64 v20; // rax
  __int64 v21; // [rsp+30h] [rbp-D8h]
  __int64 v22; // [rsp+38h] [rbp-D0h]
  _OWORD v23[2]; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v24[112]; // [rsp+60h] [rbp-A8h] BYREF

  v3 = *(_BYTE *)(a1 + 4) == 0;
  memset(v23, 0, sizeof(v23));
  if ( !v3 )
    return 3221225659LL;
  v8 = *a3;
  result = 0LL;
  v9 = 0LL;
  if ( *a3 )
  {
    v10 = 0;
    v11 = 200;
    do
    {
      if ( v8 <= 0xB )
      {
        v12 = (PHYSICAL_ADDRESS *)v24;
        if ( v8 >= 0xB )
          v13 = 11;
        else
          v13 = *(_DWORD *)a3;
        v14 = 1;
        v11 |= 0x10000u;
      }
      else
      {
        v12 = HvlpAcquireHypercallPage((__int64)v23, 1, 0LL, 0LL);
        if ( *a3 >= 0x1FD )
          v13 = 509;
        else
          v13 = *(_DWORD *)a3;
        v14 = 0;
        v11 &= ~0x10000u;
      }
      v12[1].QuadPart = 0LL;
      v12[2].QuadPart = 0LL;
      v12->QuadPart = -1LL;
      v12[2].LowPart &= 0xFFFFFFF0;
      LODWORD(v21) = v11;
      v12[2].HighPart = *(_DWORD *)a1;
      if ( v13 )
      {
        v15 = v12 + 3;
        v16 = a2 + 8 * v9 - 24 - (_QWORD)v12;
        v17 = v13;
        do
        {
          v15->QuadPart = *(LONGLONG *)((char *)&v15->QuadPart + v16) << 12;
          ++v15;
          --v17;
        }
        while ( v17 );
      }
      v10 ^= ((unsigned __int16)v13 ^ (unsigned __int16)v10) & 0xFFF;
      HIDWORD(v21) = v10;
      if ( v14 )
      {
        v18 = HvcallFastExtended(v21, (__int64)v24, 8 * v13 + 24, 0LL, 0);
        v19 = v18;
        WORD2(v22) = WORD2(v18);
      }
      else
      {
        v22 = HvcallInitiateHypercall(v11);
        v19 = v22;
        HvlpReleaseHypercallPage((__int64)v23);
      }
      v20 = WORD2(v22) & 0xFFF;
      v9 += v20;
      *a3 -= v20;
      result = HvlpHvToNtStatus(v19);
    }
    while ( (int)result >= 0 && v8 );
  }
  *a3 = v9;
  return result;
}
