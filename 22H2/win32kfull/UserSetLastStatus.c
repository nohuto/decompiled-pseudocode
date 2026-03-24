/*
 * XREFs of UserSetLastStatus @ 0x1C00EC46C
 * Callers:
 *     NtUserOpenWindowStation @ 0x1C000EF10 (NtUserOpenWindowStation.c)
 *     NtUserConsoleControl @ 0x1C003BAA0 (NtUserConsoleControl.c)
 *     NtUserFindExistingCursorIcon @ 0x1C0049740 (NtUserFindExistingCursorIcon.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C00BBD10 (NtUserSetLayeredWindowAttributes.c)
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C00EC2F0 (NtUserDestroyDCompositionHwndTarget.c)
 *     NtUserCreateDCompositionHwndTarget @ 0x1C00EC8B0 (NtUserCreateDCompositionHwndTarget.c)
 *     NtUserUpdateLayeredWindow @ 0x1C00F1880 (NtUserUpdateLayeredWindow.c)
 *     NtUserRegisterWindowMessage @ 0x1C00F8020 (NtUserRegisterWindowMessage.c)
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1C01175C0 (NtUserGetResizeDCompositionSynchronizationObject.c)
 *     NtUserSetWindowCompositionTransition @ 0x1C01231A0 (NtUserSetWindowCompositionTransition.c)
 *     NtUserDwmKernelStartup @ 0x1C0135DA0 (NtUserDwmKernelStartup.c)
 *     NtUserDwmGetRemoteSessionOcclusionEvent @ 0x1C0163B00 (NtUserDwmGetRemoteSessionOcclusionEvent.c)
 *     NtUserDwmKernelShutdown @ 0x1C01F8060 (NtUserDwmKernelShutdown.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C01FCC40 (NtUserHwndQueryRedirectionInfo.c)
 *     NtUserSetAutoRotation @ 0x1C0201000 (NtUserSetAutoRotation.c)
 *     NtUserUpdateDefaultDesktopThumbnail @ 0x1C0203AD0 (NtUserUpdateDefaultDesktopThumbnail.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
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
