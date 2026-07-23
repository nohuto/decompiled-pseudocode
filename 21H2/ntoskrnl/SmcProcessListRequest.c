/*
 * XREFs of SmcProcessListRequest @ 0x1407C85E8
 * Callers:
 *     SmQueryStoreInformation @ 0x140621A68 (SmQueryStoreInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmcProcessListRequest(__int64 a1, unsigned __int64 a2, int a3, _DWORD *a4, char a5)
{
  unsigned int v9; // edx
  __int64 v10; // rcx
  unsigned int v11; // r8d
  unsigned int i; // r9d
  _OWORD v14[5]; // [rsp+20h] [rbp-78h] BYREF

  memset(v14, 0, 0x44uLL);
  if ( a3 == 68 )
  {
    v9 = 0;
    if ( a5 )
    {
      if ( (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = a2;
      if ( a2 >= 0x7FFFFFFF0000LL )
        v10 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v10 = *(_BYTE *)v10;
      *(_BYTE *)(v10 + 67) = *(_BYTE *)(v10 + 67);
    }
    v14[0] = *(_OWORD *)a2;
    v14[1] = *(_OWORD *)(a2 + 16);
    v14[2] = *(_OWORD *)(a2 + 32);
    v14[3] = *(_OWORD *)(a2 + 48);
    LODWORD(v14[4]) = *(_DWORD *)(a2 + 64);
    if ( LOBYTE(v14[0]) != 1 || (v14[0] & 0xFF00) != 0 || (v14[0] & 0xFFFF0000) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      v11 = 0;
      for ( i = 0; i < 0x10; ++i )
      {
        if ( *(_QWORD *)a1 )
          *((_DWORD *)v14 + ++v11) = i | (16 * (*(_DWORD *)(a1 + 24) & 0xFFF));
        a1 += 32LL;
      }
      LODWORD(v14[0]) ^= (LODWORD(v14[0]) ^ (v11 << 8)) & 0xFF00;
      *(_OWORD *)a2 = v14[0];
      *(_OWORD *)(a2 + 16) = v14[1];
      *(_OWORD *)(a2 + 32) = v14[2];
      *(_OWORD *)(a2 + 48) = v14[3];
      *(_DWORD *)(a2 + 64) = v14[4];
      *a4 = 68;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v9;
}
