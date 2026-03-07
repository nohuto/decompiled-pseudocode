void __fastcall AdvancedWindowPos::xxxVerticalMaximize(struct tagRECT *retstr, struct tagWND *a2)
{
  __int64 v2; // rax
  __int64 v4; // r9
  __int64 v5; // r14
  char v6; // bl
  char v7; // bl
  CMonitorTopology *v8; // rsi
  CMonitorTopology::MonitorData *v9; // rax
  struct tagRECT v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // r9
  _BYTE v13[16]; // [rsp+60h] [rbp-19h] BYREF
  struct tagRECT v14; // [rsp+70h] [rbp-9h] BYREF
  _BYTE v15[16]; // [rsp+80h] [rbp+7h] BYREF
  struct tagRECT v16; // [rsp+90h] [rbp+17h] BYREF
  struct tagRECT v17; // [rsp+A0h] [rbp+27h] BYREF

  v2 = *(_QWORD *)&retstr[2].right;
  v17 = *(struct tagRECT *)(v2 + 88);
  v5 = MonitorFromRect((__int64)&v17, 0, *(_DWORD *)(v2 + 288));
  if ( v5 )
  {
    AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v13);
    v7 = 1;
    _InterlockedAdd((volatile signed __int32 *)qword_1C0361320, 1u);
    v8 = qword_1C0361320;
    v14 = v17;
    v9 = CMonitorTopology::MonitorDataFromRect(qword_1C0361320, (const struct tagWND *)retstr, &v14);
    v17 = *(struct tagRECT *)anonymous_namespace_::xxxNormalizeRect((struct tagWND *)v15, retstr, &v17.left, v5, v9, 20);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
      Win32FreePool(v8);
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v13);
    v10 = *WindowMargins::ReduceRect(&v16, retstr, (const struct tagWND *)&v17, 0LL);
    v11 = *(_QWORD *)&retstr[2].right;
    v17 = v10;
    LogicalToPhysicalDPIRect(&v17, &v17, *(unsigned int *)(v11 + 288), 0LL);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v7,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v12,
        4u,
        0x19u,
        0x30u,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v17.left,
        v17.top,
        v17.right,
        v17.bottom);
    WindowArrangement::xxxSetSnapArrangementPos((__int64)retstr, (__int64)&v17, 0, 0);
  }
  else
  {
    v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dddd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v6,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        v4,
        3u,
        0x19u,
        0x2Fu,
        (__int64)&WPP_8482559141b533a3203925fe2b840c7c_Traceguids,
        v17.left,
        v17.top,
        v17.right,
        v17.bottom);
  }
}
