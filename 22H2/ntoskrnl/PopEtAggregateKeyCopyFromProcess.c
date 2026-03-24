/*
 * XREFs of PopEtAggregateKeyCopyFromProcess @ 0x14067D728
 * Callers:
 *     PopEtProcessSnapshotCreate @ 0x14067D47C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     PsGetProcessId @ 0x1403446B0 (PsGetProcessId.c)
 *     PopEtAggregateKeyCopy @ 0x14067D7D4 (PopEtAggregateKeyCopy.c)
 */

__int64 __fastcall PopEtAggregateKeyCopyFromProcess(__int64 a1, struct _KPROCESS *a2, __int64 a3)
{
  unsigned __int64 v3; // r9
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+38h] [rbp-10h]

  v3 = a2[2].Affinity.Bitmap[4];
  v8 = 0LL;
  v9 = 0LL;
  v7[0] = *(_QWORD *)(v3 + 448);
  v7[1] = *(_QWORD *)(v3 + 456);
  if ( (*(_DWORD *)(a3 + 8) & 1) != 0 )
  {
    LODWORD(v9) = (unsigned int)PsGetProcessId(a2);
    v8 = a2[2].Affinity.Bitmap[6];
  }
  return PopEtAggregateKeyCopy(a1, v7);
}
