__int64 __fastcall PruneModesByDisplayDeviceCaps(struct tagGRAPHICS_DEVICE *a1, unsigned int a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // r14d
  unsigned int v7; // edx
  __int64 v8; // r9
  NSInstrumentation::CLeakTrackingAllocator *v9; // rsi
  unsigned __int64 v10; // rdi
  int v11; // eax
  __int64 Pool2; // rdi
  _QWORD *v13; // rax
  unsigned int v14; // edx
  __int64 v15; // r10
  char v16; // r12
  int v17; // r12d
  __int64 v18; // rsi
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  char v22; // al
  __int64 DxgkWin32kInterface; // rax
  int MonitorCapability; // eax
  PVOID v25; // rcx
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rcx
  unsigned int v33; // esi
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r12
  __int64 v37; // r13
  int v38; // ecx
  int v39; // r8d
  unsigned int v40; // eax
  char v42; // [rsp+30h] [rbp-D0h]
  unsigned int v44; // [rsp+34h] [rbp-CCh]
  __int64 v45; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v46; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v47; // [rsp+50h] [rbp-B0h]
  unsigned int v48; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v49; // [rsp+64h] [rbp-9Ch]
  unsigned int v50; // [rsp+68h] [rbp-98h]
  unsigned int v51; // [rsp+6Ch] [rbp-94h]
  unsigned int v52; // [rsp+70h] [rbp-90h]
  unsigned int v53; // [rsp+74h] [rbp-8Ch]
  unsigned int v54; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v56[8]; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v57; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h]
  __int64 v59; // [rsp+A0h] [rbp-60h]
  __int64 v60; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-50h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v63; // [rsp+C0h] [rbp-40h]
  __int128 v64; // [rsp+C8h] [rbp-38h] BYREF
  int v65; // [rsp+D8h] [rbp-28h]
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v67; // [rsp+180h] [rbp+80h] BYREF
  int v68; // [rsp+190h] [rbp+90h]

  v3 = *((_DWORD *)a1 + 40);
  v59 = a3;
  v5 = a2;
  if ( (v3 & 0x800000) != 0 )
  {
    v48 = 0;
    v42 = 1;
  }
  else
  {
    v42 = 0;
    v48 = 56;
  }
  v50 = 0;
  v52 = 0;
  v57 = 0;
  P = 0LL;
  v49 = -1;
  v51 = -1;
  v53 = -1;
  *((_DWORD *)a1 + 40) = v3 & 0xF7FFFFFF;
  EnsureMonitorDevices::UpdateMonitorDevicesOnGraphicsDevice((EnsureMonitorDevices *)v56, a1);
  if ( !v57 )
  {
    if ( _bittest((const signed __int32 *)a1 + 40, 0x17u) )
    {
      v7 = 0;
      while ( v5 )
      {
        v8 = *(_QWORD *)(a3 + 16LL * --v5 + 8);
        if ( *(unsigned __int16 *)(v8 + 68) + *(unsigned __int16 *)(v8 + 70) != 244 || (*(_DWORD *)(v8 + 240) & 1) != 0 )
        {
          ++v7;
        }
        else
        {
          *(_DWORD *)(a3 + 16LL * v5) = 1;
          *((_DWORD *)a1 + 40) |= 0x8000000u;
        }
      }
LABEL_78:
      v5 = v7;
LABEL_79:
      v33 = v5;
      goto LABEL_80;
    }
LABEL_77:
    v7 = v5;
    goto LABEL_78;
  }
  if ( !(868 * v57) )
    goto LABEL_77;
  v9 = gpLeakTrackingAllocator;
  v10 = 868 * v57;
  v54 = 1986356295;
  v60 = 260LL;
  v11 = *(_DWORD *)gpLeakTrackingAllocator;
  v45 = v10;
  if ( !v11 )
  {
    Pool2 = ExAllocatePool2(260LL, (unsigned int)v10, 1986356295LL);
    if ( Pool2 )
      _InterlockedAdd64((volatile signed __int64 *)v9 + 14, 1uLL);
    goto LABEL_37;
  }
  if ( v11 == 1 )
  {
    if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x76656447u)
      && v10 + 16 >= v10 )
    {
      v13 = (_QWORD *)ExAllocatePool2(v60 & 0xFFFFFFFFFFFFFFFDuLL, v10 + 16, v54);
      Pool2 = (__int64)v13;
      if ( !v13
        || (_InterlockedAdd64((volatile signed __int64 *)v9 + 14, 1uLL),
            *v13 = 1986356295LL,
            Pool2 = (__int64)(v13 + 2),
            v13 == (_QWORD *)-16LL) )
      {
        NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
          *((NSInstrumentation::CPointerHashTable **)v9 + 1),
          (const void *)0x76656447);
      }
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  if ( v11 != 2 )
    goto LABEL_36;
  v55 = 0LL;
  if ( NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x76656447u, &v55) )
  {
    v16 = 0;
    if ( v10 < 0x1000 || (v10 & 0xFFF) != 0 )
    {
      v10 += 16LL;
      v16 = 1;
      v45 = v10;
    }
    Pool2 = ExAllocatePool2(v15, v10, v14);
    if ( Pool2 )
    {
      _InterlockedAdd64((volatile signed __int64 *)v9 + 16, 1uLL);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v16 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v9,
                                Pool2,
                                v55,
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_37;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v9,
                                   Pool2,
                                   v55,
                                   BackTrace) )
      {
        goto LABEL_37;
      }
      _InterlockedAdd64((volatile signed __int64 *)v9 + 17, 1uLL);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
    }
LABEL_36:
    Pool2 = 0LL;
    goto LABEL_37;
  }
  *(_QWORD *)&v46 = &v60;
  *((_QWORD *)&v46 + 1) = &v54;
  Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
            (__int64)v9,
            (__int64)&v46,
            &v45);
LABEL_37:
  if ( !Pool2 )
    goto LABEL_77;
  v17 = 0;
  v18 = 0LL;
  v19 = Pool2 + 4LL * v57;
  if ( !v57 )
    goto LABEL_57;
  do
  {
    v68 = 0;
    v67 = 0LL;
    EnsureMonitorDevices::GetMonitorDevice((EnsureMonitorDevices *)v56, v18, (struct tagVIDEO_MONITOR_DEVICE *)&v67);
    v22 = v67;
    *(_DWORD *)(Pool2 + 4 * v18) = 0;
    if ( (v22 & 3) == 3 )
    {
      v61 = 0LL;
      Object = 0LL;
      v47 = 0LL;
      v46 = 0LL;
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v21, v20);
      if ( (*(int (__fastcall **)(char *, _QWORD, PVOID *, __int64 *))(DxgkWin32kInterface + 456))(
             (char *)&v67 + 8,
             DWORD1(v67),
             &Object,
             &v61) < 0 )
        goto LABEL_55;
      MonitorCapability = GetMonitorCapability(v61, v19, (int *)&v46, v42);
      v25 = Object;
      *(_DWORD *)(Pool2 + 4 * v18) = MonitorCapability;
      v26 = v48;
      if ( v48 <= (unsigned int)v46 )
        v26 = v46;
      v48 = v26;
      v27 = v49;
      if ( v49 >= DWORD1(v46) )
        v27 = DWORD1(v46);
      v49 = v27;
      v28 = v50;
      if ( v50 <= DWORD2(v46) )
        v28 = DWORD2(v46);
      v50 = v28;
      v29 = v51;
      if ( v51 >= HIDWORD(v46) )
        v29 = HIDWORD(v46);
      v51 = v29;
      v30 = v52;
      if ( v52 <= (unsigned int)v47 )
        v30 = v47;
      v52 = v30;
      v31 = v53;
      if ( v53 >= HIDWORD(v47) )
        v31 = HIDWORD(v47);
      v53 = v31;
      ObfDereferenceObject(v25);
    }
    v32 = *(unsigned int *)(Pool2 + 4 * v18);
    v17 += v32;
    v19 += 24 * v32;
LABEL_55:
    v18 = (unsigned int)(v18 + 1);
  }
  while ( (unsigned int)v18 < v57 );
  v5 = a2;
  if ( !v17 )
  {
LABEL_57:
    if ( (*((_DWORD *)a1 + 40) & 0x800000) == 0 )
    {
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
      goto LABEL_79;
    }
  }
  v33 = 0;
  if ( v5 )
  {
    v34 = v59;
    v35 = Pool2 + 4LL * v57;
    v63 = v35;
    do
    {
      v45 = v35;
      --v5;
      v36 = 0LL;
      *(_QWORD *)&v46 = 16LL * v5;
      v37 = *(_QWORD *)(v46 + v34 + 8);
      if ( v57 )
      {
        do
        {
          LODWORD(v55) = 0;
          v65 = 0;
          v64 = 0LL;
          EnsureMonitorDevices::GetMonitorDevice(
            (EnsureMonitorDevices *)v56,
            v36,
            (struct tagVIDEO_MONITOR_DEVICE *)&v64);
          v38 = *(_DWORD *)(Pool2 + 4 * v36);
          v44 = v38;
          if ( v38 )
          {
            v39 = PruneMode((_DWORD *)v37, v45, v38, &v48, v64);
            v45 += 24LL * v44;
          }
          else
          {
            v39 = v55;
          }
          if ( (*((_DWORD *)a1 + 40) & 0x800000) != 0
            && *(unsigned __int16 *)(v37 + 68) + *(unsigned __int16 *)(v37 + 70) == 244 )
          {
            if ( (*(_DWORD *)(v37 + 240) & 1) == 0 )
              goto LABEL_68;
          }
          else if ( v39 )
          {
LABEL_68:
            v34 = v59;
            *(_DWORD *)(v46 + v59) = 1;
            *((_DWORD *)a1 + 40) |= 0x8000000u;
            goto LABEL_72;
          }
          v36 = (unsigned int)(v36 + 1);
        }
        while ( (unsigned int)v36 < v57 );
        v34 = v59;
LABEL_72:
        v35 = v63;
      }
      v40 = v33 + 1;
      if ( (_DWORD)v36 != v57 )
        v40 = v33;
      v33 = v40;
    }
    while ( v5 );
  }
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)Pool2);
LABEL_80:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v33;
}
