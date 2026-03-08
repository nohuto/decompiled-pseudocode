/*
 * XREFs of PopPluginComponentActive @ 0x14030721C
 * Callers:
 *     PopFxActivateComponentWorker @ 0x140305EB4 (PopFxActivateComponentWorker.c)
 *     PopFxIdleWorkerTail @ 0x140306748 (PopFxIdleWorkerTail.c)
 *     PopFxActivateComponentDependents @ 0x14030819C (PopFxActivateComponentDependents.c)
 * Callees:
 *     PopPepProcessEvent @ 0x140307424 (PopPepProcessEvent.c)
 *     PopPluginNotifyActive @ 0x1403082D4 (PopPluginNotifyActive.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopFxBugCheck @ 0x140586740 (PopFxBugCheck.c)
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
