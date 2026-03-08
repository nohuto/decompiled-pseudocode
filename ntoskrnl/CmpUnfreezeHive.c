/*
 * XREFs of CmpUnfreezeHive @ 0x140A14108
 * Callers:
 *     CmpPerformUnloadKey @ 0x14074A194 (CmpPerformUnloadKey.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A13C04 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140262F00 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140262F30 (CmpDrainDelayDerefContext.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406B7100 (CmpDereferenceKeyControlBlockWithLock.c)
 */

void __fastcall CmpUnfreezeHive(__int64 a1)
{
  ULONG_PTR v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  CmpInitializeDelayDerefContext(&v3);
  v2 = *(_QWORD *)(a1 + 2936);
  *(_BYTE *)(a1 + 2944) = 0;
  if ( v2 )
  {
    CmpDereferenceKeyControlBlockWithLock(v2, (__int64)&v3, 0);
    *(_QWORD *)(a1 + 2936) = 0LL;
  }
  CmpDrainDelayDerefContext((_QWORD **)&v3);
}
