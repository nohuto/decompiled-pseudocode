unsigned int *__fastcall RIMGetQDCActivePathsData(unsigned int *a1)
{
  unsigned int *v1; // rsi
  __int64 v3; // rax
  NSInstrumentation::CLeakTrackingAllocator *v4; // rdi
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 Pool2; // rbx
  _QWORD *v8; // rax
  __int64 v9; // r10
  char v10; // r14
  unsigned int v11; // edx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15[2]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  PVOID BackTrace[20]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v19; // [rsp+F0h] [rbp-10h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+100h] [rbp+0h] BYREF
  __int64 v21; // [rsp+138h] [rbp+38h]
  int v22; // [rsp+140h] [rbp+40h]
  const wchar_t *v23; // [rsp+148h] [rbp+48h]
  char *v24; // [rsp+150h] [rbp+50h]
  int v25; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v26; // [rsp+160h] [rbp+60h]
  int v27; // [rsp+168h] [rbp+68h]
  __int64 v28; // [rsp+170h] [rbp+70h]
  int v29; // [rsp+178h] [rbp+78h]
  const wchar_t *v30; // [rsp+180h] [rbp+80h]
  char *v31; // [rsp+188h] [rbp+88h]
  int v32; // [rsp+190h] [rbp+90h]
  unsigned __int64 *v33; // [rsp+198h] [rbp+98h]
  int v34; // [rsp+1A0h] [rbp+A0h]
  __int64 v35; // [rsp+1A8h] [rbp+A8h]
  int v36; // [rsp+1B0h] [rbp+B0h]
  const wchar_t *v37; // [rsp+1B8h] [rbp+B8h]
  char *v38; // [rsp+1C0h] [rbp+C0h]
  int v39; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 *v40; // [rsp+1D0h] [rbp+D0h]
  int v41; // [rsp+1D8h] [rbp+D8h]
  __int64 v42; // [rsp+1E0h] [rbp+E0h]
  int v43; // [rsp+1E8h] [rbp+E8h]
  __int128 v44; // [rsp+1F0h] [rbp+F0h]
  __int128 v45; // [rsp+200h] [rbp+100h]
  __int64 v46; // [rsp+210h] [rbp+110h]

  *(_OWORD *)a1 = 0LL;
  v1 = a1;
  if ( gProtocolType || (int)DrvGetDisplayConfigBufferSizes(18LL, a1) < 0 )
    goto LABEL_2;
  v3 = *v1;
  if ( !(_DWORD)v3 )
    return v1;
  v4 = gpLeakTrackingAllocator;
  v5 = 216 * v3;
  v16 = 1836086098;
  v6 = *(_DWORD *)gpLeakTrackingAllocator;
  *(_QWORD *)&v19 = v5;
  v17 = 260LL;
  if ( !v6 )
  {
    Pool2 = ExAllocatePool2(260LL, v5, 1836086098LL);
    if ( Pool2 )
      _InterlockedIncrement64((volatile signed __int64 *)v4 + 14);
    goto LABEL_9;
  }
  if ( v6 != 1 )
  {
    if ( v6 == 2 )
    {
      v15[0] = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6D707352u, v15) )
      {
        v15[0] = (unsigned __int64)&v17;
        v15[1] = (unsigned __int64)&v16;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v4,
                  v15,
                  &v19);
        goto LABEL_9;
      }
      v10 = 0;
      if ( v5 < 0x1000 || (v5 & 0xFFF) != 0 )
      {
        v5 += 16LL;
        v10 = 1;
        *(_QWORD *)&v19 = v5;
      }
      Pool2 = ExAllocatePool2(v9, v5, 1836086098LL);
      if ( Pool2 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 16);
        NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
        if ( v10 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
        {
          if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                  v4,
                                  Pool2,
                                  v15[0],
                                  BackTrace) )
          {
            Pool2 += 16LL;
            goto LABEL_9;
          }
        }
        else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                     v4,
                                     Pool2,
                                     v15[0],
                                     BackTrace) )
        {
          goto LABEL_9;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v4 + 17);
        _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      }
    }
LABEL_33:
    Pool2 = 0LL;
    goto LABEL_9;
  }
  if ( !NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6D707352u)
    || v5 + 16 < v5 )
  {
    goto LABEL_33;
  }
  v8 = (_QWORD *)ExAllocatePool2(v17 & 0xFFFFFFFFFFFFFFFDuLL, v5 + 16, v16);
  Pool2 = (__int64)v8;
  if ( !v8
    || (_InterlockedIncrement64((volatile signed __int64 *)v4 + 14),
        *v8 = 1836086098LL,
        Pool2 = (__int64)(v8 + 2),
        v8 == (_QWORD *)-16LL) )
  {
    NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
      *((NSInstrumentation::CPointerHashTable **)v4 + 1),
      (const void *)0x6D707352);
  }
LABEL_9:
  *((_QWORD *)v1 + 1) = Pool2;
  if ( !Pool2 || (int)DrvQueryDisplayConfig(2147483666LL, v1, Pool2, 0LL) < 0 )
  {
LABEL_2:
    RIMFreeQDCActivePathsData(v1);
    return 0LL;
  }
  if ( *v1 )
  {
    LODWORD(v15[0]) = 0;
    QueryTable.DefaultLength = 4;
    QueryTable.Flags = 288;
    QueryTable.DefaultType = 67108868;
    v22 = 288;
    QueryTable.Name = L"ScreenPosition.Left";
    v25 = 67108868;
    QueryTable.EntryContext = &v19;
    QueryTable.DefaultData = v15;
    v23 = L"ScreenPosition.Top";
    v24 = (char *)&v19 + 4;
    v26 = v15;
    v30 = L"ScreenPosition.Right";
    v31 = (char *)&v19 + 8;
    v33 = v15;
    v37 = L"ScreenPosition.Bottom";
    v38 = (char *)&v19 + 12;
    v40 = v15;
    v27 = 4;
    v29 = 288;
    v32 = 67108868;
    v34 = 4;
    v36 = 288;
    v39 = 67108868;
    v41 = 4;
    v19 = 0LL;
    QueryTable.QueryRoutine = 0LL;
    v21 = 0LL;
    v28 = 0LL;
    v35 = 0LL;
    v42 = 0LL;
    v43 = 0;
    v44 = 0LL;
    v45 = 0LL;
    v46 = 0LL;
    if ( RtlQueryRegistryValues(3u, L"GRE_Initialize\\OverrideScreenLayout", &QueryTable, 0LL, 0LL) >= 0
      && (int)v19 < SDWORD2(v19)
      && SDWORD1(v19) < SHIDWORD(v19) )
    {
      v11 = 0;
      if ( *v1 )
      {
        v12 = *((_QWORD *)v1 + 1) + 140LL;
        do
        {
          if ( *(_DWORD *)(v12 - 60) == 0x80000000 && *(_DWORD *)(v12 - 84) && *(_DWORD *)(v12 - 80) )
          {
            *(_QWORD *)v12 = 0LL;
            v13 = DWORD2(v19) - v19;
            *(_DWORD *)(v12 - 52) = DWORD2(v19) - v19;
            *(_DWORD *)(v12 - 84) = v13;
            *(_DWORD *)(v12 + 8) = v13;
            v14 = HIDWORD(v19) - DWORD1(v19);
            *(_DWORD *)(v12 - 48) = HIDWORD(v19) - DWORD1(v19);
            *(_DWORD *)(v12 - 80) = v14;
            *(_DWORD *)(v12 + 12) = v14;
          }
          ++v11;
          v12 += 216LL;
        }
        while ( v11 < *v1 );
      }
    }
  }
  return v1;
}
