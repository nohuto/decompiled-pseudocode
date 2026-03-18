/*
 * XREFs of PopPluginComponentActive @ 0x140356350
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140355144 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140355534 (PopFxIdleWorkerTail.c)
 *     PopFxActivateComponentDependents @ 0x140355A50 (PopFxActivateComponentDependents.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140356454 (PopPepProcessEvent.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopPluginNotifyActive @ 0x14045DF6A (PopPluginNotifyActive.c)
 *     PopFxBugCheck @ 0x1405CAE6C (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginComponentActive(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  char v6; // si
  __int64 v8; // rdi
  __int64 result; // rax

  v6 = a3;
  if ( a4 )
    memset(a4, 0, 0x40uLL);
  v8 = *(_QWORD *)(a1 + 56);
  if ( *(_BYTE *)(v8 + 124) )
  {
    LOBYTE(a3) = v6;
    PopPluginNotifyActive(*(_QWORD *)(v8 + 32), a2, a3);
  }
  result = PopPepProcessEvent(v8, (unsigned int)v8 + 208 * a2 + 192, v6 != 0 ? 6 : 3, v6 != 0 ? 2 : 6);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      PopFxBugCheck(0x612uLL, 0LL, 0LL, 0LL);
  }
  return result;
}
