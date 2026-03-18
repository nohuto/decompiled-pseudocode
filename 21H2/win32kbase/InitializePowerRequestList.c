/*
 * XREFs of InitializePowerRequestList @ 0x1C02E3D98
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1C005AFC0 (Win32kBaseUserInitialize.c)
 * Callees:
 *     ?GetConfigUlong@@YAHPEBG0PEAK@Z @ 0x1C005BAF8 (-GetConfigUlong@@YAHPEBG0PEAK@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

NTSTATUS __fastcall InitializePowerRequestList(HANDLE Handle)
{
  const unsigned __int16 *v2; // rcx
  unsigned int *v3; // rbx
  unsigned int i; // edi
  const unsigned __int16 *v5; // rdx
  NTSTATUS result; // eax
  PVOID v7; // rdi
  __int64 Pool2; // rbx
  __int64 v9; // rax
  signed __int32 v10[8]; // [rsp+0h] [rbp-100h] BYREF
  _DWORD InputBuffer[24]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v12[24]; // [rsp+90h] [rbp-70h] BYREF
  PVOID BackTrace[22]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 OutputBuffer; // [rsp+1B8h] [rbp+B8h] BYREF
  unsigned int v15; // [rsp+1C0h] [rbp+C0h] BYREF
  PVOID Object; // [rsp+1C8h] [rbp+C8h] BYREF

  OutputBuffer = 0;
  ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v3 = (unsigned int *)&unk_1C0288310;
  gSystemIsAoAc = OutputBuffer;
  for ( i = 0; i < 5; ++i )
  {
    v5 = (const unsigned __int16 *)*((_QWORD *)v3 - 1);
    v15 = 0;
    if ( (unsigned int)GetConfigUlong(v2, v5, &v15) == 1 )
    {
      *v3 = v15;
    }
    else if ( gSystemIsAoAc != 1 )
    {
      goto LABEL_4;
    }
    v3 += 6;
  }
  memset(&InputBuffer[1], 0, 0x5CuLL);
  InputBuffer[0] = 21;
  result = ZwPowerInformation(SystemPowerStateLogging|0x40, InputBuffer, 0x60u, &gpRequestQueueWatchdog, 8u);
  if ( result >= 0 )
  {
    memset(&v12[1], 0, 0x5CuLL);
    v12[0] = 21;
    result = ZwPowerInformation(SystemPowerStateLogging|0x40, v12, 0x60u, &gpRequestWorkerWatchdog, 8u);
    if ( result >= 0 )
    {
LABEL_4:
      Object = 0LL;
      qword_1C02994E8 = (__int64)&gPowerRequestList;
      gPowerRequestList.Flink = &gPowerRequestList;
      result = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      gpEventPowerRequest = (PRKEVENT)Object;
      if ( result < 0 )
        return result;
      v7 = gpLeakTrackingAllocator;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x6F707355) == 0x6F707355
        && (v9 = 0LL, *((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
        while ( *((_DWORD *)gpLeakTrackingAllocator + v9) != 1869640533 )
        {
          if ( ++v9 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
            goto LABEL_6;
        }
        Pool2 = ExAllocatePool2(68LL, 72LL);
        if ( !Pool2 )
          goto LABEL_25;
        memset(BackTrace, 0, 0xA0uLL);
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                 (__int64)v7,
                 Pool2,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            gpPowerRequestMutex = (void *)Pool2;
            goto LABEL_8;
          }
          goto LABEL_24;
        }
        if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                (__int64)v7,
                (const void *)Pool2,
                (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
LABEL_24:
          ExFreePoolWithTag((PVOID)Pool2, 0);
LABEL_25:
          gpPowerRequestMutex = 0LL;
          return -1073741801;
        }
        Pool2 += 16LL;
      }
      else
      {
LABEL_6:
        Pool2 = ExAllocatePool2(68LL, 56LL);
      }
      gpPowerRequestMutex = (void *)Pool2;
      if ( Pool2 )
      {
LABEL_8:
        *(_QWORD *)(Pool2 + 8) = 0LL;
        *(_DWORD *)(Pool2 + 16) = 0;
        *(_DWORD *)Pool2 = 1;
        KeInitializeEvent((PRKEVENT)(Pool2 + 24), SynchronizationEvent, 0);
        gbPowerCalloutsReady = 1;
        _InterlockedOr(v10, 0);
        return 0;
      }
      return -1073741801;
    }
  }
  return result;
}
