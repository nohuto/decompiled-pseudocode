/*
 * XREFs of RIMCreateHidDesc @ 0x1C0056014
 * Callers:
 *     RIMCreateDev @ 0x1C0045A34 (RIMCreateDev.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qd @ 0x1C00044F0 (WPP_RECORDER_AND_TRACE_SF_qd.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C0033A6C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDD @ 0x1C0034434 (WPP_RECORDER_AND_TRACE_SF_qDD.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     rimCheckForExplicitRimConflictInProcess @ 0x1C00563E0 (rimCheckForExplicitRimConflictInProcess.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C0056498 (rimIsExplicitRimUsagesMatchingUsages.c)
 *     ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00564C4 (-DbgPrintWarning@@YAXPEADZZ.c)
 *     RIMHidGetVendorAndProductID @ 0x1C0056504 (RIMHidGetVendorAndProductID.c)
 *     RIMHidGetUsageAndPage @ 0x1C0056608 (RIMHidGetUsageAndPage.c)
 *     IsProcessHidRawInputSupported @ 0x1C005670C (IsProcessHidRawInputSupported.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0189BB4 (RIMAllocateHidConfigDesc.c)
 *     RIMAllocateHidDesc @ 0x1C018A2D4 (RIMAllocateHidDesc.c)
 *     RIMFreeHidDesc @ 0x1C018B428 (RIMFreeHidDesc.c)
 *     RIMHidGetCaps @ 0x1C018B524 (RIMHidGetCaps.c)
 *     RIMHidGetPreparsedData @ 0x1C018BA5C (RIMHidGetPreparsedData.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDq @ 0x1C018E4F0 (WPP_RECORDER_AND_TRACE_SF_DDq.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0199C38 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C019A000 (RIMSearchHidTLCInfo.c)
 *     RIMIDECreateHIDDesc @ 0x1C019B10C (RIMIDECreateHIDDesc.c)
 *     ApiSetInkProcessorIsInkDevice @ 0x1C020DE34 (ApiSetInkProcessorIsInkDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // zf
  void *v10; // r9
  int v11; // edx
  int v12; // r8d
  unsigned int v13; // r15d
  int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  PDEVICE_OBJECT *v18; // rdx
  _UNKNOWN **v19; // r8
  int v21; // eax
  int v22; // ecx
  PDEVICE_OBJECT *v23; // rdx
  _UNKNOWN **v24; // r8
  PDEVICE_OBJECT v25; // rcx
  PDEVICE_OBJECT *v26; // rdx
  _UNKNOWN **v27; // r8
  __int16 v28; // ax
  __int64 PreparsedData; // rax
  void *v30; // r12
  PDEVICE_OBJECT *v31; // rdx
  _UNKNOWN **v32; // r8
  int Caps; // eax
  int v34; // edx
  PDEVICE_OBJECT *v35; // rdx
  _UNKNOWN **v36; // r8
  int v37; // edx
  int v38; // r8d
  PDEVICE_OBJECT *v39; // rdx
  _UNKNOWN **v40; // r8
  __int64 v41; // rax
  PDEVICE_OBJECT *v42; // rdx
  _UNKNOWN **v43; // r8
  int v44; // eax
  int v45; // edx
  PDEVICE_OBJECT *v46; // rdx
  _UNKNOWN **v47; // r8
  int v48; // r8d
  int v49; // edx
  __int64 v50; // rdi
  PDEVICE_OBJECT *v51; // rdx
  _UNKNOWN **v52; // r8
  int v53; // edx
  int v54; // r8d
  int v55; // [rsp+20h] [rbp-A9h]
  int v56; // [rsp+28h] [rbp-A1h]
  char v57; // [rsp+40h] [rbp-89h]
  _WORD v58[2]; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int16 v59; // [rsp+64h] [rbp-65h] BYREF
  _WORD v60[2]; // [rsp+68h] [rbp-61h] BYREF
  int v61; // [rsp+6Ch] [rbp-5Dh] BYREF
  PVOID v62; // [rsp+70h] [rbp-59h] BYREF
  PVOID Object; // [rsp+78h] [rbp-51h] BYREF
  void *v64; // [rsp+80h] [rbp-49h]
  HANDLE Handle; // [rsp+88h] [rbp-41h] BYREF
  __int64 v66; // [rsp+90h] [rbp-39h] BYREF
  int v67; // [rsp+98h] [rbp-31h]
  _WORD v68[32]; // [rsp+A0h] [rbp-29h] BYREF

  Object = 0LL;
  v62 = 0LL;
  v64 = 0LL;
  memset(v68, 0, sizeof(v68));
  Handle = 0LL;
  v9 = *(_BYTE *)(a2 + 48) == 2;
  v66 = 0LL;
  v67 = 0;
  if ( !v9 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  v10 = &WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v8,
      (_DWORD)gRimLog,
      4,
      1,
      10,
      (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
  }
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
  {
    v58[0] = 0;
    v59 = 0;
    v60[0] = 0;
    LOWORD(v61) = 0;
    if ( (int)RIMHidGetUsageAndPage(a2, v58, &v59, v10) < 0 || (int)RIMHidGetVendorAndProductID(a2, v60, &v61) < 0 )
      return v64;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v11) = 0;
    }
    v13 = v58[0];
    v14 = v59;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        (_DWORD)gRimLog,
        4,
        1,
        11,
        (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
        v59,
        v58[0]);
    }
    v61 = v14;
    DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v13, v14);
    if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, (unsigned __int16)v14, (unsigned __int16)v13) )
    {
      *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFCFFFF | 0x10000;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 1088) )
        goto LABEL_20;
      v21 = IsProcessHidRawInputSupported(v16, v15, v17, 13LL);
      v22 = 0;
      if ( v21 >= 0 )
        v22 = 0x20000;
      *(_DWORD *)(a2 + 184) = v22 | *(_DWORD *)(a2 + 184) & 0xFFFDFFFF;
      if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(
                           *(_QWORD *)(a1 + 32),
                           (unsigned __int16)v14,
                           (unsigned __int16)v13) )
      {
        v23 = &WPP_GLOBAL_Control;
        LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v24 = &WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dd(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v23,
            (_DWORD)v24,
            (_DWORD)gRimLog,
            4,
            1,
            12,
            (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
            v14,
            v13);
        }
        return v64;
      }
      if ( (_WORD)v14 != 13 || (_WORD)v13 != 15 )
      {
LABEL_20:
        if ( (*(_DWORD *)(a2 + 184) & 0x10000) == 0 && (_WORD)v14 == 1 )
        {
          if ( v13 && (v13 <= 2 || v13 > 5 && (v13 <= 7 || v13 == 128)) )
          {
            v18 = &WPP_GLOBAL_Control;
            LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            v19 = &WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_dd(
                WPP_GLOBAL_Control->AttachedDevice,
                (_DWORD)v18,
                (_DWORD)v19,
                (_DWORD)gRimLog,
                4,
                1,
                13,
                (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
                1,
                v13);
            }
            return v64;
          }
LABEL_110:
          if ( (_WORD)v13 == 14 && (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
          {
            v25 = WPP_GLOBAL_Control;
            v26 = &WPP_GLOBAL_Control;
            LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
            v27 = &WPP_RECORDER_INITIALIZED;
            LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !(_BYTE)v26 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v64;
            v28 = 19;
            v57 = 1;
            goto LABEL_71;
          }
          goto LABEL_120;
        }
        if ( (_WORD)v14 == 13 )
        {
          if ( (_WORD)v13 == 14 )
          {
            if ( (*(_DWORD *)(a1 + 84) & 0x18) == 0 )
            {
              v25 = WPP_GLOBAL_Control;
              v26 = &WPP_GLOBAL_Control;
              LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              v27 = &WPP_RECORDER_INITIALIZED;
              LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !(_BYTE)v26 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v64;
              v28 = 18;
              v57 = 13;
LABEL_71:
              WPP_RECORDER_AND_TRACE_SF_dd(
                v25->AttachedDevice,
                (_DWORD)v26,
                (_DWORD)v27,
                (_DWORD)gRimLog,
                3,
                1,
                v28,
                (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
                v57,
                14);
              return v64;
            }
            PreparsedData = RIMHidGetPreparsedData(a2, (int)&Handle, (int)&Object, (int)&v62, &v66);
            v30 = (void *)PreparsedData;
            if ( !PreparsedData )
            {
              v31 = &WPP_GLOBAL_Control;
              LOBYTE(v31) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              v32 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_q(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v31,
                  (_DWORD)v32,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  14,
                  (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
                  a2);
              }
              goto LABEL_185;
            }
            Caps = RIMHidGetCaps(a1, v62, PreparsedData, v68);
            if ( Caps != 1114112 )
            {
              v35 = &WPP_GLOBAL_Control;
              LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              v36 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v36) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v35,
                  (_DWORD)v36,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  15,
                  (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
                  (char)v62,
                  Caps);
              }
              goto LABEL_165;
            }
            LOBYTE(v34) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v34 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_dd(
                WPP_GLOBAL_Control->AttachedDevice,
                v34,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (_DWORD)gRimLog,
                4,
                1,
                16,
                (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
                v68[2],
                v68[4]);
            v64 = (void *)RIMAllocateHidConfigDesc(a1, a2, v62, v30, v68, &v66);
            if ( !v64 )
            {
              LOBYTE(v37) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v37 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_dd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v37,
                  v38,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  17,
                  (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
                  13,
                  14);
              }
              goto LABEL_165;
            }
            goto LABEL_200;
          }
        }
        else if ( (_WORD)v14 == 1 )
        {
          goto LABEL_110;
        }
LABEL_120:
        if ( (unsigned int)ApiSetInkProcessorIsInkDevice((unsigned __int16)v14, (unsigned __int16)v13, v60, 13LL)
          && (*(_DWORD *)(a1 + 84) & 4) == 0 )
        {
          v39 = &WPP_GLOBAL_Control;
          LOBYTE(v39) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          v40 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v39 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v40) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v39,
              (_DWORD)v40,
              (_DWORD)gRimLog,
              3,
              1,
              20,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids);
          }
          return v64;
        }
        v41 = RIMHidGetPreparsedData(a2, (int)&Handle, (int)&Object, (int)&v62, &v66);
        v30 = (void *)v41;
        if ( !v41 )
        {
          v42 = &WPP_GLOBAL_Control;
          LOBYTE(v42) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          v43 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v42 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_q(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v42,
              (_DWORD)v43,
              (_DWORD)gRimLog,
              3,
              1,
              21,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
              a2);
          }
          goto LABEL_185;
        }
        v44 = RIMHidGetCaps(a1, v62, v41, v68);
        if ( v44 != 1114112 )
        {
          v46 = &WPP_GLOBAL_Control;
          LOBYTE(v46) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          v47 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v46 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v47) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qd(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v46,
              (_DWORD)v47,
              (_DWORD)gRimLog,
              3,
              1,
              22,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
              (char)v62,
              v44);
          }
LABEL_165:
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            v30);
LABEL_185:
          if ( Object )
            ObfDereferenceObject(Object);
          if ( Handle )
            ZwClose(Handle);
          if ( v62 )
            ObfDereferenceObject(v62);
          return v64;
        }
        LOBYTE(v45) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v48 = v68[2];
          LOBYTE(v48) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dd(
            WPP_GLOBAL_Control->AttachedDevice,
            v45,
            v48,
            (_DWORD)gRimLog,
            4,
            1,
            23,
            (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
            v68[2],
            v68[4]);
        }
        v64 = (void *)RIMAllocateHidDesc(
                        a1,
                        a2,
                        (_DWORD)v30,
                        (unsigned int)v68,
                        (__int64)&v66,
                        (__int64)v62,
                        (__int64)Object);
        if ( !v64 )
        {
          LOBYTE(v49) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          if ( (_BYTE)v49 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_dd(
              WPP_GLOBAL_Control->AttachedDevice,
              v49,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              (_DWORD)gRimLog,
              3,
              1,
              24,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
              v14,
              v13);
          goto LABEL_165;
        }
        v50 = RIMSearchHidTLCInfo((unsigned __int16)v14, (unsigned __int16)v13);
        if ( v50 )
        {
          v51 = &WPP_GLOBAL_Control;
          LOBYTE(v51) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          v52 = &WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v51 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_DDq(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v51,
              (_DWORD)v52,
              (unsigned int)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
              v55,
              v56,
              25,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
              v61,
              v13,
              v50);
          }
        }
        else
        {
          v50 = RIMAllocateAndLinkHidTLCInfo((unsigned __int16)v14, (unsigned __int16)v13);
          if ( !v50 )
          {
            LOBYTE(v53) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
            if ( (_BYTE)v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v54) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v53,
                v54,
                (_DWORD)gRimLog,
                3,
                1,
                26,
                (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
                a1);
            }
            RIMFreeHidDesc(v64);
            v64 = 0LL;
            goto LABEL_185;
          }
          LOBYTE(v53) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v53 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v54) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qDD(
              WPP_GLOBAL_Control->AttachedDevice,
              v53,
              v54,
              (_DWORD)gRimLog,
              4,
              1,
              27,
              (__int64)&WPP_94a7da3dd1213881fc59263cd75cae92_Traceguids,
              v50,
              v61,
              v13);
          }
        }
        ++*(_DWORD *)(v50 + 20);
        *(_QWORD *)(a2 + 464) = v50;
LABEL_200:
        ObfDereferenceObject(v62);
        ObfDereferenceObject(Object);
        ZwClose(Handle);
        return v64;
      }
      *(_DWORD *)(a2 + 184) &= ~0x20000u;
    }
    *(_DWORD *)(a2 + 200) |= 0x40u;
    goto LABEL_20;
  }
  if ( !*(_QWORD *)a3
    || gpfnHidP_GetCollectionDescription
    && gpfnHidP_GetCollectionDescription(
         *(unsigned __int8 **)a3,
         *(_DWORD *)(a3 + 8),
         PagedPool,
         (struct _HIDP_DEVICE_DESC *)(a3 + 16)) >= 0 )
  {
    return (void *)RIMIDECreateHIDDesc(a1, a2, a3, v10);
  }
  else
  {
    return 0LL;
  }
}
