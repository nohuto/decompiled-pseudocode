/*
 * XREFs of HvlSvmClearPrqStalled @ 0x1404F67E0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038FC00 (HvcallFastExtended.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmClearPrqStalled(int a1)
{
  __int64 v1; // rax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  v3[1] = 0;
  v3[0] = a1;
  v1 = HvcallFastExtended(65705LL, (__int64)v3, 8u, 0, 0);
  return HvlpHvToNtStatus(v1);
}
