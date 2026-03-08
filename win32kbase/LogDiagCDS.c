/*
 * XREFs of LogDiagCDS @ 0x1C0195280
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015DB90 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C019249C (DrvChangeDisplaySettings.c)
 * Callees:
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00CA680 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 *     ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x1C018FAB8 (-FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

void __fastcall LogDiagCDS(
        __int64 a1,
        struct _devicemodeW *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        unsigned int a10,
        int a11,
        int a12,
        __int16 a13,
        struct _devicemodeW *a14)
{
  NSInstrumentation::CLeakTrackingAllocator *v14; // rdi
  int v17; // eax
  __int64 Pool2; // rbx
  _QWORD *v21; // rax
  unsigned int v22; // r10d
  __int64 v23; // r11
  unsigned int v24; // edx
  int v25; // edx
  int v26; // edx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 DxgkWin32kInterface; // rax
  unsigned int v30; // [rsp+28h] [rbp-C9h] BYREF
  unsigned __int64 v31[2]; // [rsp+38h] [rbp-B9h] BYREF
  __int64 v32; // [rsp+48h] [rbp-A9h] BYREF
  __int64 v33; // [rsp+50h] [rbp-A1h] BYREF
  PVOID BackTrace[20]; // [rsp+58h] [rbp-99h] BYREF

  v14 = gpLeakTrackingAllocator;
  v30 = 1936876615;
  v32 = 260LL;
  v33 = 160LL;
  v17 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 160LL, 1936876615LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v14 + 14);
    goto LABEL_16;
  }
  if ( v17 != 1 )
  {
    if ( v17 == 2 )
    {
      v31[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, v31) )
      {
        v31[0] = (unsigned __int64)&v32;
        v31[1] = (unsigned __int64)&v30;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v14,
                  (__int64)v31,
                  &v33);
        goto LABEL_16;
      }
      Pool2 = ExAllocatePool2(v23, 176LL, v22);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v14 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v14,
                                  Pool2,
                                  v31[0],
                                  BackTrace) )
            goto LABEL_19;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v14,
                                     Pool2,
                                     v31[0],
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_16;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v14 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_23:
    WdLogSingleEntry1(6LL, 160LL);
    DrvDxgkLogCodePointPacket(5LL, a10, a11, a12);
    return;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u) )
    goto LABEL_23;
  v21 = (_QWORD *)ExAllocatePool2(v32 & 0xFFFFFFFFFFFFFFFDuLL, 176LL, v30);
  Pool2 = (__int64)v21;
  if ( !v21
    || (_InterlockedIncrement64((volatile signed __int64 *)v14 + 14),
        *v21 = 1936876615LL,
        Pool2 = (__int64)(v21 + 2),
        v21 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v14 + 1),
      (const void *)0x73726447);
  }
LABEL_16:
  if ( !Pool2 )
    goto LABEL_23;
LABEL_19:
  memset((void *)Pool2, 0, 0xA0uLL);
  *(_DWORD *)(Pool2 + 40) = 0;
  *(_QWORD *)(Pool2 + 32) = 0LL;
  *(_DWORD *)Pool2 = 5;
  *(_DWORD *)(Pool2 + 4) = 160;
  *(_OWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 24) = 0LL;
  *(_QWORD *)(Pool2 + 64) = a9;
  *(_DWORD *)(Pool2 + 56) = a10;
  *(_DWORD *)(Pool2 + 52) = a11;
  *(_DWORD *)(Pool2 + 60) = a12;
  v24 = *(_DWORD *)(Pool2 + 48) & 0xFFFFEF80 | (a2 != 0LL) | (a14 != 0LL ? 0x1000 : 0) | (a1 != 0 ? 2 : 0) | (a4 == 0 ? 4 : 0) | (a5 != 0 ? 8 : 0) | (a6 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x20 : 0) | (a8 != 0 ? 0x40 : 0);
  v25 = ((unsigned __int16)v24 ^ (unsigned __int16)(a13 << 13)) & 0xE000 ^ v24;
  *(_DWORD *)(Pool2 + 48) = v25;
  if ( a3 )
  {
    v26 = v25 | 0x800;
    *(_DWORD *)(Pool2 + 48) = v26;
    *(_DWORD *)(Pool2 + 48) = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a3 + 248) << 7)) & 0x780;
  }
  FillSimpleDevModeField(a2, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(Pool2 + 72));
  FillSimpleDevModeField(a14, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(Pool2 + 116));
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v28, v27);
  (*(void (__fastcall **)(__int64))(DxgkWin32kInterface + 304))(Pool2);
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
}
