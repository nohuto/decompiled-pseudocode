/*
 * XREFs of RtlpHpFreeHeap @ 0x14034CE50
 * Callers:
 *     ExAllocateContiguousHeapPool @ 0x140216FE0 (ExAllocateContiguousHeapPool.c)
 *     RtlpHpMetadataFree @ 0x140222AA0 (RtlpHpMetadataFree.c)
 *     RtlpHpAllocateHeap @ 0x1402232D4 (RtlpHpAllocateHeap.c)
 *     ExpHpCompactionRoutine @ 0x1403057A0 (ExpHpCompactionRoutine.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 *     ExpResizeBigPageTable @ 0x140374E10 (ExpResizeBigPageTable.c)
 *     ExPoolCleanupExpansionTable @ 0x1403898E0 (ExPoolCleanupExpansionTable.c)
 *     ExGetBigPoolInfo @ 0x1405B398C (ExGetBigPoolInfo.c)
 *     ExpFreeHeapSpecialPool @ 0x1405BA310 (ExpFreeHeapSpecialPool.c)
 * Callees:
 *     RtlCSparseBitmapBitmaskRead @ 0x14021F7C0 (RtlCSparseBitmapBitmaskRead.c)
 *     RtlpHpLargeFree @ 0x140222928 (RtlpHpLargeFree.c)
 *     RtlpHpEnvGetHeapManager @ 0x140314164 (RtlpHpEnvGetHeapManager.c)
 *     RtlpHpSegFree @ 0x14034CF50 (RtlpHpSegFree.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlpLogHeapFailure @ 0x14059379C (RtlpLogHeapFailure.c)
 *     RtlpHpExtrasGet @ 0x140594B98 (RtlpHpExtrasGet.c)
 *     RtlpHpSizeHeap @ 0x140594CB4 (RtlpHpSizeHeap.c)
 */

__int64 __fastcall RtlpHpFreeHeap(__int64 a1, unsigned __int64 a2, int a3)
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

  v3 = *(_DWORD *)(a1 + 20) & 0x11000001;
  v5 = *(_DWORD *)(a1 + 220);
  v6 = v3 | a3;
  if ( v5 && v5 == KeGetCurrentThread()[1].CurrentRunTime )
    v6 |= 1u;
  if ( (v6 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 24) )
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
            || (int)((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64))RtlpInterceptorRoutines)(
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
  if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v6) == -1 )
  {
    RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
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
      v15 = *(_OWORD *)a1;
      HeapManager = RtlpHpEnvGetHeapManager(&v15);
      v11 = RtlCSparseBitmapBitmaskRead((__int64)(HeapManager + 2), 2 * ((a2 - HeapManager[1]) >> 20));
      if ( !v11 )
        return RtlpHpLargeFree(a1, a2, v6) != 0;
      v8 = v11 - 1;
      if ( (_DWORD)v11 == 3 )
        return RtlpHpLargeFree(a1, a2, v6) != 0;
    }
    return RtlpHpSegFree(a1 + 192LL * v8 + 256, a2, v6);
  }
}
