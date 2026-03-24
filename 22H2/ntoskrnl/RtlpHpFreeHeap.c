/*
 * XREFs of RtlpHpFreeHeap @ 0x1402C2790
 * Callers:
 *     ExpHpCompactionRoutine @ 0x14027B0D0 (ExpHpCompactionRoutine.c)
 *     ExAllocateHeapPool @ 0x1402BC8A0 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x1402C2150 (ExFreeHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x1402E8470 (ExAllocateContiguousHeapPool.c)
 *     RtlpHpMetadataFree @ 0x1402FDF7C (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeap @ 0x1402FE7B0 (RtlpHpAllocateHeap.c)
 *     ExpResizeBigPageTable @ 0x140375AA0 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x140389090 (ExPoolCleanupExpansionTable.c)
 *     ExGetBigPoolInfo @ 0x1405B369C (ExGetBigPoolInfo.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA020 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     RtlpHpEnvGetHeapManager @ 0x140289A94 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegFree @ 0x1402C2890 (RtlpHpSegFree.c)
 *     RtlCSparseBitmapBitmaskRead @ 0x1402FABD0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x1402FDE04 (RtlpHpLargeFree.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     RtlpLogHeapFailure @ 0x1405934AC (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x1405948A8 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x1405949C4 (RtlpHpSizeHeap.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int128 *a1, __int64 a2, int a3)
{
  int v3; // eax
  int v5; // ecx
  unsigned int v6; // edi
  int v8; // ebp
  _QWORD *HeapManager; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // cl
  int v14; // ecx
  __int128 v15; // [rsp+30h] [rbp-18h] BYREF

  v3 = *((_DWORD *)a1 + 5) & 0x11000001;
  v5 = *((_DWORD *)a1 + 55);
  v6 = v3 | a3;
  if ( v5 && v5 == KeGetCurrentThread()[1].CurrentRunTime )
    v6 |= 1u;
  if ( (v6 & 0x1000000) == 0 )
  {
    if ( *((_DWORD *)a1 + 6) )
    {
      v12 = RtlpHpExtrasGet(a1, a2, v6, 0LL);
      if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        v13 = *(_BYTE *)(v12 + 2);
        if ( (v13 & 0xF) != 0 )
        {
          v14 = v13 & 0xF;
          if ( !v14
            || (_WORD)v14 != 1
            || (int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64))RtlpInterceptorRoutines)(
                      a1,
                      a2,
                      3LL,
                      v12 + 16) < 0 )
          {
            return 0LL;
          }
        }
      }
    }
  }
  if ( (*((_DWORD *)a1 + 5) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v6) == -1 )
  {
    RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  else
  {
    if ( (_WORD)a2 )
    {
      v8 = 0;
    }
    else
    {
      v15 = *a1;
      HeapManager = RtlpHpEnvGetHeapManager(&v15);
      v11 = RtlCSparseBitmapBitmaskRead(HeapManager + 2, 2 * ((unsigned __int64)(a2 - HeapManager[1]) >> 20));
      if ( !v11 )
        return RtlpHpLargeFree(a1, a2, v6) != 0;
      v8 = v11 - 1;
      if ( (_DWORD)v11 == 3 )
        return RtlpHpLargeFree(a1, a2, v6) != 0;
    }
    return RtlpHpSegFree(&a1[12 * v8 + 16], a2, v6);
  }
}
