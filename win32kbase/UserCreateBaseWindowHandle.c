/*
 * XREFs of UserCreateBaseWindowHandle @ 0x1C017BF10
 * Callers:
 *     NtUserCreateBaseWindow @ 0x1C016DC10 (NtUserCreateBaseWindow.c)
 * Callees:
 *     HMAllocObjectEx @ 0x1C00122BC (HMAllocObjectEx.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003A4AC (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     HMFreeObject @ 0x1C0077F50 (HMFreeObject.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C007EBF0 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_qqd @ 0x1C0089624 (WPP_RECORDER_AND_TRACE_SF_qqd.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall UserCreateBaseWindowHandle(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  unsigned __int64 v4; // r12
  char v6; // r14
  struct tagTHREADINFO *v7; // r13
  __int64 v8; // rbx
  __int64 Pool2; // rdi
  int v10; // ecx
  NSInstrumentation::CLeakTrackingAllocator *v11; // rbx
  unsigned __int64 v12; // rdi
  int v13; // eax
  _QWORD *v14; // rax
  unsigned int v15; // edx
  char v16; // r10
  char v17; // si
  __int64 v18; // r9
  __int64 v19; // r15
  NSInstrumentation::CLeakTrackingAllocator *v20; // rsi
  int v21; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v23; // rax
  unsigned int v25; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v27; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v28; // [rsp+78h] [rbp-88h] BYREF
  __int64 v29; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp-78h] BYREF
  __int64 v31; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v32[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v33[2]; // [rsp+B0h] [rbp-50h] BYREF
  PVOID BackTrace[20]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v35[26]; // [rsp+160h] [rbp+60h] BYREF
  unsigned int v37; // [rsp+258h] [rbp+158h] BYREF

  v3 = a3;
  v4 = (unsigned int)a2;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
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
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      10,
      (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids);
  v7 = gptiCurrent;
  v8 = 0LL;
  v26 = 0LL;
  Pool2 = 0LL;
  if ( !a1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
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
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        5,
        11,
        11,
        (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids);
    v10 = 87;
LABEL_23:
    UserSetLastError(v10);
    goto LABEL_91;
  }
  if ( (*((_DWORD *)gptiCurrent + 318) & 0x1000000) == 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
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
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        5,
        11,
        14,
        (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
        (char)gptiCurrent);
    v10 = 4317;
    goto LABEL_23;
  }
  if ( (_DWORD)v4 )
  {
    v29 = 260LL;
    v11 = gpLeakTrackingAllocator;
    v12 = v4;
    v37 = 1685545557;
    v30 = v4;
    v13 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, v4, 1685545557LL);
      if ( Pool2 )
        _InterlockedAdd64((volatile signed __int64 *)v11 + 14, 1uLL);
      goto LABEL_46;
    }
    if ( v13 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x64776255u)
        && v4 + 16 > v4 )
      {
        v14 = (_QWORD *)ExAllocatePool2(v29 & 0xFFFFFFFFFFFFFFFDuLL, v4 + 16, v37);
        Pool2 = (__int64)v14;
        if ( !v14
          || (_InterlockedAdd64((volatile signed __int64 *)v11 + 14, 1uLL),
              *v14 = 1685545557LL,
              Pool2 = (__int64)(v14 + 2),
              v14 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v11 + 1),
            (const void *)0x64776255);
        }
LABEL_46:
        if ( Pool2 )
          goto LABEL_47;
LABEL_54:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
          || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(a2) = 0;
        }
        if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qqd(
            WPP_GLOBAL_Control->AttachedDevice,
            a2,
            a3,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            2,
            11,
            12,
            (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
            (char)v7,
            a1,
            v4);
        }
        goto LABEL_88;
      }
LABEL_53:
      Pool2 = 0LL;
      goto LABEL_54;
    }
    if ( v13 != 2 )
      goto LABEL_53;
    v27 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x64776255u, &v27) )
    {
      v32[0] = &v29;
      v32[1] = &v37;
      Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                (__int64)v11,
                (__int64)v32,
                &v30);
      goto LABEL_46;
    }
    v17 = v16;
    if ( v4 < 0x1000 || (v4 & 0xFFF) != 0 )
    {
      v12 = v4 + 16;
      v17 = 1;
      v30 = v4 + 16;
    }
    Pool2 = ExAllocatePool2(260LL, v12, v15);
    if ( !Pool2 )
      goto LABEL_53;
    _InterlockedAdd64((volatile signed __int64 *)v11 + 16, 1uLL);
    NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
    if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
    {
      if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                              v11,
                              Pool2,
                              v27,
                              BackTrace) )
      {
        Pool2 += 16LL;
        goto LABEL_46;
      }
      goto LABEL_52;
    }
    if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                             v11,
                             Pool2,
                             v27,
                             BackTrace) )
    {
LABEL_52:
      _InterlockedAdd64((volatile signed __int64 *)v11 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      goto LABEL_53;
    }
  }
LABEL_47:
  v19 = HMAllocObjectEx((__int64)v7, 0LL, 0x17u, 0x90u, v3);
  if ( !v19 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        11,
        13,
        (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids,
        (char)v7,
        a1);
    }
LABEL_88:
    if ( Pool2 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
    v8 = v26;
    goto LABEL_91;
  }
  v20 = gpLeakTrackingAllocator;
  a2 = 32LL;
  v31 = 260LL;
  v25 = 1752200021;
  v26 = 32LL;
  v21 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                       260LL,
                                                                                       32LL,
                                                                                       1752200021LL);
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      _InterlockedAdd64((volatile signed __int64 *)v20 + 14, 1uLL);
    goto LABEL_76;
  }
  if ( v21 != 1 )
  {
    if ( v21 == 2 )
    {
      v28 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x68707355u, &v28) )
      {
        v33[0] = &v31;
        v33[1] = &v25;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v20,
                                                                                           (__int64)v33,
                                                                                           &v26);
        goto LABEL_76;
      }
      v26 = 48LL;
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         48LL,
                                                                                         1752200021LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v20 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(v35);
        if ( (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v20,
                                  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                  v28,
                                  v35) )
            goto LABEL_76;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v20,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v28,
                                     v35) )
        {
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          goto LABEL_76;
        }
        _InterlockedAdd64((volatile signed __int64 *)v20 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
    }
    goto LABEL_75;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x68707355u) )
  {
LABEL_75:
    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    goto LABEL_76;
  }
  v23 = (_QWORD *)ExAllocatePool2(v31 & 0xFFFFFFFFFFFFFFFDuLL, 48LL, v25);
  UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v23;
  if ( !v23
    || (_InterlockedAdd64((volatile signed __int64 *)v20 + 14, 1uLL),
        *v23 = 1752200021LL,
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v23 + 2),
        v23 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v20 + 1),
      (const void *)0x68707355);
  }
LABEL_76:
  *(_QWORD *)(v19 + 80) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
  if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
  {
    *(_QWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
    *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 8) = 0LL;
    *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = 0;
    *(_DWORD *)(v19 + 132) &= ~2u;
    v8 = *(_QWORD *)v19;
    *(_QWORD *)(v19 + 56) = a1;
    *(_DWORD *)(v19 + 128) = v4;
    *(_QWORD *)(v19 + 120) = Pool2;
    *(_QWORD *)(v19 + 104) = v19 + 96;
    *(_QWORD *)(v19 + 96) = v19 + 96;
LABEL_91:
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v6 = 0;
    if ( (_BYTE)a2 || v6 )
    {
      LOBYTE(a3) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        11,
        15,
        (__int64)&WPP_68b0a22091f43afc894dba60a7884b12_Traceguids);
    }
    return v8;
  }
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  HMFreeObject((unsigned int *)v19, a2, a3, v18);
  return 0LL;
}
