/*
 * XREFs of MiInitializeCommitment @ 0x140392394
 * Callers:
 *     MiInitializePartition @ 0x140837D40 (MiInitializePartition.c)
 *     MiInitNucleus @ 0x140B36878 (MiInitNucleus.c)
 * Callees:
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiIncreaseCommitLimits @ 0x140392864 (MiIncreaseCommitLimits.c)
 */

__int64 __fastcall MiInitializeCommitment(unsigned __int64 a1)
{
  char v2; // al
  __int64 v3; // rdi
  unsigned __int16 *v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rdx

  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
    *(_QWORD *)(a1 + 16432) = (-(__int64)(*(_QWORD *)(a1 + 17040) < 0x4000uLL) & 0xFFFFFFFFFFFFFC00uLL) + 1280;
  else
    *(_QWORD *)(a1 + 16432) = 0LL;
  *(_QWORD *)(a1 + 16424) = 0LL;
  v2 = *(_BYTE *)(a1 + 559);
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 512) = 1LL;
  *(_BYTE *)(a1 + 559) = v2 & 0xF9 | 4;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 504) = a1;
  *(_DWORD *)(a1 + 552) = 0;
  *(_BYTE *)(a1 + 556) = -1;
  *(_QWORD *)(a1 + 544) = a1 + 536;
  *(_QWORD *)(a1 + 536) = a1 + 536;
  *(_WORD *)(a1 + 528) = 0;
  *(_BYTE *)(a1 + 530) = 6;
  *(_DWORD *)(a1 + 532) = 0;
  v3 = *(_QWORD *)(a1 + 17216);
  if ( dword_140C6577C )
  {
    v4 = *(unsigned __int16 **)(a1 + 6816);
    v5 = (unsigned int)dword_140C6577C;
    v6 = *(_QWORD *)(a1 + 6808) - (_QWORD)v4;
    do
    {
      v3 += *(unsigned __int16 *)((char *)v4 + v6) + (unsigned __int64)*v4;
      v4 += 8;
      --v5;
    }
    while ( v5 );
  }
  v7 = *(_QWORD *)(a1 + 17040);
  *(_QWORD *)(a1 + 17280) = v3;
  result = MiIncreaseCommitLimits(a1, v7, v7, 0, 0LL);
  v9 = *(_QWORD *)(a1 + 17040);
  if ( v9 != v3 )
    result = MiChargeCommit(a1, v9 - v3, 2uLL);
  if ( (_UNKNOWN *)a1 == &MiSystemPartition )
  {
    qword_140C69628 = *(_QWORD *)(a1 + 17576);
    qword_140C69628 -= qword_140C69630;
    result = qword_140C69658;
    qword_140C69628 -= qword_140C69658;
  }
  return result;
}
