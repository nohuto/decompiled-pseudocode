/*
 * XREFs of MiGetValidAweProtection @ 0x1406484D8
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x1402A36A0 (MiGetWorkingSetInfoList.c)
 *     MiGetPageProtection @ 0x14031C310 (MiGetPageProtection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetValidAweProtection(__int64 a1, __int16 a2)
{
  unsigned int v2; // ecx
  __int64 result; // rax

  if ( (a2 & 1) == 0 )
    return 24LL;
  v2 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
  result = (a2 & 0x800) != 0LL ? 4 : 1;
  if ( v2 >> 3 == 3 && (v2 & 7) != 0 )
    return (unsigned int)result | 0x18;
  if ( v2 >> 3 == 1 )
    return (unsigned int)result | 8;
  return result;
}
