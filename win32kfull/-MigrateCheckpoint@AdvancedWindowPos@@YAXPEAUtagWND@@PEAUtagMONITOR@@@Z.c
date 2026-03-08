/*
 * XREFs of ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023E588
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01ECE40 (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F1F6C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023E6EC (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     CkptRestore @ 0x1C0100A4C (CkptRestore.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023F6F0 (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 */

void __fastcall AdvancedWindowPos::MigrateCheckpoint(AdvancedWindowPos *this, struct tagWND *a2, struct tagMONITOR *a3)
{
  char v3; // bl
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  CMonitorTopology *v8; // rbx
  _BYTE v9[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v10; // [rsp+48h] [rbp-30h] BYREF

  v3 = 1;
  if ( GetProp((__int64)this, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1u)
    || (v10 = 0LL, GetRect((__int64)this, (__int64)&v10, 66), CkptRestore(this, &v10)) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v9);
    _InterlockedAdd((volatile signed __int32 *)qword_1C0361320, 1u);
    v8 = qword_1C0361320;
    anonymous_namespace_::xxxMigrateWindowCheckpoint(this, 0, 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
      Win32FreePool(v8);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v9);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v3 = 0;
    }
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 49;
      LOBYTE(v7) = v3;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v5,
        v6,
        2,
        25,
        49,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    }
  }
}
