/*
 * XREFs of sub_140770F08 @ 0x140770F08
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x14070546C (WbRemoveWarbirdProcess.c)
 *     WbInPlaceEncryptionUnloadModule @ 0x140770B14 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x140770C2C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140770D60 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     sub_1406AF180 @ 0x1406AF180 (sub_1406AF180.c)
 */

__int64 __fastcall sub_140770F08(__int64 a1, __int64 a2, unsigned int a3, int a4, _QWORD *a5)
{
  int v5; // ebx
  int v6; // r11d
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = 0;
  v6 = a4;
  if ( a4 != -1 )
    goto LABEL_4;
  v5 = sub_1406AF180(a1, a2, a3, a5, &v9);
  if ( v5 >= 0 )
  {
    v6 = v9;
LABEL_4:
    memmove(
      (void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(v6 * *(_DWORD *)a1)),
      (const void *)(*(_QWORD *)(a1 + 16) + (unsigned int)(*(_DWORD *)a1 * (v6 + 1))),
      (unsigned int)(*(_DWORD *)a1 * (*(_DWORD *)(a1 + 4) - v6 - 1)));
    --*(_DWORD *)(a1 + 4);
  }
  return (unsigned int)v5;
}
