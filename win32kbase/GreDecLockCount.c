/*
 * XREFs of GreDecLockCount @ 0x1C00A0E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreDecLockCount()
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
  {
    result = *(_QWORD *)result;
    if ( result )
      --*(_DWORD *)(result + 104);
  }
  return result;
}
