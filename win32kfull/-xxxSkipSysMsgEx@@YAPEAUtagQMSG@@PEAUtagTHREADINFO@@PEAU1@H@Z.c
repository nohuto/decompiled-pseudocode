/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C003768C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1C003794C (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C00379AC (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z @ 0x1C00379E8 (-RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagQ@@@Z.c)
 *     DelQEntry @ 0x1C0038CDC (DelQEntry.c)
 *     PhkNextValid @ 0x1C0039A4C (PhkNextValid.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD @ 0x1C0144410 (WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD.c)
 *     xxxCallJournalRecordHook @ 0x1C01BCCF4 (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, unsigned int a3)
{
  unsigned int v3; // r14d
  struct tagQMSG *v4; // rbp
  unsigned __int64 i; // rbx
  char v7; // di
  __int64 Valid; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r8
  struct _DEVICE_OBJECT *v15; // r9
  _UNKNOWN **v16; // r10
  int v17; // r8d
  void *v18; // r8
  void *v19; // r8
  int v20; // [rsp+20h] [rbp-A8h]
  int v21; // [rsp+28h] [rbp-A0h]
  int v22; // [rsp+30h] [rbp-98h]
  int v23; // [rsp+38h] [rbp-90h]
  __int64 v24; // [rsp+48h] [rbp-80h]

  v3 = a3;
  v4 = a2;
  i = 0LL;
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) )
    return 0LL;
  v7 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gFullLog,
      5,
      18,
      26,
      (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
      *((_DWORD *)v4 + 6));
  InputTraceLogging::Delivery::RemoveMessage(v4, *((const struct tagQ **)a1 + 54));
  LockRefactorStagingAssertAny(gDomainHookLock);
  Valid = *(_QWORD *)(*((_QWORD *)a1 + 58) + 56LL);
  if ( !Valid
    || (*(_DWORD *)(Valid + 64) & 0x80u) != 0 && (Valid = PhkNextValid(Valid)) == 0
    || *((_QWORD *)a1 + 57) != grpdeskRitInput )
  {
    LockRefactorStagingAssertAny(gDomainHookLock);
    v9 = *(_QWORD *)(*((_QWORD *)a1 + 58) + 48LL);
    if ( v9 && ((*(_DWORD *)(v9 + 64) & 0x80u) == 0 || PhkNextValid(v9)) )
      xxxCallJournalRecordHook(v4);
    v10 = *((_QWORD *)a1 + 54);
    i = *(_QWORD *)(v10 + 88);
    if ( i )
    {
      if ( i != 1 )
      {
        if ( !(unsigned int)EqualMsg(*(struct tagQMSG **)(v10 + 88), v4) )
        {
          v15 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v11) = 0;
          }
          v16 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              v12,
              (unsigned int)&WPP_GLOBAL_Control,
              v20,
              v21,
              v22,
              v23,
              (char)v4,
              *((_QWORD *)v4 + 13),
              *((_DWORD *)v4 + 6),
              *((_QWORD *)v4 + 2),
              *((_QWORD *)v4 + 4),
              *((_QWORD *)v4 + 5),
              *((_DWORD *)v4 + 12),
              i,
              *(_QWORD *)(i + 104),
              *(_DWORD *)(i + 24),
              *(_QWORD *)(i + 16),
              *(_QWORD *)(i + 32),
              *(_QWORD *)(i + 40),
              *(_DWORD *)(i + 48));
            v15 = (struct _DEVICE_OBJECT *)&WPP_GLOBAL_Control;
            v16 = &WPP_RECORDER_INITIALIZED;
          }
          for ( i = *(_QWORD *)(*((_QWORD *)a1 + 54) + 24LL); ; i = *(_QWORD *)i )
          {
            if ( !i )
            {
              if ( WPP_GLOBAL_Control == v15
                || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
                || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
              {
                LOBYTE(v11) = 0;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)v16 || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
                v7 = 0;
              if ( (_BYTE)v11 || v7 )
              {
                v18 = &WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids;
                LOBYTE(v18) = v7;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v11,
                  (_DWORD)v18,
                  (_DWORD)v15,
                  5,
                  18,
                  29,
                  (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids);
              }
              return 0LL;
            }
            if ( (unsigned int)EqualMsg((struct tagQMSG *)i, v4) )
              break;
          }
          if ( WPP_GLOBAL_Control == v15
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)v16 || (LOBYTE(v17) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
            LOBYTE(v17) = 0;
          if ( (_BYTE)v11 || (_BYTE)v17 )
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              v17,
              (unsigned int)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
              5,
              18,
              28,
              (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
              i);
        }
        v13 = *((_QWORD *)a1 + 54);
        if ( i == *(_QWORD *)(v13 + 88) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x11u)
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v11) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v7 = 0;
          }
          if ( (_BYTE)v11 || v7 )
          {
            v24 = *(_QWORD *)(v13 + 88);
            v19 = &WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids;
            LOBYTE(v19) = v7;
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v19,
              (_DWORD)gFullLog,
              5,
              18,
              30,
              (__int64)&WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
              *((_QWORD *)a1 + 54),
              v24);
          }
          *(_QWORD *)(*((_QWORD *)a1 + 54) + 88LL) = 0LL;
        }
        DelQEntry(*((_QWORD *)a1 + 54) + 24LL, i, v3);
        if ( v3 )
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
  if ( (*((_DWORD *)v4 + 25) & 0x40000) == 0 )
  {
    UpdateKeyStateForMessage(a1, v4);
    if ( i >= 2 )
      *(_DWORD *)(i + 100) |= 0x40000u;
  }
  return (struct tagQMSG *)i;
}
