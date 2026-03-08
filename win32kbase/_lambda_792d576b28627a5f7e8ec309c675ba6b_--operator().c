/*
 * XREFs of _lambda_792d576b28627a5f7e8ec309c675ba6b_::operator() @ 0x1C00DE208
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0025090 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _lambda_792d576b28627a5f7e8ec309c675ba6b_::_lambda_invoker_cdecl_ @ 0x1C00DE1F0 (_lambda_792d576b28627a5f7e8ec309c675ba6b_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     GreDeleteSemaphore @ 0x1C002AF30 (GreDeleteSemaphore.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C002B338 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C002B370 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C004B6D0 (GreReleaseSemaphoreInternal.c)
 *     Win32FreePool @ 0x1C0070430 (Win32FreePool.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C009DCB8 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00D2230 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C0271688 (PDEVOBJ_bDisableHalftoneWrap.c)
 */

void __fastcall lambda_792d576b28627a5f7e8ec309c675ba6b_::operator()(__int64 a1, struct PDEV **a2)
{
  __int64 v3; // rbx
  struct _ERESOURCE *v4; // rcx
  char *v5; // rcx

  if ( (*((_DWORD *)*a2 + 10) & 0x8000) != 0 )
  {
    v3 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
    EngAcquireSemaphore(*(HSEMAPHORE *)(v3 + 8));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v3 + 8), 16);
    RemovePDEVFromList((struct PDEV **)(v3 + 6072), *a2);
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v3 + 8));
    GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(v3 + 8));
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)*a2 + 6);
  if ( v4 )
    GreDeleteSemaphore(v4);
  v5 = (char *)*((_QWORD *)*a2 + 445);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)*a2 + 445) = 0LL;
  }
  if ( *((_QWORD *)*a2 + 188) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap(a2);
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)a2);
  if ( *((_QWORD *)*a2 + 221) )
  {
    if ( !PsIsThreadTerminating(KeGetCurrentThread()) )
      (*((void (__fastcall **)(_QWORD))*a2 + 335))(*((_QWORD *)*a2 + 221));
    *((_QWORD *)*a2 + 221) = 0LL;
  }
  PDEV::Free(*a2);
  *a2 = 0LL;
}
