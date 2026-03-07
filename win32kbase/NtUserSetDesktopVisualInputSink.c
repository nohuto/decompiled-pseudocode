__int64 __fastcall NtUserSetDesktopVisualInputSink(void *a1, struct _LUID *a2)
{
  int v4; // ebx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  ULONG v7; // ecx
  __int64 CurrentProcessWin32Process; // rax
  struct _LUID v10; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0LL;
  v5 = CheckCapability(L"shellExperienceComposer");
  if ( v5 < 0 )
  {
    v7 = RtlNtStatusToDosError(v5);
LABEL_3:
    UserSetLastError(v7);
    return v4;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x30) != 0x10 )
  {
    v7 = 5;
    goto LABEL_3;
  }
  if ( a1 )
  {
    if ( &a2[1] < a2 || (unsigned __int64)&a2[1] > MmUserProbeAddress )
      a2 = (struct _LUID *)MmUserProbeAddress;
    v10 = *a2;
  }
  return CDesktopInputSink::SetDesktopInputSink(a1, &v10);
}
