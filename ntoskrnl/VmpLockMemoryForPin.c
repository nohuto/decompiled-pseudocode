/*
 * XREFs of VmpLockMemoryForPin @ 0x1409DA418
 * Callers:
 *     VmpMergeMemoryRanges @ 0x1405F7BB4 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRange @ 0x1405F7F20 (VmpPinMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x1405F8CA0 (VmpSplitMemoryRange.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     MmSecureVirtualMemoryEx @ 0x140769030 (MmSecureVirtualMemoryEx.c)
 *     MmUnsecureVirtualMemory @ 0x1407D48C0 (MmUnsecureVirtualMemory.c)
 *     MmLockPhysicalPagesByVa @ 0x140A2AA04 (MmLockPhysicalPagesByVa.c)
 */

__int64 __fastcall VmpLockMemoryForPin(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  BOOL v8; // r14d
  _KPROCESS *Process; // rsi
  int v10; // ebx
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // rax
  void *v14; // rsi

  v8 = a4 != 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    return (unsigned int)-1073741558;
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  if ( (*(_BYTE *)(a1 + 106) & 1) != 0 )
  {
    v10 = -1073741558;
    goto LABEL_11;
  }
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 96)) )
  {
    v11 = a3 << 12;
    v12 = a2 << 12;
    v13 = MmSecureVirtualMemoryEx(v12, v11, 1u, 10);
    v14 = (void *)v13;
    if ( v13 )
    {
      v10 = MmLockPhysicalPagesByVa(v12, v11, v13, v8);
      if ( v10 >= 0 )
      {
        v10 = 0;
        *a5 = v14;
        return (unsigned int)v10;
      }
      MmUnsecureVirtualMemory(v14);
    }
    else
    {
      v10 = -1073741670;
    }
LABEL_11:
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 96));
    return (unsigned int)v10;
  }
  return (unsigned int)-1073741558;
}
