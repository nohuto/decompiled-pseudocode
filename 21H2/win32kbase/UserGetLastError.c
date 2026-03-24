/*
 * XREFs of UserGetLastError @ 0x1C01D1DBC
 * Callers:
 *     NtUserReportInertia @ 0x1C0004160 (NtUserReportInertia.c)
 *     NtMapVisualRelativePoints @ 0x1C0117220 (NtMapVisualRelativePoints.c)
 *     NtUserInjectDeviceInput @ 0x1C01306F0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0130B20 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C01313B0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C01317D0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C0131BF0 (NtUserInjectPointerInput.c)
 *     NtUserMapPointsByVisualIdentifier @ 0x1C0132720 (NtUserMapPointsByVisualIdentifier.c)
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
