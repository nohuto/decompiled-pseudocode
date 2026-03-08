/*
 * XREFs of KiComputeNewPriority @ 0x140369CB0
 * Callers:
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KeSetBasePriorityThread @ 0x140369500 (KeSetBasePriorityThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeNewPriority(__int64 a1, char a2, char a3)
{
  __int64 result; // rax
  unsigned __int8 v6; // dl
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned __int8 v9; // bl
  char v10; // r9
  char v11; // cl
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // r8

  result = *(unsigned __int8 *)(a1 + 195);
  if ( (char)result < 16 )
  {
    if ( (KiVelocityFlags & 0x8000) != 0
      && *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL) == 2
      && (v9 = *(_BYTE *)(a1 + 564), v10 = v9 & 0xF, (v9 & 0xF) != 0 && (*(_BYTE *)(a1 + 120) & 8) == 0) )
    {
      v11 = result - (v9 >> 4) - a2;
      v12 = *(_BYTE *)(a1 + 563) + v10;
      if ( v11 >= (char)v12 )
        v12 = v11;
      result = v12;
      if ( a3 )
        *(_BYTE *)(a1 + 564) = v10;
    }
    else
    {
      v6 = *(_BYTE *)(a1 + 564);
      v7 = (unsigned __int8)(result - (v6 >> 4) - (v6 & 0xF) - a2);
      result = *(unsigned __int8 *)(a1 + 563);
      if ( (char)v7 >= (char)result )
        result = v7;
      if ( a3 && v6 )
      {
        if ( (v6 & 0xF) != 0 )
          *(_DWORD *)(a1 + 872) = MEMORY[0xFFFFF78000000320];
        *(_BYTE *)(a1 + 564) = 0;
        result = (unsigned __int8)result;
      }
    }
  }
  v8 = *(_DWORD *)(a1 + 856);
  if ( v8 )
  {
    _BitScanReverse(&v8, v8);
    v13 = result;
    if ( (char)result < (char)v8 )
      return (unsigned __int8)v8;
    return v13;
  }
  return result;
}
