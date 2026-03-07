void __fastcall WatchDogBugCheckMachine(struct RawInputManagerObject *a1, ULONG_PTR a2, ULONG_PTR a3)
{
  if ( !PsGetProcessDebugPort(*((_QWORD *)a1 + 4)) && !(unsigned int)IsKernelDebuggerEnabled() )
    KeBugCheckEx(0x164u, a2, a3, 0LL, 0LL);
}
