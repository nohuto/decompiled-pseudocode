/*
 * XREFs of GreSfmOpenTokenEvent @ 0x1C0019080
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C00191C0 (UserIsCurrentProcessDwm.c)
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0047AF0 (EtwTraceGreLockAcquireSemaphoreShared.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 __fastcall GreSfmOpenTokenEvent(PHANDLE Handle)
{
  __int64 v2; // rbx
  NTSTATUS v3; // eax
  PVOID v4; // rsi
  unsigned int v5; // edi
  struct _ERESOURCE *v6; // rcx
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(Handle) + 24);
  if ( *(_QWORD *)(v2 + 72) )
    ExEnterPriorityRegionAndAcquireResourceShared();
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v2 + 72));
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    Object = 0LL;
    v3 = ObReferenceObjectByHandle(
           *(HANDLE *)(*(_QWORD *)(v2 + 6472) + 24LL),
           0x1F0003u,
           (POBJECT_TYPE)ExEventObjectType,
           0,
           &Object,
           0LL);
    v4 = Object;
    v5 = v3;
    if ( v3 >= 0 )
    {
      v5 = ObOpenObjectByPointer(Object, 0x40u, 0LL, 0x100000u, (POBJECT_TYPE)ExEventObjectType, 0, Handle);
      ObfDereferenceObject(v4);
    }
  }
  else
  {
    v5 = -1073741790;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState", *(_QWORD *)(v2 + 72));
  v6 = *(struct _ERESOURCE **)(v2 + 72);
  if ( v6 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v6);
    PsLeavePriorityRegion();
  }
  return v5;
}
