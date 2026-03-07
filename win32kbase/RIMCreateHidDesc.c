void *__fastcall RIMCreateHidDesc(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edx
  __int64 v7; // r8
  void *v8; // r9
  int v9; // edx
  int v10; // r8d
  int v11; // r14d
  int v12; // esi
  int v14; // eax
  __int64 v15; // r9
  int v16; // ecx
  PDEVICE_OBJECT v17; // rcx
  PDEVICE_OBJECT *v18; // rdx
  _UNKNOWN **v19; // r8
  _UNKNOWN **v20; // r8
  PDEVICE_OBJECT v21; // rcx
  PDEVICE_OBJECT *v22; // rdx
  __int16 v23; // ax
  __int64 PreparsedData; // rax
  void *v25; // r12
  PDEVICE_OBJECT *v26; // rdx
  _UNKNOWN **v27; // r8
  int Caps; // eax
  int v29; // edx
  PDEVICE_OBJECT *v30; // rdx
  _UNKNOWN **v31; // r8
  int v32; // edx
  int v33; // r8d
  int v34; // r8d
  PDEVICE_OBJECT *v35; // rdx
  __int64 v36; // rax
  int v37; // r8d
  PDEVICE_OBJECT *v38; // rdx
  int v39; // eax
  int v40; // edx
  PDEVICE_OBJECT *v41; // rdx
  _UNKNOWN **v42; // r8
  int v43; // r8d
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  __int64 v49; // rdi
  PDEVICE_OBJECT *v50; // rdx
  _UNKNOWN **v51; // r8
  int v52; // edx
  int v53; // r8d
  int v54; // [rsp+20h] [rbp-B9h]
  int v55; // [rsp+28h] [rbp-B1h]
  __int16 v56; // [rsp+30h] [rbp-A9h]
  char v57; // [rsp+40h] [rbp-99h]
  char v58; // [rsp+48h] [rbp-91h]
  int v59; // [rsp+60h] [rbp-79h] BYREF
  unsigned __int16 v60; // [rsp+64h] [rbp-75h] BYREF
  _WORD v61[2]; // [rsp+68h] [rbp-71h] BYREF
  _WORD v62[2]; // [rsp+6Ch] [rbp-6Dh] BYREF
  PVOID v63; // [rsp+70h] [rbp-69h] BYREF
  PVOID Object; // [rsp+78h] [rbp-61h] BYREF
  void *v65; // [rsp+80h] [rbp-59h]
  HANDLE Handle; // [rsp+88h] [rbp-51h] BYREF
  _BYTE v67[8]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v68; // [rsp+98h] [rbp-41h] BYREF
  int v69; // [rsp+A0h] [rbp-39h]
  _WORD v70[32]; // [rsp+B0h] [rbp-29h] BYREF

  Object = 0LL;
  v63 = 0LL;
  v65 = 0LL;
  memset(v70, 0, sizeof(v70));
  Handle = 0LL;
  v68 = 0LL;
  v69 = 0;
  if ( *(_BYTE *)(a2 + 48) != 2 )
  {
    v59 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 207LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v6) = 0;
  }
  v8 = &WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids;
  LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      (_DWORD)gRimLog,
      4,
      1,
      10,
      (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
  if ( (*(_DWORD *)(a2 + 184) & 0x2000) == 0 )
  {
    v60 = 0;
    v61[0] = 0;
    v62[0] = 0;
    LOWORD(v59) = 0;
    if ( (int)RIMHidGetUsageAndPage(a2, &v60, v61) < 0 || (int)RIMHidGetVendorAndProductID(a2, v62, &v59) < 0 )
      return v65;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v9) = 0;
    }
    v11 = v60;
    v12 = v61[0];
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_DD(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        (_DWORD)gRimLog,
        4,
        1,
        11,
        (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
        v61[0],
        v60);
    }
    v59 = v12;
    DbgPrintWarning("Found (Usage: %x, UsagePage: %x)\n", v11, v12);
    if ( (unsigned int)rimIsExplicitRimUsagesMatchingUsages(a1, v12, v11) )
    {
      *(_DWORD *)(a2 + 184) = *(_DWORD *)(a2 + 184) & 0xFFFCFFFF | 0x10000;
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 1056) )
        return v65;
      v14 = IsProcessHidRawInputSupported();
      v16 = 0;
      if ( v14 >= 0 )
        v16 = 0x20000;
      *(_DWORD *)(a2 + 184) = v16 | *(_DWORD *)(a2 + 184) & 0xFFFDFFFF;
      if ( (unsigned int)rimCheckForExplicitRimConflictInProcess(
                           *(_QWORD *)(a1 + 32),
                           (unsigned __int16)v12,
                           (unsigned __int16)v11,
                           v15) )
      {
        v17 = WPP_GLOBAL_Control;
        v18 = &WPP_GLOBAL_Control;
        LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v19 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v65;
        v58 = v11;
        v57 = v12;
        v56 = 12;
        goto LABEL_35;
      }
      if ( (_WORD)v12 != 13 || (_WORD)v11 != 15 )
      {
LABEL_25:
        if ( (*(_DWORD *)(a2 + 184) & 0x10000) != 0 || (_WORD)v12 != 1 )
        {
          if ( (_WORD)v12 == 13 )
          {
            if ( (_WORD)v11 == 14 )
            {
              if ( (*(_DWORD *)(a1 + 84) & 0x18) == 0 )
              {
                v21 = WPP_GLOBAL_Control;
                v22 = &WPP_GLOBAL_Control;
                LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                v20 = &WPP_RECORDER_INITIALIZED;
                LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  return v65;
                v23 = 18;
LABEL_77:
                WPP_RECORDER_AND_TRACE_SF_DD(
                  v21->AttachedDevice,
                  (_DWORD)v22,
                  (_DWORD)v20,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  v23,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v12,
                  v11);
                return v65;
              }
              PreparsedData = RIMHidGetPreparsedData(a2, (int)&Handle, (int)&Object, (int)&v63, &v68);
              v25 = (void *)PreparsedData;
              if ( !PreparsedData )
              {
                v26 = &WPP_GLOBAL_Control;
                LOBYTE(v26) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                v27 = &WPP_RECORDER_INITIALIZED;
                if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_q(
                    WPP_GLOBAL_Control->AttachedDevice,
                    (_DWORD)v26,
                    (_DWORD)v27,
                    (_DWORD)gRimLog,
                    3,
                    1,
                    14,
                    (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                    a2);
                }
                goto LABEL_184;
              }
              Caps = RIMHidGetCaps(a1, v63, PreparsedData, v70);
              if ( Caps != 1114112 )
              {
                v30 = &WPP_GLOBAL_Control;
                LOBYTE(v30) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                v31 = &WPP_RECORDER_INITIALIZED;
                if ( (_BYTE)v30 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v31) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_qd(
                    WPP_GLOBAL_Control->AttachedDevice,
                    (_DWORD)v30,
                    (_DWORD)v31,
                    (_DWORD)gRimLog,
                    3,
                    1,
                    15,
                    (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                    (char)v63,
                    Caps);
                }
                goto LABEL_164;
              }
              LOBYTE(v29) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_DD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v29,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (_DWORD)gRimLog,
                  4,
                  1,
                  16,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v70[2],
                  v70[4]);
              v65 = (void *)RIMAllocateHidConfigDesc(a1, a2, v63, v25, v70, &v68);
              if ( !v65 )
              {
                LOBYTE(v32) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_DD(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v32,
                    v33,
                    (_DWORD)gRimLog,
                    3,
                    1,
                    17,
                    (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                    v59,
                    v11);
                }
                goto LABEL_164;
              }
              goto LABEL_199;
            }
LABEL_119:
            if ( (unsigned int)ApiSetInkProcessorIsInkDevice((unsigned __int16)v12, (unsigned __int16)v11, v62)
              && (*(_DWORD *)(a1 + 84) & 4) == 0 )
            {
              v35 = &WPP_GLOBAL_Control;
              LOBYTE(v35) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v35 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v35,
                  v34,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  20,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids);
              }
              return v65;
            }
            v36 = RIMHidGetPreparsedData(a2, (int)&Handle, (int)&Object, (int)&v63, &v68);
            v25 = (void *)v36;
            if ( !v36 )
            {
              v38 = &WPP_GLOBAL_Control;
              LOBYTE(v38) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v38 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v37) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_q(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v38,
                  v37,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  21,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  a2);
              }
              goto LABEL_184;
            }
            v39 = RIMHidGetCaps(a1, v63, v36, v70);
            if ( v39 != 1114112 )
            {
              v41 = &WPP_GLOBAL_Control;
              LOBYTE(v41) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              v42 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v41,
                  (_DWORD)v42,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  22,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  (char)v63,
                  v39);
              }
LABEL_164:
              NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v25);
LABEL_184:
              if ( Object )
                ObfDereferenceObject(Object);
              if ( Handle )
                ZwClose(Handle);
              if ( v63 )
                ObfDereferenceObject(v63);
              return v65;
            }
            LOBYTE(v40) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                       && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
            if ( (_BYTE)v40 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v43 = v70[2];
              LOBYTE(v43) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_DD(
                WPP_GLOBAL_Control->AttachedDevice,
                v40,
                v43,
                (_DWORD)gRimLog,
                4,
                1,
                23,
                (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                v70[2],
                v70[4]);
            }
            v65 = (void *)RIMAllocateHidDesc(
                            a1,
                            a2,
                            (_DWORD)v25,
                            (unsigned int)v70,
                            (__int64)&v68,
                            (__int64)v63,
                            (__int64)Object);
            if ( !v65 )
            {
              LOBYTE(v44) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v44 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_AND_TRACE_SF_DD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v44,
                  WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                  (_DWORD)gRimLog,
                  3,
                  1,
                  24,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v12,
                  v11);
              goto LABEL_164;
            }
            v48 = SGDGetUserSessionState(v45, v44, v46, v47);
            RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
              (RIMLOCKExclusiveIfNeeded *)v67,
              (struct _KTHREAD **)(v48 + 288));
            v49 = RIMSearchHidTLCInfo((unsigned __int16)v12, (unsigned __int16)v11);
            if ( v49 )
            {
              v50 = &WPP_GLOBAL_Control;
              LOBYTE(v50) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              v51 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v50 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v51) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_DDq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  (_DWORD)v50,
                  (_DWORD)v51,
                  (unsigned int)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v54,
                  v55,
                  25,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v59,
                  v11,
                  v49);
              }
            }
            else
            {
              v49 = RIMAllocateAndLinkHidTLCInfo((unsigned __int16)v12, (unsigned __int16)v11);
              if ( !v49 )
              {
                LOBYTE(v52) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
                if ( (_BYTE)v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v53) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_q(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v52,
                    v53,
                    (_DWORD)gRimLog,
                    3,
                    1,
                    26,
                    (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                    a1);
                }
                RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v67);
                RIMFreeHidDesc(v65);
                v65 = 0LL;
                goto LABEL_184;
              }
              LOBYTE(v52) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( (_BYTE)v52 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v53) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_qDD(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v52,
                  v53,
                  (_DWORD)gRimLog,
                  4,
                  1,
                  27,
                  (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
                  v49,
                  v59,
                  v11);
              }
            }
            ++*(_DWORD *)(v49 + 20);
            *(_QWORD *)(a2 + 464) = v49;
            RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v67);
LABEL_199:
            ObfDereferenceObject(v63);
            ObfDereferenceObject(Object);
            ZwClose(Handle);
            return v65;
          }
LABEL_56:
          if ( (_WORD)v12 == 1 && (_WORD)v11 == 14 )
          {
            LODWORD(v20) = 16;
            if ( (*(_DWORD *)(a1 + 84) & 0x10) == 0 )
            {
              v21 = WPP_GLOBAL_Control;
              v22 = &WPP_GLOBAL_Control;
              LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !(_BYTE)v22 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v65;
              v23 = 19;
              goto LABEL_77;
            }
          }
          goto LABEL_119;
        }
        if ( v11 != 1 && v11 != 2 && v11 != 6 && v11 != 7 && v11 != 128 )
          goto LABEL_56;
        v17 = WPP_GLOBAL_Control;
        v18 = &WPP_GLOBAL_Control;
        LOBYTE(v18) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        v19 = &WPP_RECORDER_INITIALIZED;
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v65;
        v58 = v11;
        v57 = v12;
        v56 = 13;
LABEL_35:
        WPP_RECORDER_AND_TRACE_SF_DD(
          v17->AttachedDevice,
          (_DWORD)v18,
          (_DWORD)v19,
          (_DWORD)gRimLog,
          4,
          1,
          v56,
          (__int64)&WPP_ee34c2b37e913f5a3c321c531693c890_Traceguids,
          v57,
          v58);
        return v65;
      }
      *(_DWORD *)(a2 + 184) &= ~0x20000u;
    }
    *(_DWORD *)(a2 + 200) |= 0x40u;
    goto LABEL_25;
  }
  if ( *(_QWORD *)a3 && (int)rimHidP_GetCollectionDescription(*(_QWORD *)a3, *(unsigned int *)(a3 + 8), v7, a3 + 16) < 0 )
    return 0LL;
  else
    return (void *)RIMIDECreateHIDDesc(a1, a2, a3, v8);
}
