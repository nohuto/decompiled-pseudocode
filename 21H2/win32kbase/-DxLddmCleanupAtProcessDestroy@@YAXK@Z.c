/*
 * XREFs of ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C006FB60
 * Callers:
 *     ?NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z @ 0x1C0017B90 (-NtGdiCloseProcess@@YAHKW4_CLEANUPTYPE@@@Z.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E8B8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     GreLockSprite @ 0x1C0030D20 (GreLockSprite.c)
 *     hdevEnumerate @ 0x1C006FCD0 (hdevEnumerate.c)
 *     ?bRenderLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C006FDF4 (-bRenderLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockDisplayDevice @ 0x1C006FE40 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C006FE80 (GreUnlockDisplayDevice.c)
 *     ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C006FEC8 (-DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?DxLddmLogProcessPrimaryLockCount@@YAXK@Z @ 0x1C0175B6C (-DxLddmLogProcessPrimaryLockCount@@YAXK@Z.c)
 */

void __fastcall DxLddmCleanupAtProcessDestroy(unsigned int a1)
{
  HDEV v2; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  void (__fastcall *v10)(_QWORD, __int64); // rdi
  __int64 CurrentProcess; // rax
  __int64 v12; // rdx
  int v13; // r8d
  unsigned int CurrentProcessSessionId; // eax
  HDEV v15; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+40h] [rbp+18h] BYREF

  v16 = 0;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  v2 = (HDEV)hdevEnumerate(0LL);
  if ( v2 )
  {
    do
    {
      v3 = *((_DWORD *)v2 + 10);
      v15 = v2;
      if ( (v3 & 0x20000) == 0 && (v3 & 1) != 0 && (unsigned int)PDEVOBJ::bRenderLddmDriver((PDEVOBJ *)&v15) )
      {
        GreLockVisRgn((__int64)v2, v4, v5);
        GreLockSprite();
        GreLockDisplayDevice(v2);
        DxLddmPrimaryLockProcessDestroy(v2, a1, &v16);
        v10 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)v2 + 329);
        if ( v10 )
        {
          CurrentProcess = PsGetCurrentProcess(v7, v6, v8, v9);
          v10(*((_QWORD *)v2 + 221), CurrentProcess);
        }
        else
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId();
          WdLogSingleEntry1(2LL, CurrentProcessSessionId);
        }
        GreUnlockDisplayDevice(v2);
        EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
        if ( ghsemSprite )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
          PsLeavePriorityRegion();
        }
        GreUnlockVisRgn((int)v2, v12, v13);
      }
      v2 = (HDEV)hdevEnumerate(v2);
    }
    while ( v2 );
    if ( v16 )
      DxLddmLogProcessPrimaryLockCount(v16);
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
