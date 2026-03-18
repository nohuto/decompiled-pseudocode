/*
 * XREFs of GreSfmOpenTokenEvent @ 0x1C009B710
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreSfmOpenTokenEvent(PHANDLE Handle, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // r8d
  NTSTATUS v9; // eax
  PVOID v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  if ( ghsemDwmState )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDwmState, a2);
  EtwTraceGreLockAcquireSemaphoreShared((__int64)L"ghsemDwmState", (int)ghsemDwmState, a3);
  if ( UserIsCurrentProcessDwm(v5, v4, v6, v7) )
  {
    Object = 0LL;
    v9 = ObReferenceObjectByHandle(
           *((HANDLE *)gpSfmState + 3),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           0,
           &Object,
           0LL);
    v10 = Object;
    v11 = v9;
    if ( v9 >= 0 )
    {
      v11 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, Handle);
      ObfDereferenceObject(v10);
    }
  }
  else
  {
    v11 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDwmState", (int)ghsemDwmState, v8);
  if ( ghsemDwmState )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDwmState);
    PsLeavePriorityRegion(v12);
  }
  return v11;
}
