__int64 __fastcall CheckAndNotifyDualView(const UNICODE_STRING *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // r12d
  __int64 v5; // r13
  __int64 v6; // rcx
  bool v7; // zf
  int v8; // eax
  unsigned __int64 v9; // rdi
  NSInstrumentation::CLeakTrackingAllocator *v10; // rsi
  int v11; // eax
  __int64 Pool2; // rdi
  __int64 v13; // r15
  void *v14; // rsi
  __int64 v15; // r14
  unsigned __int16 v16; // ax
  int v17; // edx
  __int64 v18; // r9
  unsigned int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  _DWORD *v26; // rcx
  int v27; // r14d
  int v28; // eax
  int v29; // r12d
  _QWORD *v31; // rax
  unsigned int v32; // edx
  __int64 v33; // r10
  char v34; // r14
  __int64 i; // rax
  int v36; // ecx
  __int64 DeviceFromName; // rax
  struct tagGRAPHICS_DEVICE *v38; // r15
  __int64 v39; // rcx
  _QWORD *v40; // rdx
  unsigned int *v41; // rdi
  int v42; // [rsp+20h] [rbp-E0h]
  unsigned int v43; // [rsp+28h] [rbp-D8h] BYREF
  unsigned __int64 v44[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v46; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BackTrace[28]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v51; // [rsp+168h] [rbp+68h] BYREF

  v2 = 0;
  v45 = 0;
  v3 = 0;
  v51 = 0;
  v42 = 0;
  v4 = 1;
  v5 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v6 = *(_QWORD *)(v5 + 1264);
  if ( !v6 )
    return 0LL;
  do
  {
    v7 = (*(_DWORD *)(v6 + 160) & 0x20800000) == 0;
    v8 = v3 + 1;
    v6 = *(_QWORD *)(v6 + 128);
    if ( v7 )
      v8 = v3;
    v3 = v8;
  }
  while ( v6 );
  if ( !v8 )
    return 0LL;
  v9 = (unsigned int)(16 * v8);
  if ( (_DWORD)v9 )
  {
    v10 = gpLeakTrackingAllocator;
    v43 = 1936876615;
    v46 = 260LL;
    v47 = (unsigned int)(16 * v8);
    v11 = *(_DWORD *)gpLeakTrackingAllocator;
    if ( !*(_DWORD *)gpLeakTrackingAllocator )
    {
      Pool2 = ExAllocatePool2(260LL, (unsigned int)v9, 1936876615LL);
      if ( Pool2 )
        _InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL);
      goto LABEL_10;
    }
    if ( v11 == 1 )
    {
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x73726447u)
        && v9 + 16 >= v9 )
      {
        v31 = (_QWORD *)ExAllocatePool2(v46 & 0xFFFFFFFFFFFFFFFDuLL, v9 + 16, v43);
        Pool2 = (__int64)v31;
        if ( !v31
          || (_InterlockedAdd64((volatile signed __int64 *)v10 + 14, 1uLL),
              *v31 = 1936876615LL,
              Pool2 = (__int64)(v31 + 2),
              v31 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v10 + 1),
            (const void *)0x73726447);
        }
LABEL_10:
        if ( Pool2 )
        {
          v13 = *(_QWORD *)(v5 + 1264);
          v14 = (void *)Pool2;
          v15 = 0LL;
          LODWORD(v44[0]) = 0;
          if ( v13 )
          {
            do
            {
              v16 = -1;
              if ( !*(_DWORD *)(v5 + 1292) )
                v16 = gProtocolType;
              if ( !(unsigned int)GetPrimaryAttachFlags((struct tagGRAPHICS_DEVICE *)v13, v16, &v45, &v51) )
              {
                NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (void *)Pool2);
                return 3LL;
              }
              v17 = 0;
              v18 = a2;
              if ( v51 )
                v4 = 0;
              if ( a2 )
              {
                v19 = *(_DWORD *)(a2 + 20);
                if ( v19 )
                {
                  v20 = (__int64 *)(a2 + 40);
                  v21 = v19;
                  do
                  {
                    v22 = *v20;
                    v20 += 7;
                    if ( *(_QWORD *)(v22 + 2552) == v13 )
                      v17 = 1;
                    --v21;
                  }
                  while ( v21 );
                }
                if ( !v51 || (v23 = 1, v17) )
                  v23 = 0;
                v42 |= v23;
              }
              if ( (*(_DWORD *)(v13 + 160) & 0x2800008) == 0x800000 )
              {
                v24 = 2LL * (unsigned int)v15;
                *(_QWORD *)(Pool2 + 8 * v24) = v13;
                *(_DWORD *)(Pool2 + 8 * v24 + 12) = v51 != 0;
                v15 = (unsigned int)(v15 + 1);
                LODWORD(v44[0]) = v15;
                *(_DWORD *)(Pool2 + 8 * v24 + 8) = v17 != 0;
              }
              v13 = *(_QWORD *)(v13 + 128);
            }
            while ( v13 );
            if ( v4 )
              goto LABEL_70;
          }
          else
          {
            v18 = a2;
LABEL_70:
            for ( i = *(_QWORD *)(v5 + 1264); i; i = *(_QWORD *)(i + 128) )
            {
              v36 = *(_DWORD *)(i + 160);
              if ( (v36 & 0x2000008) == 0 )
              {
                if ( (v36 & 0x800000) != 0 )
                  *(_DWORD *)(Pool2 + 12) = 1;
                break;
              }
            }
          }
          if ( a1 )
          {
            DeviceFromName = DrvGetDeviceFromName(a1);
            v38 = (struct tagGRAPHICS_DEVICE *)DeviceFromName;
            if ( DeviceFromName )
            {
              v39 = 0LL;
              if ( (_DWORD)v15 )
              {
                v40 = (_QWORD *)Pool2;
                while ( DeviceFromName != *v40 )
                {
                  v39 = (unsigned int)(v39 + 1);
                  v40 += 2;
                  if ( (unsigned int)v39 >= (unsigned int)v15 )
                    goto LABEL_42;
                }
                if ( *(_DWORD *)(Pool2 + 16 * v39 + 8) != *(_DWORD *)(Pool2 + 16 * v39 + 12) || !a2 )
                {
                  v41 = (unsigned int *)(Pool2 + 8);
                  v29 = 1;
                  if ( !a2 )
                  {
LABEL_38:
                    v2 = 1;
LABEL_39:
                    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v14);
                    return v2;
                  }
                  do
                  {
                    DrvUpdateAttachFlag(v38, *v41);
                    v41 += 4;
                    --v15;
                  }
                  while ( v15 );
LABEL_44:
                  if ( !v29 )
                  {
                    v2 = 2;
                    if ( !v42 )
                      goto LABEL_39;
                  }
                  goto LABEL_38;
                }
              }
            }
          }
          else if ( (_DWORD)v15 )
          {
            v25 = (unsigned int)v15;
            v26 = (_DWORD *)(Pool2 + 8);
            v27 = 0;
            do
            {
              if ( *v26 != v26[1] || !v18 )
                v27 = 1;
              v26 += 4;
              v28 = v27;
              --v25;
            }
            while ( v25 );
            LODWORD(v15) = v44[0];
            v29 = v28;
            if ( v28 )
              goto LABEL_38;
            goto LABEL_43;
          }
LABEL_42:
          v29 = 0;
LABEL_43:
          if ( !(_DWORD)v15 )
            goto LABEL_39;
          goto LABEL_44;
        }
        return 3LL;
      }
    }
    else if ( v11 == 2 )
    {
      v44[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x73726447u, v44) )
      {
        v44[0] = (unsigned __int64)&v46;
        v44[1] = (unsigned __int64)&v43;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v10,
                  v44,
                  &v47);
        goto LABEL_10;
      }
      v34 = 0;
      if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 )
      {
        v9 += 16LL;
        v34 = 1;
        v47 = v9;
      }
      Pool2 = ExAllocatePool2(v33, v9, v32);
      if ( Pool2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)v10 + 16, 1uLL);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v34 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v10,
                                  Pool2,
                                  v44[0],
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_10;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v10,
                                     Pool2,
                                     v44[0],
                                     BackTrace) )
        {
          goto LABEL_10;
        }
        _InterlockedAdd64((volatile signed __int64 *)v10 + 17, 1uLL);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
    Pool2 = 0LL;
    goto LABEL_10;
  }
  return 3LL;
}
