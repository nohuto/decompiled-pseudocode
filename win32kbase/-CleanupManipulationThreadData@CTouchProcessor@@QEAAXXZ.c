void __fastcall CTouchProcessor::CleanupManipulationThreadData(CTouchProcessor *this)
{
  CTouchProcessor *v1; // r12
  unsigned int v2; // r14d
  __int64 v3; // r13
  NSInstrumentation::CLeakTrackingAllocator *v4; // rbx
  unsigned __int64 v5; // rdi
  int v6; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rsi
  _QWORD *Pool2; // rax
  NSInstrumentation::CLeakTrackingAllocator *v9; // rdi
  unsigned __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // r10
  unsigned int v15; // ecx
  unsigned int i; // r15d
  __int64 v17; // rdi
  CPointerInfoNode *v18; // rcx
  const struct tagINPUTDEST *PrevMTNodeTarget; // rax
  struct CInputPointerNode *NodeById; // rax
  int v21; // r15d
  unsigned int j; // edi
  __int64 v23; // rdx
  unsigned int v24; // r8d
  __int64 v25; // r10
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  int v29; // [rsp+48h] [rbp-C0h]
  int v30; // [rsp+4Ch] [rbp-BCh]
  unsigned int v32; // [rsp+60h] [rbp-A8h] BYREF
  _DWORD v33[6]; // [rsp+68h] [rbp-A0h] BYREF
  struct CPointerInputFrame *v34; // [rsp+80h] [rbp-88h]
  unsigned __int64 v35; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 v36; // [rsp+90h] [rbp-78h] BYREF
  __int64 v37; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v38; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v40; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v41[2]; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD v42[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-20h]
  __int128 v45; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v46; // [rsp+100h] [rbp-8h]
  __int128 v47; // [rsp+108h] [rbp+0h] BYREF
  __int64 v48; // [rsp+118h] [rbp+10h]
  _BYTE v49[40]; // [rsp+120h] [rbp+18h] BYREF
  CInpLockGuard *v50; // [rsp+148h] [rbp+40h]
  _BYTE v51[128]; // [rsp+158h] [rbp+50h] BYREF
  CInpLockGuard *v52[8]; // [rsp+1D8h] [rbp+D0h] BYREF
  PVOID BackTrace[20]; // [rsp+218h] [rbp+110h] BYREF
  PVOID v54[20]; // [rsp+2B8h] [rbp+1B0h] BYREF
  char v55[112]; // [rsp+358h] [rbp+250h] BYREF
  _QWORD v56[16]; // [rsp+3C8h] [rbp+2C0h] BYREF

  v1 = this;
  v2 = 0;
  v29 = 0;
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v52,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v3 = *((_QWORD *)v1 + 8);
  if ( (CTouchProcessor *)v3 == (CTouchProcessor *)((char *)v1 + 56) )
    goto LABEL_2;
  do
  {
    v34 = (struct CPointerInputFrame *)(v3 - 8);
    if ( v3 == 8 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 8232LL);
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 36));
    v4 = gpLeakTrackingAllocator;
    v5 = 4LL * *(unsigned int *)(v3 + 40);
    v30 = 0;
    v6 = *(_DWORD *)gpLeakTrackingAllocator;
    v32 = 1851878741;
    v37 = 260LL;
    v38 = v5;
    if ( v6 )
    {
      if ( v6 != 1 )
      {
        if ( v6 == 2 )
        {
          v35 = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6E616D55u, &v35) )
          {
            v41[0] = &v37;
            v41[1] = &v32;
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                               (__int64)v4,
                                                                                               (__int64)v41,
                                                                                               &v38);
            goto LABEL_29;
          }
          if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
          {
            v5 += 16LL;
            LOBYTE(v2) = 1;
            v38 = v5;
          }
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                             260LL,
                                                                                             v5,
                                                                                             1851878741LL);
          if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
            NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
            if ( (_BYTE)v2
              && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
               + 16 < 0x1000 )
            {
              v2 = 0;
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v4,
                                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                      v35,
                                      BackTrace) )
              {
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
                goto LABEL_29;
              }
            }
            else
            {
              v2 = 0;
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                      v4,
                                      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                      v35,
                                      BackTrace) )
                goto LABEL_29;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
          }
          else
          {
            v2 = 0;
          }
        }
LABEL_28:
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
        goto LABEL_29;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6E616D55u)
        || v5 + 16 < v5 )
      {
        goto LABEL_28;
      }
      Pool2 = (_QWORD *)ExAllocatePool2(v37 & 0xFFFFFFFFFFFFFFFDuLL, v5 + 16, v32);
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)Pool2;
      if ( !Pool2
        || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
            *Pool2 = 1851878741LL,
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(Pool2 + 2),
            Pool2 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v4 + 1),
          (const void *)0x6E616D55);
      }
    }
    else
    {
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         260LL,
                                                                                         v5,
                                                                                         1851878741LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
    }
LABEL_29:
    v9 = gpLeakTrackingAllocator;
    v10 = 4LL * *(unsigned int *)(v3 + 40);
    v33[0] = 1851878741;
    v11 = *(_DWORD *)gpLeakTrackingAllocator;
    v39 = 260LL;
    v40 = v10;
    if ( v11 )
    {
      if ( v11 != 1 )
      {
        if ( v11 == 2 )
        {
          v36 = 0LL;
          if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6E616D55u, &v36) )
          {
            v42[0] = &v39;
            v42[1] = v33;
            v12 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v9,
                    (__int64)v42,
                    &v40);
            goto LABEL_53;
          }
          if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
          {
            v10 += 16LL;
            LOBYTE(v2) = 1;
            v40 = v10;
          }
          v12 = ExAllocatePool2(v14, v10, 1851878741LL);
          if ( v12 )
          {
            _InterlockedIncrement64((volatile signed __int64 *)v9 + 16);
            NSInstrumentation::CBackTrace::CBackTrace(v54);
            if ( (_BYTE)v2 && (unsigned __int64)(v12 & 0xFFF) + 16 < 0x1000 )
            {
              v2 = 0;
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                      v9,
                                      v12,
                                      v36,
                                      v54) )
              {
                v12 += 16LL;
                goto LABEL_53;
              }
            }
            else
            {
              v2 = 0;
              if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                      v9,
                                      v12,
                                      v36,
                                      v54) )
                goto LABEL_53;
            }
            _InterlockedIncrement64((volatile signed __int64 *)v9 + 17);
            _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v12);
          }
          else
          {
            v2 = 0;
          }
        }
LABEL_52:
        v12 = 0LL;
        goto LABEL_53;
      }
      if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6E616D55u)
        || v10 + 16 < v10 )
      {
        goto LABEL_52;
      }
      v13 = (_QWORD *)ExAllocatePool2(v39 & 0xFFFFFFFFFFFFFFFDuLL, v10 + 16, v33[0]);
      v12 = (__int64)v13;
      if ( !v13
        || (_InterlockedIncrement64((volatile signed __int64 *)v9 + 14),
            *v13 = 1851878741LL,
            v12 = (__int64)(v13 + 2),
            v13 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v9 + 1),
          (const void *)0x6E616D55);
      }
    }
    else
    {
      v12 = ExAllocatePool2(260LL, v10, 1851878741LL);
      if ( v12 )
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 14);
    }
LABEL_53:
    v15 = *(_DWORD *)(v3 + 40);
    for ( i = 0; i < v15; ++i )
    {
      v17 = *(_QWORD *)(v3 + 232) + 480LL * i;
      memset(v51, 0, 113);
      if ( (unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v17)
        && (unsigned int)CPointerInfoNode::IsForManipulationThread(v18)
        && (*(_DWORD *)(v17 + 4) & 0x200) == 0 )
      {
        if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64
          || !v12
          || (PrevMTNodeTarget = (const struct tagINPUTDEST *)CTouchProcessor::GetPrevMTNodeTarget(this, v55, v17, v34),
              CInputDest::CInputDest((CInputDest *)v56, PrevMTNodeTarget),
              v29 |= 1u,
              !*(_DWORD *)CInputDest::operator=((__int64)v51, v56)) )
        {
          LOBYTE(v2) = 1;
        }
        if ( (v29 & 1) != 0 )
        {
          v29 &= ~1u;
          CInputDest::SetEmpty((CInputDest *)v56);
        }
        if ( (_BYTE)v2 )
        {
          v1 = this;
          NodeById = CTouchProcessor::FindNodeById(this, *(_WORD *)(v17 + 172), 0, 0);
          v2 = 0;
          if ( NodeById )
          {
            _InterlockedDecrement((volatile signed __int32 *)NodeById + 9);
            if ( *((int *)NodeById + 9) < 0 )
            {
              v33[2] = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13296LL);
            }
          }
          if ( (*(_DWORD *)(v17 + 180) & 0x40000) != 0 )
            CTouchProcessor::ProcessRoutedAwayList(
              this,
              *(_WORD *)(v17 + 172),
              1,
              v34,
              i,
              (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
          CTouchProcessor::FreePointerInfoNodeInt(this, v34, i);
          CTouchProcessor::CheckFreeOnDeparture(this, *(_WORD *)(v17 + 172));
          goto LABEL_72;
        }
        ++v30;
        *(_QWORD *)(v17 + 192) = CInputDest::GetWindowHandle((CInputDest *)v51);
        CInputDest::operator=(v17 + 352, v51);
        v2 = 0;
        *(_DWORD *)(v12 + 4LL * i) = 1;
      }
      v1 = this;
LABEL_72:
      CInputDest::SetEmpty((CInputDest *)v51);
      v15 = *(_DWORD *)(v3 + 40);
    }
    v21 = 0;
    if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
    {
      if ( v12 )
      {
        for ( j = 0; j < v15; ++j )
        {
          if ( *(_DWORD *)(v12 + 4LL * j) )
          {
            v23 = *(_QWORD *)(v3 + 232);
            v24 = j;
            v25 = *(_QWORD *)(480LL * j + v23 + 192);
            if ( j >= v15 )
              goto LABEL_83;
            do
            {
              v26 = 480LL * v24;
              if ( *(_DWORD *)(v12 + 4LL * v24) && *(_QWORD *)(v26 + v23 + 192) == v25 )
              {
                v27 = *(unsigned __int16 *)(v26 + v23 + 172);
                v28 = v2++;
                *(_DWORD *)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 + 4 * v28) = v27;
                *(_DWORD *)(v12 + 4LL * v24) = 0;
                v23 = *(_QWORD *)(v3 + 232);
              }
              ++v24;
            }
            while ( v24 < *(_DWORD *)(v3 + 40) );
            if ( !v2 )
            {
LABEL_83:
              v33[3] = 0x20000;
              MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13366LL);
            }
            v48 = 0LL;
            v46 = 0LL;
            v44 = 0LL;
            v47 = 0LL;
            v45 = 0LL;
            v43 = 0LL;
            if ( qword_1C02D65C8 )
            {
              qword_1C02D65C8(
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                &v47,
                Win32FreePool);
              if ( qword_1C02D65C8 )
              {
                qword_1C02D65C8(v12, &v45, Win32FreePool);
                if ( qword_1C02D65C8 )
                  qword_1C02D65C8(v34, &v43, CTouchProcessor::DereferencePointerInputFrame);
              }
            }
            CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
              (CInpUnlockGuardExclusive *)v49,
              (CTouchProcessor *)((char *)v1 + 32),
              0LL);
            CTouchProcessor::SetManipulationInputTarget(
              v1,
              *(_DWORD *)(v3 + 32),
              v2,
              (unsigned int *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
              0LL,
              (struct TELEMETRY_POINTER_FRAME_TIMES *)(v3 + 64),
              0);
            CInpLockGuard::LockExclusive(v50);
            CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v49);
            if ( qword_1C02D65D8 )
            {
              qword_1C02D65D8(&v43);
              if ( qword_1C02D65D8 )
              {
                qword_1C02D65D8(&v45);
                if ( qword_1C02D65D8 )
                  qword_1C02D65D8(&v47);
              }
            }
            v21 += v2;
            v2 = 0;
          }
          v15 = *(_DWORD *)(v3 + 40);
        }
        if ( v21 != v30 )
        {
          v33[4] = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 13395LL);
        }
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(
        gpLeakTrackingAllocator,
        (char *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
    }
    if ( v12 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v12);
    v3 = *(_QWORD *)(v3 + 8);
    CTouchProcessor::UnreferenceFrameInt(v1, v34);
  }
  while ( (CTouchProcessor *)v3 != (CTouchProcessor *)((char *)v1 + 56) );
LABEL_2:
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v52);
}
