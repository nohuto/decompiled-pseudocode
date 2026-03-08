/*
 * XREFs of HvlDeletePrQueue @ 0x140540880
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x1403C6CA0 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x140456F16 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDeletePrQueue(int a1)
{
  unsigned __int16 v1; // ax
  __int64 v3; // [rsp+30h] [rbp-18h] BYREF
  int v4; // [rsp+38h] [rbp-10h]
  int v5; // [rsp+3Ch] [rbp-Ch]

  v5 = 0;
  v3 = -1LL;
  v4 = a1;
  v1 = HvcallFastExtended(65704LL, (__int64)&v3, 0x10u, 0LL, 0);
  return HvlpHvToNtStatus(v1);
}
