bool __fastcall PrivateAPI::_anonymous_namespace_::IsValidGuiContext(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  return CurrentProcessWin32Process
      && *(_QWORD *)CurrentProcessWin32Process
      && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x8000) != 0
      && (*((_DWORD *)gptiCurrent + 122) & 0x1000000) != 0
      && (*((_DWORD *)gptiCurrent + 318) & 0x80) == 0;
}
