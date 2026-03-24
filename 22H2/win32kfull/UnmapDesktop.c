/*
 * XREFs of UnmapDesktop @ 0x1C004EAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C004C868 (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     WPP_RECORDER_SF_qqDD @ 0x1C004EBB8 (WPP_RECORDER_SF_qqDD.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004EFF4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C00D7C60 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall UnmapDesktop(__int64 a1)
{
  struct tagDESKTOP *v1; // rdi
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // rsi
  struct _KPROCESS *v8; // rcx
  __int64 v9; // rcx
  int v11; // [rsp+60h] [rbp+8h] BYREF

  v1 = *(struct tagDESKTOP **)(a1 + 8);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetProcessSessionId(*(_QWORD *)a1);
    WPP_RECORDER_SF_qqDD(v3, *(_DWORD *)v1, v4, v5);
  }
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(*(_QWORD *)(a1 + 8) - 40LL) + 1;
  v6 = ReferenceDwmProcess();
  v7 = v6;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v8 = *(struct _KPROCESS **)a1;
    if ( *(_QWORD *)a1 != gpepCSRSS && v8 != (struct _KPROCESS *)v6 )
      FreeView(v8, v1);
  }
  DereferenceDwmProcess(v7);
  if ( *(_DWORD *)(a1 + 20) == 1 )
    DestroyDesktop(v1);
  if ( !v11 )
    UserSessionSwitchLeaveCrit(v9);
  return 0LL;
}
