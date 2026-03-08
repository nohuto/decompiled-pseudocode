/*
 * XREFs of MiPerformSafePdeWrite @ 0x1403C0578
 * Callers:
 *     MiWalkPageTables @ 0x140222CF0 (MiWalkPageTables.c)
 *     MiLockLowestValidPageTable @ 0x140225DB0 (MiLockLowestValidPageTable.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403AC164 (MiGetWsAndMakePageTablesNx.c)
 *     MiValidVirtualizationFault @ 0x1404643C2 (MiValidVirtualizationFault.c)
 * Callees:
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

char __fastcall MiPerformSafePdeWrite(__int64 a1, unsigned __int64 a2, signed __int64 a3, char a4)
{
  unsigned __int64 v7; // rcx
  int v8; // r8d
  int v9; // r9d
  int v10; // edi
  signed __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  signed __int64 v14; // rcx
  signed __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rdx
  _BYTE v20[184]; // [rsp+20h] [rbp-D8h] BYREF

  memset(v20, 0, sizeof(v20));
  v7 = (__int64)(a2 << 25) >> 16;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v16 = a3 | 0x20;
    if ( (a4 & 1) == 0 )
      v16 = a3;
    v17 = v16 | 0x8000000000000000uLL;
    if ( (a4 & 2) == 0 )
      v17 = v16;
    v18 = v17 | 4;
    if ( (a4 & 4) == 0 )
      v18 = v17;
    LOBYTE(v15) = MiWriteValidPteNewProtection(a2, v18);
  }
  else
  {
    v8 = a4 & 1;
    v9 = a4 & 2;
    v10 = a4 & 4;
    do
    {
      v11 = a3;
      v12 = a3 | 0x20;
      if ( !v8 )
        v12 = a3;
      v13 = v12 | 0x8000000000000000uLL;
      if ( !v9 )
        v13 = v12;
      v14 = v13 | 4;
      if ( !v10 )
        v14 = v13;
      if ( (MiFlags & 0x2000000) != 0 )
        _mm_lfence();
      v15 = _InterlockedCompareExchange64((volatile signed __int64 *)a2, v14, a3);
      a3 = v15;
    }
    while ( v15 != v11 );
  }
  return v15;
}
