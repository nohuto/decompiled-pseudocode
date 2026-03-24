/*
 * XREFs of RtlpHpFreeHeap @ 0x140342100
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x140295320 (ExAllocateContiguousHeapPool.c)
 *     RtlpHpMetadataFree @ 0x1402A5660 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeap @ 0x1402A5E94 (RtlpHpAllocateHeap.c)
 *     ExpHpCompactionRoutine @ 0x1402FAA50 (ExpHpCompactionRoutine.c)
 *     ExAllocateHeapPool @ 0x14033C210 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     ExpResizeBigPageTable @ 0x1403752C0 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x140389790 (ExPoolCleanupExpansionTable.c)
 *     ExGetBigPoolInfo @ 0x1405B375C (ExGetBigPoolInfo.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA0E0 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x1402A2380 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x1402A54E8 (RtlpHpLargeFree.c)
 *     RtlpHpEnvGetHeapManager @ 0x140309414 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegFree @ 0x140342200 (RtlpHpSegFree.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     RtlpLogHeapFailure @ 0x14059356C (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x140594968 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x140594A84 (RtlpHpSizeHeap.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__m128i *a1, unsigned __int64 a2, int a3)
{
  int v3; // eax
  __int32 v5; // ecx
  unsigned int v6; // edi
  int v8; // ebp
  _QWORD *HeapManager; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  char v13; // cl
  int v14; // ecx
  __m128i v15; // [rsp+30h] [rbp-18h] BYREF

  v3 = a1[1].m128i_i32[1] & 0x11000001;
  v5 = a1[13].m128i_i32[3];
  v6 = v3 | a3;
  if ( v5 && v5 == KeGetCurrentThread()[1].CurrentRunTime )
    v6 |= 1u;
  if ( (v6 & 0x1000000) == 0 )
  {
    if ( a1[1].m128i_i32[2] )
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
            || (int)((__int64 (__fastcall *)(__m128i *, unsigned __int64, __int64, __int64))RtlpInterceptorRoutines)(
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
  if ( (a1[1].m128i_i32[1] & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v6) == -1 )
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
      v11 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 2), 2 * ((a2 - HeapManager[1]) >> 20));
      if ( !v11 )
        return RtlpHpLargeFree(a1, a2, v6) != 0;
      v8 = v11 - 1;
      if ( (_DWORD)v11 == 3 )
        return RtlpHpLargeFree(a1, a2, v6) != 0;
    }
    return RtlpHpSegFree(&a1[12 * v8 + 16], a2, v6);
  }
}
