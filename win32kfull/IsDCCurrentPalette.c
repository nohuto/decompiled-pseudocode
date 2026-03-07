__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  Gre::Base *v2; // rcx
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  __int64 v4; // r9
  struct Gre::Base::SESSION_GLOBALS *v5; // rdi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    v3 = Gre::Base::Globals(v2);
    v4 = v10[0];
    v5 = v3;
    if ( *(_QWORD *)(v10[0] + 80LL) == *((_QWORD *)v3 + 479) )
      goto LABEL_8;
    if ( *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 208LL) == 1 )
    {
      v6 = (unsigned __int16)*(_DWORD *)(v10[0] + 80LL) | (*(_DWORD *)(v10[0] + 80LL) >> 8) & 0xFF0000u;
      if ( (_DWORD)v6 == ((unsigned __int16)*((_DWORD *)v3 + 958) | (*((_DWORD *)v3 + 958) >> 8) & 0xFF0000) )
      {
        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
        v8 = CurrentProcessWin32Process;
        if ( CurrentProcessWin32Process )
          v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        v4 = v10[0];
        if ( *((_QWORD *)v5 + 480) == v8 )
LABEL_8:
          v1 = 1;
      }
    }
    if ( v4 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  }
  return v1;
}
