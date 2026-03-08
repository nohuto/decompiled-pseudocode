/*
 * XREFs of KiAbTryIncrementIoWaiterCounts @ 0x140282B80
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 */

__int64 __fastcall KiAbTryIncrementIoWaiterCounts(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 v3; // dl
  _BYTE *v4; // r11
  unsigned int v6; // r10d
  unsigned __int8 *v7; // r9

  if ( !a1[17] )
    return 0LL;
  v3 = a1[19];
  v4 = a1 + 19;
  if ( (v3 & 6) == 6 )
    return 0LL;
  v6 = 0;
  v7 = &a1[-96 * a1[16]];
  if ( (v3 & 2) == 0 && ((int)PsGetIoPriorityThread(v7 - 1696) >= 2 || *((_DWORD *)v7 - 64) != v6) )
  {
    ++*(_BYTE *)(a2 + 92);
    *v4 |= 2u;
    if ( *(_BYTE *)(a2 + 92) == 1 )
      v6 = 1;
  }
  if ( (*v4 & 4) == 0 && (!*((_DWORD *)v7 - 62) || *((_DWORD *)v7 - 63)) )
  {
    *(_DWORD *)(a2 + 92) ^= ((unsigned __int16)*(_DWORD *)(a2 + 92) ^ (unsigned __int16)(*(_DWORD *)(a2 + 92) + 256)) & 0x7F00;
    *v4 |= 4u;
    if ( (*(_DWORD *)(a2 + 92) & 0x7F00) == 0x100 )
      v6 |= 2u;
  }
  return v6;
}
