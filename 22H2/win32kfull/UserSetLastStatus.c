/*
 * XREFs of UserSetLastStatus @ 0x1C00132A8
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C0058B80 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C0059170 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserFindExistingCursorIcon @ 0x1C008F910 (NtUserFindExistingCursorIcon.c)
 *     NtUserRegisterWindowMessage @ 0x1C008FE60 (NtUserRegisterWindowMessage.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C00A3730 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C00B3F80 (NtUserSetWindowCompositionTransition.c)
 *     NtUserOpenWindowStation @ 0x1C00B9C30 (NtUserOpenWindowStation.c)
 *     NtUserDwmKernelStartup @ 0x1C00BD030 (NtUserDwmKernelStartup.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C00C7E60 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserConsoleControl @ 0x1C00E3140 (NtUserConsoleControl.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C01358E0 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0154A60 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserDwmKernelShutdown @ 0x1C01CF210 (NtUserDwmKernelShutdown.c)
 *     NtUserSetAutoRotation @ 0x1C01DA520 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C01DF450 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01DF6D0 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status, int a2)
{
  NTSTATUS v4; // ebx
  struct _NT_TIB *result; // rax
  ULONG v6; // eax

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
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    result = (struct _NT_TIB *)PsGetCurrentProcessWow64Process();
    if ( result )
    {
      result = KeGetPcr()->NtTib.Self;
      HIDWORD(result[200].Self) = Status;
    }
    if ( a2 )
    {
      v6 = RtlNtStatusToDosError(v4);
      return (struct _NT_TIB *)UserSetLastError(v6);
    }
  }
  return result;
}
