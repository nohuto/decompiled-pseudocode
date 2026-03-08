/*
 * XREFs of ?GetDiagnosticsBuffer@@YAJPEAU_D3DKMT_DXGK_DIAGNOSTICS@@IH@Z @ 0x1C030CB34
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z @ 0x1C004FF30 (-ReadDiagnostics@DXGDIAGNOSTICS@@QEBAJPEAEPEAII@Z.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01BA77C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall GetDiagnosticsBuffer(struct _D3DKMT_DXGK_DIAGNOSTICS *a1, unsigned int a2, int a3)
{
  unsigned int v5; // edi
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGGLOBAL *Global; // rax
  DXGDIAGNOSTICS *v13; // rcx
  _QWORD v15[8]; // [rsp+50h] [rbp-58h] BYREF

  v5 = -1073741811;
  if ( a2 >= 4 )
  {
    v6 = *(unsigned int *)a1;
    if ( a2 == v6 + 4 )
    {
      if ( a3 && (_DWORD)v6 )
      {
        memset(v15, 0, sizeof(v15));
        v15[7] = MEMORY[0xFFFFF78000000014];
        ExSystemTimeToLocalTime((PLARGE_INTEGER)&v15[7], (PLARGE_INTEGER)&v15[6]);
        memset(&v15[1], 0, 36);
        v15[0] = 0x400000000ALL;
        CurrentProcessSessionId = PsGetCurrentProcessSessionId(v8, v7, v9, v10);
        DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15, CurrentProcessSessionId);
      }
      Global = DXGGLOBAL::GetGlobal();
      if ( Global )
      {
        if ( a3 )
          v13 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 116);
        else
          v13 = (DXGDIAGNOSTICS *)*((_QWORD *)Global + 117);
        if ( !v13 )
        {
          WdLogSingleEntry2(2LL, a1, 0LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to obtain DXGGLOBAL Diagnosibility buffer; pDiagnosticsBuffer = 0x%I64x, pDiagnostics = 0x%I64x",
            (__int64)a1,
            0LL,
            0LL,
            0LL,
            0LL);
          return 3221225860LL;
        }
        return (unsigned int)DXGDIAGNOSTICS::ReadDiagnostics(
                               v13,
                               (unsigned __int8 *)a1 + 4,
                               (unsigned int *)a1,
                               0xFFFFFFFF);
      }
    }
  }
  return v5;
}
