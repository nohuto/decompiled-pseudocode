/*
 * XREFs of ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C001E2BC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00273B4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0027D30 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00466C0 (-DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     HmgShareLockCheck @ 0x1C0049E60 (HmgShareLockCheck.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64_&_ @ 0x1C0077CF4 (NSInstrumentation--CLeakTrackingAllocator--MakeUntrackedAllocation__lambda_992394a475252bc644037.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ??$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA?A_PPEAX@Z @ 0x1C00A07E0 (--$_lambda_invoker_cdecl_@PEAX@_lambda_fbf80a8de0504b0922e6810f5f982d9a_@@CA-A_PPEAX@Z.c)
 *     ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A3790 (--0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITELOCK@@QEAA@XZ @ 0x1C00A6D90 (--1SPRITELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0181D80 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0182C68 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019AB48 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPE.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KPEAVCBackTrace@1@@Z @ 0x1C019ABFC (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAX_KP.c)
 *     ?EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z @ 0x1C019B14C (-EnsurePoolTagIncrement@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NI@Z.c)
 *     ?IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z @ 0x1C019B518 (-IsTagTracked@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NIPEA_K@Z.c)
 *     ?LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z @ 0x1C019C49C (-LookupInterlockedDecrement@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX@Z.c)
 *     ??0CBackTrace@NSInstrumentation@@QEAA@XZ @ 0x1C019C93C (--0CBackTrace@NSInstrumentation@@QEAA@XZ.c)
 */

struct PDEV *__fastcall DrvCreateCloneHDEV(struct PDEV *a1, unsigned int a2)
{
  __int64 v3; // rcx
  struct PDEV *v4; // rdi
  __int64 v5; // r15
  unsigned int v6; // r8d
  struct PDEV *v7; // rbx
  NSInstrumentation::CLeakTrackingAllocator *v8; // rdi
  int v9; // eax
  __int64 Pool2; // rsi
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  struct HOBJ__ **v14; // rdi
  struct _ERESOURCE *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct PDEV *v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v21[16]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID BackTrace[26]; // [rsp+70h] [rbp-90h] BYREF
  struct PDEV *v24; // [rsp+150h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v26; // [rsp+160h] [rbp+60h] BYREF
  __int64 v27; // [rsp+168h] [rbp+68h] BYREF

  v25 = a2;
  WdLogSingleEntry2(4LL, a1);
  v19 = a1;
  v4 = 0LL;
  v5 = *(_QWORD *)(SGDGetSessionState(v3) + 24);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v21, (struct PDEVOBJ *)&v19);
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v24, (char *)a1, v6);
  v7 = v24;
  if ( !v24 )
    goto LABEL_37;
  v8 = gpLeakTrackingAllocator;
  v25 = 1886221383;
  v27 = 260LL;
  v20 = 2184LL;
  v9 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 2184LL, 1886221383LL);
    if ( !Pool2 )
      goto LABEL_18;
    _InterlockedIncrement64((volatile signed __int64 *)v8 + 14);
    goto LABEL_17;
  }
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      v26 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x706D7447u, &v26) )
      {
        v22[0] = &v27;
        v22[1] = &v25;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v8,
                  (__int64)v22,
                  &v20);
        goto LABEL_18;
      }
      Pool2 = ExAllocatePool2(v12, 2200LL, 1886221383LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v8,
                                  Pool2,
                                  v26,
                                  BackTrace) )
          {
            v7 = v24;
LABEL_22:
            if ( qword_1C02D5930 && (int)qword_1C02D5930() >= 0 && qword_1C02D5938 && (unsigned int)qword_1C02D5938(v7) )
            {
              if ( qword_1C02D5940 && (int)qword_1C02D5940() >= 0 && qword_1C02D5948 )
                qword_1C02D5948(v7);
              *(_QWORD *)(Pool2 + 976) = Pool2 + 544;
              *(_DWORD *)(Pool2 + 728) = 0;
              *(_DWORD *)(*(_QWORD *)(Pool2 + 976) + 176LL) = 0xFFFFFF;
              *(_DWORD *)(Pool2 + 120) = 0;
              *(_QWORD *)(*(_QWORD *)(Pool2 + 976) + 248LL) = 0LL;
              v13 = HmgShareLockCheck(*(_QWORD *)(v5 + 224), 16);
              *((_QWORD *)v7 + 196) = 0LL;
              *((_QWORD *)v7 + 193) = 0LL;
              v14 = (struct HOBJ__ **)v13;
              *((_DWORD *)v7 + 388) = 0;
              EBRUSHOBJ::vInitBrush(
                (int *)v7 + 384,
                Pool2,
                v13,
                *(_QWORD *)(v5 + 6000),
                *(_QWORD *)(*((_QWORD *)v7 + 316) + 128LL),
                *((_QWORD *)v7 + 316),
                1u);
              DEC_SHARE_REF_CNT_LAZY0(v14);
              EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 8));
              EtwTraceGreLockAcquireSemaphoreExclusive(
                (__int64)L"GreBaseGlobals.hsemDriverMgmt",
                *(_QWORD *)(v5 + 8),
                16);
              --*((_DWORD *)a1 + 3);
              EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v5 + 8));
              v15 = *(struct _ERESOURCE **)(v5 + 8);
              if ( v15 )
              {
                ExReleaseResourceAndLeaveCriticalRegion(v15);
                PsLeavePriorityRegion(v17, v16);
              }
              PDEVOBJ::vUnreferencePdev(&v19);
              PDEVOBJ::bDisabled((PDEVOBJ *)&v24, *((_DWORD *)a1 + 10) & 0x400);
              v4 = v7;
              goto LABEL_36;
            }
            goto LABEL_35;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v8,
                                     Pool2,
                                     v26,
                                     BackTrace) )
        {
          Pool2 += 16LL;
LABEL_17:
          v7 = v24;
          goto LABEL_18;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v8 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_34:
    Pool2 = 0LL;
    goto LABEL_35;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x706D7447u) )
    goto LABEL_34;
  v11 = (_QWORD *)ExAllocatePool2(v27 & 0xFFFFFFFFFFFFFFFDuLL, 2200LL, v25);
  Pool2 = (__int64)v11;
  if ( !v11
    || (_InterlockedIncrement64((volatile signed __int64 *)v8 + 14),
        v7 = v24,
        *v11 = 1886221383LL,
        Pool2 = (__int64)(v11 + 2),
        v11 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v8 + 1),
      (const void *)0x706D7447);
  }
LABEL_18:
  if ( Pool2 )
    goto LABEL_22;
LABEL_35:
  PDEVOBJ::vClearSurface((PDEVOBJ *)&v24);
  PDEVOBJ::vUnreferencePdev(&v24);
  v4 = 0LL;
  if ( Pool2 )
LABEL_36:
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
LABEL_37:
  WdLogSingleEntry1(5LL, v4);
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v21);
  return v4;
}
