/*
 * XREFs of GreDecNonRBLockCount @ 0x1C00B0E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 GreDecNonRBLockCount()
{
  __int64 result; // rax

  result = PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( result )
  {
    result = *(_QWORD *)result;
    if ( result )
      --*(_DWORD *)(result + 108);
  }
  return result;
}
