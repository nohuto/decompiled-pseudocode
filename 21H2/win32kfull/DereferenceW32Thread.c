/*
 * XREFs of DereferenceW32Thread @ 0x1C00C4F00
 * Callers:
 *     FreeW32Thread @ 0x1C00C4EBC (FreeW32Thread.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00C5360 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 */

LONG_PTR __fastcall DereferenceW32Thread(_QWORD *a1)
{
  struct _KTHREAD *v1; // rsi
  void *ThreadWin32Thread; // rbx

  v1 = (struct _KTHREAD *)*a1;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 2, 0xFFFFFFFF) == 1 )
  {
    if ( UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost() )
    {
      ThreadWin32Thread = (void *)PsGetThreadWin32Thread(v1);
      PsSetThreadWin32Thread(*a1, 0LL, ThreadWin32Thread);
      Win32FreePool(a1);
      ExFreePoolWithTag(ThreadWin32Thread, 0);
    }
    else
    {
      UserDeleteW32Thread(a1);
    }
    if ( v1 == KeGetCurrentThread() )
      RemoveW32TlsData();
  }
  return ObfDereferenceObject(v1);
}
