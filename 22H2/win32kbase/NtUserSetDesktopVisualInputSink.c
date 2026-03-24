/*
 * XREFs of NtUserSetDesktopVisualInputSink @ 0x1C0133600
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 *     ?CheckCapability@@YAJPEBG@Z @ 0x1C0128680 (-CheckCapability@@YAJPEBG@Z.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01BACCC (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 */

__int64 __fastcall NtUserSetDesktopVisualInputSink(unsigned __int16 *a1, struct _LUID *a2)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _LUID v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0LL;
  v5 = CheckCapability(a1);
  if ( v5 < 0 )
  {
    v8 = RtlNtStatusToDosError(v5);
LABEL_3:
    UserSetLastError(v8, v7);
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
    v10 = *a2;
  }
  LOBYTE(v4) = CDesktopInputTransform::SetDesktopVisualInputSink(a1, &v10);
  return v4;
}
