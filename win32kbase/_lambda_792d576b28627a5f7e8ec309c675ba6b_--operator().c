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
