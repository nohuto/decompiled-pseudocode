/*
 * XREFs of ?UpdateProcessPriorityForSpinning@ForegroundBoost@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C005B8C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C005BB7C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _anonymous_namespace_::SetForegroundPriorityProcess @ 0x1C005BD80 (_anonymous_namespace_--SetForegroundPriorityProcess.c)
 */

void __fastcall ForegroundBoost::UpdateProcessPriorityForSpinning(ForegroundBoost *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rdi
  int v4; // eax
  int v5; // r8d
  PDEVICE_OBJECT v6; // rcx
  bool v7; // bl
  int v8; // edx
  int v9; // edx
  __int64 i; // rcx
  __int16 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF

  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v12, (struct _EX_PUSH_LOCK *)&unk_1C02D2E50);
  v3 = *((_QWORD *)this + 53);
  if ( _bittest((const signed __int32 *)this + 122, 0xAu) )
  {
    v4 = *(_DWORD *)(v3 + 12);
    if ( (v4 & 0x800) == 0 )
    {
      *(_DWORD *)(v3 + 12) = v4 | 0x800;
      if ( (*(_DWORD *)(*((_QWORD *)this + 53) + 812LL) & 0x60000) == 0x20000 )
      {
        anonymous_namespace_::SetForegroundPriorityProcess(v3, this, 2LL);
        v6 = WPP_GLOBAL_Control;
        v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = 11;
LABEL_10:
          v11 = v8;
          LOBYTE(v8) = v7;
          WPP_RECORDER_AND_TRACE_SF_D(
            v6->AttachedDevice,
            v8,
            v5,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            13,
            v11,
            (__int64)&WPP_0244ad5b58ad30c01ff7cfd933698df4_Traceguids,
            *(_DWORD *)(v3 + 56));
        }
      }
    }
  }
  else
  {
    v9 = *(_DWORD *)(v3 + 12);
    if ( (v9 & 0x800) != 0 )
    {
      for ( i = *(_QWORD *)(v3 + 320); i; i = *(_QWORD *)(i + 664) )
      {
        if ( _bittest((const signed __int32 *)(i + 488), 0xAu) )
          goto LABEL_11;
      }
      *(_DWORD *)(v3 + 12) = v9 & 0xFFFFF7FF;
      if ( (*(_DWORD *)(*((_QWORD *)this + 53) + 812LL) & 0x60000) == 0x40000 )
      {
        v7 = 1;
        anonymous_namespace_::SetForegroundPriorityProcess(v3, this, 1LL);
        v6 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v7 = 0;
        }
        LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v8 = 12;
          goto LABEL_10;
        }
      }
    }
  }
LABEL_11:
  ExReleasePushLockExclusiveEx(v12, 0LL);
  KeLeaveCriticalRegion();
}
