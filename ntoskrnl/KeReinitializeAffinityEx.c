/*
 * XREFs of KeReinitializeAffinityEx @ 0x140237C70
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall KeReinitializeAffinityEx(unsigned __int16 *a1)
{
  __int64 result; // rax

  memset(a1 + 4, 0, 8LL * *a1);
  result = 1LL;
  *a1 = 1;
  return result;
}
