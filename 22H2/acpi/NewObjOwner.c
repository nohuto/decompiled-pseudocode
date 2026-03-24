/*
 * XREFs of NewObjOwner @ 0x1C0023628
 * Callers:
 *     ParseLoad @ 0x1C0023470 (ParseLoad.c)
 *     InitializeNativeNamespace @ 0x1C0023AF0 (InitializeNativeNamespace.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C00645A0 (AMLIRemoveNativeObjectsFromNamespace.c)
 *     NotifyObjectDestruction @ 0x1C00655B8 (NotifyObjectDestruction.c)
 *     AMLIInitialize @ 0x1C00BCD10 (AMLIInitialize.c)
 * Callees:
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     memset @ 0x1C0032480 (memset.c)
 */

__int64 __fastcall NewObjOwner(struct _SLIST_ENTRY *a1, struct _EX_RUNDOWN_REF **a2)
{
  unsigned int v3; // ebx
  struct _EX_RUNDOWN_REF *v4; // rax
  KIRQL v5; // al
  struct _EX_RUNDOWN_REF **v6; // rcx
  struct _EX_RUNDOWN_REF *v7; // rax

  v3 = 0;
  v4 = (struct _EX_RUNDOWN_REF *)HeapAlloc(a1, 1314344776, 0x40u);
  *a2 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x40uLL);
    LODWORD((*a2)[2].Count) = 1380865871;
    ExInitializeRundownProtection(*a2 + 4);
    KeInitializeSpinLock(&(*a2)[5].Count);
    v5 = KeAcquireSpinLockRaiseToDpc(&gmutOwnerList);
    v6 = (struct _EX_RUNDOWN_REF **)off_1C007F398;
    byte_1C0082FF0 = v5;
    v7 = *a2;
    if ( *(_UNKNOWN ***)off_1C007F398 != &glistObjOwners )
      __fastfail(3u);
    v7[1].Count = (unsigned __int64)off_1C007F398;
    v7->Count = (unsigned __int64)&glistObjOwners;
    *v6 = v7;
    off_1C007F398 = v7;
    KeReleaseSpinLock(&gmutOwnerList, byte_1C0082FF0);
  }
  else
  {
    LogError(3221225626LL);
    AcpiDiagTraceAmlError(0LL, 3221225626LL);
    PrintDebugMessage(113, 0, 0, 0, 0LL);
    return (unsigned int)-1073741670;
  }
  return v3;
}
