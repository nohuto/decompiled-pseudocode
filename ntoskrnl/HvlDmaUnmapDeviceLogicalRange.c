/*
 * XREFs of HvlDmaUnmapDeviceLogicalRange @ 0x1405415B0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaUnmapDeviceLogicalRange(int *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v6; // r8
  int v7; // edx
  unsigned __int64 v8; // rsi
  unsigned int v9; // edi
  int v10; // r14d
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+30h] [rbp-58h]
  _QWORD v14[2]; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+50h] [rbp-38h]
  int v16; // [rsp+54h] [rbp-34h]
  __int64 v17; // [rsp+58h] [rbp-30h]

  if ( *((_BYTE *)a1 + 4) )
    return 3221225659LL;
  v14[0] = -1LL;
  v6 = *a3;
  v7 = 0;
  v15 = 0;
  v14[1] = 0LL;
  v8 = 0LL;
  LODWORD(v13) = 65716;
  v9 = 4095;
  v16 = *a1;
  if ( v6 )
  {
    v10 = 0;
    do
    {
      v17 = a2;
      if ( v9 > v6 )
        v9 = *(_DWORD *)a3;
      v10 ^= (v9 ^ v10) & 0xFFF;
      HIDWORD(v13) = v10;
      v11 = HvcallFastExtended(v13, (__int64)v14, 0x20u, 0LL, 0);
      v12 = HIDWORD(v11) & 0xFFF;
      v8 += v12;
      a2 += (unsigned __int16)(WORD2(v11) & 0xFFF) << 12;
      *a3 -= v12;
      v7 = HvlpHvToNtStatus(v11);
    }
    while ( v7 >= 0 && v6 );
  }
  *a3 = v8;
  return (unsigned int)v7;
}
