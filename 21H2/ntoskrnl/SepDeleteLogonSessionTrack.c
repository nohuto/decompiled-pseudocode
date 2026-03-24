/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x14077A670
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x14077A420 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x14077B0E0 (SepRmDeleteLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x14091C0D4 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409237CC (SepDeleteUnreferencedLogonSessionsInSilo.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     SepDeleteSessionLowboxEntries @ 0x1402BDDF4 (SepDeleteSessionLowboxEntries.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     ObfDereferenceDeviceMap @ 0x140625534 (ObfDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x1406A5884 (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x1406A58F0 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406A5914 (SepCleanupLUIDDeviceMapDirectory.c)
 *     ObRevokeHandles @ 0x14077989C (ObRevokeHandles.c)
 *     SepDeleteLogonSessionSidValues @ 0x140922FA8 (SepDeleteLogonSessionSidValues.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  void *v2; // rsi
  __int64 v5; // r8
  _DWORD **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  _DWORD *i; // rbx
  __int64 v12; // rcx
  void *v13; // rax
  void *v14; // rcx
  void *v15; // rcx
  unsigned int v17; // ebx

  v2 = 0LL;
  v5 = (unsigned int)(1529154084 * *a1) >> 28;
  v6 = (_DWORD **)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = *(_DWORD **)i )
  {
    if ( !i )
    {
      v17 = -1073741729;
      goto LABEL_26;
    }
    if ( *((_QWORD *)i + 20) == PsGetCurrentServerSilo(v10, v9) && *a1 == i[2] && a1[1] == i[3] )
      break;
    v6 = (_DWORD **)i;
  }
  if ( a2 )
  {
    i[8] |= 0x10u;
    ObRevokeHandles((_QWORD **)i + 16);
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    return 0LL;
  }
  v12 = *((_QWORD *)i + 3);
  if ( !v12 || (i[8] & 8) == 0 && v12 == 1 )
  {
    *v6 = *(_DWORD **)i;
    v13 = (void *)*((_QWORD *)i + 5);
    if ( v13 )
    {
      *((_QWORD *)i + 5) = 0LL;
      v2 = v13;
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegion();
    if ( v2 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, *((struct _LIST_ENTRY **)i + 20));
      ObfDereferenceDeviceMap(v2);
    }
    v14 = (void *)*((_QWORD *)i + 20);
    if ( v14 )
      ObfDereferenceObjectWithTag(v14, 0x734C6553u);
    v15 = (void *)*((_QWORD *)i + 8);
    if ( v15 )
      ExFreePoolWithTag(v15, 0);
    SepDeleteLogonSessionClaims((__int64)i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock((struct _EX_RUNDOWN_REF *)i + 16);
    ExFreePoolWithTag(i, 0);
    SepDeleteSessionLowboxEntries();
    return 0LL;
  }
  v17 = -1073741564;
LABEL_26:
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegion();
  return v17;
}
