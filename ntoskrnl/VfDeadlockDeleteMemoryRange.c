/*
 * XREFs of VfDeadlockDeleteMemoryRange @ 0x140ABD6EC
 * Callers:
 *     VfDriverUnloadImage @ 0x140ABA284 (VfDriverUnloadImage.c)
 *     VfFreeMemoryNotification @ 0x140ABF0E8 (VfFreeMemoryNotification.c)
 *     VfPtFreePoolNotification @ 0x140ADB73C (VfPtFreePoolNotification.c)
 * Callees:
 *     ViDeadlockRemoveMemoryRangeResources @ 0x1405CF408 (ViDeadlockRemoveMemoryRangeResources.c)
 *     ViDeadlockRemoveMemoryRangeThreads @ 0x1405CF568 (ViDeadlockRemoveMemoryRangeThreads.c)
 *     ViDeadlockCanProceed @ 0x140ABD79A (ViDeadlockCanProceed.c)
 */

__int64 __fastcall VfDeadlockDeleteMemoryRange(unsigned __int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rbx

  result = ViDeadlockCanProceed(0LL);
  if ( (_DWORD)result )
  {
    result = a1 & 0xFFF;
    v5 = a1 + a2;
    v6 = a1;
    v7 = (unsigned __int64)(result + a2 + 4095) >> 12;
    if ( (_DWORD)v7 )
    {
      v8 = (unsigned int)v7;
      do
      {
        v9 = v5;
        if ( v6 + 4096 <= v5 )
          v9 = v6 + 4096;
        ViDeadlockRemoveMemoryRangeResources(v6, v9, a1, v5);
        result = ViDeadlockRemoveMemoryRangeThreads(v6, v9, a1, v5);
        v6 = v9;
        --v8;
      }
      while ( v8 );
    }
  }
  return result;
}
