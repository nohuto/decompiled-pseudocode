/*
 * XREFs of NtQueryObject @ 0x14071EA20
 * Callers:
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     IopQueryRegistryKeySystemPath @ 0x140782C0C (IopQueryRegistryKeySystemPath.c)
 * Callees:
 *     OBJECT_HEADER_TO_QUOTA_INFO @ 0x140206AE0 (OBJECT_HEADER_TO_QUOTA_INFO.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ObQueryTypeInfo @ 0x14071E8D0 (ObQueryTypeInfo.c)
 *     ObQueryNameStringMode @ 0x14071EE84 (ObQueryNameStringMode.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

NTSTATUS __stdcall NtQueryObject(
        HANDLE Handle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG ObjectInformationLength,
        PULONG ReturnLength)
{
  _OWORD *v6; // r14
  KPROCESSOR_MODE PreviousMode; // al
  ULONG v10; // r8d
  __int64 v11; // rcx
  NTSTATUS result; // eax
  NTSTATUS v13; // edi
  __int64 *v14; // r15
  ACCESS_MASK GrantedAccess; // r9d
  char *v16; // r12
  __int64 v17; // r10
  __int32 v18; // esi
  NTSTATUS NameStringMode; // eax
  __int32 v20; // esi
  __int32 v21; // esi
  ULONG HandleAttributes; // eax
  char v23; // cl
  _QWORD *v24; // rax
  struct _OBJECT_TYPE *v25; // r10
  __int64 v26; // rax
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v28; // rdi
  char *v29; // rsi
  int v30; // esi
  char *v31; // r13
  NTSTATUS v32; // esi
  unsigned int v33; // ecx
  int v34; // edx
  unsigned int v35; // r12d
  __int64 v36; // rcx
  int v37; // esi
  void *v38; // r14
  struct _KTHREAD *v39; // rax
  signed __int64 *v40; // rdi
  __int64 v41; // rcx
  char v42; // [rsp+50h] [rbp-E8h]
  NTSTATUS v43; // [rsp+54h] [rbp-E4h]
  ULONG v44; // [rsp+58h] [rbp-E0h] BYREF
  unsigned int i; // [rsp+60h] [rbp-D8h]
  __int64 *v46; // [rsp+68h] [rbp-D0h]
  ACCESS_MASK v47; // [rsp+70h] [rbp-C8h]
  int v48; // [rsp+74h] [rbp-C4h] BYREF
  int v49; // [rsp+78h] [rbp-C0h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v51; // [rsp+88h] [rbp-B0h]
  __int128 v52; // [rsp+98h] [rbp-A0h]
  __int128 v53; // [rsp+A8h] [rbp-90h]
  __int128 v54; // [rsp+B8h] [rbp-80h]
  __int64 v55; // [rsp+C8h] [rbp-70h]
  PVOID Object[8]; // [rsp+D0h] [rbp-68h] BYREF

  v6 = ObjectInformation;
  HandleInformation = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v49 = 0;
  v48 = 0;
  v44 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v42 = PreviousMode;
  if ( PreviousMode )
  {
    v10 = 4;
    if ( ObjectInformationClass == ObjectHandleFlagInformation )
      v10 = 1;
    ProbeForWrite(v6, ObjectInformationLength, v10);
    if ( ReturnLength )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v11 = (__int64)ReturnLength;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
    PreviousMode = v42;
  }
  if ( ObjectInformationClass == ObjectTypesInformation )
  {
    GrantedAccess = 0;
    v47 = 0;
    v14 = 0LL;
    v46 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v51 = 0LL;
    v13 = 0;
    v43 = 0;
  }
  else
  {
    Object[0] = 0LL;
    result = ObReferenceObjectByHandle(Handle, 0, 0LL, PreviousMode, Object, &HandleInformation);
    v13 = result;
    v14 = (__int64 *)Object[0];
    v46 = (__int64 *)Object[0];
    v43 = result;
    if ( result < 0 )
      return result;
    GrantedAccess = HandleInformation.GrantedAccess;
    v47 = HandleInformation.GrantedAccess;
    v16 = (char *)Object[0] - 48;
    v17 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)Object[0] - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(LOWORD(Object[0]) - 48) >> 8)];
    v51 = v17;
  }
  if ( ObjectInformationClass == ObjectBasicInformation )
  {
    if ( ObjectInformationLength == 56 )
    {
      HandleAttributes = HandleInformation.HandleAttributes;
      LODWORD(v52) = HandleInformation.HandleAttributes;
      v23 = v16[27];
      if ( (v23 & 0x10) != 0 )
      {
        HandleAttributes = HandleInformation.HandleAttributes | 0x10;
        LODWORD(v52) = HandleInformation.HandleAttributes | 0x10;
      }
      if ( (v23 & 8) != 0 )
        LODWORD(v52) = HandleAttributes | 0x20;
      DWORD1(v52) = GrantedAccess;
      DWORD2(v52) = *((_DWORD *)v16 + 2);
      HIDWORD(v52) = *(_DWORD *)v16;
      v24 = (_QWORD *)OBJECT_HEADER_TO_QUOTA_INFO((__int64)v16);
      if ( v24 )
        *(_QWORD *)&v53 = *v24;
      else
        *(_QWORD *)&v53 = 0LL;
      if ( v25 == ObpSymbolicLinkObjectType )
        v26 = *v14;
      else
        v26 = 0LL;
      v55 = v26;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v28 = (volatile signed __int64 *)(v16 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v16 + 16), 0LL);
      if ( (v16[26] & 2) != 0 )
        v29 = &v16[-ObpInfoMaskToOffset[v16[26] & 3]];
      else
        v29 = 0LL;
      if ( v29 && (v31 = *(char **)v29) != 0LL )
      {
        ObfReferenceObject(*(PVOID *)v29);
        if ( _InterlockedCompareExchange64(v28, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v16 + 2);
        KeAbPostRelease((ULONG_PTR)(v16 + 16));
        KeLeaveCriticalRegion();
        v37 = *((unsigned __int16 *)v29 + 4) + 2;
        while ( 1 )
        {
          v38 = v31;
          v39 = KeGetCurrentThread();
          --v39->KernelApcDisable;
          v40 = (signed __int64 *)(v31 - 32);
          ExAcquirePushLockSharedEx((ULONG_PTR)(v31 - 32), 0LL);
          v41 = (*(v31 - 22) & 2) != 0 ? (__int64)&v31[-ObpInfoMaskToOffset[*(v31 - 22) & 3] - 48] : 0LL;
          if ( !v41 || !*(_QWORD *)v41 )
            break;
          v37 += *(unsigned __int16 *)(v41 + 8) + 2;
          v31 = *(char **)v41;
          ObfReferenceObject(*(PVOID *)v41);
          if ( _InterlockedCompareExchange64(v40, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v40);
          KeAbPostRelease((ULONG_PTR)v40);
          KeLeaveCriticalRegion();
          ObfDereferenceObject(v38);
        }
        v6 = ObjectInformation;
        v14 = v46;
        if ( _InterlockedCompareExchange64(v40, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v31 - 4);
        KeAbPostRelease((ULONG_PTR)(v31 - 32));
        KeLeaveCriticalRegion();
        if ( v31 )
          ObfDereferenceObject(v31);
        v30 = v37 + 18;
      }
      else
      {
        if ( _InterlockedCompareExchange64(v28, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)v16 + 2);
        KeAbPostRelease((ULONG_PTR)(v16 + 16));
        KeLeaveCriticalRegion();
        v30 = 0;
      }
      DWORD1(v54) = v30;
      DWORD2(v54) = *(unsigned __int16 *)(v51 + 16) + 106;
      if ( (v47 & 0x20000) != 0 && *((_QWORD *)v16 + 5) )
      {
        v48 = 15;
        (*(void (__fastcall **)(__int64 *, __int64, int *))(v51 + 152))(v14, 1LL, &v48);
      }
      HIDWORD(v54) = v49;
      *v6 = v52;
      v6[1] = v53;
      v6[2] = v54;
      *((_QWORD *)v6 + 6) = v55;
      v44 = 56;
      v13 = v43;
      goto LABEL_16;
    }
    v32 = -1073741820;
    goto LABEL_71;
  }
  v18 = ObjectInformationClass - 1;
  if ( v18 )
  {
    v20 = v18 - 1;
    if ( !v20 )
    {
      NameStringMode = ObQueryTypeInfo(v17, (__int64)v6, ObjectInformationLength, &v44);
      goto LABEL_15;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      v44 = 8;
      Object[5] = v6;
      if ( ObjectInformationLength >= 4 )
      {
        *(_DWORD *)v6 = 0;
        v33 = 0;
        i = 0;
        v34 = 0;
        while ( v33 < 0x100 )
        {
          v51 = ObpObjectTypes[v33];
          if ( !v51 )
            break;
          *(_DWORD *)v6 = ++v34;
          i = ++v33;
        }
        v35 = 0;
        for ( i = 0; v35 < 0x100; i = v35 )
        {
          Object[6] = (char *)v6 + v44;
          v36 = ObpObjectTypes[v35];
          v51 = v36;
          if ( !v36 )
            break;
          v13 = ObQueryTypeInfo(v36, (__int64)v6 + v44, ObjectInformationLength, &v44);
          if ( (int)(v13 + 0x80000000) >= 0 && v13 != -1073741820 )
            break;
          ++v35;
        }
      }
      else
      {
        v13 = -1073741820;
      }
      goto LABEL_16;
    }
    if ( v21 == 1 )
    {
      v44 = 2;
      if ( ObjectInformationLength < 2 )
      {
        v13 = -1073741820;
      }
      else
      {
        *(_BYTE *)v6 = 0;
        if ( (HandleInformation.HandleAttributes & 2) != 0 )
          *(_BYTE *)v6 = 1;
        *((_BYTE *)v6 + 1) = 0;
        if ( (HandleInformation.HandleAttributes & 1) != 0 )
          *((_BYTE *)v6 + 1) = 1;
      }
      goto LABEL_16;
    }
    v32 = -1073741821;
LABEL_71:
    ObfDereferenceObject(v14);
    return v32;
  }
  NameStringMode = ObQueryNameStringMode((_DWORD)v14, (_DWORD)v6, ObjectInformationLength, (unsigned int)&v44, v42);
LABEL_15:
  v13 = NameStringMode;
LABEL_16:
  if ( ReturnLength )
    *ReturnLength = v44;
  if ( v14 )
    ObfDereferenceObject(v14);
  return v13;
}
