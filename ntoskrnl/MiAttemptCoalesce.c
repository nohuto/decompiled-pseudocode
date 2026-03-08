/*
 * XREFs of MiAttemptCoalesce @ 0x14027E1A0
 * Callers:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiAdjustPteBins @ 0x140299A90 (MiAdjustPteBins.c)
 * Callees:
 *     MiReturnSystemPtes @ 0x1402EB3FC (MiReturnSystemPtes.c)
 *     RtlInterlockedSetClearRunEx @ 0x1403293B0 (RtlInterlockedSetClearRunEx.c)
 */

char __fastcall MiAttemptCoalesce(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 *v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rdx
  bool i; // zf
  bool v15; // zf

  v4 = 0LL;
  v5 = (-(__int64)((*(_DWORD *)(a1 + 24) & 1) != 0) & 0xFFFFFFFFFFFFFE20uLL) + 512;
  LOBYTE(v6) = ((*(_DWORD *)(a1 + 24) & 1) != 0 ? 0x20 : 0) + a2;
  v7 = a2 & ~((-(__int64)((*(_DWORD *)(a1 + 24) & 1) != 0) & 0xFFFFFFFFFFFFFE20uLL) + 511);
  v8 = (~((-(__int64)((*(_DWORD *)(a1 + 24) & 1) != 0) & 0xFFFFFFFFFFFFFE20uLL) + 511) & (v5 + a2 + a3 - 1)) - v7;
  if ( v8 )
  {
    do
    {
      v6 = *(_QWORD *)a1;
      v9 = v7 + v4;
      if ( v7 + v4 < *(_QWORD *)a1 )
      {
        v6 -= v9;
        if ( v6 >= v5 )
        {
          v10 = *(_QWORD *)(a1 + 8);
          v11 = (__int64 *)(v10 + 8 * (v9 >> 6));
          v12 = *v11;
          v13 = (__int64 *)(v10 + 8 * ((v9 + v5 - 1) >> 6));
          if ( v11 == v13 )
          {
            v15 = (v12 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v5) << v9)) == 0;
LABEL_10:
            LOBYTE(v6) = v15;
            if ( v15 )
            {
              LODWORD(v6) = RtlInterlockedSetClearRunEx(a1, v7 + v4, v5);
              if ( (_DWORD)v6 )
                LOBYTE(v6) = MiReturnSystemPtes(a1, 0, (int)v7 + (int)v4, v5, 1);
            }
          }
          else
          {
            v6 = -1LL << v9;
            for ( i = (v12 & (-1LL << v9)) == 0; i; i = *v11 == 0 )
            {
              if ( ++v11 == v13 )
              {
                v15 = ((0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v5 - 1)) & *v11) == 0;
                goto LABEL_10;
              }
            }
          }
        }
      }
      v4 += v5;
    }
    while ( v4 < v8 );
  }
  return v6;
}
