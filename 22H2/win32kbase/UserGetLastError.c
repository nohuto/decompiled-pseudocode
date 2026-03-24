/*
 * XREFs of UserGetLastError @ 0x1C01D1CEC
 * Callers:
 *     NtUserReportInertia @ 0x1C0004160 (NtUserReportInertia.c)
 *     NtMapVisualRelativePoints @ 0x1C01174F0 (NtMapVisualRelativePoints.c)
 *     NtUserInjectDeviceInput @ 0x1C01309C0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0130DF0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0131680 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C0131AA0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0131EC0 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C01329F0 (NtUserMapPointsByVisualIdentifier.c)
 * Callees:
 *     <none>
 */

__int64 UserGetLastError()
{
  __int64 v0; // rcx
  __int64 CurrentProcessWow64Process; // rax
  struct _NT_TIB *Self; // rcx

  if ( (unsigned __int8)KeIsAttachedProcess() )
    return 0LL;
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v0);
  Self = KeGetPcr()->NtTib.Self;
  if ( CurrentProcessWow64Process )
    return HIDWORD(Self[147].StackBase);
  else
    return LODWORD(Self[1].Self);
}
