/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C005CBC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C005CC48 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  PERESOURCE *v2; // [rsp+20h] [rbp-48h] BYREF
  char v3; // [rsp+48h] [rbp-20h]

  if ( qword_1C0295BC8 && (int)qword_1C0295BC8() >= 0 )
  {
    DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v2);
    if ( qword_1C0295BD0 )
      qword_1C0295BD0(a1);
    if ( v3 )
    {
      if ( v2 )
        ExReleaseResourceAndLeaveCriticalRegion(*v2);
    }
  }
}
