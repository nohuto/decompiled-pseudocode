__int64 __fastcall UserIsCurrentProcessImmersive(__int64 a1)
{
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rax

  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  v3 = 0;
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process )
  {
    v4 = PsGetCurrentProcessWin32Process(v2);
    if ( v4 )
      v4 &= -(__int64)(*(_QWORD *)v4 != 0LL);
    if ( (*(_DWORD *)(v4 + 812) & 0x30) == 0x10 )
      return 1;
  }
  return v3;
}
