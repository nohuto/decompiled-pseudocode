/*
 * XREFs of DxgkWriteUserModeDiagEntry @ 0x1C022770C
 * Callers:
 *     DxgkEscape @ 0x1C0102F00 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C000BBB4 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall DxgkWriteUserModeDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 CurrentProcess; // rax
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  DXGFASTMUTEX **v16; // rcx
  __int64 v17; // [rsp+30h] [rbp+8h]

  if ( *((_DWORD *)a1 + 1) >= 0x400u )
  {
    v3 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v3 + 24) = *((unsigned int *)a1 + 1);
    *(_QWORD *)(v3 + 32) = 1024LL;
    WdLogEvent5_WdError(v3);
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  if ( !Global )
  {
    v10 = WdLogNewEntry5_WdError(v6, v5);
LABEL_5:
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3221225860LL;
  }
  CurrentProcess = PsGetCurrentProcess(v6, v5, v8, v9);
  v12 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
  *((_DWORD *)a1 + 9) &= ~0x80000000;
  *((_OWORD *)a1 + 1) = v12;
  *((_DWORD *)a1 + 9) ^= (PsGetCurrentProcessSessionId(v14, v13) ^ *((_DWORD *)a1 + 9)) & 0x7FFFFFFF;
  *((_DWORD *)a1 + 8) = (unsigned int)PsGetCurrentThreadId();
  v17 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 1) = v17 * KeQueryTimeIncrement();
  v16 = (DXGFASTMUTEX **)*((_QWORD *)Global + 101);
  if ( !v16 )
  {
    v10 = WdLogNewEntry5_WdError(0LL, v15);
    *(_QWORD *)(v10 + 32) = Global;
    goto LABEL_5;
  }
  return DXGDIAGNOSTICS::WriteDiagnosticEntry(v16, a1);
}
