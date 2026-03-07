__int64 __fastcall rimObsDeliverInputToObserver(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  char v4; // r14
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // esi
  __int64 *v8; // rdx
  int v9; // r8d
  int v10; // edx
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  int v12; // edx
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *Pool2; // rax
  unsigned int v15; // r10d
  __int64 v16; // r11
  __int64 v17; // rdi
  int v18; // eax
  int v19; // ecx
  int v20; // edx
  __int64 v21; // rax
  void **v22; // rbx
  int v23; // edx
  int v24; // r8d
  unsigned int v25; // r9d
  int v26; // edx
  void *v27; // rcx
  int v28; // edx
  int v29; // r8d
  _QWORD v31[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE v33; // [rsp+68h] [rbp-98h]
  int v34; // [rsp+70h] [rbp-90h]
  int v35; // [rsp+74h] [rbp-8Ch]
  __int64 v36; // [rsp+78h] [rbp-88h]
  int v37; // [rsp+80h] [rbp-80h]
  int v38; // [rsp+84h] [rbp-7Ch]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h] BYREF
  __int64 v41; // [rsp+98h] [rbp-68h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-60h] BYREF
  int v43; // [rsp+A8h] [rbp-58h]
  int v44; // [rsp+ACh] [rbp-54h]
  __int128 v45; // [rsp+B0h] [rbp-50h]
  __int128 v46; // [rsp+C0h] [rbp-40h]
  PVOID BackTrace[28]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v48; // [rsp+1C0h] [rbp+C0h] BYREF
  HANDLE Handle; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned __int64 v50; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v51; // [rsp+1D8h] [rbp+D8h] BYREF

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      20,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
      a1,
      v2);
  if ( (unsigned int)dword_1C02CA7E0 > 4 && tlgKeywordOn((__int64)&dword_1C02CA7E0, 256LL) )
  {
    v40 = v2;
    v31[0] = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1C02CA7E0,
      byte_1C0299352,
      v5,
      v6,
      (__int64)v31,
      (__int64)&v40);
  }
  v7 = 0;
  RIMLockExclusive(v2 + 176);
  Handle = rimObsCheckForExistingDeviceHandle(v2, *(PVOID *)(a1 + 32));
  if ( Handle == (HANDLE)-1LL )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v8,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        23,
        21,
        (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
    }
    v7 = ObOpenObjectByPointer(*(PVOID *)(a1 + 32), 0, 0LL, 3u, ExRawInputManagerObjectType, 0, &Handle);
    if ( v7 < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v10) = 0;
      }
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          23,
          24,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
      }
      goto LABEL_137;
    }
    v11 = gpLeakTrackingAllocator;
    v48 = 1701334866;
    v51 = 260LL;
    v41 = 24LL;
    v12 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( *(_DWORD *)gpLeakTrackingAllocator )
    {
      if ( v12 != 1 )
      {
        if ( v12 != 2 )
          goto LABEL_60;
        v50 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1701334866, &v50) )
        {
          v31[0] = &v51;
          v31[1] = &v48;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             (__int64)v11,
                                                                                             (__int64)v31,
                                                                                             &v41);
          goto LABEL_35;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(v16, 40LL, v15);
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          goto LABEL_60;
        _InterlockedAdd64((volatile signed __int64 *)v11 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v11,
                 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v50,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
LABEL_38:
            *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = Handle;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
              || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v12) = 0;
            }
            if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_q(
                WPP_GLOBAL_Control->AttachedDevice,
                v12,
                v9,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                23,
                23,
                (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
                (char)Handle);
            }
            v8 = *(__int64 **)(v2 + 136);
            if ( *v8 != v2 + 128 )
              __fastfail(3u);
            *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = v2 + 128;
            *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = v8;
            *v8 = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            *(_QWORD *)(v2 + 136) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            goto LABEL_48;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                    (__int64)v11,
                    (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v50,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_35;
        }
        _InterlockedAdd64((volatile signed __int64 *)v11 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        goto LABEL_60;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65684F52u) )
        goto LABEL_60;
      Pool2 = (_QWORD *)ExAllocatePool2(v51 & 0xFFFFFFFFFFFFFFFDuLL, 40LL, v48);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedAdd64((volatile signed __int64 *)v11 + 14, 1uLL),
            *Pool2 = 1701334866LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v11 + 1),
          0x65684F52uLL);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         24LL,
                                                                                         1701334866LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedAdd64((volatile signed __int64 *)v11 + 14, 1uLL);
    }
LABEL_35:
    if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
LABEL_60:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          23,
          22,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
      }
      v7 = -1073741670;
      ObCloseHandle(Handle, *(_BYTE *)(v2 + 72));
      goto LABEL_137;
    }
    goto LABEL_38;
  }
LABEL_48:
  LODWORD(v17) = 48;
  v32[1] = 0;
  v35 = 0;
  v38 = 0;
  if ( *(_DWORD *)(v2 + 104) < 0x30u )
  {
    v48 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 515);
  }
  v18 = *(_DWORD *)(a1 + 256);
  if ( v18 < 0 )
  {
    v7 = *(_DWORD *)(a1 + 256);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v8) = 0;
    }
    if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v8,
        v9,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        23,
        26,
        (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
        v18);
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 264) <= 0xFFFFFFCFuLL )
    {
      v17 = *(_QWORD *)(a1 + 264) + 48LL;
    }
    else
    {
      v7 = -1073741675;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v8) = 0;
      }
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          (_DWORD)v8,
          v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          3,
          23,
          25,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
      }
    }
    if ( v7 >= 0 )
    {
      v19 = *(_DWORD *)(a1 + 256);
      v20 = *(unsigned __int8 *)(a1 + 48);
      v36 = *(_QWORD *)(a1 + 264);
      v33 = Handle;
      v32[0] = 0;
      v34 = v19;
      v37 = v20;
      v39 = 0LL;
      if ( v19 < 0 )
        goto LABEL_86;
      if ( v20 )
      {
        if ( --v20 )
        {
          if ( v20 == 1 )
          {
            v39 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 24LL);
          }
          else
          {
            v48 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 563);
          }
LABEL_86:
          if ( *(_DWORD *)(v2 + 88) == 1 )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
              || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v20) = 0;
            }
            if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v20,
                v9,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                23,
                27,
                (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
            }
            v22 = *(void ***)(v2 + 96);
            v7 = rimObsCopyMessage(v32, *(_DWORD *)(v2 + 72), v22, *(_DWORD *)(v2 + 104));
            if ( v7 == -1073741789 )
            {
              LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
              if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_dd(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v23,
                  v24,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  3,
                  23,
                  28,
                  (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
                  *(_DWORD *)(v2 + 104),
                  v17);
              }
              v25 = *(_DWORD *)(v2 + 104);
              v26 = *(_DWORD *)(v2 + 72);
              v42 = 1LL;
              v43 = 0;
              v44 = v17;
              v45 = 0LL;
              v46 = 0LL;
              rimObsCopyMessage((int *)&v42, v26, v22, v25);
              v7 = rimObsPushInputMessage(v2, v32);
            }
            else
            {
              LOBYTE(v23) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
                         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
              if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v23,
                  v24,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  4,
                  23,
                  29,
                  (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
              }
            }
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
              || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v23) = 0;
            }
            if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v23,
                v24,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                23,
                30,
                (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
            }
            v27 = *(void **)(v2 + 80);
            *(_DWORD *)(v2 + 88) = 0;
            ZwSetEvent(v27, 0LL);
          }
          else
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
              || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v20) = 0;
            }
            if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v20,
                v9,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                4,
                23,
                31,
                (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
            }
            v7 = rimObsPushInputMessage(v2, v32);
            if ( v7 == -1073741756 )
              v7 = 0;
          }
          goto LABEL_137;
        }
        v21 = a1 + 496;
      }
      else
      {
        v21 = a1 + 468;
      }
      v39 = v21;
      goto LABEL_86;
    }
  }
LABEL_137:
  *(_QWORD *)(v2 + 184) = 0LL;
  ExReleasePushLockExclusiveEx(v2 + 176, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v4 = 0;
  }
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v28) = v4;
    LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v28,
      v29,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      23,
      32,
      (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
