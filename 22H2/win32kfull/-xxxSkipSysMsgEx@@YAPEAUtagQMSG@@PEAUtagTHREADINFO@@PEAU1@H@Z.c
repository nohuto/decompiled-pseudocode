/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0116EA4
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C012B430 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PhkNextValid @ 0x1C00719E4 (PhkNextValid.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C00E4DF4 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C011716C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C01171CC (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C0117208 (-RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     DelQEntry @ 0x1C01184CC (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD @ 0x1C0151110 (WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD.c)
 *     xxxCallJournalRecordHook @ 0x1C01BBB54 (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, unsigned int a3)
{
  unsigned __int64 i; // rbx
  char v7; // di
  char v8; // dl
  char v9; // r8
  __int64 Valid; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r8
  char v16; // dl
  struct _DEVICE_OBJECT *v18; // r9
  _UNKNOWN **v19; // r10
  char v20; // dl
  char v21; // r8
  void *v22; // r8
  int v23; // [rsp+20h] [rbp-A8h]
  int v24; // [rsp+28h] [rbp-A0h]
  int v25; // [rsp+30h] [rbp-98h]
  int v26; // [rsp+38h] [rbp-90h]

  i = 0LL;
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) )
    return 0LL;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
    || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v8 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v9 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v9 = 0;
  }
  if ( v8 || v9 )
    WPP_RECORDER_AND_TRACE_SF_D(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v9,
      (__int64)gFullLog,
      5u,
      0x12u,
      0x1Au,
      (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids);
  InputTraceLogging::Delivery::RemoveMessage(a2, *((const struct tagQ **)a1 + 54));
  LockRefactorStagingAssertAny(gDomainHookLock);
  Valid = *(_QWORD *)(*((_QWORD *)a1 + 58) + 56LL);
  if ( !Valid
    || (*(_DWORD *)(Valid + 64) & 0x80u) != 0 && (Valid = PhkNextValid(Valid)) == 0
    || *((_QWORD *)a1 + 57) != grpdeskRitInput )
  {
    LockRefactorStagingAssertAny(gDomainHookLock);
    v11 = *(_QWORD *)(*((_QWORD *)a1 + 58) + 48LL);
    if ( v11 && ((*(_DWORD *)(v11 + 64) & 0x80u) == 0 || PhkNextValid(v11)) )
      xxxCallJournalRecordHook(a2);
    v12 = *((_QWORD *)a1 + 54);
    i = *(_QWORD *)(v12 + 88);
    if ( i )
    {
      if ( i != 1 )
      {
        if ( !(unsigned int)EqualMsg(*(struct tagQMSG **)(v12 + 88), a2) )
        {
          v18 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
            || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v13) = 0;
          }
          v19 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD(
              WPP_GLOBAL_Control->AttachedDevice,
              v13,
              v14,
              (unsigned int)&WPP_GLOBAL_Control,
              v23,
              v24,
              v25,
              v26,
              (char)a2,
              *((_QWORD *)a2 + 13),
              *((_DWORD *)a2 + 6),
              *((_QWORD *)a2 + 2),
              *((_QWORD *)a2 + 4),
              *((_QWORD *)a2 + 5),
              *((_DWORD *)a2 + 12),
              i,
              *(_QWORD *)(i + 104),
              *(_DWORD *)(i + 24),
              *(_QWORD *)(i + 16),
              *(_QWORD *)(i + 32),
              *(_QWORD *)(i + 40),
              *(_DWORD *)(i + 48));
            v18 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
            v19 = &WPP_RECORDER_INITIALIZED;
          }
          for ( i = *(_QWORD *)(*((_QWORD *)a1 + 54) + 24LL); ; i = *(_QWORD *)i )
          {
            if ( !i )
            {
              if ( WPP_GLOBAL_Control == v18
                || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
                || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
              {
                LOBYTE(v13) = 0;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)v19 || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
                v7 = 0;
              if ( (_BYTE)v13 || v7 )
              {
                v22 = &WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids;
                LOBYTE(v22) = v7;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v13,
                  (_DWORD)v22,
                  (_DWORD)v18,
                  5,
                  18,
                  29,
                  (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids);
              }
              return 0LL;
            }
            if ( (unsigned int)EqualMsg((struct tagQMSG *)i, a2) )
              break;
          }
          if ( WPP_GLOBAL_Control == v18
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
            || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v20 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)v19 || (v21 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            v21 = 0;
          if ( v20 || v21 )
            WPP_RECORDER_AND_TRACE_SF_q(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v20,
              v21,
              (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
              5u,
              0x12u,
              0x1Cu,
              (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
              i);
        }
        v15 = *((_QWORD *)a1 + 54);
        if ( i == *(_QWORD *)(v15 + 88) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
            || (v16 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            v16 = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v7 = 0;
          }
          if ( v16 || v7 )
            WPP_RECORDER_AND_TRACE_SF_qq(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v16,
              v7,
              (__int64)gFullLog,
              5u,
              0x12u,
              0x1Eu,
              (__int64)&WPP_0bd01f6e78ca3341e624bb2278b12953_Traceguids,
              v15,
              *(_QWORD *)(v15 + 88));
          *(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) = 0LL;
        }
        DelQEntry(*((_QWORD *)a1 + 54) + 24LL, i, a3);
        if ( a3 )
        {
          i = 0LL;
        }
        else
        {
          *(_QWORD *)(i + 8) = 0LL;
          *(_QWORD *)i = 0LL;
        }
        EtwTraceInputProcessDelay(a1);
        *(_DWORD *)(*((_QWORD *)a1 + 54) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      }
      goto LABEL_28;
    }
    return 0LL;
  }
  *(_DWORD *)(Valid + 64) |= 4u;
LABEL_28:
  if ( (*((_DWORD *)a2 + 25) & 0x40000) == 0 )
  {
    UpdateKeyStateForMessage(a1, a2);
    if ( i >= 2 )
      *(_DWORD *)(i + 100) |= 0x40000u;
  }
  return (struct tagQMSG *)i;
}
