__int64 __fastcall RIMGetDeviceButtons(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, unsigned int a5)
{
  __int64 v5; // rax
  unsigned __int16 v9; // r14
  NSInstrumentation::CLeakTrackingAllocator *v10; // rdi
  unsigned __int64 v11; // rbx
  int v12; // eax
  __int64 Pool2; // rbx
  _QWORD *v14; // rax
  unsigned int v15; // edx
  __int64 v16; // r10
  char v17; // si
  unsigned int v18; // edi
  int v19; // eax
  __int64 v20; // r15
  __int64 v21; // rax
  NSInstrumentation::CLeakTrackingAllocator *v22; // r14
  __int64 v23; // rsi
  int v24; // eax
  unsigned __int64 v25; // rsi
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rsi
  _QWORD *v27; // rax
  __int64 v28; // r10
  char v29; // bl
  bool v30; // zf
  unsigned int v31; // r8d
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // rax
  NSInstrumentation::CLeakTrackingAllocator *v36; // r14
  __int64 v37; // rsi
  int v38; // eax
  unsigned __int64 v39; // rsi
  __int64 v40; // rsi
  _QWORD *v41; // rax
  __int64 v42; // r10
  char v43; // r15
  unsigned int v44; // esi
  unsigned int v45; // edx
  __int16 v46; // ax
  int v47; // ecx
  __int64 v48; // rax
  __int64 v49; // rax
  NSInstrumentation::CLeakTrackingAllocator *v50; // rsi
  unsigned __int64 v51; // rbx
  int v52; // eax
  __int64 v53; // rbx
  _QWORD *v54; // rax
  unsigned int v55; // edx
  __int64 v56; // r10
  char v57; // r14
  unsigned int v59; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v60[4]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v61; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v62; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v63; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v64; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v65; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v66; // [rsp+80h] [rbp-80h] BYREF
  __int64 v67; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v68; // [rsp+90h] [rbp-70h] BYREF
  __int64 v69; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v70; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v72; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v73[2]; // [rsp+B8h] [rbp-48h]
  __int64 v74; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v75; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v76; // [rsp+D8h] [rbp-28h]
  _QWORD v77[2]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v78[2]; // [rsp+F0h] [rbp-10h] BYREF
  PVOID BackTrace[20]; // [rsp+100h] [rbp+0h] BYREF
  PVOID v80[20]; // [rsp+1A0h] [rbp+A0h] BYREF
  PVOID v81[20]; // [rsp+240h] [rbp+140h] BYREF
  PVOID v82[26]; // [rsp+2E0h] [rbp+1E0h] BYREF
  int SpecificButtonCaps; // [rsp+3C8h] [rbp+2C8h]
  unsigned int v85; // [rsp+3D8h] [rbp+2D8h] BYREF

  v5 = (unsigned __int16)a4[23];
  a5 = (unsigned __int16)a4[23];
  v60[0] = 0;
  v59 = 0;
  v9 = 0;
  if ( *(_DWORD *)(a2 + 1040) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2811);
    v5 = a5;
  }
  if ( *a4 != 5 )
    v9 = *(_WORD *)(a2 + 776);
  if ( !(_DWORD)v5 )
    goto LABEL_113;
  v10 = gpLeakTrackingAllocator;
  v11 = 72 * v5;
  v85 = 1701344082;
  v67 = 260LL;
  v12 = *(_DWORD *)gpLeakTrackingAllocator;
  v68 = v11;
  if ( !v12 )
  {
    Pool2 = ExAllocatePool2(260LL, v11, 1701344082LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v10 + 14);
    goto LABEL_29;
  }
  if ( v12 != 1 )
  {
    if ( v12 == 2 )
    {
      v62 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1701344082, &v62) )
      {
        v75 = &v67;
        v76 = &v85;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  (__int64)v10,
                  (__int64)&v75,
                  &v68);
        goto LABEL_29;
      }
      v17 = 0;
      if ( v11 < 0x1000 || (v11 & 0xFFF) != 0 )
      {
        v11 += 16LL;
        v17 = 1;
        v68 = v11;
      }
      Pool2 = ExAllocatePool2(v16, v11, v15);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v10 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v17 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v10,
                 (const void *)Pool2,
                 v62,
                 (struct NSInstrumentation::CBackTrace *)BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_29;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v10,
                    Pool2,
                    v62,
                    (struct NSInstrumentation::CBackTrace *)BackTrace) )
        {
          goto LABEL_29;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v10 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    goto LABEL_28;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65687352u)
    || v11 + 16 < v11 )
  {
LABEL_28:
    Pool2 = 0LL;
    goto LABEL_29;
  }
  v14 = (_QWORD *)ExAllocatePool2(v67 & 0xFFFFFFFFFFFFFFFDuLL, v11 + 16, v85);
  Pool2 = (__int64)v14;
  if ( !v14
    || (_InterlockedIncrement64((volatile signed __int64 *)v10 + 14),
        *v14 = 1701344082LL,
        Pool2 = (__int64)(v14 + 2),
        v14 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v10 + 1),
      0x65687352uLL);
  }
LABEL_29:
  if ( !Pool2 )
  {
LABEL_113:
    v18 = -1073741668;
    goto LABEL_114;
  }
  SpecificButtonCaps = rimHidP_GetSpecificButtonCaps(0LL, 0LL, v9, 0LL, Pool2, (__int64)&a5, a3);
  v18 = SpecificButtonCaps;
  if ( SpecificButtonCaps < 0 )
    goto LABEL_68;
  if ( !a5 )
  {
    v60[2] = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2835);
  }
  v19 = *(_DWORD *)(a2 + 24);
  if ( v19 != 6 )
  {
    v20 = Pool2;
    if ( v19 != 5 )
    {
      v21 = *(unsigned int *)(a2 + 768);
      v22 = gpLeakTrackingAllocator;
      v60[0] = 2019849042;
      v69 = 260LL;
      v23 = 3 * v21;
      v24 = *(_DWORD *)gpLeakTrackingAllocator;
      v25 = 4 * v23;
      v70 = v25;
      if ( !v24 )
      {
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           260LL,
                                                                                           v25,
                                                                                           2019849042LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)v22 + 14);
        goto LABEL_61;
      }
      if ( v24 == 1 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x78647352u)
          && v25 + 16 >= v25 )
        {
          v27 = (_QWORD *)ExAllocatePool2(v69 & 0xFFFFFFFFFFFFFFFDuLL, v25 + 16, v60[0]);
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v27;
          if ( !v27
            || (_InterlockedIncrement64((volatile signed __int64 *)v22 + 14),
                *v27 = 2019849042LL,
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v27 + 2),
                v27 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v22 + 1),
              0x78647352uLL);
          }
LABEL_61:
          *(_QWORD *)(a2 + 1024) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
          if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          {
            v30 = *(_DWORD *)(a2 + 24) == 7;
            *(_DWORD *)(a2 + 1036) = *(_DWORD *)(a2 + 768);
            if ( !v30
              || (SpecificButtonCaps = RIMValidatePTPButtons(Pool2, a5),
                  v18 = SpecificButtonCaps,
                  SpecificButtonCaps >= 0) )
            {
              v31 = 0;
              if ( *(_DWORD *)(a2 + 1036) )
              {
                do
                {
                  ++*(_DWORD *)(a1 + 716);
                  v32 = v31++;
                  v33 = 3 * v32;
                  *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 4 * v33 + 4) = *(_DWORD *)(a1 + 716);
                  *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 4 * v33) = 1;
                }
                while ( v31 < *(_DWORD *)(a2 + 1036) );
                v18 = SpecificButtonCaps;
              }
            }
            goto LABEL_67;
          }
LABEL_112:
          v18 = -1073741668;
          goto LABEL_67;
        }
LABEL_60:
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = 0LL;
        goto LABEL_61;
      }
      if ( v24 != 2 )
        goto LABEL_60;
      v63 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 2019849042, &v63) )
      {
        v77[0] = &v69;
        v77[1] = v60;
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                           (__int64)v22,
                                                                                           (__int64)v77,
                                                                                           &v70);
        goto LABEL_61;
      }
      v29 = 0;
      if ( v25 < 0x1000 || (v25 & 0xFFF) != 0 )
      {
        v25 += 16LL;
        v29 = 1;
        v70 = v25;
      }
      UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                         v28,
                                                                                         v25,
                                                                                         2019849042LL);
      if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v22 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(v80);
        if ( v29
          && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
           + 16 < 0x1000 )
        {
          if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                 (__int64)v22,
                 (const void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                 v63,
                 (struct NSInstrumentation::CBackTrace *)v80) )
          {
            UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
LABEL_56:
            Pool2 = v20;
            goto LABEL_61;
          }
        }
        else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                    (__int64)v22,
                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                    v63,
                    (struct NSInstrumentation::CBackTrace *)v80) )
        {
          goto LABEL_56;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v22 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
      }
      Pool2 = v20;
      goto LABEL_60;
    }
  }
  v35 = a5;
  v36 = gpLeakTrackingAllocator;
  *(_DWORD *)(a2 + 1036) = 0;
  v61 = 2019849042;
  v37 = 3 * v35;
  v71 = 260LL;
  v38 = *(_DWORD *)v36;
  v39 = 4 * v37;
  v72 = v39;
  if ( !v38 )
  {
    v40 = ExAllocatePool2(260LL, v39, 2019849042LL);
    if ( v40 )
      _InterlockedIncrement64((volatile signed __int64 *)v36 + 14);
    goto LABEL_93;
  }
  if ( v38 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(v36, 0x78647352u) && v39 + 16 >= v39 )
    {
      v41 = (_QWORD *)ExAllocatePool2(v71 & 0xFFFFFFFFFFFFFFFDuLL, v39 + 16, v61);
      v40 = (__int64)v41;
      if ( !v41
        || (_InterlockedIncrement64((volatile signed __int64 *)v36 + 14),
            *v41 = 2019849042LL,
            v40 = (__int64)(v41 + 2),
            v41 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v36 + 1),
          0x78647352uLL);
      }
      goto LABEL_93;
    }
    goto LABEL_92;
  }
  if ( v38 != 2 )
    goto LABEL_92;
  v64 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(v36, 2019849042, &v64) )
  {
    v43 = 0;
    if ( v39 < 0x1000 || (v39 & 0xFFF) != 0 )
    {
      v39 += 16LL;
      v43 = 1;
      v72 = v39;
    }
    v40 = ExAllocatePool2(v42, v39, 2019849042LL);
    if ( v40 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v36 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(v81);
      if ( v43 && (unsigned __int64)(v40 & 0xFFF) + 16 < 0x1000 )
      {
        if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
               (__int64)v36,
               (const void *)v40,
               v64,
               (struct NSInstrumentation::CBackTrace *)v81) )
        {
          v40 += 16LL;
          goto LABEL_93;
        }
      }
      else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                  (__int64)v36,
                  v40,
                  v64,
                  (struct NSInstrumentation::CBackTrace *)v81) )
      {
        goto LABEL_93;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v36 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v40);
    }
LABEL_92:
    v40 = 0LL;
    goto LABEL_93;
  }
  v78[0] = &v71;
  v78[1] = &v61;
  v40 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
          (__int64)v36,
          (__int64)v78,
          &v72);
LABEL_93:
  *(_QWORD *)(a2 + 1024) = v40;
  if ( !v40 )
    goto LABEL_112;
  v44 = v60[0];
  v45 = 0;
  if ( !a5 )
    goto LABEL_107;
  while ( v44 < 2 )
  {
    if ( *(_WORD *)(Pool2 + 72LL * v45) == 13 )
    {
      v46 = *(_WORD *)(Pool2 + 72LL * v45 + 56);
      if ( v46 == 66 )
      {
        v59 = 1;
      }
      else if ( v46 != 69 && v46 != 60 || v44 && *(_WORD *)(Pool2 + 72LL * (v44 - 1) + 56) != 66 )
      {
        goto LABEL_105;
      }
      v47 = ++*(_DWORD *)(a1 + 716);
      v48 = v44++;
      ++*(_DWORD *)(a2 + 1036);
      v73[v48] = v47;
    }
LABEL_105:
    if ( ++v45 >= a5 )
      break;
  }
  v18 = SpecificButtonCaps;
LABEL_107:
  if ( *(_DWORD *)(a2 + 1036) > a5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2875);
  if ( !v59 )
    goto LABEL_112;
  *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 4LL) = v73[0];
  **(_DWORD **)(a2 + 1024) = RIMPbuttonToCursor(66LL);
  if ( v44 > 1 )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 16LL) = v73[1];
    *(_DWORD *)(*(_QWORD *)(a2 + 1024) + 12LL) = RIMPbuttonToCursor(69LL);
  }
LABEL_67:
  v34 = a5;
  *(_DWORD *)(a2 + 384) += a5;
  *(_DWORD *)(a2 + 1040) = v34;
LABEL_68:
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
LABEL_114:
  v49 = *(unsigned int *)(a2 + 1040);
  if ( !(_DWORD)v49 )
    return (unsigned int)-1073741668;
  if ( v18 == -1073741668 )
    return v18;
  v50 = gpLeakTrackingAllocator;
  v51 = 2 * v49;
  v59 = 1701344082;
  v74 = 260LL;
  v52 = *(_DWORD *)gpLeakTrackingAllocator;
  v66 = v51;
  if ( !v52 )
  {
    v53 = ExAllocatePool2(260LL, v51, 1701344082LL);
    if ( v53 )
      _InterlockedIncrement64((volatile signed __int64 *)v50 + 14);
    goto LABEL_140;
  }
  if ( v52 != 1 )
  {
    if ( v52 != 2 )
      goto LABEL_139;
    v65 = 0LL;
    if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 1701344082, &v65) )
    {
      v75 = &v74;
      v76 = &v59;
      v53 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
              (__int64)v50,
              (__int64)&v75,
              &v66);
      goto LABEL_140;
    }
    v57 = 0;
    if ( v51 < 0x1000 || (v51 & 0xFFF) != 0 )
    {
      v51 += 16LL;
      v57 = 1;
      v66 = v51;
    }
    v53 = ExAllocatePool2(v56, v51, v55);
    if ( !v53 )
      goto LABEL_139;
    _InterlockedIncrement64((volatile signed __int64 *)v50 + 16);
    NSInstrumentation::CBackTrace::CBackTrace(v82);
    if ( v57 && (unsigned __int64)(v53 & 0xFFF) + 16 < 0x1000 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
             (__int64)v50,
             (const void *)v53,
             v65,
             (struct NSInstrumentation::CBackTrace *)v82) )
      {
        v53 += 16LL;
        goto LABEL_140;
      }
    }
    else if ( NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                (__int64)v50,
                v53,
                v65,
                (struct NSInstrumentation::CBackTrace *)v82) )
    {
      goto LABEL_140;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v50 + 17);
    _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)v53);
    goto LABEL_139;
  }
  if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x65687352u)
    && v51 + 16 >= v51 )
  {
    v54 = (_QWORD *)ExAllocatePool2(v74 & 0xFFFFFFFFFFFFFFFDuLL, v51 + 16, v59);
    v53 = (__int64)v54;
    if ( !v54
      || (_InterlockedIncrement64((volatile signed __int64 *)v50 + 14),
          *v54 = 1701344082LL,
          v53 = (__int64)(v54 + 2),
          v54 == (_QWORD *)-16LL) )
    {
      NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
        *((NSInstrumentation::CPointerHashTable **)v50 + 1),
        0x65687352uLL);
    }
    goto LABEL_140;
  }
LABEL_139:
  v53 = 0LL;
LABEL_140:
  *(_QWORD *)(a2 + 816) = v53;
  if ( !v53 )
    return (unsigned int)-1073741668;
  return v18;
}
