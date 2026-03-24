/*
 * XREFs of NtMITInitMinuserThread @ 0x1C012A8C0
 * Callers:
 *     <none>
 * Callees:
 *     ProtectHandle @ 0x1C0025F3C (ProtectHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C002F9F0 (W32GetThreadWin32Thread.c)
 *     EnterCrit @ 0x1C002FF70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 */

_BOOL8 __fastcall NtMITInitMinuserThread(HANDLE Handle)
{
  BOOL v2; // ebx
  __int64 ThreadWin32Thread; // rdi
  int v4; // edx
  int v5; // esi
  int v6; // edx
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF

  v2 = 1;
  EnterCrit(0, 1);
  RIMLockExclusive((__int64)&gWndLock);
  RIMLockExclusive((__int64)&gInputLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1232) & 0x1000000) == 0 )
  {
    Object = 0LL;
    v5 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
    if ( v5 >= 0 )
    {
      v5 = ProtectHandle(Handle, v4, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
      if ( v5 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        if ( *(_QWORD *)(ThreadWin32Thread + 736) )
        {
          ProtectHandle(*(void **)(ThreadWin32Thread + 728), v6, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
          ObCloseHandle(*(HANDLE *)(ThreadWin32Thread + 728), 1);
          ObfDereferenceObject(*(PVOID *)(ThreadWin32Thread + 736));
        }
        *(_QWORD *)(ThreadWin32Thread + 728) = Handle;
        *(_QWORD *)(ThreadWin32Thread + 736) = Object;
        *(_DWORD *)(ThreadWin32Thread + 488) |= 0xC0u;
        *(_DWORD *)(ThreadWin32Thread + 1232) |= 0x1000000u;
      }
    }
    v2 = v5 >= 0;
  }
  qword_1C0254518 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C0254528 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit();
  return v2;
}
