/*
 * XREFs of ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C002B338
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00292E0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00DE208 (_lambda_792d576b28627a5f7e8ec309c675ba6b_--operator().c)
 * Callees:
 *     EngFreeUserMem @ 0x1C0196E00 (EngFreeUserMem.c)
 */

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
