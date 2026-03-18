/*
 * XREFs of RtlpHpFreeHeap @ 0x140364128
 * Callers:
 *     ExpResizeBigPageTable @ 0x1402129C0 (ExpResizeBigPageTable.c)
 *     ExAllocateContiguousHeapPool @ 0x140214694 (ExAllocateContiguousHeapPool.c)
 *     ExPoolCleanupExpansionTable @ 0x140216A4C (ExPoolCleanupExpansionTable.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     ExpHpCompactionRoutine @ 0x140363EF0 (ExpHpCompactionRoutine.c)
 *     RtlpHpMetadataFree @ 0x140370C00 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeap @ 0x1403713DC (RtlpHpAllocateHeap.c)
 *     ExGetBigPoolInfo @ 0x14063A8C0 (ExGetBigPoolInfo.c)
 *     ExpFreeHeapSpecialPool @ 0x1406423A4 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14022FB20 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpEnvGetHeapManager @ 0x140362B58 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegFree @ 0x140364794 (RtlpHpSegFree.c)
 *     RtlpHpLargeFree @ 0x140370928 (RtlpHpLargeFree.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     RtlpLogHeapFailure @ 0x1405F1BBC (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x1405F2F0C (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x1405F3028 (RtlpHpSizeHeap.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int128 *a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  int v7; // ecx
  int v9; // eax
  _QWORD *HeapManager; // rax
  __int64 v11; // rax
  char v13; // al
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  v5 = *((_DWORD *)a1 + 5) & 0x11000001 | a3;
  v7 = *((_DWORD *)a1 + 55);
  if ( v7 && v7 == KeGetCurrentThread()[1].CurrentRunTime )
    v5 |= 1u;
  if ( (v5 & 0x1000000) != 0
    || !*((_DWORD *)a1 + 6)
    || (a4 = RtlpHpExtrasGet(a1, a2, v5, 0LL), (unsigned __int64)(a4 - 1) > 0xFFFFFFFFFFFFFFFDuLL)
    || (v13 = *(_BYTE *)(a4 + 2), (v13 & 0xF) == 0)
    || (v14 = v13 & 0xF) != 0
    && (_WORD)v14 == 1
    && (int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(a1, a2, 3LL, a4 + 16) >= 0 )
  {
    if ( (*((_DWORD *)a1 + 5) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v5, a4) == -1 )
    {
      RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
    }
    else
    {
      if ( (_WORD)a2 )
      {
        v9 = 0;
      }
      else
      {
        v15 = *a1;
        HeapManager = RtlpHpEnvGetHeapManager(&v15);
        v11 = RtlCSparseBitmapBitmaskRead(
                (__int64)(HeapManager + 2),
                2 * ((unsigned __int64)(a2 - HeapManager[1]) >> 20));
        if ( !v11 || (v9 = v11 - 1, v9 == 2) )
        {
          LOBYTE(v4) = RtlpHpLargeFree(a1, a2, v5) != 0;
          return v4;
        }
      }
      return (unsigned int)RtlpHpSegFree(&a1[12 * v9 + 20], a2, v5);
    }
  }
  return v4;
}
