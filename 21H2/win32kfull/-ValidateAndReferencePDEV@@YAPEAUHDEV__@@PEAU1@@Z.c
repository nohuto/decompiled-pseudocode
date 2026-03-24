/*
 * XREFs of ?ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C016D7FC
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

HDEV __fastcall ValidateAndReferencePDEV(HDEV a1)
{
  HDEV i; // rbx
  HDEV v4; // [rsp+38h] [rbp+10h] BYREF

  GreAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
  for ( i = (HDEV)gppdevList; i; i = *(HDEV *)i )
  {
    v4 = i;
    if ( i == a1 )
    {
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v4);
      break;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  GreReleaseSemaphoreInternal(ghsemDriverMgmt);
  return i;
}
