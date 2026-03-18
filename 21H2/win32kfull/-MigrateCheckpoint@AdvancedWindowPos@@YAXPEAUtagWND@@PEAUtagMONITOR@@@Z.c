/*
 * XREFs of ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C024AC80
 * Callers:
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C015B0AC (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C020BFC8 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C024ADB8 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C024B6D4 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 */

void __fastcall AdvancedWindowPos::MigrateCheckpoint(AdvancedWindowPos *this, struct tagWND *a2, struct tagMONITOR *a3)
{
  int v3; // ebp
  char v4; // bl
  __int64 Prop; // rax
  int v7; // edi
  struct tagRECT *v8; // rax
  int v9; // r8d
  int v10; // r9d
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r8
  _BYTE v14[8]; // [rsp+40h] [rbp-38h] BYREF
  struct tagRECT v15; // [rsp+48h] [rbp-30h] BYREF

  v3 = (int)a2;
  v4 = 1;
  Prop = GetProp((__int64)this, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
  v7 = Prop;
  if ( Prop || (v15 = 0LL, GetRect((__int64)this, (__int64)&v15, 66), v8 = CkptRestore(this, &v15), v7 = (int)v8, v8) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v14);
    anonymous_namespace_::xxxMigrateWindowCheckpoint((_DWORD)this, v7, v3, v7, 0LL, 0, 0LL);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v14, v12, v13);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = 53;
      LOBYTE(v11) = v4;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v9,
        v10,
        2,
        25,
        53,
        (__int64)&WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids);
    }
  }
}
