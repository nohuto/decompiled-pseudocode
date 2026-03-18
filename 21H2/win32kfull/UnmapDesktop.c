/*
 * XREFs of UnmapDesktop @ 0x1C0078E40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qqDD @ 0x1C0078F78 (WPP_RECORDER_AND_TRACE_SF_qqDD.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00791A0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z @ 0x1C007A09C (-FreeView@@YAXPEAU_EPROCESS@@PEAUtagDESKTOP@@@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C009959C (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall UnmapDesktop(__int64 a1)
{
  struct tagDESKTOP *v1; // r14
  bool v3; // si
  bool v4; // bp
  int v5; // r8d
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rbx
  struct _KPROCESS *v9; // rcx
  __int64 v10; // rcx
  int v12; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(struct tagDESKTOP **)(a1 + 8);
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v12);
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetProcessSessionId(*(_QWORD *)a1);
    LOBYTE(v5) = v4;
    LOBYTE(v6) = v3;
    WPP_RECORDER_AND_TRACE_SF_qqDD(WPP_GLOBAL_Control->AttachedDevice, v6, v5, WPP_MAIN_CB.Queue.ListEntry.Flink);
  }
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(*(_QWORD *)(a1 + 8) - 40LL) + 1;
  v7 = ReferenceDwmProcess();
  v8 = v7;
  if ( *(_DWORD *)(a1 + 16) == 1 )
  {
    v9 = *(struct _KPROCESS **)a1;
    if ( *(_QWORD *)a1 != gpepCSRSS && v9 != (struct _KPROCESS *)v7 )
      FreeView(v9, v1);
  }
  DereferenceDwmProcess(v8);
  if ( *(_DWORD *)(a1 + 20) == 1 )
    DestroyDesktop(v1);
  if ( !v12 )
    UserSessionSwitchLeaveCrit(v10);
  return 0LL;
}
