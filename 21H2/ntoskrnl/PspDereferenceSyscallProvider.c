/*
 * XREFs of PspDereferenceSyscallProvider @ 0x140419D6C
 * Callers:
 *     PsUnregisterSyscallProvider @ 0x140659570 (PsUnregisterSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x140659708 (PspDetachProcessFromSyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x14065994C (PspInsertSyscallProvider.c)
 *     PspSyscallProviderOptIn @ 0x140659AD4 (PspSyscallProviderOptIn.c)
 * Callees:
 *     PspDestroySyscallProvider @ 0x1406596A0 (PspDestroySyscallProvider.c)
 */

__int64 __fastcall PspDereferenceSyscallProvider(volatile signed __int64 *a1)
{
  signed __int64 v1; // rax
  bool v2; // cc
  __int64 result; // rax

  v1 = _InterlockedExchangeAdd64(a1 + 6, 0xFFFFFFFFFFFFFFFFuLL);
  v2 = v1 <= 1;
  result = v1 - 1;
  if ( v2 )
  {
    if ( result )
      __fastfail(0xEu);
    return PspDestroySyscallProvider((PVOID)a1);
  }
  return result;
}
