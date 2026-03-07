struct tagMONITOR *__fastcall SetMonitorData(struct tagMONITOR *Monitor, unsigned int a2)
{
  int v3; // r15d
  int v4; // r13d
  unsigned __int16 MonitorLogicalDPI; // r14
  unsigned __int16 MonitorPhysicalDPI; // r12
  HDC DisplayDC; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  HDC v11; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v12; // rsi
  int v13; // eax
  __int64 Pool2; // rdi
  _QWORD *v15; // rsi
  _QWORD *v16; // rcx
  _QWORD *v17; // r14
  __int64 v18; // rcx
  _DWORD *v19; // rax
  _DWORD *v20; // rdx
  HDEV v21; // rsi
  __int64 v22; // rax
  int v23; // ecx
  unsigned int v24; // ecx
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rax
  int v28; // r8d
  HDEV v29; // rax
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rax
  int v33; // ecx
  _QWORD *v35; // rax
  unsigned int v36; // r10d
  __int64 v37; // r11
  _DWORD *v38; // rdx
  unsigned int v39; // [rsp+20h] [rbp-E0h] BYREF
  int v40; // [rsp+28h] [rbp-D8h]
  int v41; // [rsp+2Ch] [rbp-D4h]
  unsigned __int64 v42[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v43; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v44; // [rsp+48h] [rbp-B8h]
  __int64 v45; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v46; // [rsp+58h] [rbp-A8h]
  HDEV v47; // [rsp+60h] [rbp-A0h]
  PVOID BackTrace[20]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v49; // [rsp+110h] [rbp+10h]

  v3 = 1;
  v4 = 0;
  MonitorLogicalDPI = 96;
  v44 = (_QWORD *)*((_QWORD *)gpDispInfo + 2);
  MonitorPhysicalDPI = 96;
  v46 = &v44[7 * a2];
  v47 = (HDEV)v46[5];
  v41 = 0;
  v40 = 0;
  v49 = *(_OWORD *)((char *)v46 + ((unsigned int)DrvIsUniformSpaceMapping(v44) != 0 ? 0x14 : 0) + 56);
  DisplayDC = (HDC)GreCreateDisplayDC(v47, 0);
  v11 = DisplayDC;
  if ( !DisplayDC
    || ((GreGetDeviceCaps(DisplayDC, 94) & 0x4000) != 0
      ? (v3 = 0)
      : (MonitorLogicalDPI = GetMonitorLogicalDPI(v47), MonitorPhysicalDPI = GetMonitorPhysicalDPI(v47)),
        GrepDeleteDC(v11, 0x400000u),
        v3) )
  {
    if ( !(_QWORD)v49 )
      v4 = 1;
  }
  if ( !Monitor )
  {
    if ( v4 )
    {
      Monitor = gpMonitorCached;
      gpMonitorCached = 0LL;
      v40 = 1;
    }
    else
    {
      Monitor = CreateMonitor(v9, v8, v10);
      v41 = 1;
    }
    if ( !Monitor )
      return 0LL;
  }
  v12 = gpLeakTrackingAllocator;
  v39 = 1886872661;
  v43 = 260LL;
  v45 = 100LL;
  v13 = *(_DWORD *)gpLeakTrackingAllocator;
  if ( !*(_DWORD *)gpLeakTrackingAllocator )
  {
    Pool2 = ExAllocatePool2(260LL, 100LL, 1886872661LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v12 + 14);
    goto LABEL_14;
  }
  if ( v13 != 1 )
  {
    if ( v13 == 2 )
    {
      v42[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x70776455u, v42) )
      {
        v42[0] = (unsigned __int64)&v43;
        v42[1] = (unsigned __int64)&v39;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v12,
                  v42,
                  &v45);
        goto LABEL_14;
      }
      Pool2 = ExAllocatePool2(v37, 116LL, v36);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v12 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( (unsigned __int64)(Pool2 & 0xFFF) + 16 >= 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                  v12,
                                  Pool2,
                                  v42[0],
                                  BackTrace) )
            goto LABEL_15;
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                     v12,
                                     Pool2,
                                     v42[0],
                                     BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_14;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v12 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_55:
    if ( v40 )
    {
      gpMonitorCached = Monitor;
    }
    else if ( v41 )
    {
      HMDestroyObject(Monitor);
    }
    return 0LL;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x70776455u) )
    goto LABEL_55;
  v35 = (_QWORD *)ExAllocatePool2(v43 & 0xFFFFFFFFFFFFFFFDuLL, 116LL, v39);
  Pool2 = (__int64)v35;
  if ( !v35
    || (_InterlockedIncrement64((volatile signed __int64 *)v12 + 14),
        *v35 = 1886872661LL,
        Pool2 = (__int64)(v35 + 2),
        v35 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v12 + 1),
      (const void *)0x70776455);
  }
LABEL_14:
  if ( !Pool2 )
    goto LABEL_55;
LABEL_15:
  v15 = v44;
  v16 = v44;
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 64LL) = MonitorLogicalDPI;
  if ( (unsigned int)DrvIsUniformSpaceMapping(v16) )
    MonitorLogicalDPI = *((_WORD *)v15 + 16);
  *(_WORD *)(*((_QWORD *)Monitor + 5) + 60LL) = MonitorLogicalDPI;
  v17 = v46;
  v18 = *((_QWORD *)Monitor + 5);
  *((_WORD *)Monitor + 36) = MonitorPhysicalDPI;
  *(_WORD *)(v18 + 84) = *((_WORD *)v17 + 46);
  v19 = (_DWORD *)*((_QWORD *)Monitor + 16);
  if ( v19 )
  {
    --*v19;
    v20 = (_DWORD *)*((_QWORD *)Monitor + 16);
    if ( !*v20 && v20 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v20);
    *((_QWORD *)Monitor + 16) = 0LL;
  }
  v21 = v47;
  GetMonitorDpiInfo(
    v47,
    v4,
    (struct tagRECT *)(*((_QWORD *)Monitor + 5) + 28LL),
    (struct _DPI_INFORMATION *)(Pool2 + 4));
  *(_DWORD *)Pool2 = 1;
  *((_QWORD *)Monitor + 16) = Pool2;
  v22 = *((_QWORD *)Monitor + 5);
  v23 = *(_DWORD *)(v22 + 24);
  if ( v3 )
    v24 = v23 | 1;
  else
    v24 = v23 & 0xFFFFFFFE;
  *(_DWORD *)(v22 + 24) = v24;
  v25 = *((_QWORD *)Monitor + 5);
  v26 = DWORD2(v49);
  v27 = *(_QWORD *)(v25 + 28) - v49;
  if ( !v27 )
    v27 = *(_QWORD *)(v25 + 36) - *((_QWORD *)&v49 + 1);
  v28 = HIDWORD(v49);
  if ( v27 )
  {
    *(_DWORD *)(v25 + 44) += v49 - *(_DWORD *)(v25 + 28);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) += DWORD1(v49) - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 32LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) += v26 - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL);
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) += v28 - *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL);
  }
  *(_QWORD *)(*((_QWORD *)Monitor + 5) + 28LL) = v49;
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 36LL) = v26;
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 40LL) = v28;
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 68LL) = *((_DWORD *)v17 + 14);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 72LL) = *((_DWORD *)v17 + 15);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 76LL) = *((_DWORD *)v17 + 16);
  *(_DWORD *)(*((_QWORD *)Monitor + 5) + 80LL) = *((_DWORD *)v17 + 17);
  if ( v3 )
    v29 = v21;
  else
    v29 = (HDEV)*v44;
  *((_QWORD *)Monitor + 10) = v29;
  v30 = *((_QWORD *)Monitor + 5);
  *((_QWORD *)Monitor + 11) = v21;
  v31 = *(_DWORD *)(v30 + 44);
  if ( *(_DWORD *)(v30 + 52) < v31 )
    *(_DWORD *)(v30 + 52) = v31;
  v32 = *((_QWORD *)Monitor + 5);
  v33 = *(_DWORD *)(v32 + 48);
  if ( *(_DWORD *)(v32 + 56) < v33 )
    *(_DWORD *)(v32 + 56) = v33;
  if ( !(unsigned int)IntersectRect(
                        *((_QWORD *)Monitor + 5) + 44LL,
                        *((_QWORD *)Monitor + 5) + 44LL,
                        *((_QWORD *)Monitor + 5) + 28LL) )
  {
    v38 = (_DWORD *)*((_QWORD *)Monitor + 5);
    v38[11] = v38[7];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 48LL) = v38[8];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 52LL) = v38[9];
    *(_DWORD *)(*((_QWORD *)Monitor + 5) + 56LL) = v38[10];
  }
  if ( v4 )
    tagKERNELDISPLAYINFO::SharedMixedObjectPointerFieldpMonitorPrimary<tagMONITOR>::operator=(
      (char *)gpDispInfo + 96,
      Monitor);
  return Monitor;
}
