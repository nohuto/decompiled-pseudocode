__int64 __fastcall MapDesktopObject(__int64 a1)
{
  __int64 v2; // rdi
  struct tagTHREADINFO *v3; // rsi
  int v4; // ebp
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 DesktopView; // rax
  __int64 result; // rax

  v2 = 0LL;
  v3 = PtiCurrentShared(a1);
  v4 = *((_DWORD *)v3 + 387);
  *((_DWORD *)v3 + 387) = 0;
  v5 = HMValidateHandle(a1, 0xFFu);
  if ( !v5 || (v7 = _HMPheFromObject(v5), (*(_BYTE *)(v7 + 25) & 0x40) != 0) )
  {
    result = 0LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    DesktopView = GetDesktopView(CurrentProcessWin32Process);
    if ( DesktopView )
      v2 = *(_QWORD *)v7 + *(_QWORD *)(DesktopView + 16);
    result = v2;
  }
  *((_DWORD *)v3 + 387) = v4;
  return result;
}
