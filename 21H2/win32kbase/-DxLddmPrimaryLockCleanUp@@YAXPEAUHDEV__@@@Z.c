/*
 * XREFs of ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C0074EDC
 * Callers:
 *     GreSuspendDirectDraw @ 0x1C0074F80 (GreSuspendDirectDraw.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     hdevEnumerate @ 0x1C006FCD0 (hdevEnumerate.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0072044 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0075534 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DxLddmPrimaryLockCleanUp(HDEV a1)
{
  int v2; // edx
  int v3; // r8d
  int v4; // eax
  __int64 v5; // rcx
  struct PDEV **i; // rcx
  int v7; // eax
  struct PDEV *v8; // rax
  struct PDEV *v9; // rbx
  HDEV v10; // [rsp+30h] [rbp+8h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  v10 = a1;
  if ( a1 )
  {
    v4 = *((_DWORD *)a1 + 10);
    if ( (v4 & 1) != 0 )
    {
      if ( (v4 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = (struct PDEV **)v9 )
        {
          v8 = hdevEnumerate(i, v2, v3);
          v9 = v8;
          if ( !v8 )
            break;
          v7 = *((_DWORD *)v8 + 10);
          v10 = (HDEV)v9;
          if ( (v7 & 0x20000) == 0
            && (v7 & 1) != 0
            && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10)
            && *((HDEV *)v9 + 3) == a1 )
          {
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v10);
          }
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v10) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v10);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v5);
  }
}
