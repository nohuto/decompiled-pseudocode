/*
 * XREFs of MiCreatePteWsle @ 0x140B5CA80
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteWsle @ 0x140228948 (MiWriteWsle.c)
 */

__int64 __fastcall MiCreatePteWsle(__int64 a1, _BYTE *a2, int a3)
{
  if ( a3 < 1 && (*a2 & 1) != 0 )
    MiWriteWsle(a1, (__int64)((_QWORD)a2 << 25) >> 16);
  return 0LL;
}
