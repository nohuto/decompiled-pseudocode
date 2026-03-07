void __fastcall PDEVOBJ::vDeleteHTPATSIZEUSERAllocations(PDEVOBJ *this)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v2 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v2 + 40) & 0x400000) != 0 )
  {
    v3 = *(_QWORD *)(*(_QWORD *)(v2 + 1760) + 48LL);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( v3 == CurrentProcessWin32Process )
    {
      EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2384LL));
      EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2392LL));
      EngFreeUserMem(*(PVOID *)(*(_QWORD *)this + 2400LL));
    }
  }
}
