/*
 * XREFs of UserSetLastStatus @ 0x1C00EC7BC
 * Callers:
 *     NtUserOpenWindowStation @ 0x1C000EF10 (NtUserOpenWindowStation.c)
 *     NtUserConsoleControl @ 0x1C003BB40 (NtUserConsoleControl.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00497E0 (NtUserFindExistingCursorIcon.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C00BC070 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C00EC640 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00ECC00 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00F1BD0 (NtUserUpdateLayeredWindow.c)
 *     NtUserRegisterWindowMessage @ 0x1C00F8370 (NtUserRegisterWindowMessage.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C0117940 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C0123520 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmKernelStartup @ 0x1C0136150 (NtUserDwmKernelStartup.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C01642D0 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelShutdown @ 0x1C01F8620 (NtUserDwmKernelShutdown.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FD200 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserSetAutoRotation @ 0x1C02015C0 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C0204090 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  __int64 v6; // rcx
  ULONG v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r8

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v4 = 0;
    if ( Status < 0 )
      v4 = -1073741823;
  }
  else
  {
    v4 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess(536805376LL);
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process(v6);
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[200].Self) = Status;
    }
    if ( a2 )
    {
      v7 = RtlNtStatusToDosError(v4);
      return UserSetLastError(v7, v8, v9);
    }
  }
  return result;
}
