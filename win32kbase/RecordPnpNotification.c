void __fastcall RecordPnpNotification(int a1, unsigned __int16 *a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r13
  __int64 v5; // r11
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  unsigned __int64 v9; // rbx
  int v10; // eax
  signed __int64 Pool2; // rbx
  _QWORD *v12; // rax
  unsigned int v13; // edx
  __int64 v14; // r10
  char v15; // r15
  unsigned __int32 v16; // r9d
  __int64 v17; // rdx
  unsigned __int16 *v18; // r8
  __int64 v19; // r9
  __int64 v20; // r10
  char v21; // cl
  unsigned __int64 v22; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v23; // [rsp+28h] [rbp-A1h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-99h] BYREF
  _QWORD v25[2]; // [rsp+40h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v28; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = 0LL;
  v5 = a3;
  if ( gpPnpNotificationRecord )
    goto LABEL_28;
  v8 = gpLeakTrackingAllocator;
  v9 = 200LL * gdwPnpNotificationRecSize;
  v10 = *(_DWORD *)gpLeakTrackingAllocator;
  v24 = v9;
  v28 = 1886417749;
  v23 = 260LL;
  switch ( v10 )
  {
    case 0:
      Pool2 = ExAllocatePool2(260LL, 200LL * gdwPnpNotificationRecSize, 1886417749LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
      goto LABEL_22;
    case 1:
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70707355u)
        && v9 + 16 >= v9 )
      {
        v12 = (_QWORD *)ExAllocatePool2(v23 & 0xFFFFFFFFFFFFFFFDuLL, v9 + 16, v28);
        Pool2 = (signed __int64)v12;
        if ( !v12
          || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
              *v12 = 1886417749LL,
              Pool2 = (signed __int64)(v12 + 2),
              v12 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v8 + 1),
            (const void *)0x70707355);
        }
LABEL_22:
        if ( !Pool2 )
          return;
        goto LABEL_25;
      }
      break;
    case 2:
      v22 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70707355u, &v22) )
      {
        v25[0] = &v23;
        v25[1] = &v28;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v8,
                  (__int64)v25,
                  &v24);
        goto LABEL_22;
      }
      v15 = 0;
      if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
      {
        v9 += 16LL;
        v15 = 1;
        v24 = v9;
      }
      Pool2 = ExAllocatePool2(v14, v9, v13);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v15 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v8,
                                  Pool2,
                                  v22,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_22;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v8,
                                     Pool2,
                                     v22,
                                     BackTrace) )
        {
LABEL_25:
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)&gpPnpNotificationRecord, Pool2, 0LL) )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
          v5 = a3;
LABEL_28:
          v16 = _InterlockedExchangeAdd((volatile signed __int32 *)&giPnpSeq, 1u);
          *((_DWORD *)gpPnpNotificationRecord + 50 * (v16 % gdwPnpNotificationRecSize)) = v16 + 1;
          v17 = 200LL * (v16 % gdwPnpNotificationRecSize);
          *(_DWORD *)((char *)gpPnpNotificationRecord + v17 + 128) = (MEMORY[0xFFFFF78000000320]
                                                                    * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          *(_QWORD *)((char *)gpPnpNotificationRecord + v17 + 8) = KeGetCurrentThread();
          *(_DWORD *)((char *)gpPnpNotificationRecord + v17 + 4) = a1;
          if ( a1 )
          {
            if ( a1 == 8 || a1 == 24 || !a2 )
            {
LABEL_40:
              *((_BYTE *)gpPnpNotificationRecord + v17 + v3 + 32) = 0;
              *(_QWORD *)((char *)gpPnpNotificationRecord + v17 + 16) = a2;
              *(_QWORD *)((char *)gpPnpNotificationRecord + v17 + 24) = v4;
              *(_QWORD *)((char *)gpPnpNotificationRecord + v17 + 112) = v5;
              *(_QWORD *)((char *)gpPnpNotificationRecord + v17 + 120) = 0LL;
              RtlWalkFrameChain((PVOID *)((char *)gpPnpNotificationRecord + v17 + 136), 8u, 0);
              return;
            }
            v4 = *(_QWORD *)a2;
            v18 = a2 + 104;
          }
          else
          {
            v18 = a2;
            a2 = 0LL;
          }
          if ( v18 && *((_QWORD *)v18 + 1) )
          {
            v19 = v17;
            v20 = 0LL;
            do
            {
              if ( v3 >= *v18 >> 1 )
                break;
              ++v3;
              v21 = *(_BYTE *)(v20 + *((_QWORD *)v18 + 1));
              v20 += 2LL;
              *((_BYTE *)gpPnpNotificationRecord + v19 + 32) = v21;
              ++v19;
            }
            while ( v3 < 0x4F );
          }
          goto LABEL_40;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
      break;
    default:
      return;
  }
}
