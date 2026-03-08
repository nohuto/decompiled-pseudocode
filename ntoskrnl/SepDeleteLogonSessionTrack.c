/*
 * XREFs of SepDeleteLogonSessionTrack @ 0x1407DAE44
 * Callers:
 *     SepRmInteractiveLogoffLogonSessionWrkr @ 0x140680010 (SepRmInteractiveLogoffLogonSessionWrkr.c)
 *     SepRmDeleteLogonSessionWrkr @ 0x14087B5E0 (SepRmDeleteLogonSessionWrkr.c)
 *     SeInitServerSilo @ 0x1409C5E50 (SeInitServerSilo.c)
 *     SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409CD120 (SepDeleteUnreferencedLogonSessionsInSilo.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     SepDeleteSessionLowboxEntries @ 0x140354B60 (SepDeleteSessionLowboxEntries.c)
 *     ObRevokeHandles @ 0x14067FB30 (ObRevokeHandles.c)
 *     ObDereferenceDeviceMap @ 0x14071E5A4 (ObDereferenceDeviceMap.c)
 *     ObDestroyHandleRevocationBlock @ 0x1407DAD2C (ObDestroyHandleRevocationBlock.c)
 *     SepDeleteLogonSessionClaims @ 0x1407DAFD8 (SepDeleteLogonSessionClaims.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1407DCB7C (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepDeleteLogonSessionSidValues @ 0x1409CC8AC (SepDeleteLogonSessionSidValues.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepDeleteLogonSessionTrack(_DWORD *a1, char a2)
{
  volatile signed __int64 *v4; // rbp
  unsigned __int64 v5; // r8
  struct _EX_RUNDOWN_REF **v6; // r14
  struct _KTHREAD *CurrentThread; // rax
  struct _ERESOURCE *v8; // rdi
  struct _EX_RUNDOWN_REF *i; // rbx
  unsigned __int64 Count; // rcx
  volatile signed __int64 *v11; // rax
  void *Ptr; // rcx
  void *v13; // rcx
  unsigned int v15; // ebx

  v4 = 0LL;
  v5 = (unsigned __int64)(unsigned int)(1529154084 * *a1) >> 28;
  v6 = (struct _EX_RUNDOWN_REF **)(SepLogonSessions + 8 * v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = &SepRmDbLock + (v5 & 3);
  ExAcquireResourceExclusiveLite(v8, 1u);
  for ( i = *v6; ; i = (struct _EX_RUNDOWN_REF *)i->Count )
  {
    if ( !i )
    {
      v15 = -1073741729;
      goto LABEL_26;
    }
    if ( i[20].Count == PsGetCurrentServerSilo() && *a1 == LODWORD(i[1].Count) && a1[1] == HIDWORD(i[1].Ptr) )
      break;
    v6 = (struct _EX_RUNDOWN_REF **)i;
  }
  if ( a2 )
  {
    LODWORD(i[4].Count) |= 0x10u;
    ObRevokeHandles(&i[16].Count);
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
  Count = i[3].Count;
  if ( !Count || (i[4].Count & 8) == 0 && Count == 1 )
  {
    *v6 = (struct _EX_RUNDOWN_REF *)i->Count;
    v11 = (volatile signed __int64 *)i[5].Count;
    if ( v11 )
    {
      i[5].Count = 0LL;
      v4 = v11;
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v4 )
    {
      SepCleanupLUIDDeviceMapDirectory(a1, i[20].Count);
      ObDereferenceDeviceMap(v4, 1u);
    }
    Ptr = i[20].Ptr;
    if ( Ptr )
      ObfDereferenceObjectWithTag(Ptr, 0x734C6553u);
    v13 = i[8].Ptr;
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
    SepDeleteLogonSessionClaims(i);
    if ( SepTokenSidSharingEnabled )
      SepDeleteLogonSessionSidValues(i);
    ObDestroyHandleRevocationBlock(i + 16);
    ExFreePoolWithTag(i, 0);
    SepDeleteSessionLowboxEntries();
    return 0LL;
  }
  v15 = -1073741564;
LABEL_26:
  ExReleaseResourceLite(v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v15;
}
