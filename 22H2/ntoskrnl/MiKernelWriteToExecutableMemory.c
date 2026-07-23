/*
 * XREFs of MiKernelWriteToExecutableMemory @ 0x1405488F4
 * Callers:
 *     MiValidFault @ 0x140209710 (MiValidFault.c)
 * Callees:
 *     MiRelockFaultState @ 0x140285928 (MiRelockFaultState.c)
 *     MmIsAddressValidEx @ 0x14028CB70 (MmIsAddressValidEx.c)
 *     MiReleaseFaultState @ 0x14028FB74 (MiReleaseFaultState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     NtWaitLowEventPair @ 0x140726130 (NtWaitLowEventPair.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C42F4 (MiForceCrashForInvalidAccess.c)
 */

__int64 __fastcall MiKernelWriteToExecutableMemory(__int64 a1, __int64 a2, ULONG_PTR a3)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // r12
  __int64 v10; // rbp
  HANDLE v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // r8
  _DWORD *v16; // r9

  v6 = *(_QWORD *)(a3 + 1680);
  v7 = a1 + 56;
  v8 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = *(_QWORD *)(v6 + 616);
  v10 = MiReleaseFaultState(a1 + 56, 0x11u, 0LL);
  if ( NtWaitLowEventPair(v11) >= 0 )
  {
    MiRelockFaultState(v7, v10, v12, v13);
    if ( v9 == *(_QWORD *)(v6 + 616) && ((*(_BYTE *)(a1 + 69) & 1) == 0 || MmIsAddressValidEx(v8)) )
      return ((a2 ^ MI_READ_PTE_LOCK_FREE(v8)) & 0xFFFFFFFFFFFFFFDFuLL) != 0 ? 0xC0000434 : 0;
    else
      return (unsigned int)-1073740748;
  }
  else
  {
    MiForceCrashForInvalidAccess(a3);
    v14 = -1073739997;
    MiRelockFaultState(v7, v10, v15, v16);
  }
  return v14;
}
