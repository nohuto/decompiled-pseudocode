/*
 * XREFs of DereferenceW32ProcessEx @ 0x1C00E434C
 * Callers:
 *     W32pProcessCallout @ 0x1C00E3DA0 (W32pProcessCallout.c)
 *     DereferenceW32Process @ 0x1C00E56D0 (DereferenceW32Process.c)
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
