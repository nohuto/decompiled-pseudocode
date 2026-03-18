/*
 * XREFs of NtDCompositionTelemetryTouchInteractionEnd @ 0x1C00097F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010268 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0030874 (-AllocateQuota@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionEnd(unsigned int a1, __int64 *a2)
{
  __int64 v2; // rsi
  signed int v3; // ebx
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx
  struct DirectComposition::CApplicationChannel *v5; // rdi
  struct DirectComposition::CApplicationChannel *Quota; // rax
  struct DirectComposition::CApplicationChannel **v7; // rdx
  struct DirectComposition::CApplicationChannel *v9; // [rsp+48h] [rbp+10h] BYREF
  __int64 v10; // [rsp+50h] [rbp+18h]

  v2 = 0LL;
  v10 = 0LL;
  v9 = 0LL;
  v3 = a2 == 0LL ? 0xC000000D : 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v2 = *a2;
    v10 = *a2;
  }
  if ( a2 )
  {
    v3 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
    v5 = v9;
    if ( v3 >= 0 )
    {
      v3 = 0;
      Quota = (struct DirectComposition::CApplicationChannel *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuota(
                                                                 v4,
                                                                 0x104uLL,
                                                                 0x18uLL,
                                                                 0x6F744344u);
      if ( !Quota )
        v3 = -1073741801;
      if ( v3 >= 0 )
      {
        *((_QWORD *)Quota + 2) = v2;
        v7 = (struct DirectComposition::CApplicationChannel **)*((_QWORD *)v5 + 199);
        if ( *v7 != (struct DirectComposition::CApplicationChannel *)((char *)v5 + 1584) )
          __fastfail(3u);
        *(_QWORD *)Quota = (char *)v5 + 1584;
        *((_QWORD *)Quota + 1) = v7;
        *v7 = Quota;
        *((_QWORD *)v5 + 199) = Quota;
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v5)(v5);
    }
  }
  return (unsigned int)v3;
}
