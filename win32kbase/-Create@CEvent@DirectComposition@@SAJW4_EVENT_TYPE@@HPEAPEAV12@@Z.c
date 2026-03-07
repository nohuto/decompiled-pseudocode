__int64 __fastcall DirectComposition::CEvent::Create(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned __int64 a2,
        struct DirectComposition::CEvent **a3)
{
  void *QuotaZInit; // rax
  __int64 Pool2; // rbx
  unsigned int v6; // edx
  NTSTATUS v7; // edi
  NSInstrumentation::CLeakTrackingAllocator *v9; // rdi
  int v10; // eax
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 v13; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v15[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  PVOID BackTrace[20]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v18; // [rsp+148h] [rbp+40h] BYREF
  void *EventHandle; // [rsp+160h] [rbp+58h] BYREF

  v18 = (unsigned int)a1;
  if ( (_DWORD)a2 )
  {
    QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(a1, a2, 0x10uLL, 0x76654344u);
LABEL_3:
    Pool2 = (__int64)QuotaZInit;
    goto LABEL_4;
  }
  v9 = gpLeakTrackingAllocator;
  v18 = 1986347844;
  v13 = 260LL;
  v14 = 16LL;
  v10 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 16LL, 1986347844LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v9 + 14);
    goto LABEL_4;
  }
  if ( v10 != 1 )
  {
    if ( v10 == 2 )
    {
      EventHandle = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(
              gpLeakTrackingAllocator,
              0x76654344u,
              (unsigned __int64 *)&EventHandle) )
      {
        v15[0] = &v13;
        v15[1] = &v18;
        QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                               v9,
                               v15,
                               &v14);
        goto LABEL_3;
      }
      Pool2 = ExAllocatePool2(v12, 32LL, 1986347844LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v9,
                                  Pool2,
                                  EventHandle,
                                  BackTrace) )
            goto LABEL_4;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v9,
                                     Pool2,
                                     EventHandle,
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_4;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v9 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_26;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76654344u) )
  {
LABEL_26:
    Pool2 = 0LL;
    goto LABEL_4;
  }
  v11 = (_QWORD *)ExAllocatePool2(v13 & 0xFFFFFFFFFFFFFFFDuLL, 32LL, v18);
  Pool2 = (__int64)v11;
  if ( !v11
    || (_InterlockedIncrement64((volatile signed __int64 *)v9 + 14),
        *v11 = 1986347844LL,
        Pool2 = (__int64)(v11 + 2),
        v11 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v9 + 1),
      (const void *)0x76654344);
  }
LABEL_4:
  if ( Pool2 )
  {
    EventHandle = 0LL;
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v7 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v7 < 0
      || (v7 = DirectComposition::CEvent::Initialize((DirectComposition::CEvent *)Pool2, EventHandle, 1),
          ObCloseHandle(EventHandle, 0),
          v7 < 0) )
    {
      DirectComposition::CEvent::`scalar deleting destructor'((DirectComposition::CEvent *)Pool2, v6);
    }
    else
    {
      *a3 = (struct DirectComposition::CEvent *)Pool2;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v7;
}
