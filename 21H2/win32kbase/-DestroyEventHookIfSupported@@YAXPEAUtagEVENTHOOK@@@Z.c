/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C00A1B20
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00A1B90 (--0-$CLockDomainExclusiveAllowRecursionInUserCrit@VDLT_WINEVENT@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  int v2; // eax
  PERESOURCE *v3; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+28h] [rbp-10h]

  if ( qword_1C02577A8 )
    v2 = qword_1C02577A8();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>::CLockDomainExclusiveAllowRecursionInUserCrit<DLT_WINEVENT>(&v3);
    if ( qword_1C02577B0 )
      qword_1C02577B0(a1);
    if ( !v4 )
      ExReleaseResourceAndLeaveCriticalRegion(*v3);
  }
}
