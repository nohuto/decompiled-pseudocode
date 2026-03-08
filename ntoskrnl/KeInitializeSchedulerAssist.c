/*
 * XREFs of KeInitializeSchedulerAssist @ 0x140B72514
 * Callers:
 *     KeInitSystem @ 0x140B42FB8 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeSchedulerAssist(__int64 a1)
{
  int v1; // eax
  __int64 result; // rax

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 35000) )
    goto LABEL_2;
  if ( KiSchedulerAssistThreadFlagOverride == 1 )
  {
    KiSchedulerAssistThreadFlagEnabled = 1;
LABEL_9:
    _interlockedbittestandset(*(volatile signed __int32 **)(a1 + 24), 0x16u);
    goto LABEL_3;
  }
  v1 = 1;
  if ( KiSchedulerAssistThreadFlagOverride != 2 )
  {
LABEL_2:
    KiSchedulerAssistThreadFlagEnabled = v1;
    if ( !v1 )
      goto LABEL_3;
    goto LABEL_9;
  }
  KiSchedulerAssistThreadFlagEnabled = 0;
LABEL_3:
  result = (unsigned int)(KiVpThreadSystemWorkPriority - 1);
  if ( (unsigned int)result > 0x1E )
    KiVpThreadSystemWorkPriority = 1;
  if ( *(_QWORD *)(a1 + 35000) )
    KiIrqlFlags |= 1u;
  return result;
}
