BOOLEAN __stdcall KeSetKernelStackSwapEnable(BOOLEAN Enable)
{
  struct _KTHREAD *CurrentThread; // rdx
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  result = (*((_DWORD *)&CurrentThread->0 + 1) & 0x40) != 0;
  if ( Enable != result )
  {
    if ( Enable )
      _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
    else
      _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 6u);
  }
  return result;
}
