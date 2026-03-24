/*
 * XREFs of MiCountSystemPool @ 0x14028BFA0
 * Callers:
 *     MmFreePoolMemory @ 0x14027AEC8 (MmFreePoolMemory.c)
 *     MiCommitPoolMemory @ 0x14028B8AC (MiCommitPoolMemory.c)
 *     MmFreeSecurePoolMemory @ 0x140544E48 (MmFreeSecurePoolMemory.c)
 * Callees:
 *     MiFreeExcessSegments @ 0x1402953D0 (MiFreeExcessSegments.c)
 */

unsigned __int64 __fastcall MiCountSystemPool(int a1, unsigned __int64 a2, int a3)
{
  volatile signed __int64 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx

  switch ( a1 )
  {
    case 5:
      v5 = &qword_140C4C8C8;
      break;
    case 6:
      v5 = &qword_140C4EF28;
      break;
    case 1:
      result = -(__int64)a2;
      v8 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5];
      v9 = a2;
      if ( a3 != 1 )
        v9 = -(__int64)a2;
      v5 = (volatile signed __int64 *)(v8 + 184);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 48), v9);
      break;
    default:
      result = 0LL;
      v5 = (volatile signed __int64 *)&unk_140C4C8D0;
      if ( a1 != 15 )
        v5 = 0LL;
      break;
  }
  if ( a3 == 1 )
  {
    v6 = a2 + _InterlockedExchangeAdd64(v5, a2);
    if ( a1 == 5 )
    {
      result = (MiState[0] - v6) & -(__int64)(v6 < MiState[0]);
      if ( result < 0x300 )
        return MiFreeExcessSegments();
    }
  }
  else
  {
    _InterlockedExchangeAdd64(v5, -(__int64)a2);
  }
  return result;
}
