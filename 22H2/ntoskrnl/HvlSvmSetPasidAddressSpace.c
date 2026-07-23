/*
 * XREFs of HvlSvmSetPasidAddressSpace @ 0x1404F6F40
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038FC00 (HvcallFastExtended.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F1CE8 (HvlpHandleInsufficientMemory.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404FA958 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404FA974 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlSvmSetPasidAddressSpace(int a1, int a2, __int64 a3)
{
  __int64 v3; // rdx
  __int16 v4; // cx
  __int64 v5; // r8
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+38h] [rbp-10h]

  v7[1] = a1;
  v7[0] = a2;
  v8 = a3;
  while ( 1 )
  {
    v3 = HvcallFastExtended(65695LL, (__int64)v7, 0x10u, 0, 0);
    if ( (HvlpFlags & 2) == 0 || !(unsigned __int8)HvlpHvStatusIsInsufficientMemory((unsigned __int16)v3, v3) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v4, v3, v5) < 0 )
      return 3221225626LL;
  }
  return HvlpHvToNtStatus((unsigned __int16)v3);
}
