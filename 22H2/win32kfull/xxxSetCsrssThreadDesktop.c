/*
 * XREFs of xxxSetCsrssThreadDesktop @ 0x1C00697C0
 * Callers:
 *     xxxSetInformationThread @ 0x1C00699B0 (xxxSetInformationThread.c)
 *     xxxQueryInformationThread @ 0x1C00E21E4 (xxxQueryInformationThread.c)
 *     xxxHardErrorControl @ 0x1C0223D54 (xxxHardErrorControl.c)
 * Callees:
 *     xxxInternalGetMessage @ 0x1C006A4F0 (xxxInternalGetMessage.c)
 *     CloseProtectedHandle @ 0x1C006A694 (CloseProtectedHandle.c)
 *     xxxSetThreadDesktop @ 0x1C006A6E4 (xxxSetThreadDesktop.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     xxxDispatchMessage @ 0x1C0117884 (xxxDispatchMessage.c)
 */

NTSTATUS __fastcall xxxSetCsrssThreadDesktop(_DWORD *Object, PVOID *a2)
{
  void *v4; // rcx
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // rax
  NTSTATUS result; // eax
  ULONG v9; // eax
  _OWORD v10[3]; // [rsp+40h] [rbp-38h] BYREF

  if ( (Object[12] & 8) != 0 )
    return -1073741823;
  v4 = *(void **)(gptiCurrent + 456LL);
  *a2 = v4;
  if ( !v4 || (result = ObReferenceObjectByPointer(v4, 0x2000000u, (POBJECT_TYPE)ExDesktopObjectType, 0), result >= 0) )
  {
    v5 = ObOpenObjectByPointer(Object, 0, 0LL, 0x1F0003u, 0LL, 0, a2 + 1);
    v6 = v5;
    if ( v5 < 0 )
    {
      v9 = RtlNtStatusToDosError(v5);
      UserSetLastError(v9);
      if ( *a2 )
        ObfDereferenceObject(*a2);
    }
    else
    {
      v7 = *(_DWORD **)(gptiCurrent + 456LL);
      if ( Object != v7 )
      {
        if ( v7 )
        {
          memset(v10, 0, sizeof(v10));
          while ( (unsigned int)xxxInternalGetMessage((unsigned int)v10, 0, 0, 0, 3, 0) )
            xxxDispatchMessage(v10);
        }
        v6 = xxxSetThreadDesktop(0LL, Object);
        if ( v6 < 0 )
        {
          if ( *a2 )
            ObfDereferenceObject(*a2);
          CloseProtectedHandle(a2[1]);
        }
      }
    }
    return v6;
  }
  return result;
}
