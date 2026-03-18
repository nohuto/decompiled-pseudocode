/*
 * XREFs of PspDetachProcessFromSyscallProvider @ 0x140659708
 * Callers:
 *     PspProcessDelete @ 0x1407E0F30 (PspProcessDelete.c)
 * Callees:
 *     PspDereferenceSyscallProvider @ 0x140419D6C (PspDereferenceSyscallProvider.c)
 *     PspLockSyscallProviderExclusive @ 0x140419E30 (PspLockSyscallProviderExclusive.c)
 *     PspUnlockSyscallProviderExclusive @ 0x140419F18 (PspUnlockSyscallProviderExclusive.c)
 */

__int64 __fastcall PspDetachProcessFromSyscallProvider(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 **v3; // rcx
  __int64 result; // rax

  PspLockSyscallProviderExclusive(a1[362]);
  v2 = a1[363];
  if ( *(__int64 **)(v2 + 8) != a1 + 363 || (v3 = (__int64 **)a1[364], *v3 != a1 + 363) )
    __fastfail(3u);
  *v3 = (__int64 *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  PspUnlockSyscallProviderExclusive(a1[362]);
  result = PspDereferenceSyscallProvider((volatile signed __int64 *)a1[362]);
  a1[362] = 0LL;
  return result;
}
