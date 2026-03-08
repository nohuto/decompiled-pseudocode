/*
 * XREFs of PipCslUpdateState @ 0x14079BB30
 * Callers:
 *     PipCslStateChangeCallback @ 0x14079BB00 (PipCslStateChangeCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PipCslUpdateState(__int32 a1)
{
  __int64 result; // rax
  __int32 v2; // ecx

  result = (unsigned int)_InterlockedExchange(&PipCslConsoleLockState, a1);
  if ( (_DWORD)result != a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        __fastfail(5u);
    }
    else
    {
      result = (__int64)PipCslUnlockCallback;
      if ( PipCslUnlockCallback )
        return PipCslUnlockCallback();
    }
  }
  return result;
}
