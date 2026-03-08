/*
 * XREFs of KiPerformHeteroSoftParkElection @ 0x14057BD18
 * Callers:
 *     KiPerformSoftParkElectionRound @ 0x14040B194 (KiPerformSoftParkElectionRound.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiBuildShareCountsForSmtSiblings @ 0x14057B89C (KiBuildShareCountsForSmtSiblings.c)
 *     KiTallyHeteroSoftParkElectionVotes @ 0x14057C0D8 (KiTallyHeteroSoftParkElectionVotes.c)
 */

__int64 __fastcall KiPerformHeteroSoftParkElection(__int64 a1, int a2, __int64 a3, int a4, unsigned __int64 a5)
{
  int v7; // edi
  __int64 v9; // rcx
  unsigned int v10; // edx
  _QWORD *v11; // r8
  char v12; // r9
  unsigned __int64 v13; // r11
  unsigned __int64 *v14; // r9
  __int64 v15; // rax
  char v16; // r10
  __int64 v18; // [rsp+40h] [rbp-278h] BYREF
  _BYTE v19[512]; // [rsp+50h] [rbp-268h] BYREF
  __int64 v20[8]; // [rsp+250h] [rbp-68h] BYREF

  v18 = 0LL;
  v7 = a1;
  KiBuildShareCountsForSmtSiblings(*(unsigned __int16 *)(a1 + 136), a5, v20);
  while ( 1 )
  {
    KiTallyHeteroSoftParkElectionVotes(v7, a2, a3, a4, (__int64)v20, v19, (__int64)&v18);
    v9 = 0LL;
    if ( !v18 )
      break;
    v10 = 0;
    v11 = v19;
    v12 = 0;
    do
    {
      if ( _bittest64(&a3, v10) && *v11 == v18 )
        v9 |= 1LL << v12;
      ++v10;
      ++v12;
      ++v11;
    }
    while ( v10 < 0x40 );
    if ( v9 )
      break;
    v13 = -1LL;
    v14 = (unsigned __int64 *)v19;
    v15 = 0LL;
    v16 = 0;
    do
    {
      if ( ((1LL << v9) & a3) != 0 )
      {
        if ( v13 <= *v14 )
        {
          if ( v13 == *v14 )
            v15 |= 1LL << v16;
        }
        else
        {
          v13 = *v14;
          v15 = 1LL << v9;
        }
      }
      LODWORD(v9) = v9 + 1;
      ++v16;
      ++v14;
    }
    while ( (unsigned int)v9 < 0x40 );
    if ( v15 == a3 )
      return a3;
    a3 &= ~v15;
  }
  return v9;
}
