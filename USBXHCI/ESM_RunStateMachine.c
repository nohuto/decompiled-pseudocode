/*
 * XREFs of ESM_RunStateMachine @ 0x1C000C510
 * Callers:
 *     ESM_AddEvent @ 0x1C000C3E8 (ESM_AddEvent.c)
 *     ESM_SmWorker @ 0x1C00513B0 (ESM_SmWorker.c)
 * Callees:
 *     ESM_GetNextEvent @ 0x1C000C6FC (ESM_GetNextEvent.c)
 *     ESM_FindAndSetTargetState @ 0x1C000C7CC (ESM_FindAndSetTargetState.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000C99C (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     Controller_IsRunningWithIrqlRaisedAndTracked @ 0x1C0034200 (Controller_IsRunningWithIrqlRaisedAndTracked.c)
 */

KIRQL __fastcall ESM_RunStateMachine(char *Context, int a2, KIRQL *a3)
{
  __int64 v3; // r15
  KSPIN_LOCK *v4; // rbp
  int v5; // r12d
  unsigned int NextEvent; // edi
  _QWORD *v10; // rdi
  char v11; // bl
  __int64 v12; // rdx
  __int64 v13; // rax
  KIRQL result; // al
  unsigned __int8 v15; // r8
  char v16; // r9
  unsigned __int8 v17; // dl
  __int64 v18; // rcx
  char v20; // [rsp+68h] [rbp+10h] BYREF

  v3 = *((_QWORD *)Context + 121);
  v4 = (KSPIN_LOCK *)(Context + 840);
  v5 = *((_DWORD *)Context + 244);
  v20 = 0;
  while ( 1 )
  {
    if ( a2 == 1000 )
    {
      NextEvent = ESM_GetNextEvent(Context);
      if ( NextEvent == 1000 )
      {
        v12 = *((_QWORD *)Context + 120);
        Context[848] = 0;
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 1632))(
                WdfDriverGlobals,
                v12);
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01023 + 1648))(
                 WdfDriverGlobals,
                 v13,
                 "State Machine Tag",
                 1164LL,
                 "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\smengine.c");
      }
      KeReleaseSpinLock(v4, *a3);
      *a3 = KeAcquireSpinLockRaiseToDpc(v4);
    }
    else
    {
      NextEvent = a2;
      a2 = 1000;
    }
    KeReleaseSpinLock(v4, *a3);
    if ( !(unsigned __int8)ESM_FindAndSetTargetState(Context, NextEvent, &v20) )
      goto LABEL_9;
    if ( v20 )
    {
      v20 = 0;
      if ( NextEvent != 126
        && !(*(unsigned __int8 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2560))(
              WdfDriverGlobals,
              *((_QWORD *)Context + 126),
              0LL) )
      {
        result = KeAcquireSpinLockRaiseToDpc(v4);
        v15 = Context[948];
        v16 = Context[949];
        v17 = v15;
        *a3 = result;
        if ( v15 == v16 )
        {
LABEL_20:
          Context[1016] = 1;
          return result;
        }
        while ( *(_DWORD *)&Context[4 * v17 + 884] != 126 )
        {
          v17 = (v17 + 1) & 0xF;
          if ( v17 == v16 )
            goto LABEL_20;
        }
        if ( v17 != v16 )
        {
          while ( v17 != v15 )
          {
            v18 = v17;
            v17 = (v17 - 1) & 0xF;
            *(_DWORD *)&Context[4 * v18 + 884] = *(_DWORD *)&Context[4 * (((_BYTE)v18 - 1) & 0xF) + 884];
            v15 = Context[948];
          }
          *(_DWORD *)&Context[4 * v15 + 884] = 1000;
          Context[948] = (Context[948] + 1) & 0xF;
        }
        KeReleaseSpinLock(v4, result);
      }
    }
    v10 = (_QWORD *)*((_QWORD *)Context + 120);
    v11 = *(_BYTE *)(*(_QWORD *)(v3
                               + 8LL
                               * (unsigned int)(*(_DWORD *)&Context[4 * *((unsigned int *)Context + 220) + 852] - v5))
                   + 16LL) & 0x10;
    if ( KeGetCurrentIrql() )
    {
      if ( v11 )
        break;
      if ( Context[1018] )
      {
        if ( !(unsigned __int8)Controller_IsRunningWithIrqlRaisedAndTracked(*v10) )
          break;
      }
    }
    a2 = ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState(Context);
    if ( a2 == 1003 )
      goto LABEL_29;
LABEL_9:
    *a3 = KeAcquireSpinLockRaiseToDpc(v4);
  }
  IoQueueWorkItem(*((PIO_WORKITEM *)Context + 123), ESM_SmWorker, DelayedWorkQueue, Context);
LABEL_29:
  result = KeAcquireSpinLockRaiseToDpc(v4);
  *a3 = result;
  return result;
}
