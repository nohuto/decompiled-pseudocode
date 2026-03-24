/*
 * XREFs of MiPageAttributeBatchChangeNeeded @ 0x140355540
 * Callers:
 *     MiConvertContiguousPages @ 0x140355124 (MiConvertContiguousPages.c)
 *     MiInitializeMdlOneNodeBatchPages @ 0x140355284 (MiInitializeMdlOneNodeBatchPages.c)
 *     MiSwitchToTransition @ 0x140539E54 (MiSwitchToTransition.c)
 * Callees:
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiPageAttributeBatchChangeNeeded(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v4; // eax
  char v6; // r8
  unsigned int v7; // eax
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( v4 == (_DWORD)a2 )
    return 0LL;
  if ( v4 != 1 )
  {
    if ( v4 == 3
      || (v6 = *(_BYTE *)(a1 + 31) & 0xF, _InterlockedOr(v8, 0), v7 = ((_BYTE)KiTbFlushTimeStamp - v6) & 0xF, v7 > 2)
      || (v6 & 1) == 0 && v7 >= 2 )
    {
      MiChangePageAttribute(a1, a2, 4LL, a4);
      return 0LL;
    }
  }
  return 1LL;
}
