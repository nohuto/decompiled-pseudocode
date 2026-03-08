/*
 * XREFs of ?Fill@QDC_AUTO_BUFFERS@@QEAAJIPEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C000F37C
 * Callers:
 *     DrvIsExternalMonitorActive @ 0x1C000F280 (DrvIsExternalMonitorActive.c)
 *     ?DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z @ 0x1C018E234 (-DrvGetDevModeForLddmPath@@YAJPEAUtagGRAPHICS_DEVICE@@KPEAU_devicemodeW@@PEA_N@Z.c)
 * Callees:
 *     ?Free@QDC_AUTO_BUFFERS@@QEAAXXZ @ 0x1C000F450 (-Free@QDC_AUTO_BUFFERS@@QEAAXXZ.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C0022450 (DrvGetDisplayConfigBufferSizes.c)
 *     DrvQueryDisplayConfig @ 0x1C0022530 (DrvQueryDisplayConfig.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall QDC_AUTO_BUFFERS::Fill(QDC_AUTO_BUFFERS *this, unsigned int a2, enum DISPLAYCONFIG_TOPOLOGY_ID *a3)
{
  enum DISPLAYCONFIG_TOPOLOGY_ID *v3; // rdi
  int *v4; // r14
  unsigned int v7; // r12d
  int v8; // ebx
  int DisplayConfigBufferSizes; // ecx
  int v10; // ecx
  __int64 Pool2; // rbx
  unsigned int v13; // eax
  NSInstrumentation::CLeakTrackingAllocator *v14; // rdi
  unsigned __int64 v15; // rbx
  int v16; // eax
  _QWORD *v17; // rax
  __int64 v18; // r10
  char v19; // si
  unsigned int v20; // eax
  __int64 v21; // [rsp+20h] [rbp-99h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-91h] BYREF
  _QWORD v23[2]; // [rsp+30h] [rbp-89h] BYREF
  PVOID BackTrace[26]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v25; // [rsp+120h] [rbp+67h] BYREF
  enum DISPLAYCONFIG_TOPOLOGY_ID *v26; // [rsp+130h] [rbp+77h]
  unsigned __int64 v27; // [rsp+138h] [rbp+7Fh] BYREF

  v26 = a3;
  v3 = a3;
  v4 = (int *)((char *)this + 432);
  v7 = 0;
  while ( 1 )
  {
    v8 = *v4;
    DisplayConfigBufferSizes = DrvGetDisplayConfigBufferSizes(a2, v4);
    if ( DisplayConfigBufferSizes >= 0 )
      break;
LABEL_9:
    if ( DisplayConfigBufferSizes == -1073741789 || DisplayConfigBufferSizes == -2147483643 )
    {
      v20 = v7++;
      if ( v20 < 0xA )
        continue;
    }
    return (unsigned int)DisplayConfigBufferSizes;
  }
  v10 = v8 + 1;
  if ( v8 + 1 <= (unsigned int)*v4 )
    v10 = *v4;
  *v4 = v10;
  QDC_AUTO_BUFFERS::Free(this);
  if ( (unsigned int)*v4 <= 2 )
  {
    Pool2 = (__int64)this;
    goto LABEL_7;
  }
  v13 = 216 * *v4;
  if ( v13 )
  {
    v14 = gpLeakTrackingAllocator;
    v15 = v13;
    v25 = 1936876615;
    v21 = 260LL;
    v16 = *(_DWORD *)gpLeakTrackingAllocator;
    v22 = v15;
    switch ( v16 )
    {
      case 0:
        Pool2 = ExAllocatePool2(260LL, (unsigned int)v15, 1936876615LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v14 + 14);
        goto LABEL_37;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u)
          && v15 + 16 >= v15 )
        {
          v17 = (_QWORD *)ExAllocatePool2(v21 & 0xFFFFFFFFFFFFFFFDuLL, v15 + 16, v25);
          Pool2 = (__int64)v17;
          if ( !v17
            || (_InterlockedIncrement64((volatile signed __int64 *)v14 + 14),
                *v17 = 1936876615LL,
                Pool2 = (__int64)(v17 + 2),
                v17 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v14 + 1),
              (const void *)0x73726447);
          }
          goto LABEL_37;
        }
        break;
      case 2:
        v27 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, &v27) )
        {
          v23[0] = &v21;
          v23[1] = &v25;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    v14,
                    v23,
                    &v22);
LABEL_37:
          v3 = v26;
          goto LABEL_7;
        }
        v19 = 0;
        if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
        {
          v15 += 16LL;
          v19 = 1;
          v22 = v15;
        }
        Pool2 = ExAllocatePool2(v18, v15, 1936876615LL);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v14 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v19 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v14,
                                    Pool2,
                                    v27,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_37;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v14,
                                       Pool2,
                                       v27,
                                       BackTrace) )
          {
            goto LABEL_37;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v14 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
        break;
    }
    Pool2 = 0LL;
    goto LABEL_37;
  }
  Pool2 = 0LL;
LABEL_7:
  *((_QWORD *)this + 55) = Pool2;
  if ( Pool2 )
  {
    DisplayConfigBufferSizes = DrvQueryDisplayConfig(a2, v4, Pool2, v3);
    goto LABEL_9;
  }
  return (unsigned int)-1073741801;
}
