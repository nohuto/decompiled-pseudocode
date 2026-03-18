/*
 * XREFs of _CloseDesktop @ 0x1C00A2C38
 * Callers:
 *     EditionCloseDesktopEntryPoint @ 0x1C00A2BF0 (EditionCloseDesktopEntryPoint.c)
 *     xxxCreateDesktopEx @ 0x1C00CFDF4 (xxxCreateDesktopEx.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00D31F8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     CloseProtectedHandle @ 0x1C00A6598 (CloseProtectedHandle.c)
 */

__int64 __fastcall CloseDesktop(unsigned __int64 Handle, KPROCESSOR_MODE a2)
{
  unsigned int v4; // ebx
  __int64 CurrentProcessWin32Process; // rdi
  int v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebp
  ULONG v9; // eax
  __int64 v10; // rdx
  PVOID v12; // rbp
  __int64 i; // rcx
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(Handle);
  Object = 0LL;
  v6 = ObReferenceObjectByHandle((HANDLE)Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, a2, &Object, 0LL);
  v8 = v6;
  if ( v6 >= 0 )
  {
    v12 = Object;
    if ( *(_QWORD *)CurrentProcessWin32Process != gpepCSRSS )
    {
      for ( i = *(_QWORD *)(CurrentProcessWin32Process + 320); i; i = *(_QWORD *)(i + 664) )
      {
        if ( ((Handle ^ *(_QWORD *)(i + 592)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        {
          UserSetLastError(170LL, v7);
          v4 = -2147483631;
          goto LABEL_12;
        }
      }
      if ( Object == *(PVOID *)(CurrentProcessWin32Process + 336)
        && ((Handle ^ *(_QWORD *)(CurrentProcessWin32Process + 392)) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
      {
        UnlockObjectAssignment(CurrentProcessWin32Process + 336);
        *(_QWORD *)(CurrentProcessWin32Process + 392) = 0LL;
      }
    }
    SetHandleFlag(Handle, 0LL, 0LL);
    CloseProtectedHandle((HANDLE)Handle);
LABEL_12:
    ObfDereferenceObject(v12);
    return v4;
  }
  else
  {
    v9 = RtlNtStatusToDosError(v6);
    UserSetLastError(v9, v10);
    return v8;
  }
}
