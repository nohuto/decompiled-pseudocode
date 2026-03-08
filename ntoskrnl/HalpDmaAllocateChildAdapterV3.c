/*
 * XREFs of HalpDmaAllocateChildAdapterV3 @ 0x140822570
 * Callers:
 *     HalGetAdapterV3 @ 0x140821010 (HalGetAdapterV3.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x140208C70 (ObReferenceObjectByPointer.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     HalpIommuGetSecurityPolicy @ 0x140303164 (HalpIommuGetSecurityPolicy.c)
 *     HalJoinDmaDomain @ 0x14038C5D0 (HalJoinDmaDomain.c)
 *     HalpDmaIsThinDmarCapable @ 0x14038D338 (HalpDmaIsThinDmarCapable.c)
 *     HalpDmaIsThinDmaCapable @ 0x14038D350 (HalpDmaIsThinDmaCapable.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpDmaFindAdapterByDeviceId @ 0x1404FD944 (HalpDmaFindAdapterByDeviceId.c)
 *     HalpDmaGetIommuInterface @ 0x1404FDDF4 (HalpDmaGetIommuInterface.c)
 *     HalpIommuCheckExceptionList @ 0x14050B910 (HalpIommuCheckExceptionList.c)
 *     ObInsertObjectEx @ 0x1407BB7C0 (ObInsertObjectEx.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     IidCloneDeviceId @ 0x140822DFC (IidCloneDeviceId.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140930FF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1409312D8 (HalpDmaAllocateLocalScatterPool.c)
 */

_QWORD *__fastcall HalpDmaAllocateChildAdapterV3(
        unsigned int a1,
        int a2,
        unsigned int a3,
        char a4,
        char a5,
        char a6,
        char a7,
        int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        char a12,
        unsigned int *a13)
{
  _QWORD *v13; // r14
  _QWORD *v14; // rdi
  int SecurityPolicy; // r13d
  __int64 v16; // rbx
  unsigned int v17; // r15d
  __int64 v18; // r12
  int v19; // esi
  size_t v20; // rbx
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rax
  unsigned int v23; // ecx
  char v24; // cl
  __int64 v25; // rcx
  __int64 *v26; // rax
  int LocalScatterPool; // eax
  _QWORD *v29; // rdx
  int v30; // eax
  _QWORD *AdapterByDeviceId; // rax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // [rsp+28h] [rbp-E0h]
  char v35; // [rsp+58h] [rbp-B0h]
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v38; // [rsp+88h] [rbp-80h]
  _QWORD v39[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-50h]
  _QWORD v41[18]; // [rsp+C8h] [rbp-40h] BYREF

  v39[0] = 48LL;
  memset(Handle, 0, sizeof(Handle));
  v39[3] = 528LL;
  a12 = 0;
  v35 = 0;
  v13 = 0LL;
  v14 = 0LL;
  v38 = 0LL;
  Object = 0LL;
  memset(v41, 0, 0x50uLL);
  SecurityPolicy = HalpIommuGetSecurityPolicy();
  v39[1] = 0LL;
  v16 = 648LL;
  v39[2] = 0LL;
  v17 = 0;
  v40 = 0LL;
  if ( !a5 )
  {
    v17 = 3 * (a8 + 1);
    v16 = v17 * 8 + 648LL;
  }
  v18 = a11;
  v19 = a10;
  if ( !a11 && a10 )
  {
    if ( a10 == 2 )
    {
      v19 = 0;
    }
    else if ( SecurityPolicy == 1 )
    {
      return v14;
    }
  }
  a11 = 0LL;
  if ( !v19 || !v18 )
  {
LABEL_5:
    v20 = a11 + v16;
    if ( (int)ObCreateObjectEx(0, HalpDmaAdapterObjectType, (__int64)v39, 0, v34, v20, 0, 0, &Object, 0LL) >= 0 )
    {
      v14 = Object;
      memset(Object, 0, v20);
      if ( ObReferenceObjectByPointer(v14, 0x20000u, HalpDmaAdapterObjectType, 0) >= 0
        && (int)ObInsertObjectEx((char *)v14, 0LL, 0x20000u, 0, 0, 0LL, Handle) >= 0 )
      {
        ZwClose(Handle[0]);
        v14[16] = 0LL;
        v14[17] = 0LL;
        v21 = &MasterAdapter24V3;
        v14[1] = &HalpDmaOperationsV3;
        *((_BYTE *)v14 + 153) = a6;
        if ( a3 >= 0x20 )
          v21 = &MasterAdapterV3;
        *(_DWORD *)v14 = 42467329;
        *((_DWORD *)v14 + 4) = 1634550856;
        *((_BYTE *)v14 + 152) = 0;
        v14[20] = v21;
        if ( a3 < 0x40 )
          v22 = (1LL << a3) - 1;
        else
          v22 = -1LL;
        v14[18] = v22;
        if ( v22 >= v21[18] )
        {
          v14[40] = 0LL;
          v23 = a1;
          *((_BYTE *)v14 + 346) = 0;
          v14[25] = v14 + 24;
          v14[24] = v14 + 24;
          v14[23] = 0LL;
          *((_BYTE *)v14 + 224) = 0;
          *((_DWORD *)v14 + 58) = a1;
          *((_BYTE *)v14 + 442) = a4;
          *((_BYTE *)v14 + 445) = a7;
          v14[57] = a9;
          *((_BYTE *)v14 + 441) = a5;
          *((_DWORD *)v14 + 96) = -1;
          *((_DWORD *)v14 + 112) = a3;
          *((_DWORD *)v14 + 157) = v17 * 8;
          *((_DWORD *)v14 + 39) = 3;
          *((_DWORD *)v14 + 156) = 0;
          v14[71] = 0LL;
          v14[73] = v14 + 72;
          v14[72] = v14 + 72;
          *((_BYTE *)v14 + 592) = 0;
          *((_DWORD *)v14 + 154) = 0;
          v14[60] = 0LL;
          v14[62] = IoFreeAdapterChannelV3Passive;
          v14[63] = v14;
          if ( !a1 )
          {
            *((_DWORD *)v14 + 58) = 0;
            *((_BYTE *)v14 + 345) = 1;
            goto LABEL_15;
          }
          if ( a4 )
            LocalScatterPool = HalpDmaAllocateLocalScatterPool(v14, a1);
          else
            LocalScatterPool = HalpDmaAllocateLocalContiguousPool(v14, a1);
          if ( LocalScatterPool >= 0 )
          {
            v23 = *((_DWORD *)v14 + 58);
            *((_BYTE *)v14 + 345) = 0;
LABEL_15:
            *a13 = v23;
            *((_DWORD *)v14 + 63) = a2;
            *((_DWORD *)v14 + 130) = 0;
            v14[66] = v18;
            if ( a11 )
            {
              v29 = &v14[v17 + 81];
              v14[67] = v29;
              if ( v35 )
                v30 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD))v41[8])(
                        v41[1],
                        a11,
                        &v14[v17 + 81],
                        0LL);
              else
                v30 = IidCloneDeviceId(0LL, v29);
              if ( v30 >= 0 )
              {
                AdapterByDeviceId = (_QWORD *)HalpDmaFindAdapterByDeviceId(v14[67]);
                v13 = AdapterByDeviceId;
                if ( AdapterByDeviceId )
                {
                  if ( AdapterByDeviceId[66] == v18 )
                  {
                    ObfDereferenceObject(AdapterByDeviceId);
                  }
                  else
                  {
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)(AdapterByDeviceId + 40), 0LL);
                    a12 = 1;
                  }
                }
                if ( !v19 || !((unsigned __int8 (__fastcall *)(_QWORD, _QWORD))off_140C01E48[0])(v14[67], 0LL) )
                  goto LABEL_17;
                goto LABEL_67;
              }
              v14[67] = 0LL;
              if ( v19 == 2 )
                goto LABEL_17;
              if ( SecurityPolicy == 1 )
                goto LABEL_21;
            }
            if ( !v19 )
              goto LABEL_17;
LABEL_67:
            v32 = v14[67];
            if ( v32 && !HalpIommuCheckExceptionList(v32) )
            {
              if ( v18 && HalpDmaEnableNestedTranslation )
              {
                Handle[3] = &Handle[2];
                Handle[2] = &Handle[2];
                Handle[1] = &Handle[2];
                v38 = 3uLL;
              }
              if ( (*(int (__fastcall **)(_QWORD, HANDLE, _QWORD *))(HalpDmaIommuInterfaceFcnTable + 160))(
                     v14[66],
                     Handle[1],
                     v14 + 68) >= 0
                || v18
                && HalpDmaEnableNestedTranslation
                && (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD *))(HalpDmaIommuInterfaceFcnTable + 160))(
                     v14[66],
                     0LL,
                     v14 + 68) >= 0 )
              {
                *((_DWORD *)v14 + 130) = v19;
              }
              else if ( v19 != 2 && SecurityPolicy == 1 )
              {
                goto LABEL_85;
              }
            }
LABEL_17:
            v14[64] = 0LL;
            if ( (int)HalJoinDmaDomain((__int64)v14, (ULONG_PTR *)0xFFFFFFFFFFFFFFFFLL) >= 0 )
              goto LABEL_18;
            v33 = *((_DWORD *)v14 + 130);
            if ( v33 )
            {
              if ( v33 == 2 )
              {
                *((_DWORD *)v14 + 130) = 0;
              }
              else if ( SecurityPolicy == 1 )
              {
                goto LABEL_85;
              }
              *((_DWORD *)v14 + 130) = 0;
              if ( (int)HalJoinDmaDomain((__int64)v14, (ULONG_PTR *)0xFFFFFFFFFFFFFFFFLL) >= 0 )
              {
LABEL_18:
                v24 = a12;
                if ( v13 && a12 )
                  *((_BYTE *)v13 + 346) = 1;
                *(_QWORD *)(v14[64] + 56LL) = v14;
                goto LABEL_20;
              }
            }
LABEL_85:
            ObfDereferenceObject(v14);
            v24 = a12;
            v14 = 0LL;
            Object = 0LL;
LABEL_20:
            if ( v24 )
            {
              if ( (_InterlockedExchangeAdd64(v13 + 40, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v13 + 40);
              KeAbPostRelease((ULONG_PTR)(v13 + 40));
              ObfDereferenceObject(v13);
              v14 = Object;
            }
LABEL_21:
            if ( !v35 )
              goto LABEL_22;
            goto LABEL_91;
          }
        }
        ObfDereferenceObject(v14);
      }
    }
    v14 = 0LL;
    goto LABEL_21;
  }
  if ( (int)HalpDmaGetIommuInterface(v18, v41) < 0 )
  {
    if ( v19 == 2 )
    {
      v19 = 0;
    }
    else if ( SecurityPolicy == 1 )
    {
      return v14;
    }
    goto LABEL_5;
  }
  v35 = 1;
  if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64 *))v41[8])(v41[1], 0LL, 0LL, &a11) == -1073741789
    && a11 )
  {
    goto LABEL_5;
  }
  if ( v19 == 2 )
  {
    v19 = 0;
LABEL_42:
    a11 = 0LL;
    goto LABEL_5;
  }
  if ( SecurityPolicy != 1 )
    goto LABEL_42;
LABEL_91:
  ((void (__fastcall *)(_QWORD))v41[3])(v41[1]);
LABEL_22:
  if ( v14 )
  {
    if ( HalpDmaIsThinDmarCapable((__int64)v14) )
    {
      v26 = &HalpDmaOperationsThinRemap;
      goto LABEL_26;
    }
    if ( HalpDmaIsThinDmaCapable(v25) )
    {
      v26 = &HalpDmaOperationsThin;
LABEL_26:
      v14[1] = v26;
    }
  }
  return v14;
}
