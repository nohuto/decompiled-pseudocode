/*
 * XREFs of ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00BCD1C
 * Callers:
 *     DrvIsExternalMonitorActive @ 0x1C00BCAD4 (DrvIsExternalMonitorActive.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C00BCBC0 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0070630 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C00706F0 (DrvQueryDisplayConfig.c)
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C00BCDF4 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall QDC_AUTO_BUFFERS::Fill(QDC_AUTO_BUFFERS *this, unsigned int a2, enum DISPLAYCONFIG_TOPOLOGY_ID *a3)
{
  unsigned int *v4; // r14
  unsigned int v7; // r15d
  unsigned int v8; // ebx
  int DisplayConfigBufferSizes; // edx
  unsigned int v10; // ecx
  unsigned int v11; // eax
  __int64 Pool2; // rbx
  unsigned int v14; // ecx
  PVOID v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  char v18; // si
  unsigned int v19; // ecx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-C8h] BYREF

  v4 = (unsigned int *)((char *)this + 432);
  v7 = 0;
  while ( 1 )
  {
    v8 = *v4;
    DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a2, (__int64)v4);
    if ( DisplayConfigBufferSizes >= 0 )
    {
      v10 = v8 + 1;
      if ( v8 + 1 <= *v4 )
        v10 = *v4;
      *v4 = v10;
    }
    if ( DisplayConfigBufferSizes < 0 )
      goto LABEL_11;
    QDC_AUTO_BUFFERS::Free(this);
    v11 = *v4;
    if ( *v4 <= 2 )
    {
      Pool2 = (__int64)this;
      goto LABEL_9;
    }
    if ( 216 * v11 )
    {
      v15 = gpLeakTrackingAllocator;
      v14 = 216 * v11;
      v16 = 216 * v11;
      if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x73726447) != 0x73726447
        || (v17 = 0LL, !*((_DWORD *)gpLeakTrackingAllocator + 11)) )
      {
LABEL_20:
        Pool2 = ExAllocatePool2(260LL, v14);
        goto LABEL_9;
      }
      while ( *((_DWORD *)gpLeakTrackingAllocator + v17) != 1936876615 )
      {
        if ( ++v17 >= (unsigned __int64)*((unsigned int *)gpLeakTrackingAllocator + 11) )
          goto LABEL_20;
      }
      v18 = 0;
      if ( v14 < 0x1000uLL || (v16 & 0xFFF) != 0 )
      {
        v18 = 1;
        v16 = v14 + 16LL;
      }
      Pool2 = ExAllocatePool2(260LL, v16);
      if ( Pool2 )
      {
        memset(BackTrace, 0, sizeof(BackTrace));
        RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
        if ( v18 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v15,
                                  Pool2,
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_9;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v15,
                                     Pool2,
                                     BackTrace) )
        {
          goto LABEL_9;
        }
        ExFreePoolWithTag((PVOID)Pool2, 0);
      }
    }
    Pool2 = 0LL;
LABEL_9:
    *((_QWORD *)this + 55) = Pool2;
    if ( !Pool2 )
      break;
    DisplayConfigBufferSizes = DrvQueryDisplayConfig(a2, v4, Pool2, a3);
LABEL_11:
    if ( DisplayConfigBufferSizes == -1073741789 || DisplayConfigBufferSizes == -2147483643 )
    {
      v19 = v7++;
      if ( v19 < 0xA )
        continue;
    }
    return (unsigned int)DisplayConfigBufferSizes;
  }
  return (unsigned int)-1073741801;
}
