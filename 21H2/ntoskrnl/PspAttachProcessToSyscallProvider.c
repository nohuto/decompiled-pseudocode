/*
 * XREFs of PspAttachProcessToSyscallProvider @ 0x1406595AC
 * Callers:
 *     PspInheritSyscallProvider @ 0x1406598AC (PspInheritSyscallProvider.c)
 *     PspSyscallProviderOptIn @ 0x140659AD4 (PspSyscallProviderOptIn.c)
 * Callees:
 *     PspLockSyscallProviderExclusive @ 0x140419E30 (PspLockSyscallProviderExclusive.c)
 *     PspUnlockSyscallProviderExclusive @ 0x140419F18 (PspUnlockSyscallProviderExclusive.c)
 */

void __fastcall PspAttachProcessToSyscallProvider(_QWORD *a1, __int64 a2, unsigned int a3)
{
  _QWORD *v5; // rdx
  _QWORD *v6; // rax

  if ( _InterlockedIncrement64((volatile signed __int64 *)(a2 + 48)) <= 1 )
    __fastfail(0xEu);
  a1[362] = a2;
  a1[365] = *(_QWORD *)(a2 + 8LL * a3 + 88);
  PspLockSyscallProviderExclusive(a2);
  v5 = *(_QWORD **)(a2 + 80);
  v6 = a1 + 363;
  if ( *v5 != a2 + 72 )
    __fastfail(3u);
  *v6 = a2 + 72;
  a1[364] = v5;
  *v5 = v6;
  *(_QWORD *)(a2 + 80) = v6;
  PspUnlockSyscallProviderExclusive(a2);
}
