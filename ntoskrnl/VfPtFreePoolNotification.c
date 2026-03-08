/*
 * XREFs of VfPtFreePoolNotification @ 0x140ADB73C
 * Callers:
 *     ExFreeHeapPool @ 0x1402B61C0 (ExFreeHeapPool.c)
 *     ExpFreePoolChecks @ 0x140313BA0 (ExpFreePoolChecks.c)
 * Callees:
 *     VfRemLockDeleteMemoryRange @ 0x140ABD1C2 (VfRemLockDeleteMemoryRange.c)
 *     VfDeadlockDeleteMemoryRange @ 0x140ABD6EC (VfDeadlockDeleteMemoryRange.c)
 *     ViPtLogStackTrace @ 0x140ADC05C (ViPtLogStackTrace.c)
 */

void __fastcall VfPtFreePoolNotification(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r11
  unsigned int v6; // r8d
  __int128 *v8; // rax

  v5 = a4;
  v6 = 0;
  if ( a3 )
  {
    if ( (VfRuleClasses & 8) != 0 )
    {
      if ( (unsigned int)(DifpPoolTagsSize - 1) <= 9 )
      {
        v8 = &DifpPoolTags;
        while ( *(_DWORD *)v8 != (_DWORD)a2 )
        {
          ++v6;
          v8 = (__int128 *)((char *)v8 + 4);
          if ( v6 >= DifpPoolTagsSize )
            goto LABEL_9;
        }
      }
      LOBYTE(a4) = 1;
      ViPtLogStackTrace(v5, a2, a3, a4);
    }
LABEL_9:
    if ( (VfRuleClasses & 0x20) != 0 || (VfRuleClasses & 0x10) != 0 || (VfRuleClasses & 0x800) != 0 )
    {
      VfDeadlockDeleteMemoryRange(a1, a3);
      VfRemLockDeleteMemoryRange(a1, a3);
    }
  }
}
