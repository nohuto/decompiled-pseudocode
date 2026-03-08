/*
 * XREFs of PdcAcquireRwLockExclusive2 @ 0x140857778
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x140857554 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2pActivationClientCallback @ 0x1409C5AA0 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *__fastcall PdcAcquireRwLockExclusive2(__int64 a1, _BYTE *a2)
{
  NTSTATUS v4; // eax
  struct _KTHREAD *result; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout.QuadPart = -600000000LL;
  if ( a2 )
    *a2 = 0;
  while ( 1 )
  {
    v4 = KeWaitForSingleObject(*(PVOID *)a1, Executive, 0, 0, &Timeout);
    if ( !v4 )
      break;
    if ( v4 != 258 )
      __fastfail(5u);
  }
  if ( a2 )
    *a2 = 1;
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 16)) == 1 )
    *(_QWORD *)(a1 + 8) = KeGetCurrentThread();
  result = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(a1 + 8) != result )
    __fastfail(0x28u);
  return result;
}
