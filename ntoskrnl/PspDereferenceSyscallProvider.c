/*
 * XREFs of PspDereferenceSyscallProvider @ 0x1405A27AC
 * Callers:
 *     PsUnregisterSyscallProvider @ 0x1409B18B0 (PsUnregisterSyscallProvider.c)
 *     PspDetachProcessFromSyscallProvider @ 0x1409B1B48 (PspDetachProcessFromSyscallProvider.c)
 *     PspInsertSyscallProvider @ 0x1409B1D44 (PspInsertSyscallProvider.c)
 *     PspSyscallProviderOptIn @ 0x1409B1F2C (PspSyscallProviderOptIn.c)
 * Callees:
 *     PspDestroySyscallProvider @ 0x1409B1A30 (PspDestroySyscallProvider.c)
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
