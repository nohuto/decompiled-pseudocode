/*
 * XREFs of WheapInitializeErrorSource @ 0x1407AF8E0
 * Callers:
 *     WheapInitializeDeferredErrorSources @ 0x1405BB068 (WheapInitializeDeferredErrorSources.c)
 *     WheaAddErrorSource @ 0x1407AF4C0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140A6478C (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x1403BB038 (WheapInitializeErrorRecordWrapper.c)
 *     WheapCallErrorSourceCorrect @ 0x1403BB0C0 (WheapCallErrorSourceCorrect.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheapInitializeErrorSource(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // esi
  int v4; // eax
  unsigned int v5; // esi
  SIZE_T v6; // r14
  PVOID PoolWithTag; // rax
  __int64 v8; // rbp
  __int64 v9; // r11
  unsigned int i; // r14d
  __int64 v11; // r11

  if ( *(_DWORD *)(a1 + 104) > 0x10u )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a1 + 36) = 1634035799;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 120);
  v2 = 0;
  if ( (int)WheapCallErrorSourceCorrect(a1) >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 68) + 72;
    *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 128);
    v4 = *(_DWORD *)(a1 + 116);
    *(_DWORD *)(a1 + 28) = v4;
    v5 = (*(_DWORD *)(a1 + 120) * v3 + 175) & 0xFFFFFFF8;
    *(_DWORD *)(a1 + 32) = v5;
    if ( v4 )
    {
      v6 = v5 * v4;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x61656857u);
      v8 = (__int64)PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, (unsigned int)v6);
        v9 = v8;
        for ( i = 0; i < *(_DWORD *)(a1 + 28); ++i )
        {
          WheapInitializeErrorRecordWrapper(v9, v5, a1);
          v9 = v5 + v11;
        }
        *(_QWORD *)(a1 + 48) = v8;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
    return v2;
  }
  return 0LL;
}
