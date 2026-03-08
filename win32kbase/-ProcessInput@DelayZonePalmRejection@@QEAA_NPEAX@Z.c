/*
 * XREFs of ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0216000
 * Callers:
 *     ?ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z @ 0x1C01FE660 (-ProcessDelayZonePalmRejection@CTouchProcessor@@AEAA_NPEAUCPointerInputFrame@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     ?GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z @ 0x1C01F8460 (-GetPointerInfo@CTouchProcessor@@QEAAPEBUtagPOINTER_INFO@@PEBUCPointerInputFrame@@K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C02096E8 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqd @ 0x1C0209F24 (WPP_RECORDER_AND_TRACE_SF_dqd.c)
 *     ?HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z @ 0x1C0211110 (-HandleDelayZonePalmRejectionTimer@CHidInput@@QEAAX_NK@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C02157D0 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0215BB8 (-HitTestRejectionRegion@DelayZonePalmRejection@@AEAA_NPEAXUtagPOINT@@1PEA_NPEAUCDelayZonePanelTe.c)
 *     ?SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@@Z @ 0x1C0216CEC (-SuppressDeadzoneContacts@DelayZonePalmRejection@@AEAAXAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqddd @ 0x1C0217010 (WPP_RECORDER_AND_TRACE_SF_dqddd.c)
 *     ?UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemetryFrame@@W4CDelayZoneTelemetryUpdateState@@K@Z @ 0x1C02322A8 (-UpdateInputPalmRejectStateInfo@DelayZoneTelemetry@@QEAAXW4CPalmRejectState@@W4CDelayZoneTelemet.c)
 *     ?UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDelayZonePanelTelemetryData@@PEBUtagPOINTER_INFO@@K@Z @ 0x1C0232334 (-UpdatePointerAndDelayZoneInfo@DelayZoneTelemetry@@QEAAXW4CDelayZoneTelemetryContactArea@@UCDela.c)
 */

char __fastcall DelayZonePalmRejection::ProcessInput(
        LARGE_INTEGER *this,
        signed __int64 LowPart,
        __int64 a3,
        unsigned __int64 a4)
{
  struct CPointerInputFrame *v4; // r13
  PDEVICE_OBJECT QuadPart; // rcx
  char v7; // di
  unsigned int v8; // eax
  LARGE_INTEGER PerformanceCounter; // r14
  unsigned int v10; // r12d
  char v11; // si
  __int64 v12; // rax
  const struct tagPOINTER_INFO *PointerInfo; // rax
  const struct tagPOINTER_INFO *v14; // r15
  int v15; // eax
  LARGE_INTEGER v16; // rax
  int v17; // eax
  LONG HighPart; // eax
  int v19; // r14d
  LARGE_INTEGER v20; // rax
  int v21; // eax
  struct tagPOINT v22; // r9
  struct tagPOINT v23; // r8
  void *v24; // rdx
  bool v25; // al
  unsigned __int8 v26; // r10
  bool v27; // r14
  int v28; // r14d
  unsigned int v29; // ecx
  LONGLONG v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  LARGE_INTEGER v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rax
  bool v42; // zf
  int v43; // edx
  int v45; // [rsp+28h] [rbp-E0h]
  int v46; // [rsp+30h] [rbp-D8h]
  int v47; // [rsp+38h] [rbp-D0h]
  int v48; // [rsp+40h] [rbp-C8h]
  char v49; // [rsp+58h] [rbp-B0h]
  char v50; // [rsp+58h] [rbp-B0h]
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
  LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      LowPart,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      13,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
      this->HighPart,
      *((_DWORD *)v4 + 10));
  v8 = *((_DWORD *)v4 + 12);
  LOBYTE(QuadPart) = 0;
  PerformanceCounter.QuadPart = 0LL;
  v51[1] = 0;
  v58[0] = 0LL;
  LOBYTE(LowPart) = 0;
  LOBYTE(v54) = 0;
  v10 = 0;
  LOBYTE(v55) = 0;
  v56.QuadPart = 0LL;
  v11 = 1;
  v51[0] = 0;
  v51[2] = 0;
  LOBYTE(v52) = 0;
  v53 = 0;
  v57 = v8;
  if ( v8 )
  {
    while ( 1 )
    {
      v12 = SGDGetUserSessionState(QuadPart, LowPart, a3, a4);
      PointerInfo = CTouchProcessor::GetPointerInfo(*(CTouchProcessor **)(v12 + 3424), v4, v10);
      v14 = PointerInfo;
      if ( PointerInfo )
      {
        v15 = *(_DWORD *)PointerInfo;
        if ( v15 == 3 )
        {
          v16 = this[4];
          if ( !v16.QuadPart )
          {
            v16 = *(LARGE_INTEGER *)((char *)v4 + 64);
            this[4] = v16;
          }
          if ( *((_QWORD *)v4 + 8) != v16.QuadPart )
            goto LABEL_131;
          v51[0] = 1;
          this[6] = KeQueryPerformanceCounter(0LL);
          v17 = *((_DWORD *)v14 + 3);
          if ( (v17 & 1) != 0 )
          {
            HighPart = this[5].HighPart;
            if ( !HighPart )
            {
              v51[2] = 1;
              v58[0] = v14;
            }
            a4 = (unsigned int)(HighPart + 1);
            this[5].HighPart = a4;
            LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_dqd(
                WPP_GLOBAL_Control->AttachedDevice,
                LowPart,
                a3,
                HighPart + 1,
                4,
                8,
                14,
                (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
                *((_DWORD *)v14 + 1),
                this[4].QuadPart,
                HighPart + 1);
            QuadPart = (PDEVICE_OBJECT)this[16].QuadPart;
            if ( QuadPart )
            {
              v19 = v53;
              memset(v61, 0, sizeof(v61));
              DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(QuadPart, 0xFFFFFFFFLL, v61, v14, v53);
              v53 = v19 + 1;
            }
          }
          else if ( (v17 & 2) == 0 )
          {
            a3 = (unsigned int)this[5].HighPart;
            if ( (_DWORD)a3 )
            {
              a3 = (unsigned int)(a3 - 1);
              this[5].HighPart = a3;
            }
            QuadPart = WPP_GLOBAL_Control;
            LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(a4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v49 = a3;
              LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dqd(
                WPP_GLOBAL_Control->AttachedDevice,
                LowPart,
                a3,
                a4,
                4,
                8,
                15,
                (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
                *((_DWORD *)v14 + 1),
                this[4].QuadPart,
                v49);
            }
          }
          PerformanceCounter = v56;
          if ( (*((_DWORD *)v14 + 3) & 0x8000) != 0 )
            LOBYTE(v52) = 1;
          goto LABEL_62;
        }
        if ( v15 != 2 )
          goto LABEL_131;
        v20 = this[2];
        if ( !v20.QuadPart )
        {
          v20 = *(LARGE_INTEGER *)((char *)v4 + 64);
          this[2] = v20;
        }
        if ( *((_QWORD *)v4 + 8) != v20.QuadPart )
          goto LABEL_131;
        v51[1] = 1;
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v56 = PerformanceCounter;
        v21 = *((_DWORD *)v14 + 3);
        if ( (v21 & 0x10000) == 0 )
        {
          if ( (v21 & 0x40000) != 0 )
          {
            LowPart = this[5].LowPart;
            if ( (_DWORD)LowPart )
            {
              LowPart = (unsigned int)(LowPart - 1);
              this[5].LowPart = LowPart;
            }
            QuadPart = WPP_GLOBAL_Control;
            LOBYTE(a4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)a4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v50 = LowPart;
              LOBYTE(LowPart) = a4;
              WPP_RECORDER_AND_TRACE_SF_dqd(
                WPP_GLOBAL_Control->AttachedDevice,
                LowPart,
                a3,
                a4,
                4,
                8,
                17,
                (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
                *((_DWORD *)v14 + 1),
                this[2].QuadPart,
                v50);
            }
          }
          goto LABEL_62;
        }
        ++this[5].LowPart;
        v22 = (struct tagPOINT)*((_QWORD *)v14 + 7);
        v23 = (struct tagPOINT)*((_QWORD *)v14 + 6);
        v24 = (void *)*((_QWORD *)v14 + 2);
        v51[3] = 0;
        v59 = 0LL;
        v60 = 0LL;
        v25 = DelayZonePalmRejection::HitTestRejectionRegion(
                (DelayZonePalmRejection *)this,
                v24,
                v23,
                v22,
                &v51[3],
                (struct CDelayZonePanelTelemetryData *)&v59);
        v26 = v55;
        v27 = v25;
        if ( !v55 )
        {
          v26 = v25;
          v55 = v25;
        }
        a4 = v54;
        if ( !v54 )
        {
          a4 = !v25;
          v54 = !v25;
        }
        LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_dqddd(
            WPP_GLOBAL_Control->AttachedDevice,
            LowPart,
            a3,
            v26,
            v45,
            v46,
            v47,
            v48,
            *((_DWORD *)v14 + 1),
            this[2].QuadPart,
            this[5].LowPart,
            v26,
            a4);
        QuadPart = (PDEVICE_OBJECT)this[16].QuadPart;
        if ( QuadPart && v27 )
        {
          v28 = v53;
          v62[0] = v59;
          v62[1] = v60;
          DelayZoneTelemetry::UpdatePointerAndDelayZoneInfo(QuadPart, v51[3], v62, v14, v53);
          v53 = v28 + 1;
        }
      }
      PerformanceCounter = v56;
LABEL_62:
      if ( ++v10 >= v57 )
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
      v29 = this[13].HighPart;
      if ( v29 )
      {
        v30 = PerformanceCounter.QuadPart - this[6].QuadPart;
        LowPart = (unsigned __int64)(1000 * v30) % gliQpcFreq.QuadPart;
        a4 = (unsigned __int64)(1000 * v30) / gliQpcFreq.QuadPart;
        if ( (unsigned int)a4 > v29 )
        {
          LOBYTE(this->LowPart) = 0;
          LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_L(
              WPP_GLOBAL_Control->AttachedDevice,
              LowPart,
              a3,
              (unsigned int)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
              4,
              8,
              19,
              (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
              a4);
        }
      }
    }
  }
  else if ( (_BYTE)LowPart )
  {
    LOBYTE(this->LowPart) = 1;
    LOBYTE(LowPart) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)LowPart || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        LowPart,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        8,
        18,
        (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids);
  }
  v31 = (unsigned int)this->HighPart;
  if ( (_DWORD)v31 )
  {
    v32 = (unsigned int)(v31 - 1);
    if ( (_DWORD)v32 )
    {
      if ( (_DWORD)v32 == 1 && !this[5].HighPart && !this[5].LowPart && !(_BYTE)v52 )
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
        v33 = SGDGetUserSessionState(v32, LowPart, a3, a4);
        CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v33 + 16840), 1, 0);
        LOBYTE(this[1].LowPart) = 0;
      }
      DelayZonePalmRejection::SuppressDeadzoneContacts(
        (DelayZonePalmRejection *)this,
        (const struct DEVICE_OUTPUT_CONFIG *)(*((_QWORD *)v4 + 32) + 156LL),
        v58[0]);
      DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this, v34, v35, v36);
      v37 = this[16];
      if ( v37.QuadPart )
      {
        v38 = (unsigned int)this->HighPart;
LABEL_122:
        v40 = 1LL;
        goto LABEL_123;
      }
    }
    else if ( v51[1] )
    {
      if ( v54 )
      {
        if ( LOBYTE(this[1].LowPart) == 1 )
        {
          v39 = SGDGetUserSessionState(v32, LowPart, a3, a4);
          CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v39 + 16840), 1, 0);
          LOBYTE(this[1].LowPart) = 0;
        }
        DelayZonePalmRejection::DispatchBufferedInputFrames((DelayZonePalmRejection *)this, LowPart, a3, a4);
      }
      else
      {
        this[8].QuadPart = (LONGLONG)v4;
        v11 = 0;
      }
      v37 = this[16];
      if ( v37.QuadPart )
      {
        v38 = (unsigned int)this->HighPart;
        v40 = 0LL;
LABEL_123:
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))DelayZoneTelemetry::UpdateInputPalmRejectStateInfo)(
          (LARGE_INTEGER)v37.QuadPart,
          v38,
          v40);
      }
    }
  }
  else
  {
    if ( !LOBYTE(this->LowPart) )
      goto LABEL_130;
    if ( v51[0] && v51[2] )
    {
      v37 = this[16];
      this->HighPart = 2;
      if ( !v37.QuadPart )
        goto LABEL_131;
      v38 = 2LL;
      goto LABEL_122;
    }
    if ( !v51[1] || !v55 )
    {
LABEL_130:
      this->HighPart = 2;
      goto LABEL_131;
    }
    v41 = SGDGetUserSessionState(v31, LowPart, a3, a4);
    CHidInput::HandleDelayZonePalmRejectionTimer(*(CHidInput **)(v41 + 16840), 0, this[12].HighPart);
    LOBYTE(this[1].LowPart) = 1;
    v42 = this[3].QuadPart == 0;
    this[7].QuadPart = (LONGLONG)v4;
    this[8].QuadPart = (LONGLONG)v4;
    if ( v42 )
    {
      v58[0] = (struct tagPOINTER_INFO *)&this[3];
      v58[1] = *((struct tagPOINTER_INFO **)gpKernelHandleTable + 3 * (unsigned __int16)this[2].LowPart);
      HMAssignmentLock((__int64 **)v58, 0);
    }
    v37 = this[16];
    v11 = 0;
    this->HighPart = 1;
    if ( v37.QuadPart )
    {
      v40 = 0LL;
      v38 = 1LL;
      goto LABEL_123;
    }
  }
LABEL_131:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v7 = 0;
  }
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v43 = 20;
    LOBYTE(v43) = v7;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dd(
      WPP_GLOBAL_Control->AttachedDevice,
      v43,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      20,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids,
      this->HighPart,
      v11);
  }
  return v11;
}
