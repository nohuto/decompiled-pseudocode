/*
 * XREFs of LdrProtectMrdataHeap @ 0x18000EED4
 * Callers:
 *     RtlpProtectReadOnlyHeap @ 0x18010B16C (RtlpProtectReadOnlyHeap.c)
 * Callees:
 *     RtlProtectHeap @ 0x18000E0E0 (RtlProtectHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     LdrControlFlowGuardEnforced @ 0x180033520 (LdrControlFlowGuardEnforced.c)
 */

void __fastcall LdrProtectMrdataHeap(int a1)
{
  int v2; // eax
  int v3; // ebx
  int v4; // ebx

  LOBYTE(v2) = LdrControlFlowGuardEnforced();
  if ( !v2 )
    return;
  RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
  v3 = *(_DWORD *)LdrpMrdataHeapUnprotected;
  if ( a1 )
  {
    if ( v3 )
    {
      v4 = v3 - 1;
      goto LABEL_7;
    }
LABEL_14:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  if ( !v3 )
    RtlProtectHeap(LdrpMrdataHeap, 0);
  if ( v3 == -1 )
    goto LABEL_14;
  v4 = v3 + 1;
LABEL_7:
  *(_DWORD *)LdrpMrdataHeapUnprotected = v4;
  if ( a1 )
  {
    if ( !v4 )
      RtlProtectHeap(LdrpMrdataHeap, 1u);
  }
  RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
}
