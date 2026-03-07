char __fastcall VirtualTouchpadProcessor::FindTouchpadAndContact(
        VirtualTouchpadProcessor **this,
        struct tagHID_POINTER_DEVICE_INFO *const a2,
        const struct CPointerInfoNode *a3,
        struct VPTPTouchpad **a4,
        struct VPTPContact **a5)
{
  VirtualTouchpadProcessor *v5; // rsi
  char *v6; // r13
  VirtualTouchpadProcessor *v8; // r14
  char v9; // di
  struct VPTPContact **v10; // r12
  NSInstrumentation::CLeakTrackingAllocator *v11; // rdi
  int v12; // eax
  __int64 Pool2; // rbx
  __int64 v14; // r9
  __int64 *v15; // rbx
  __int64 *v16; // rax
  __int64 v17; // xmm0_8
  struct VPTPTouchpad **v18; // rax
  _QWORD *v20; // rax
  unsigned int v21; // r10d
  __int64 v22; // r11
  __int64 v23; // rbx
  _DWORD *v24; // r8
  struct VPTPTouchpad **v25; // rax
  __int64 v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v29[16]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[28]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+150h] [rbp+50h] BYREF
  _DWORD *v32; // [rsp+158h] [rbp+58h]
  unsigned __int64 v33; // [rsp+160h] [rbp+60h] BYREF
  struct VPTPTouchpad **v34; // [rsp+168h] [rbp+68h]

  v34 = a4;
  v32 = a2;
  v5 = *this;
  v6 = (char *)a3 + 168;
  v8 = (VirtualTouchpadProcessor *)this;
  v9 = 0;
  if ( *this == (VirtualTouchpadProcessor *)this )
    goto LABEL_17;
  v10 = a5;
  while ( 1 )
  {
    if ( (*((_DWORD *)v6 + 3) & 0x10000) == 0 )
    {
      v15 = (__int64 *)*((_QWORD *)v5 + 2);
      if ( v15 != (__int64 *)((char *)v5 + 16) )
      {
        this = (VirtualTouchpadProcessor **)*((unsigned __int16 *)a3 + 80);
        while ( *((_WORD *)v15 + 8) != (_WORD)this )
        {
          v15 = (__int64 *)*v15;
          if ( v15 == (__int64 *)((char *)v5 + 16) )
            goto LABEL_16;
        }
        if ( *((_DWORD *)a3 + 119) != *((_DWORD *)v5 + 52) )
        {
          v31 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 639);
        }
        v16 = (__int64 *)lambda_d5bddfc2fe24e4274cd124852b066150_::operator()(
                           (__int64)this,
                           (__int64)v29,
                           v32,
                           (__int64)v6,
                           (float *)v5 + 15);
        *v10 = (struct VPTPContact *)v15;
        v9 = 1;
        v17 = *v16;
        v18 = v34;
        *(__int64 *)((char *)v15 + 20) = v17;
        *v18 = v5;
      }
      goto LABEL_16;
    }
    if ( *((_DWORD *)a3 + 119) == *((_DWORD *)v5 + 52) )
      break;
LABEL_16:
    v5 = *(VirtualTouchpadProcessor **)v5;
    if ( v5 == v8 )
      goto LABEL_17;
  }
  v11 = gpLeakTrackingAllocator;
  v31 = 1886680661;
  v26 = 260LL;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  v27 = 40LL;
  if ( !v12 )
  {
    Pool2 = ExAllocatePool2(260LL, 40LL, 1886680661LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v11 + 14);
    goto LABEL_36;
  }
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
    {
      v33 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1886680661, &v33) )
      {
        v28[0] = &v26;
        v28[1] = &v31;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v11,
                  (__int64)v28,
                  &v27);
        goto LABEL_36;
      }
      Pool2 = ExAllocatePool2(v22, 56LL, v21);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v11,
                 (const void *)Pool2,
                 v33,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_36;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v11,
                    Pool2,
                    v33,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_37;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v11 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_32;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70747655u) )
    goto LABEL_32;
  v20 = (_QWORD *)ExAllocatePool2(v26 & 0xFFFFFFFFFFFFFFFDuLL, 56LL, v31);
  Pool2 = (__int64)v20;
  if ( !v20
    || (_InterlockedIncrement64((volatile signed __int64 *)v11 + 14),
        *v20 = 1886680661LL,
        Pool2 = (__int64)(v20 + 2),
        v20 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v11 + 1),
      0x70747655uLL);
  }
LABEL_36:
  if ( !Pool2 )
  {
LABEL_32:
    v23 = 0LL;
    goto LABEL_33;
  }
LABEL_37:
  v23 = VPTPContact::VPTPContact(Pool2, *((_DWORD *)v5 + 52), (_QWORD *)v5 + 2, v14);
LABEL_33:
  v24 = v32;
  *(_WORD *)(v23 + 16) = *((_WORD *)a3 + 80);
  *(_QWORD *)(v23 + 20) = *(_QWORD *)lambda_d5bddfc2fe24e4274cd124852b066150_::operator()(
                                       (__int64)this,
                                       (__int64)&v33,
                                       v24,
                                       (__int64)v6,
                                       (float *)v5 + 15);
  InputTraceLogging::VirtualTouchpad::CaptureContact();
  v25 = v34;
  v9 = 1;
  *v10 = (struct VPTPContact *)v23;
  *v25 = v5;
LABEL_17:
  if ( v9 != (*((_DWORD *)a3 + 119) != 0) )
  {
    v31 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 654);
  }
  return v9;
}
