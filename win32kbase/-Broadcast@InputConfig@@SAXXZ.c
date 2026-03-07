void __fastcall InputConfig::Broadcast(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  char CanSendMessageToDestinationInternal; // al
  __int64 v6; // rcx
  char v7; // r14
  CInputConfig *v8; // rbx
  CInputConfig *v9; // rcx
  CInputConfig *i; // r12
  _QWORD **v11; // rsi
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  NSInstrumentation::CLeakTrackingAllocator *v14; // rdi
  __int64 v15; // rbx
  int v16; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  unsigned int v18; // edi
  int v19; // eax
  _QWORD **v20; // rsi
  _QWORD *j; // r9
  _OWORD *v22; // r8
  _OWORD *v23; // rdx
  __int128 v24; // xmm1
  _OWORD *v25; // r8
  unsigned __int64 v26; // rax
  _QWORD *Pool2; // rax
  unsigned int v28; // edx
  __int64 v29; // r10
  __int64 v30; // [rsp+20h] [rbp-E0h] BYREF
  CInputConfig *v31; // [rsp+28h] [rbp-D8h]
  _QWORD v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  PVOID BackTrace[20]; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v34[72]; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v35; // [rsp+210h] [rbp+110h] BYREF
  int v36; // [rsp+218h] [rbp+118h]
  unsigned __int64 v37; // [rsp+220h] [rbp+120h] BYREF
  __int64 v38; // [rsp+228h] [rbp+128h] BYREF

  v4 = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 16048);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v4 + 8, 0LL);
  CanSendMessageToDestinationInternal = InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v4, 6LL);
  v6 = v4 + 8;
  LOBYTE(v4) = CanSendMessageToDestinationInternal;
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v7 = 0;
  if ( (_BYTE)v4 )
  {
    v8 = gpInputConfig;
    v31 = gpInputConfig;
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
    v9 = *(CInputConfig **)v8;
    for ( i = **(CInputConfig ***)v8; ; i = *(CInputConfig **)i )
    {
      v11 = 0LL;
      if ( v9 != v8 )
        v11 = (_QWORD **)((char *)v9 + 16);
      if ( !v11 )
      {
LABEL_6:
        ExReleaseResourceLite(CInputConfig::slock);
        KeLeaveCriticalRegion();
        memset(&v34[1], 0, 0xD8uLL);
        v34[0] = 1;
        SendMessageTo(6LL, v34, 220LL);
        return;
      }
      v12 = *((_DWORD *)v11 + 363);
      if ( v12 > 1 )
      {
        v26 = 200LL * (v12 - 1);
        if ( v26 > 0xFFFFFFFF || (v13 = v26 + 220, (unsigned int)v26 >= 0xFFFFFF24) )
        {
          v36 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1064LL);
          goto LABEL_20;
        }
      }
      else
      {
        v13 = 220;
      }
      v14 = gpLeakTrackingAllocator;
      v15 = v13;
      v35 = 1866690121;
      v38 = 260LL;
      v16 = *(_DWORD *)gpLeakTrackingAllocator;
      v30 = v13;
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6F436E49u)
            || (unsigned __int64)v13 + 16 < v13 )
          {
            goto LABEL_6;
          }
          Pool2 = (_QWORD *)ExAllocatePool2(v38 & 0xFFFFFFFFFFFFFFFDuLL, v13 + 16LL, v35);
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
          if ( !Pool2
            || (_InterlockedIncrement64((volatile signed __int64 *)v14 + 14),
                *Pool2 = 1866690121LL,
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
                Pool2 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v14 + 1),
              (const void *)0x6F436E49);
          }
        }
        else
        {
          if ( v16 != 2 )
            goto LABEL_6;
          v37 = 0LL;
          if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6F436E49u, &v37) )
          {
            if ( v13 < 0x1000uLL || (v13 & 0xFFF) != 0 )
            {
              v15 = v13 + 16LL;
              v7 = 1;
              v30 = v15;
            }
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                               v29,
                                                                                               v15,
                                                                                               v28);
            if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
              goto LABEL_6;
            _InterlockedIncrement64((volatile signed __int64 *)v14 + 16);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( !v7
              || (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
               + 16 >= 0x1000 )
            {
              v7 = 0;
              if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v14,
                                       UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                       v37,
                                       BackTrace) )
              {
LABEL_42:
                _InterlockedIncrement64((volatile signed __int64 *)v14 + 17);
                _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
                goto LABEL_6;
              }
              goto LABEL_14;
            }
            v7 = 0;
            if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v14,
                                     UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                     v37,
                                     BackTrace) )
              goto LABEL_42;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
          }
          else
          {
            v32[0] = &v38;
            v32[1] = &v35;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                               v14,
                                                                                               v32,
                                                                                               &v30);
          }
        }
      }
      else
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           260LL,
                                                                                           v13,
                                                                                           1866690121LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)v14 + 14);
      }
      if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        goto LABEL_6;
LABEL_14:
      *(_DWORD *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0;
      v18 = 0;
      *(_QWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 4) = *v11;
      v19 = *((_DWORD *)v11 + 2);
      v20 = v11 + 182;
      *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 12) = v19;
      *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 16) = v12;
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(CInputConfig::slock, 1u);
      for ( j = *v20; ; j = (_QWORD *)*j )
      {
        v22 = 0LL;
        if ( j != v20 )
          v22 = j + 2;
        if ( !v22 )
          break;
        v23 = (_OWORD *)(200LL * v18
                       + UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
                       + 20);
        *v23 = *v22;
        v23[1] = v22[1];
        v23[2] = v22[2];
        v23[3] = v22[3];
        v23[4] = v22[4];
        v23[5] = v22[5];
        v23[6] = v22[6];
        v23 += 8;
        v24 = v22[7];
        v25 = v22 + 8;
        ++v18;
        *(v23 - 1) = v24;
        *v23 = *v25;
        v23[1] = v25[1];
        v23[2] = v25[2];
        v23[3] = v25[3];
        *((_QWORD *)v23 + 8) = *((_QWORD *)v25 + 8);
      }
      ExReleaseResourceLite(CInputConfig::slock);
      KeLeaveCriticalRegion();
      SendMessageTo(6LL, UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64, v13);
      NSInstrumentation::CLeakTrackingAllocator::Free(
        gpLeakTrackingAllocator,
        (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      v8 = v31;
LABEL_20:
      v9 = i;
    }
  }
}
