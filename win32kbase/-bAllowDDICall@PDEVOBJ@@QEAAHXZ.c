__int64 __fastcall PDEVOBJ::bAllowDDICall(PDEVOBJ *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // rax

  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x8000) == 0 )
    return 1;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 1760LL) + 48LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  v1 = 0;
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( v3 == CurrentProcessWin32Process && !KeAreApcsDisabled() )
    return 1;
  return v1;
}
