/*
 * XREFs of ?DxgkThreadPsTslCallback@@YAXPEAX@Z @ 0x1C01D1F50
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxgkThreadPsTslCallback(volatile signed __int32 *a1)
{
  int v1; // eax
  __int64 v2; // rbx

  --dword_1C013B3E8;
  v1 = _InterlockedDecrement(a1 + 2);
  if ( v1 )
  {
    if ( v1 < 0 )
    {
      v2 = v1;
      WdLogSingleEntry1(2LL, v1);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Client is trying to release a destroyed object (ref count = %I64d)!",
        v2,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  else if ( a1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *, __int64))a1)(a1, 1LL);
  }
}
