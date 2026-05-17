/*
 * XREFs of TppStopWaitCallbackGeneration @ 0x1800860A0
 * Callers:
 *     <none>
 * Callees:
 *     TppCancelWait @ 0x180011E7C (TppCancelWait.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 */

signed __int64 __fastcall TppStopWaitCallbackGeneration(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v4; // rdi
  volatile signed __int64 *v5; // rsi
  int v7; // ebx
  signed __int64 result; // rax
  unsigned int v9; // ecx
  signed int v10; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 144);
  v5 = (volatile signed __int64 *)(a1 + 240);
  v7 = a2;
  RtlAcquireSRWLockExclusive(a1 + 240, a2, a3, a4);
  TppCancelWait(a1, v4 + 112, v7 != 0 ? 2 : 0, &v10);
  ++*(_BYTE *)(a1 + 355);
  result = RtlReleaseSRWLockExclusive(v5);
  if ( v10 < 0 )
  {
    v9 = -v10;
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, v10);
    if ( (_DWORD)result == v9 )
      return (**(__int64 (__fastcall ***)(__int64))(a1 + 8))(a1);
  }
  return result;
}
