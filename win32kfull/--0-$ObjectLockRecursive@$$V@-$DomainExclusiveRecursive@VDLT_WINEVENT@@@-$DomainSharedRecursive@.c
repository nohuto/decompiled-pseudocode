/*
 * XREFs of ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C01B3F78
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D34C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     ?lock@?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@AEAAXXZ @ 0x1C01B4154 (-lock@-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursi.c)
 */

__int64 __fastcall DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(
        __int64 a1)
{
  unsigned int DLT; // eax
  __int64 DomainLockRef; // rax

  DLT = DLT_WINEVENT::getDLT();
  DomainLockRef = GetDomainLockRef(DLT);
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = DomainLockRef;
  *(_QWORD *)(a1 + 16) = gDomainDummyLock;
  *(_BYTE *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
  DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::lock(a1);
  return a1;
}
