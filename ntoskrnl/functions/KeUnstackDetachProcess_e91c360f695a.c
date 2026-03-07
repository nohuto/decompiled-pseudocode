void __stdcall KeUnstackDetachProcess(PRKAPC_STATE ApcState)
{
  KiUnstackDetachProcess(ApcState, 0LL);
}
