/*
 * XREFs of ??0?$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C0164348
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C010D880 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>(
        __int64 a1)
{
  unsigned int DLT; // eax
  PERESOURCE *DomainLockRef; // rax

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = (PERESOURCE *)GetDomainLockRef(DLT);
  *(_QWORD *)a1 = DomainLockRef;
  *(_BYTE *)(a1 + 8) = 0;
  if ( DomainLockRef == (PERESOURCE *)gDomainDummyLock )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 444LL);
    DomainLockRef = *(PERESOURCE **)a1;
  }
  if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
    *(_BYTE *)(a1 + 8) = 1;
  else
    tagDomLock::LockExclusive(*(tagDomLock **)a1);
  return a1;
}
