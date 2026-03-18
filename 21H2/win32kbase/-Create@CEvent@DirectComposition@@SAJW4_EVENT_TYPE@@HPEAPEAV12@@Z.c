/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@HPEAPEAV12@@Z @ 0x1C000D084
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000E0C8 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C000C9A4 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C000D1BC (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(
        enum _EVENT_TYPE a1,
        int a2,
        struct DirectComposition::CEvent **a3)
{
  PVOID v3; // rdi
  int v5; // eax
  __int64 v6; // rcx
  __int64 Pool2; // rbx
  NTSTATUS v8; // edi
  __int64 v10; // rax
  PVOID *v11; // r8
  __int64 v12; // rax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-D0h] BYREF
  PVOID BackTrace[20]; // [rsp+68h] [rbp-A0h] BYREF
  PVOID v15[20]; // [rsp+108h] [rbp+0h] BYREF
  void *EventHandle; // [rsp+1D0h] [rbp+C8h] BYREF

  v3 = gpLeakTrackingAllocator;
  v5 = *((_DWORD *)gpLeakTrackingAllocator + 10) & 0x76654344;
  if ( !a2 )
  {
    if ( v5 == 1986347844 )
    {
      v12 = 0LL;
      if ( *((_DWORD *)gpLeakTrackingAllocator + 11) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v12) != 1986347844 )
        {
          if ( ++v12 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_11;
        }
        Pool2 = ExAllocatePool2(260LL, 32LL);
        if ( !Pool2 )
          goto LABEL_20;
        memset(v15, 0, sizeof(v15));
        RtlCaptureStackBackTrace(0, 0x14u, v15, 0LL);
        v11 = v15;
        goto LABEL_21;
      }
    }
LABEL_11:
    v6 = 260LL;
LABEL_4:
    Pool2 = ExAllocatePool2(v6, 16LL);
    goto LABEL_5;
  }
  if ( v5 != 1986347844 || (v10 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
  {
LABEL_3:
    v6 = 261LL;
    goto LABEL_4;
  }
  while ( *((_DWORD *)gpLeakTrackingAllocator + v10) != 1986347844 )
  {
    if ( ++v10 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
      goto LABEL_3;
  }
  Pool2 = ExAllocatePool2(261LL, 32LL);
  if ( !Pool2 )
    goto LABEL_20;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  v11 = BackTrace;
LABEL_21:
  if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
  {
    if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(v3, Pool2, v11) )
    {
      Pool2 += 16LL;
      goto LABEL_5;
    }
    goto LABEL_19;
  }
  if ( !(unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(v3, Pool2, v11) )
  {
LABEL_19:
    ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_20:
    Pool2 = 0LL;
  }
LABEL_5:
  if ( Pool2 )
  {
    EventHandle = 0LL;
    memset(&ObjectAttributes.Length + 1, 0, 20);
    memset(&ObjectAttributes.Attributes + 1, 0, 20);
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v8 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v8 < 0
      || (v8 = DirectComposition::CEvent::Initialize((DirectComposition::CEvent *)Pool2, EventHandle, 1),
          ObCloseHandle(EventHandle, 0),
          v8 < 0) )
    {
      DirectComposition::CEvent::`scalar deleting destructor'((DirectComposition::CEvent *)Pool2);
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
  return (unsigned int)v8;
}
