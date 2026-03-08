/*
 * XREFs of SmcProcessListRequest @ 0x140840880
 * Callers:
 *     SmQueryStoreInformation @ 0x140840788 (SmQueryStoreInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x14029622C (SmpGetProcessPartition.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessListRequest(unsigned __int64 a1, int a2, _DWORD *a3, char a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r9
  int v11; // r11d
  unsigned int v12; // r8d
  unsigned int v13; // r10d
  _OWORD v15[5]; // [rsp+20h] [rbp-78h] BYREF

  memset(v15, 0, 0x44uLL);
  if ( a2 == 68 )
  {
    if ( a4 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v8 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v8 = a1;
      *(_BYTE *)v8 = *(_BYTE *)v8;
      *(_BYTE *)(v8 + 67) = *(_BYTE *)(v8 + 67);
    }
    v15[0] = *(_OWORD *)a1;
    v15[1] = *(_OWORD *)(a1 + 16);
    v15[2] = *(_OWORD *)(a1 + 32);
    v15[3] = *(_OWORD *)(a1 + 48);
    LODWORD(v15[4]) = *(_DWORD *)(a1 + 64);
    if ( LOBYTE(v15[0]) != 1 || (v15[0] & 0xFF00) != 0 || (v15[0] & 0xFFFF0000) != 0 )
    {
      LODWORD(v9) = -1073741811;
    }
    else
    {
      v10 = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process) + 2128;
      v12 = v9;
      v13 = v9;
      do
      {
        if ( *(_QWORD *)v10 != v9 )
          *((_DWORD *)v15 + ++v12) = v13 | (16 * (*(_DWORD *)(v10 + 24) & 0xFFF));
        ++v13;
        v10 += 32LL;
      }
      while ( v13 < 0x10 );
      LODWORD(v15[0]) ^= v11 & (LODWORD(v15[0]) ^ (v12 << 8));
      *(_OWORD *)a1 = v15[0];
      *(_OWORD *)(a1 + 16) = v15[1];
      *(_OWORD *)(a1 + 32) = v15[2];
      *(_OWORD *)(a1 + 48) = v15[3];
      *(_DWORD *)(a1 + 64) = v15[4];
      *a3 = 68;
    }
  }
  else
  {
    LODWORD(v9) = -1073741306;
  }
  return (unsigned int)v9;
}
