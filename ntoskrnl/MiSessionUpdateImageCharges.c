/*
 * XREFs of MiSessionUpdateImageCharges @ 0x14036C724
 * Callers:
 *     MiDriverLoadSucceeded @ 0x1407F6FFC (MiDriverLoadSucceeded.c)
 * Callees:
 *     MiReturnCommit @ 0x140287340 (MiReturnCommit.c)
 *     MiCountSystemImageCommitment @ 0x1402B0C2C (MiCountSystemImageCommitment.c)
 *     MiSessionLookupImage @ 0x14036C7B8 (MiSessionLookupImage.c)
 */

__int64 __fastcall MiSessionUpdateImageCharges(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // r9
  unsigned __int64 v3; // rbp
  __int64 v4; // rdi
  unsigned __int64 v5; // rbx

  v1 = MiSessionLookupImage(*(_QWORD *)(a1 + 48));
  v3 = MiCountSystemImageCommitment(v2);
  v4 = *(_QWORD *)(v1 + 72) - v3;
  if ( v4 )
  {
    v5 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
    MiReturnCommit(
      *(_QWORD *)(qword_140C67048 + 8LL * *(unsigned __int16 *)(v5 + 366)),
      v4,
      *(unsigned __int16 *)(v5 + 366));
    *(_QWORD *)(v1 + 72) = v3;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 40), -v4);
  }
  return 0LL;
}
