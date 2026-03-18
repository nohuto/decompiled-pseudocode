/*
 * XREFs of _lambda_27fa0b678d056c4f62e221b84b7517f7_::operator() @ 0x1C00D97C0
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00C8640 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     _lambda_27fa0b678d056c4f62e221b84b7517f7_::_lambda_invoker_cdecl_ @ 0x1C00D9720 (_lambda_27fa0b678d056c4f62e221b84b7517f7_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     Win32FreePool @ 0x1C0026670 (Win32FreePool.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C002E950 (GreReleaseSemaphoreInternal.c)
 *     GreDeleteSemaphore @ 0x1C0044F30 (GreDeleteSemaphore.c)
 *     ?RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z @ 0x1C0074C40 (-RemovePDEVFromList@@YAXPEAPEAVPDEV@@PEAV1@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?Free@PDEV@@SAXPEAV1@H@Z @ 0x1C00C11F0 (-Free@PDEV@@SAXPEAV1@H@Z.c)
 *     IsPDEVOBJ_bDisableHalftoneSupported @ 0x1C00C1998 (IsPDEVOBJ_bDisableHalftoneSupported.c)
 *     ?vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ @ 0x1C00C19C4 (-vDeleteHTPATSIZEUSERAllocations@PDEVOBJ@@QEAAXXZ.c)
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C00C2564 (PDEVOBJ_bDisableHalftoneWrap.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_27fa0b678d056c4f62e221b84b7517f7_::operator()(__int64 a1, struct PDEV **a2)
{
  struct PDEV *v2; // rcx
  int v4; // r8d
  __int64 v5; // r8
  struct PDEV *v6; // rcx

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
  if ( *((_QWORD *)v2 + 6) )
  {
    GreDeleteSemaphore(*((PERESOURCE *)v2 + 6));
    v2 = *a2;
  }
  if ( *((_QWORD *)v2 + 442) )
  {
    Win32FreePool(*((char **)v2 + 442));
    *((_QWORD *)*a2 + 442) = 0LL;
    v2 = *a2;
  }
  if ( *((_QWORD *)v2 + 188) && (int)IsPDEVOBJ_bDisableHalftoneSupported() >= 0 )
    PDEVOBJ_bDisableHalftoneWrap((__int64)a2);
  PDEVOBJ::vDeleteHTPATSIZEUSERAllocations((PDEVOBJ *)a2);
  v6 = *a2;
  if ( *((_QWORD *)*a2 + 221) )
  {
    if ( !PsIsThreadTerminating(KeGetCurrentThread()) )
      (*((void (__fastcall **)(_QWORD))*a2 + 335))(*((_QWORD *)*a2 + 221));
    *((_QWORD *)*a2 + 221) = 0LL;
    v6 = *a2;
  }
  PDEV::Free(v6, *((_DWORD *)v6 + 10) & 0x8000, v5);
  *a2 = 0LL;
}
