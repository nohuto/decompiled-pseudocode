/*
 * XREFs of DereferenceW32ProcessEx @ 0x1C00CA980
 * Callers:
 *     DereferenceW32Process @ 0x1C00CA570 (DereferenceW32Process.c)
 *     W32pProcessCallout @ 0x1C00CA590 (W32pProcessCallout.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall DereferenceW32ProcessEx(volatile signed __int32 *a1, int a2)
{
  void *v2; // rdi

  v2 = *(void **)a1;
  if ( _InterlockedExchangeAdd(a1 + 2, 0xFFFFFFFF) == 1 )
  {
    if ( a2 )
    {
      if ( a2 == 1 )
        UserDeleteW32Process();
    }
    else
    {
      PsSetProcessWin32Process(*(_QWORD *)a1, 0LL, a1);
      Win32FreePool((void *)a1);
    }
  }
  return ObfDereferenceObject(v2);
}
