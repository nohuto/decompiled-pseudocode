/*
 * XREFs of _lambda_45072801a0d31dffc7965423336b068f_::operator() @ 0x1C00C8570
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00B8D20 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _lambda_45072801a0d31dffc7965423336b068f_::_lambda_invoker_cdecl_ @ 0x1C00C8530 (_lambda_45072801a0d31dffc7965423336b068f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C000AD28 (PDEVOBJ_bDisableHalftoneWrap.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C000B880 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0038C70 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     GreDeleteSemaphore @ 0x1C005B290 (GreDeleteSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C00ACFE8 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00B02B0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00B1994 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_45072801a0d31dffc7965423336b068f_::operator()(__int64 a1, struct PDEV **a2)
{
  struct PDEV *v2; // rcx
  int v4; // r8d
  struct PDEV *v5; // rcx

  v2 = *a2;
  if ( (*((_DWORD *)*a2 + 10) & 0x8000) != 0 )
  {
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
    RemovePDEVFromList(&gppdevListUMPDInCreate, *a2);
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v4);
    GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
    v2 = *a2;
  }
  if ( *((_QWORD *)v2 + 7) )
  {
    GreDeleteSemaphore(*((PERESOURCE *)v2 + 7));
    v2 = *a2;
  }
  if ( *((_QWORD *)v2 + 6) )
  {
    GreDeleteSemaphore(*((PERESOURCE *)v2 + 6));
    v2 = *a2;
  }
  if ( *((_QWORD *)v2 + 445) )
  {
    Win32FreePool(*((_QWORD *)v2 + 445));
    *((_QWORD *)*a2 + 445) = 0LL;
    v2 = *a2;
  }
  if ( *((_QWORD *)v2 + 189) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap();
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)a2);
  v5 = *a2;
  if ( *((_QWORD *)*a2 + 225) )
  {
    if ( !PsIsThreadTerminating(KeGetCurrentThread()) )
      (*((void (__fastcall **)(_QWORD))*a2 + 338))(*((_QWORD *)*a2 + 225));
    *((_QWORD *)*a2 + 225) = 0LL;
    v5 = *a2;
  }
  PDEV::Free(v5);
  *a2 = 0LL;
}
