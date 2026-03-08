/*
 * XREFs of HalInitializeDmaTransferContext @ 0x14036D8C0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalInitializeDmaTransferContext(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  memset(a2 + 1, 0, 0x7CuLL);
  a2[9] |= 2u;
  result = 0LL;
  *a2 = 1;
  return result;
}
