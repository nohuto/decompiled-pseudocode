/*
 * XREFs of NtUserSetDesktopVisualInputSink @ 0x1C0160560
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C009EC88 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     CheckCapability @ 0x1C01E77C0 (CheckCapability.c)
 */

__int64 __fastcall NtUserSetDesktopVisualInputSink(void *a1, struct _LUID *a2)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _LUID v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v12 = 0LL;
  v5 = CheckCapability(L"shellExperienceComposer");
  if ( v5 < 0 )
  {
    v8 = RtlNtStatusToDosError(v5);
LABEL_3:
    UserSetLastError(v8, v7, v9, v10);
    return v4;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 820) & 0x30) != 0x10 )
  {
    v8 = 5LL;
    goto LABEL_3;
  }
  if ( a1 )
  {
    if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > MmUserProbeAddress )
      a2 = (struct _LUID *)MmUserProbeAddress;
    v12 = *a2;
  }
  return CDesktopInputSink::SetDesktopInputSink(a1, &v12);
}
