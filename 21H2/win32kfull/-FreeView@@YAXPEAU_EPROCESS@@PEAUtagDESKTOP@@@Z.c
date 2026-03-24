/*
 * XREFs of ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C004C908
 * Callers:
 *     UnmapDesktop @ 0x1C004EB70 (UnmapDesktop.c)
 *     FreeDesktop @ 0x1C012C1E0 (FreeDesktop.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C004E9E4 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     GetDesktopView @ 0x1C004F040 (GetDesktopView.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 */

void __fastcall FreeView(PRKPROCESS PROCESS, struct tagDESKTOP *a2)
{
  __int64 ProcessWin32Process; // rsi
  int v5; // ebp
  _QWORD *DesktopView; // rdi
  _QWORD **v7; // rsi
  _QWORD *i; // rcx
  _BYTE v9[8]; // [rsp+20h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-50h] BYREF

  if ( PROCESS )
  {
    ProcessWin32Process = PsGetProcessWin32Process(PROCESS);
    if ( ProcessWin32Process )
    {
      memset(&ApcState, 0, sizeof(ApcState));
      if ( (unsigned int)PsGetProcessSessionId(PROCESS) == *(_DWORD *)a2 )
      {
        v5 = 0;
      }
      else
      {
        KeStackAttachProcess(PROCESS, &ApcState);
        v5 = 1;
      }
      DesktopView = (_QWORD *)GetDesktopView(ProcessWin32Process, a2);
      if ( DesktopView )
      {
        PsGetProcessSessionId(PROCESS);
        MmUnmapViewOfSection(PROCESS, DesktopView[2]);
        CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(v9);
        v7 = (_QWORD **)(ProcessWin32Process + 704);
        for ( i = *v7; i; i = (_QWORD *)*i )
        {
          if ( i == DesktopView )
            break;
          v7 = (_QWORD **)i;
        }
        *v7 = (_QWORD *)*DesktopView;
        Win32FreePool(DesktopView);
      }
      if ( v5 )
        KeUnstackDetachProcess(&ApcState);
    }
  }
}
