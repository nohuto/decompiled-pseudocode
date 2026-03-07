__int64 __fastcall GreGetStockObject(int a1)
{
  __int64 v1; // rbx
  int v2; // esi
  _QWORD *ThreadWin32Thread; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  __int64 result; // rax

  v1 = a1;
  LOBYTE(v2) = 18;
  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    v5 = *ThreadWin32Thread;
    if ( *ThreadWin32Thread )
    {
      if ( *(_QWORD *)(v5 + 360) )
        CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
      if ( *(_DWORD *)(v5 + 340) )
      {
        LOBYTE(v2) = *(_DWORD *)(v5 + 340);
      }
      else
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
        if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
          v2 = *(_DWORD *)(CurrentProcessWin32Process + 280);
      }
    }
  }
  v8 = *(_QWORD *)(SGDGetSessionState(v4) + 24);
  if ( (unsigned int)v1 > 0x11 )
  {
LABEL_13:
    if ( (unsigned int)v1 > 0x15 )
      return 0LL;
    else
      return *(_QWORD *)(*(_QWORD *)(v8 + 3168) + 8 * v1);
  }
  v9 = 205824;
  if ( !_bittest(&v9, v1) || (v2 & 0xF) != 0 || (result = *(_QWORD *)(*(_QWORD *)(v8 + 3176) + 8 * v1)) == 0 )
  {
    if ( (_DWORD)v1 == 17 )
      return GreGetDpiDepDefaultGuiFont(17LL, v7, v8);
    goto LABEL_13;
  }
  return result;
}
