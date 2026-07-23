/*
 * XREFs of sub_140605F04 @ 0x140605F04
 * Callers:
 *     WbInPlaceEncryptionUnloadModule @ 0x140605B70 (WbInPlaceEncryptionUnloadModule.c)
 *     WbHeapExecutionUnloadModule @ 0x140605C84 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140605D88 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 *     WbRemoveWarbirdProcess @ 0x14067BEB0 (WbRemoveWarbirdProcess.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     sub_140643B78 @ 0x140643B78 (sub_140643B78.c)
 */

__int64 __fastcall sub_140605F04(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // ebx
  int v6; // r11d
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = a4;
  v5 = 0;
  v6 = a4;
  if ( a4 != -1 )
    goto LABEL_4;
  v5 = sub_140643B78(a1, a2, a3, a5, (__int64)&v9);
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
