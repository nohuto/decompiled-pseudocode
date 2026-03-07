union _RTL_RUN_ONCE *MmSessionGetWin32Callouts()
{
  union _RTL_RUN_ONCE *result; // rax

  result = &PsWin32NullCallBack;
  if ( *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25] + 608) >= 2uLL )
    return &PsWin32CallBack;
  return result;
}
