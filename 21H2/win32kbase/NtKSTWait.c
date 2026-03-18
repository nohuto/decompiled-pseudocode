/*
 * XREFs of NtKSTWait @ 0x1C00C6110
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     UserKSTWait @ 0x1C00C6144 (UserKSTWait.c)
 */

__int64 NtKSTWait()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  unsigned int v3; // ebx

  v3 = 0;
  if ( CInputThreadBase::IsInputThread(gpKernelSensorThread) )
    return (unsigned int)UserKSTWait();
  else
    UserSetLastError(5LL, v0, v1, v2);
  return v3;
}
