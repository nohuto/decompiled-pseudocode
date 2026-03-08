/*
 * XREFs of ?DxgkWslProcessCleanup@@YAXPEAU_EPROCESS@@@Z @ 0x1C033FA80
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01A8400 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

void __fastcall DxgkWslProcessCleanup(PRKPROCESS PROCESS)
{
  __int64 ProcessDxgProcess; // rdi
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v4[10]; // [rsp+50h] [rbp-68h] BYREF

  ProcessDxgProcess = PsGetProcessDxgProcess(PROCESS);
  if ( ProcessDxgProcess )
  {
    memset(v4, 0, 0x48uLL);
    EtwActivityIdControl(3u, (LPGUID)&v4[1]);
    v4[8] = MEMORY[0xFFFFF78000000014];
    LODWORD(v4[3]) = 36;
    LOBYTE(v4[6]) = -1;
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(PROCESS, &ApcState);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(ProcessDxgProcess + 104));
    DXGPROCESS::Destroy((DXGPROCESS *)ProcessDxgProcess, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v4, 1);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(ProcessDxgProcess + 104));
    KeUnstackDetachProcess(&ApcState);
  }
}
