/*
 * XREFs of DxgkOpenAdapterFromHdc @ 0x1C015C420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromHdc(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  struct DXGTHREAD *Current; // rax
  __int64 v13; // rax

  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) != 0 )
  {
    Current = DXGTHREAD::GetCurrent(v8, v7);
    if ( Current )
    {
      v10 = *((_QWORD *)Current + 1);
      if ( v10 )
        return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 88) + 456LL))(a1);
    }
  }
  v10 = v9;
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 88) + 456LL))(a1);
  v13 = WdLogNewEntry5_WdError(v8, v7);
  *(_QWORD *)(v13 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v13);
  return 3221225485LL;
}
