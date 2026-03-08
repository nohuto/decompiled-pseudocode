/*
 * XREFs of DrvCreatePhysicalMonitorObjects @ 0x1C0192D10
 * Callers:
 *     NtGdiCreateOPMProtectedOutputs @ 0x1C0189200 (NtGdiCreateOPMProtectedOutputs.c)
 * Callees:
 *     ?UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0021010 (-UpdateMonitorDevicesOnGraphicsDevice@EnsureMonitorDevices@@AEAAXPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJAEAVEnsureMonitorDevices@@PEAK@Z @ 0x1C00AFA48 (-DrvGetNumberOfPhysicalMonitors@@YAJAEAVEnsureMonitorDevices@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AFAD4 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x1C00AFC64 (-GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C0188CDC (-OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z.c)
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C0188D54 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

__int64 __fastcall DrvCreatePhysicalMonitorObjects(
        struct _UNICODE_STRING *a1,
        enum _MODE a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6,
        volatile void *Address)
{
  unsigned int v10; // r12d
  __int64 Pool2; // r14
  int DeviceFromNameAndValidateDevice; // eax
  signed int NumberOfPhysicalMonitors; // ebx
  unsigned __int64 v15; // rax
  unsigned int v16; // edx
  NSInstrumentation::CLeakTrackingAllocator *v17; // rbx
  struct _LUID v18; // rdi
  int v19; // eax
  _QWORD *v20; // rax
  unsigned int v21; // edx
  __int64 v22; // r10
  char v23; // r15
  __int64 v24; // r15
  unsigned int j; // edi
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  unsigned int v28; // ecx
  __int64 k; // rdx
  __int64 i; // rdi
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // [rsp+30h] [rbp-158h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-150h] BYREF
  unsigned int v35; // [rsp+40h] [rbp-148h] BYREF
  int v36; // [rsp+48h] [rbp-140h]
  unsigned int v37; // [rsp+4Ch] [rbp-13Ch]
  struct _LUID v38; // [rsp+50h] [rbp-138h] BYREF
  struct tagGRAPHICS_DEVICE *v39[2]; // [rsp+60h] [rbp-128h] BYREF
  int v40; // [rsp+70h] [rbp-118h]
  __int64 v41; // [rsp+78h] [rbp-110h] BYREF
  unsigned int v42[4]; // [rsp+80h] [rbp-108h] BYREF
  int v43; // [rsp+90h] [rbp-F8h]
  _BYTE v44[8]; // [rsp+98h] [rbp-F0h] BYREF
  unsigned int v45; // [rsp+A0h] [rbp-E8h]
  PVOID P; // [rsp+A8h] [rbp-E0h]
  __int64 v47; // [rsp+B0h] [rbp-D8h]
  PVOID BackTrace[25]; // [rsp+C0h] [rbp-C8h] BYREF

  v47 = a5;
  WdLogSingleEntry4(4LL, a1, a3, (int)a4);
  v10 = 0;
  v37 = 0;
  Pool2 = 0LL;
  v39[0] = 0LL;
  DeviceFromNameAndValidateDevice = DrvGetDeviceFromNameAndValidateDevice(a1, a2, v39);
  NumberOfPhysicalMonitors = DeviceFromNameAndValidateDevice;
  if ( DeviceFromNameAndValidateDevice < 0 )
  {
    WdLogSingleEntry1(5LL, DeviceFromNameAndValidateDevice);
    return (unsigned int)NumberOfPhysicalMonitors;
  }
  v45 = 0;
  P = 0LL;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v44, v39[0]);
  v33 = 0;
  NumberOfPhysicalMonitors = DrvGetNumberOfPhysicalMonitors((struct EnsureMonitorDevices *)v44, &v33);
  if ( NumberOfPhysicalMonitors < 0 )
    goto LABEL_65;
  if ( a5 < v33 )
  {
    NumberOfPhysicalMonitors = -1071774234;
LABEL_66:
    if ( Pool2 )
    {
      if ( v10 )
      {
        for ( i = 0LL; (unsigned int)i < v10; i = (unsigned int)(i + 1) )
        {
          OPMDestroyProtectedOutput(*(void **)(Pool2 + 8 * i));
          if ( a3 )
          {
            if ( a3 == 1 )
            {
              if ( qword_1C02D59A0 )
                v32 = qword_1C02D59A0(v31);
              else
                v32 = -1073741637;
              if ( v32 >= 0 )
              {
                if ( qword_1C02D59A8 )
                  qword_1C02D59A8(*(_QWORD *)(Pool2 + 8 * i));
              }
            }
          }
          else
          {
            OPMDestroyProtectedOutput(*(void **)(Pool2 + 8 * i));
          }
        }
      }
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
    }
    WdLogSingleEntry1(5LL, NumberOfPhysicalMonitors);
    if ( P )
      ExFreePoolWithTag(P, 0);
    return (unsigned int)NumberOfPhysicalMonitors;
  }
  v15 = 8LL * v33;
  v16 = -1;
  if ( v15 <= 0xFFFFFFFF )
    v16 = 8 * v33;
  NumberOfPhysicalMonitors = v15 > 0xFFFFFFFF ? 0xC0000095 : 0;
  v36 = NumberOfPhysicalMonitors;
  if ( v15 <= 0xFFFFFFFF )
  {
    if ( v16 )
    {
      v35 = 1986291527;
      v41 = 260LL;
      v17 = gpLeakTrackingAllocator;
      v18 = (struct _LUID)v16;
      v38 = (struct _LUID)v16;
      v19 = *(_DWORD *)gpLeakTrackingAllocator;
      if ( !*(_DWORD *)gpLeakTrackingAllocator )
      {
        Pool2 = ExAllocatePool2(260LL, v16, 1986291527LL);
        if ( Pool2 )
          _InterlockedIncrement64((volatile signed __int64 *)v17 + 14);
        goto LABEL_34;
      }
      if ( v19 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76646747u)
          && *(_QWORD *)&v18 + 16LL >= *(unsigned __int64 *)&v18 )
        {
          v20 = (_QWORD *)ExAllocatePool2(v41 & 0xFFFFFFFFFFFFFFFDuLL, *(_QWORD *)&v18 + 16LL, v35);
          Pool2 = (__int64)v20;
          if ( !v20
            || (_InterlockedIncrement64((volatile signed __int64 *)v17 + 14),
                *v20 = 1986291527LL,
                Pool2 = (__int64)(v20 + 2),
                v20 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v17 + 1),
              (const void *)0x76646747);
          }
        }
        goto LABEL_34;
      }
      if ( v19 == 2 )
      {
        v34 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76646747u, &v34) )
        {
          v39[0] = (struct tagGRAPHICS_DEVICE *)&v41;
          v39[1] = (struct tagGRAPHICS_DEVICE *)&v35;
          Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                    (__int64)v17,
                    (__int64)v39,
                    &v38);
          goto LABEL_34;
        }
        v23 = 0;
        if ( *(unsigned __int64 *)&v18 < 0x1000 || (v18.LowPart & 0xFFF) != 0 )
        {
          v23 = 1;
          *(_QWORD *)&v18 += 16LL;
          v38 = v18;
        }
        Pool2 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))ExAllocatePool2)(v22, v18, v21);
        if ( Pool2 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v17 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
          if ( v23 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v17,
                                    Pool2,
                                    v34,
                                    BackTrace) )
            {
              Pool2 += 16LL;
              goto LABEL_34;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v17,
                                       Pool2,
                                       v34,
                                       BackTrace) )
          {
            goto LABEL_34;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v17 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
        }
      }
      Pool2 = 0LL;
    }
LABEL_34:
    v39[0] = (struct tagGRAPHICS_DEVICE *)Pool2;
    if ( !Pool2 )
    {
      NumberOfPhysicalMonitors = -1073741801;
      goto LABEL_66;
    }
    v24 = 0LL;
    for ( j = 0; ; ++j )
    {
      if ( j >= v45 )
      {
        v27 = 8 * v47;
        v28 = -1;
        if ( (unsigned __int64)(8 * v47) <= 0xFFFFFFFF )
          v28 = 8 * v47;
        NumberOfPhysicalMonitors = v27 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v27 <= 0xFFFFFFFF )
        {
          ProbeForWrite(Address, v28, 8u);
          ProbeForWrite(a6, 4uLL, 4u);
          if ( v10 > a5 )
          {
            NumberOfPhysicalMonitors = -1071774234;
            v36 = -1071774234;
          }
          else
          {
            for ( k = 0LL; ; k = (unsigned int)(k + 1) )
            {
              v40 = k;
              if ( (unsigned int)k >= v10 )
                break;
              *((_QWORD *)Address + k) = *(_QWORD *)(Pool2 + 8 * k);
            }
            *a6 = v10;
          }
        }
        break;
      }
      *(_OWORD *)v42 = 0LL;
      v43 = 0;
      EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v44, j, (struct tagVIDEO_MONITOR_DEVICE *)v42);
      v38 = *(struct _LUID *)&v42[2];
      if ( (v42[0] & 1) != 0 )
      {
        if ( v10 == v33 )
          goto LABEL_55;
        if ( a3 )
        {
          if ( a3 != 1 )
          {
LABEL_55:
            NumberOfPhysicalMonitors = -1071774233;
            goto LABEL_66;
          }
          if ( qword_1C02D5990 )
            NumberOfPhysicalMonitors = qword_1C02D5990(v26);
          else
            NumberOfPhysicalMonitors = -1073741637;
          if ( NumberOfPhysicalMonitors < 0 )
            goto LABEL_66;
          NumberOfPhysicalMonitors = qword_1C02D5998 ? qword_1C02D5998(&v38, v42[1], Pool2 + 8 * v24) : -1073741637;
          if ( NumberOfPhysicalMonitors < 0 )
            goto LABEL_66;
LABEL_53:
          v24 = (unsigned int)(v24 + 1);
          v37 = ++v10;
          continue;
        }
        LODWORD(v34) = 0;
        NumberOfPhysicalMonitors = OPMCreateProtectedOutput(a4, &v38, v42[1], (void **)(Pool2 + 8 * v24), (int *)&v34);
        if ( NumberOfPhysicalMonitors < 0 )
          break;
        if ( !(_DWORD)v34 )
          goto LABEL_53;
      }
    }
  }
LABEL_65:
  if ( NumberOfPhysicalMonitors < 0 )
    goto LABEL_66;
  if ( Pool2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
  WdLogSingleEntry0(5LL);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return 0LL;
}
