__int64 __fastcall RIMIDEInjectHIDReportFromPointerInfo(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v5; // esi
  char *v6; // r15
  int v7; // r8d
  int v8; // edx
  int v9; // r8d
  unsigned __int64 v10; // rdx
  unsigned int v11; // ecx
  NSInstrumentation::CLeakTrackingAllocator *v12; // r14
  struct tagINPUT_INJECTION_VALUE *v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // rdi
  __int64 Pool2; // rdi
  _QWORD *v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r10
  char v20; // r11
  char v21; // r15
  unsigned int v22; // r9d
  unsigned int v23; // ecx
  __int64 v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int64 v33; // rax
  int v34; // r8d
  unsigned int v35; // r10d
  unsigned int v36; // r11d
  unsigned int v37; // r9d
  __int16 v38; // r8
  unsigned int v39; // r14d
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned int v43; // r11d
  __int64 v44; // rcx
  unsigned int v45; // r9d
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  int v52; // r8d
  __int64 v53; // rcx
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  int v60; // edx
  int v61; // r8d
  unsigned int v62; // r9d
  __int64 v63; // rcx
  unsigned int v64; // eax
  int v65; // edx
  int v66; // r8d
  unsigned int v68[2]; // [rsp+58h] [rbp-B0h] BYREF
  unsigned __int64 v69; // [rsp+60h] [rbp-A8h]
  __int64 v70; // [rsp+68h] [rbp-A0h] BYREF
  struct tagINPUT_INJECTION_VALUE *v71; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v72[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v73; // [rsp+88h] [rbp-80h] BYREF
  __int64 v74; // [rsp+90h] [rbp-78h] BYREF
  _OWORD v75[6]; // [rsp+98h] [rbp-70h] BYREF
  _OWORD v76[6]; // [rsp+F8h] [rbp-10h] BYREF
  PVOID BackTrace[20]; // [rsp+158h] [rbp+50h] BYREF
  _OWORD v78[9]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v79; // [rsp+288h] [rbp+180h]
  unsigned int v82; // [rsp+2F8h] [rbp+1F0h] BYREF
  unsigned int v83; // [rsp+300h] [rbp+1F8h]

  v82 = a3;
  v3 = a3;
  v71 = 0LL;
  v68[0] = 0;
  v5 = 0;
  v83 = 0;
  v6 = 0LL;
  if ( a3 )
  {
    if ( a3 <= 0x100 )
      goto LABEL_6;
    v7 = 1593;
  }
  else
  {
    v7 = 1592;
  }
  v68[1] = 0x20000;
  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v7);
LABEL_6:
  if ( !(unsigned int)BuildValueDeviceUsages(*(_DWORD *)a2, &v71, v68) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (_DWORD)gRimLog,
        2,
        1,
        45,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    goto LABEL_149;
  }
  v10 = v3 * v68[0];
  v69 = v10;
  if ( v10 > 0xFFFFFFFF )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v9,
        (_DWORD)gRimLog,
        2,
        1,
        36,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
        v3);
    }
LABEL_149:
    v5 = -1073741811;
    goto LABEL_150;
  }
  if ( *(_DWORD *)a2 == 2 )
  {
    v11 = v68[0] - 2;
LABEL_12:
    v68[1] = v11;
    goto LABEL_14;
  }
  if ( *(_DWORD *)a2 == 3 )
  {
    v11 = v68[0] - 1;
    goto LABEL_12;
  }
  v68[1] = v68[0];
LABEL_14:
  v12 = gpLeakTrackingAllocator;
  LODWORD(v70) = 1785620818;
  v73 = 260LL;
  v13 = (struct tagINPUT_INJECTION_VALUE *)(3LL * (unsigned int)v10);
  v14 = *(_DWORD *)gpLeakTrackingAllocator;
  v15 = 4LL * (_QWORD)v13;
  v74 = 4LL * (_QWORD)v13;
  switch ( v14 )
  {
    case 0:
      Pool2 = ExAllocatePool2(260LL, 4LL * (_QWORD)v13, 1785620818LL);
      if ( Pool2 )
        _InterlockedAdd64((volatile signed __int64 *)v12 + 14, 1uLL);
      goto LABEL_34;
    case 1:
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6A6E6952u)
        && v15 + 16 >= v15 )
      {
        v17 = (_QWORD *)ExAllocatePool2(v73 & 0xFFFFFFFFFFFFFFFDuLL, v15 + 16, (unsigned int)v70);
        Pool2 = (__int64)v17;
        if ( !v17
          || (_InterlockedAdd64((volatile signed __int64 *)v12 + 14, 1uLL),
              *v17 = 1785620818LL,
              Pool2 = (__int64)(v17 + 2),
              v17 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v12 + 1),
            0x6A6E6952uLL);
        }
LABEL_34:
        v6 = (char *)Pool2;
        if ( Pool2 )
          goto LABEL_47;
        goto LABEL_40;
      }
      break;
    case 2:
      v72[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1785620818, v72) )
      {
        v72[0] = (unsigned __int64)&v73;
        v72[1] = (unsigned __int64)&v70;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v12,
                  (__int64)v72,
                  &v74);
        goto LABEL_34;
      }
      v21 = v20;
      if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
      {
        v15 += 16LL;
        v21 = 1;
        v74 = v15;
      }
      Pool2 = ExAllocatePool2(v19, v15, v18);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v12 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v21 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v12,
                 (const void *)Pool2,
                 v72[0],
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_34;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v12,
                    Pool2,
                    v72[0],
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          v6 = (char *)Pool2;
          goto LABEL_47;
        }
        _InterlockedAdd64((volatile signed __int64 *)v12 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
      break;
  }
  v6 = 0LL;
  Pool2 = 0LL;
LABEL_40:
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v13) = 0;
  }
  v5 = -1073741801;
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v13,
      v9,
      (_DWORD)gRimLog,
      2,
      1,
      37,
      (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
      23);
  }
LABEL_47:
  if ( v68[0] > 0xC )
  {
    v68[0] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1631);
  }
  if ( v5 < 0 )
    goto LABEL_150;
  v22 = v82;
  v23 = 0;
  v68[0] = 0;
  if ( v82 )
  {
    while ( 1 )
    {
      if ( v5 < 0 )
        goto LABEL_150;
      v24 = 152LL * v23;
      v25 = *(_OWORD *)(v24 + a2 + 16);
      v78[0] = *(_OWORD *)(v24 + a2);
      v26 = *(_OWORD *)(v24 + a2 + 32);
      v78[1] = v25;
      v27 = *(_OWORD *)(v24 + a2 + 48);
      v78[2] = v26;
      v28 = *(_OWORD *)(v24 + a2 + 64);
      v78[3] = v27;
      v29 = *(_OWORD *)(v24 + a2 + 80);
      v78[4] = v28;
      v30 = *(_OWORD *)(v24 + a2 + 96);
      v78[5] = v29;
      v31 = *(_OWORD *)(v24 + a2 + 112);
      v78[6] = v30;
      v32 = *(_OWORD *)(v24 + a2 + 128);
      v33 = *(_QWORD *)(v24 + a2 + 144);
      v78[7] = v31;
      v78[8] = v32;
      v79 = v33;
      if ( (unsigned int)RIMIDEFillContactUsageValues(v71, v68[1], (int *)v78) )
      {
        v36 = v68[1];
        v37 = 0;
        if ( v68[1] )
        {
          v13 = v71;
          v38 = v68[0];
          v35 = v83;
          v39 = v69;
          do
          {
            if ( v35 >= v39 )
              break;
            ++v37;
            v40 = v35++;
            v41 = 3 * v40;
            *(_QWORD *)(Pool2 + 4 * v41) = *(_QWORD *)v13;
            *(_DWORD *)(Pool2 + 4 * v41 + 8) = *((_DWORD *)v13 + 2);
            *(_WORD *)(Pool2 + 4 * v41 + 8) = v38 + 1;
            *((_DWORD *)v13 + 1) = 0;
            v13 = (struct tagINPUT_INJECTION_VALUE *)((char *)v13 + 12);
          }
          while ( v37 < v36 );
          v83 = v35;
          goto LABEL_62;
        }
      }
      else
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v13) = 0;
        }
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v34) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v13,
            v34,
            (_DWORD)gRimLog,
            2,
            1,
            38,
            (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
        }
        v5 = -1073741811;
      }
      v35 = v83;
LABEL_62:
      v22 = v82;
      v23 = v68[0] + 1;
      v68[0] = v23;
      if ( v23 >= v82 )
      {
        v83 = v35;
        if ( v5 < 0 )
          goto LABEL_150;
        goto LABEL_71;
      }
    }
  }
  v35 = v83;
LABEL_71:
  v42 = a2;
  if ( *(_DWORD *)a2 != 2 )
    goto LABEL_103;
  v43 = v69;
  LODWORD(v13) = v35 + 1;
  if ( v35 + 1 > (unsigned int)v69 )
  {
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        v42,
        (_DWORD)gRimLog,
        2,
        1,
        39,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    v42 = a2;
    v5 = -1073741811;
LABEL_103:
    v45 = v83;
    goto LABEL_104;
  }
  v83 = v35 + 1;
  v44 = 3LL * v35;
  *(_DWORD *)(Pool2 + 4 * v44 + 4) = v22;
  *(_DWORD *)(Pool2 + 4 * v44) = 5505037;
  v45 = v35 + 1;
  *(_WORD *)(Pool2 + 4 * v44 + 8) = 0;
  if ( v35 + 2 > v43 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        v42,
        (_DWORD)gRimLog,
        2,
        1,
        41,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
      v45 = v83;
    }
    v83 = v45;
    goto LABEL_84;
  }
  v46 = *(_OWORD *)(a2 + 8);
  v47 = *(_OWORD *)(a2 + 24);
  v82 = 0;
  v75[0] = v46;
  v48 = *(_OWORD *)(a2 + 40);
  v75[1] = v47;
  v49 = *(_OWORD *)(a2 + 56);
  v75[2] = v48;
  v50 = *(_OWORD *)(a2 + 72);
  v75[3] = v49;
  v51 = *(_OWORD *)(a2 + 88);
  v75[4] = v50;
  v75[5] = v51;
  if ( !(unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)v75, &v82) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v13) = 0;
    }
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v52) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v13,
        v52,
        (_DWORD)gRimLog,
        2,
        1,
        40,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    v45 = v83;
LABEL_84:
    v5 = -1073741811;
    goto LABEL_85;
  }
  v45 = v83;
  v53 = 3LL * v83;
  *(_DWORD *)(Pool2 + 4 * v53 + 4) = v82;
  LODWORD(v69) = v45 + 1;
  *(_DWORD *)(Pool2 + 4 * v53) = 5636109;
  *(_WORD *)(Pool2 + 4 * v53 + 8) = 0;
LABEL_85:
  v42 = a2;
LABEL_104:
  if ( *(_DWORD *)v42 != 3 )
    goto LABEL_116;
  if ( v45 + 1 <= (unsigned int)v69 )
  {
    v54 = *(_OWORD *)(v42 + 8);
    v55 = *(_OWORD *)(v42 + 24);
    v82 = 0;
    v76[0] = v54;
    v56 = *(_OWORD *)(v42 + 40);
    v76[1] = v55;
    v57 = *(_OWORD *)(v42 + 56);
    v76[2] = v56;
    v58 = *(_OWORD *)(v42 + 72);
    v76[3] = v57;
    v59 = *(_OWORD *)(v42 + 88);
    v76[4] = v58;
    v76[5] = v59;
    if ( (unsigned int)RIMIDEGetTimeStampDelta(a1, (__int64)v76, &v82) )
    {
      v62 = v83;
      v63 = 3LL * v83;
      *(_DWORD *)(Pool2 + 4 * v63 + 4) = v82;
      v64 = v62 + 1;
      *(_DWORD *)(Pool2 + 4 * v63) = 5636109;
      *(_WORD *)(Pool2 + 4 * v63 + 8) = 0;
LABEL_117:
      if ( v5 >= 0 )
      {
        v5 = RIMIDEInjectDeviceInput(a1, Pool2, v64);
        if ( v5 < 0 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v65) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v65) = 0;
          }
          if ( (_BYTE)v65 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v66) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_d(
              WPP_GLOBAL_Control->AttachedDevice,
              v65,
              v66,
              (_DWORD)gRimLog,
              2,
              1,
              44,
              (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
              v5);
          }
        }
      }
      goto LABEL_150;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v60) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v60) = 0;
    }
    if ( (_BYTE)v60 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v61) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v60,
        v61,
        (_DWORD)gRimLog,
        2,
        1,
        42,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
    }
    v5 = -1073741811;
LABEL_116:
    v64 = v69;
    goto LABEL_117;
  }
  LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v13,
      v42,
      (_DWORD)gRimLog,
      2,
      1,
      43,
      (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
  }
  v5 = -1073741811;
LABEL_150:
  if ( v71 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v71);
  if ( v6 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v6);
  return (unsigned int)v5;
}
