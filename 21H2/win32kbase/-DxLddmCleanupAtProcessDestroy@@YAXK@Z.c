/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0010D28
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C007D6C8 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     hdevEnumerate @ 0x1C0010E40 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0011060 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockDisplayDevice @ 0x1C00110B0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00110F0 (GreUnlockDisplayDevice.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C001113C (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     GreUnlockVisRgn @ 0x1C0038AB0 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0038BD8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0038CD0 (GreLockVisRgn.c)
 *     GreLockSprite @ 0x1C003BAF0 (GreLockSprite.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C014982C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  HDEV v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  void (__fastcall *v6)(__int64, __int64); // rsi
  __int64 v7; // rbx
  __int64 CurrentProcess; // rax
  __int64 v9; // rbx
  HDEV v10; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10);
  v2 = (HDEV)hdevEnumerate(0LL);
  if ( v2 )
  {
    do
    {
      v3 = *((_DWORD *)v2 + 10);
      v10 = v2;
      if ( (v3 & 0x20000) == 0 && (v3 & 1) != 0 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v10) )
      {
        GreLockVisRgn(v2);
        GreLockSprite(v2);
        GreLockDisplayDevice(v2);
        DxLddmPrimaryLockProcessDestroy(v2, a1, &v11);
        v6 = (void (__fastcall *)(__int64, __int64))*((_QWORD *)v2 + 332);
        if ( v6 )
        {
          v7 = *((_QWORD *)v2 + 225);
          CurrentProcess = PsGetCurrentProcess(v5, v4);
          v6(v7, CurrentProcess);
        }
        else
        {
          v9 = WdLogNewEntry5_WdError();
          *(_QWORD *)(v9 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
          WdLogEvent5_WdError(v9);
        }
        GreUnlockDisplayDevice(v2);
        EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
        if ( ghsemSprite )
        {
          ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemSprite);
          PsLeavePriorityRegion();
        }
        GreUnlockVisRgn(v2);
      }
      v2 = (HDEV)hdevEnumerate(v2);
    }
    while ( v2 );
    if ( v11 )
      DxLddmLogProcessPrimaryLockCount(v11);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
