/*
 * XREFs of RtlUnlockMemoryZone @ 0x18005E400
 * Callers:
 *     RtlUnlockMemoryBlockLookaside @ 0x18005E3A0 (RtlUnlockMemoryBlockLookaside.c)
 *     RtlLockMemoryBlockLookaside @ 0x18005E980 (RtlLockMemoryBlockLookaside.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpUnregisterLockedMemoryZone @ 0x18005E494 (RtlpUnregisterLockedMemoryZone.c)
 *     ZwUnlockVirtualMemory @ 0x1800A0E70 (ZwUnlockVirtualMemory.c)
 */

__int64 __fastcall RtlUnlockMemoryZone(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD *i; // rdi
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = (volatile signed __int64 *)(a1 + 32);
  RtlAcquireSRWLockExclusive(a1 + 32, a2, a3, a4);
  v6 = *(_DWORD *)(a1 + 40);
  v7 = 0;
  if ( v6 )
  {
    v8 = v6 - 1;
    *(_DWORD *)(a1 + 40) = v8;
    if ( !v8 )
    {
      for ( i = *(_QWORD **)(a1 + 48); i; i = (_QWORD *)*i )
      {
        v12 = i;
        v11 = i[1];
        ZwUnlockVirtualMemory(-1LL, &v12, &v11, 1LL);
      }
      RtlpUnregisterLockedMemoryZone();
    }
  }
  else
  {
    v7 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(v4);
  return v7;
}
