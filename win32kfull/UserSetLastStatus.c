/*
 * XREFs of UserSetLastStatus @ 0x1C0012568
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C002A290 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserConsoleControl @ 0x1C003C4D0 (NtUserConsoleControl.c)
 *     NtUserDwmKernelStartup @ 0x1C00795C0 (NtUserDwmKernelStartup.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C007D170 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C007D760 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserOpenWindowStation @ 0x1C00C2180 (NtUserOpenWindowStation.c)
 *     NtUserFindExistingCursorIcon @ 0x1C00C5470 (NtUserFindExistingCursorIcon.c)
 *     NtUserRegisterWindowMessage @ 0x1C00C59E0 (NtUserRegisterWindowMessage.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C00DFD20 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C00EC250 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C01298E0 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0147D40 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserDwmKernelShutdown @ 0x1C01D0260 (NtUserDwmKernelShutdown.c)
 *     NtUserSetAutoRotation @ 0x1C01DB550 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C01E0500 (NtUserUpdateDefaultDesktopThumbnail.c)
 *     NtUserUpdateLayeredWindow @ 0x1C01E0780 (NtUserUpdateLayeredWindow.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
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
