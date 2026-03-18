/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C006D130
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$ObjectLockRecursive@$$V@?$DomainExclusiveRecursive@VDLT_WINEVENT@@@?$DomainSharedRecursive@$$V@@QEAA@XZ @ 0x1C006D1B8 (--0-$ObjectLockRecursive@$$V@-$DomainExclusiveRecursive@VDLT_WINEVENT@@@-$DomainSharedRecursive@.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  PERESOURCE *v2; // [rsp+20h] [rbp-48h] BYREF
  char v3; // [rsp+48h] [rbp-20h]

  if ( qword_1C029C4F8 && (int)qword_1C029C4F8() >= 0 )
  {
    DomainSharedRecursive<>::DomainExclusiveRecursive<DLT_WINEVENT>::ObjectLockRecursive<>::ObjectLockRecursive<>(&v2);
    if ( qword_1C029C500 )
      qword_1C029C500(a1);
    if ( v3 )
    {
      if ( v2 )
        ExReleaseResourceAndLeaveCriticalRegion(*v2);
    }
  }
}
