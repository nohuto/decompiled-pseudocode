/*
 * XREFs of KiRaiseException @ 0x140576490
 * Callers:
 *     NtRaiseException @ 0x140416BC0 (NtRaiseException.c)
 * Callees:
 *     KiDispatchException @ 0x140362740 (KiDispatchException.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetupForInstrumentationReturn @ 0x14056E9C0 (KiSetupForInstrumentationReturn.c)
 *     KyRaiseException @ 0x140576670 (KyRaiseException.c)
 */

__int64 __fastcall KiRaiseException(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  char PreviousMode; // si
  __int64 v9; // rax
  int v10; // ebx
  __int64 result; // rax
  unsigned __int64 v12; // rax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v15; // r11
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  _DWORD v22[40]; // [rsp+40h] [rbp-D8h] BYREF

  memset(v22, 0, 0x98uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)(a1 + 6);
    if ( (unsigned __int64)(a1 + 6) >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    v10 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 > 0xFu )
      return 3221225485LL;
    v12 = (unsigned __int64)a1 + (unsigned int)(8 * v10 + 32);
    if ( v12 > 0x7FFFFFFF0000LL || v12 < (unsigned __int64)a1 )
      MEMORY[0x7FFFFFFF0000] = 0;
    memmove(v22, a1, (unsigned int)(8 * v10 + 32));
    a1 = v22;
    v22[6] = v10;
  }
  result = KyRaiseException(a1, a2, a3, a4);
  if ( (int)result >= 0 )
  {
    *a1 &= ~0x10000000u;
    KiDispatchException(a1, a3, a4, PreviousMode, a5);
    if ( PreviousMode )
    {
      CurrentThread = KeGetCurrentThread();
      if ( (CurrentThread->Header.Reserved1 & 2) != 0
        && *(void **)(a4 + 360) != CurrentThread->Process->InstrumentationCallback )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(1uLL);
        KiSetupForInstrumentationReturn(a4);
        if ( KiIrqlFlags )
        {
          v16 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & v15) != 0 && v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v19 = ~(unsigned __int16)(-1LL << (v15 + CurrentIrql));
            v20 = (v19 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v19;
            if ( v20 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        __writecr8(CurrentIrql);
      }
    }
    return 0LL;
  }
  return result;
}
