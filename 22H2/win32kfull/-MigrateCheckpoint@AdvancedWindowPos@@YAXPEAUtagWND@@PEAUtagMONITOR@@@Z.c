/*
 * XREFs of ?MigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x1C023B904
 * Callers:
 *     ?xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z @ 0x1C01EBC7C (-xxxCommitMoveSize@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1C01F0D8C (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x1C023BA64 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     CkptRestore @ 0x1C00C7A4C (CkptRestore.c)
 *     GetRect @ 0x1C00C7BD0 (GetRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     _anonymous_namespace_::xxxMigrateWindowCheckpoint @ 0x1C023CA3C (_anonymous_namespace_--xxxMigrateWindowCheckpoint.c)
 */

void __fastcall AdvancedWindowPos::MigrateCheckpoint(
        AdvancedWindowPos *this,
        struct tagWND *a2,
        struct tagMONITOR *a3,
        __int64 a4)
{
  char v4; // bl
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  CMonitorTopology *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  _BYTE v12[8]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v13; // [rsp+48h] [rbp-30h] BYREF

  v4 = 1;
  if ( GetProp((__int64)this, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL, a4)
    || (v13 = 0LL, GetRect((__int64)this, (__int64)&v13, 66), CkptRestore(this, &v13)) )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v12);
    _InterlockedAdd((volatile signed __int32 *)qword_1C035E338, 1u);
    v9 = qword_1C035E338;
    anonymous_namespace_::xxxMigrateWindowCheckpoint(this, 0, 0LL);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) == 1 )
      Win32FreePool(v9);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v12, v10, v11);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v4 = 0;
    }
    if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = 49;
      LOBYTE(v8) = v4;
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v6,
        v7,
        2,
        4,
        49,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids);
    }
  }
}
