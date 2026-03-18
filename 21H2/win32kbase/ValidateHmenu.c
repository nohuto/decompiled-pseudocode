/*
 * XREFs of ValidateHmenu @ 0x1C0030BB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C0030A98 (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

__int64 __fastcall ValidateHmenu(__int64 a1)
{
  __int64 ThreadWin32Thread; // rdi
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = HMValidateHandle(a1, 2u);
  if ( result )
  {
    if ( *(_QWORD *)(result + 24) != *(_QWORD *)(ThreadWin32Thread + 456) )
    {
      UserSetLastError(1401LL, v4, v5);
      return 0LL;
    }
  }
  return result;
}
