/*
 * XREFs of ??_GFxCallbackMutexLock@@UEAAPEAXI@Z @ 0x1C0038D80
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxCallbackMutexLock@@UEAA@XZ @ 0x1C0038C50 (--1FxCallbackMutexLock@@UEAA@XZ.c)
 */

FxCallbackMutexLock *__fastcall FxCallbackMutexLock::`scalar deleting destructor'(FxCallbackMutexLock *this, char a2)
{
  FxCallbackMutexLock::~FxCallbackMutexLock(this);
  if ( (a2 & 1) != 0 && this )
    FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
