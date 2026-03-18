/*
 * XREFs of IsThreadCrossSessionAttached @ 0x1C0044340
 * Callers:
 *     ??1PALMEMOBJ@@QEAA@XZ @ 0x1C00381D0 (--1PALMEMOBJ@@QEAA@XZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C0044F10 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0075FAC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 *     ??0EngModeState@@QEAA@XZ @ 0x1C008A354 (--0EngModeState@@QEAA@XZ.c)
 *     ?GrepIsPreviousModeKernel@@YAHXZ @ 0x1C008A720 (-GrepIsPreviousModeKernel@@YAHXZ.c)
 *     HmgMarkLazyDelete @ 0x1C0094880 (HmgMarkLazyDelete.c)
 * Callees:
 *     <none>
 */

_BOOL8 IsThreadCrossSessionAttached()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  int v5; // ebx
  __int64 CurrentThreadProcess; // rax

  if ( !(unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  v5 = *(_DWORD *)SGDGetUserSessionState(v1, v0, v2, v3);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  return v5 != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess);
}
