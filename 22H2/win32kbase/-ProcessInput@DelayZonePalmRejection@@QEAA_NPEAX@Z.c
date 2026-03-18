/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01E662C
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01CF880 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     HMAssignmentLock @ 0x1C004FF50 (HMAssignmentLock.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C01C9650 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01DA938 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C01DB14C (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C01E247C (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01E5DFC (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C01E61E4 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1C01E72F4 (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqddd @ 0x1C01E7610 (WPP_RECORDER_AND_TRACE_SF_dqddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C01FC06C (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C01FC0F8 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 */

unsigned __int8 __fastcall DelayZonePalmRejection::ProcessInput(
        LARGE_INTEGER *this,
        signed __int64 LowPart,
        __int64 a3,
        unsigned __int64 a4)
{
  struct CPointerInputFrame *v4; // r13
  PDEVICE_OBJECT QuadPart; // rcx
  char v7; // di
  char v8; // dl
  unsigned int v9; // eax
  LARGE_INTEGER PerformanceCounter; // r14
  unsigned int v11; // r12d
  unsigned __int8 v12; // si
  __int64 v13; // rax
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v15; // r15
  int v16; // eax
  LARGE_INTEGER v17; // rax
  int v18; // eax
  LONG HighPart; // eax
  int v20; // r14d
  LARGE_INTEGER v21; // rax
  int v22; // eax
  struct tagPOINT v23; // r9
  struct tagPOINT v24; // r8
  void *v25; // rdx
  bool v26; // al
  unsigned __int8 v27; // r10
  bool v28; // r14
  int v29; // r14d
  unsigned int v30; // ecx
  LONGLONG v31; // r14
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  LARGE_INTEGER v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // rax
  bool v43; // zf
  int v45; // [rsp+28h] [rbp-E0h]
  struct CDelayZonePanelTelemetryData *v46; // [rsp+30h] [rbp-D8h]
  int v47; // [rsp+38h] [rbp-D0h]
  int v48; // [rsp+40h] [rbp-C8h]
  __int64 v49; // [rsp+48h] [rbp-C0h]
  LARGE_INTEGER v50; // [rsp+50h] [rbp-B8h]
  bool v51[4]; // [rsp+78h] [rbp-90h] BYREF
  int v52; // [rsp+7Ch] [rbp-8Ch]
  int v53; // [rsp+80h] [rbp-88h]
  BOOL v54; // [rsp+84h] [rbp-84h]
  BOOL v55; // [rsp+88h] [rbp-80h]
  LARGE_INTEGER v56; // [rsp+90h] [rbp-78h]
  unsigned int v57; // [rsp+98h] [rbp-70h]
  struct tagPOINTER_INFO *v58[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v59; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v60; // [rsp+C8h] [rbp-40h]
  _OWORD v61[2]; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v62[2]; // [rsp+F8h] [rbp-10h] BYREF

  v4 = (struct CPointerInputFrame *)LowPart;
  QuadPart = WPP_GLOBAL_Control;
  v7 = 1;
  v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v8,
      a3,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      4u,
      0xDu,
      (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids);
  v9 = *((_DWORD *)v4 + 12);
  LOBYTE(QuadPart) = 0;
  PerformanceCounter.QuadPart = 0LL;
  v51[1] = 0;
  v58[0] = 0LL;
  LOBYTE(LowPart) = 0;
  LOBYTE(v54) = 0;
  v11 = 0;
  LOBYTE(v55) = 0;
  v56.QuadPart = 0LL;
  v12 = 1;
  v51[0] = 0;
  v51[2] = 0;
  LOBYTE(v52) = 0;
  v53 = 0;
  v57 = v9;
  if ( v9 )
  {
    while ( 1 )
    {
      v13 = SGDGetUserSessionState(QuadPart, LowPart, a3, a4);
      PointerInfo = CTouchProcessor::GetPointerInfo(*(CTouchProcessor **)(v13 + 3424), v4, v11);
      v15 = PointerInfo;
      if ( PointerInfo )
      {
        v16 = *(_DWORD *)PointerInfo;
        if ( v16 == 3 )
        {
          v17 = this[4];
          if ( !v17.QuadPart )
          {
            v17 = *(LARGE_INTEGER *)((char *)v4 + 64);
            this[4] = v17;
          }
          if ( *((_QWORD *)v4 + 8) != v17.QuadPart )
            goto LABEL_131;
          v51[0] = 1;
          this[6] = KeQueryPerformanceCounter(0LL);
          v18 = *((_DWORD *)v15 + 3);
          if ( (v18 & 1) != 0 )
          {
            HighPart = this[5].HighPart;
            if ( !HighPart )
            {
              v51[2] = 1;
              v58[0] = v15;
            }
            a4 = (unsigned int)(HighPart + 1);
            this[5].HighPart = a4;
            LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v50 = this[4];
              WPP_RECORDER_AND_TRACE_SF_dqd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                LowPart,
                a3,
                a4,
                4u,
                (__int64)v46,
                0xEu,
                (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids);
            }
            QuadPart = (PDEVICE_OBJECT)this[16].QuadPart;
            if ( QuadPart )
            {
              v20 = v53;
              memset(v61, 0, sizeof(v61));
              DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(QuadPart, 0xFFFFFFFFLL, v61, v15, v53);
              v53 = v20 + 1;
            }
          }
          else if ( (v18 & 2) == 0 )
          {
            LowPart = (unsigned int)this[5].HighPart;
            if ( (_DWORD)LowPart )
            {
              LowPart = (unsigned int)(LowPart - 1);
              this[5].HighPart = LowPart;
            }
            QuadPart = WPP_GLOBAL_Control;
            LOBYTE(a4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)a4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v50 = this[4];
              WPP_RECORDER_AND_TRACE_SF_dqd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                a4,
                a3,
                a4,
                4u,
                (__int64)v46,
                0xFu,
                (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids);
            }
          }
          PerformanceCounter = v56;
          if ( (*((_DWORD *)v15 + 3) & 0x8000) != 0 )
            LOBYTE(v52) = 1;
          goto LABEL_62;
        }
        if ( v16 != 2 )
          goto LABEL_131;
        v21 = this[2];
        if ( !v21.QuadPart )
        {
          v21 = *(LARGE_INTEGER *)((char *)v4 + 64);
          this[2] = v21;
        }
        if ( *((_QWORD *)v4 + 8) != v21.QuadPart )
          goto LABEL_131;
        v51[1] = 1;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v56 = PerformanceCounter;
        v22 = *((_DWORD *)v15 + 3);
        if ( (v22 & 0x10000) == 0 )
        {
          if ( (v22 & 0x40000) != 0 )
          {
            LowPart = this[5].LowPart;
            if ( (_DWORD)LowPart )
            {
              LowPart = (unsigned int)(LowPart - 1);
              this[5].LowPart = LowPart;
            }
            QuadPart = WPP_GLOBAL_Control;
            LOBYTE(a4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)a4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v50 = this[2];
              WPP_RECORDER_AND_TRACE_SF_dqd(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                a4,
                a3,
                a4,
                4u,
                (__int64)v46,
                0x11u,
                (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids);
            }
          }
          goto LABEL_62;
        }
        ++this[5].LowPart;
        v23 = (struct tagPOINT)*((_QWORD *)v15 + 7);
        v24 = (struct tagPOINT)*((_QWORD *)v15 + 6);
        v25 = (void *)*((_QWORD *)v15 + 2);
        v51[3] = 0;
        v59 = 0LL;
        v60 = 0LL;
        v26 = DelayZonePalmRejection::HitTestRejectionRegion(
                (DelayZonePalmRejection *)this,
                v25,
                v24,
                v23,
                &v51[3],
                (struct CDelayZonePanelTelemetryData *)&v59);
        v27 = v55;
        v28 = v26;
        if ( !v55 )
        {
          v27 = v26;
          v55 = v26;
        }
        a4 = v54;
        if ( !v54 )
        {
          a4 = !v26;
          v54 = !v26;
        }
        LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dqddd(
            WPP_GLOBAL_Control->AttachedDevice,
            LowPart,
            a3,
            v27,
            v45,
            (_DWORD)v46,
            v47,
            v48,
            *((_DWORD *)v15 + 1),
            this[2].QuadPart,
            this[5].LowPart,
            v27,
            a4);
        QuadPart = (PDEVICE_OBJECT)this[16].QuadPart;
        if ( QuadPart && v28 )
        {
          v29 = v53;
          v62[0] = v59;
          v62[1] = v60;
          DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(QuadPart, v51[3], v62, v15, v53);
          v53 = v29 + 1;
        }
      }
      PerformanceCounter = v56;
LABEL_62:
      if ( ++v11 >= v57 )
      {
        LOBYTE(QuadPart) = v51[1];
        LOBYTE(LowPart) = v51[0];
        break;
      }
    }
  }
  if ( LOBYTE(this->LowPart) )
  {
    if ( (_BYTE)QuadPart )
    {
      v30 = this[13].HighPart;
      if ( v30 )
      {
        v31 = PerformanceCounter.QuadPart - this[6].QuadPart;
        LowPart = (unsigned __int64)(1000 * v31) % gliQpcFreq.QuadPart;
        a4 = (unsigned __int64)(1000 * v31) / gliQpcFreq.QuadPart;
        if ( (unsigned int)a4 > v30 )
        {
          LOBYTE(this->LowPart) = 0;
          LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_L(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              LowPart,
              a3,
              (unsigned int)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids,
              4u,
              (__int64)v46,
              0x13u,
              (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids);
        }
      }
    }
  }
  else if ( (_BYTE)LowPart )
  {
    LOBYTE(this->LowPart) = 1;
    LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        LowPart,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        4,
        18,
        (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids);
  }
  v32 = (unsigned int)this->HighPart;
  if ( (_DWORD)v32 )
  {
    v33 = (unsigned int)(v32 - 1);
    if ( (_DWORD)v33 )
    {
      if ( (_DWORD)v33 == 1 && !this[5].HighPart && !this[5].LowPart && !(_BYTE)v52 )
      {
        this[4].QuadPart = 0LL;
        this[2].QuadPart = 0LL;
        this->HighPart = 0;
      }
      goto LABEL_131;
    }
    if ( v51[0] && v51[2] )
    {
      if ( LOBYTE(this[1].LowPart) == 1 )
      {
        v34 = SGDGetUserSessionState(v33, LowPart, a3, a4);
        CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v34 + 16840), 1, 0);
        LOBYTE(this[1].LowPart) = 0;
      }
      DelayZonePalmRejection::SuppressDeadzoneContacts(
        (DelayZonePalmRejection *)this,
        (const struct DEVICE_OUTPUT_CONFIG *)(*((_QWORD *)v4 + 32) + 156LL),
        v58[0]);
      DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this, v35, v36, v37);
      v38 = this[16];
      if ( v38.QuadPart )
      {
        v39 = (unsigned int)this->HighPart;
LABEL_122:
        v41 = 1LL;
        goto LABEL_123;
      }
    }
    else if ( v51[1] )
    {
      if ( v54 )
      {
        if ( LOBYTE(this[1].LowPart) == 1 )
        {
          v40 = SGDGetUserSessionState(v33, LowPart, a3, a4);
          CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v40 + 16840), 1, 0);
          LOBYTE(this[1].LowPart) = 0;
        }
        DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this, LowPart, a3, a4);
      }
      else
      {
        this[8].QuadPart = (LONGLONG)v4;
        v12 = 0;
      }
      v38 = this[16];
      if ( v38.QuadPart )
      {
        v39 = (unsigned int)this->HighPart;
        v41 = 0LL;
LABEL_123:
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))DelayZoneTelemetry::UpdateInputPalmRejectStateInfo)(
          (LARGE_INTEGER)v38.QuadPart,
          v39,
          v41);
      }
    }
  }
  else
  {
    if ( !LOBYTE(this->LowPart) )
      goto LABEL_130;
    if ( v51[0] && v51[2] )
    {
      v38 = this[16];
      this->HighPart = 2;
      if ( !v38.QuadPart )
        goto LABEL_131;
      v39 = 2LL;
      goto LABEL_122;
    }
    if ( !v51[1] || !v55 )
    {
LABEL_130:
      this->HighPart = 2;
      goto LABEL_131;
    }
    v42 = SGDGetUserSessionState(v32, LowPart, a3, a4);
    CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v42 + 16840), 0, this[12].HighPart);
    LOBYTE(this[1].LowPart) = 1;
    v43 = this[3].QuadPart == 0;
    this[7].QuadPart = (LONGLONG)v4;
    this[8].QuadPart = (LONGLONG)v4;
    if ( v43 )
    {
      v58[0] = (struct tagPOINTER_INFO *)&this[3];
      v58[1] = *((struct tagPOINTER_INFO **)gpKernelHandleTable + 3 * (unsigned __int16)this[2].LowPart);
      HMAssignmentLock((__int64 **)v58, 0);
    }
    v38 = this[16];
    v12 = 0;
    this->HighPart = 1;
    if ( v38.QuadPart )
    {
      v41 = 0LL;
      v39 = 1LL;
      goto LABEL_123;
    }
  }
LABEL_131:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v50.LowPart = v12;
    LODWORD(v49) = this->HighPart;
    WPP_RECORDER_AND_TRACE_SF_dd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v7,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      4u,
      0x14u,
      (__int64)&WPP_0bb50b5e51eb3eed098c0ba758ca157d_Traceguids,
      v49,
      v50.QuadPart);
  }
  return v12;
}
