__int64 GreIncNonRBLockCount()
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
  {
    result = *(_QWORD *)result;
    if ( result )
      ++*(_DWORD *)(result + 108);
  }
  return result;
}
