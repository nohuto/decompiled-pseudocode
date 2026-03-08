/*
 * XREFs of PiCMCreateDevice @ 0x1409654C0
 * Callers:
 *     PiCMHandleIoctl @ 0x1406CF040 (PiCMHandleIoctl.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140244A08 (RtlStringCchCopyExW.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1402459EC (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x140246490 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchLengthW @ 0x140247080 (RtlStringCchLengthW.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x140413EB0 (ZwDeleteValueKey.c)
 *     PpDeviceRegistration @ 0x140680F5C (PpDeviceRegistration.c)
 *     PiAuDoesClientHaveAccess @ 0x1406C4454 (PiAuDoesClientHaveAccess.c)
 *     _CmIsRootDevice @ 0x1406C7E80 (_CmIsRootDevice.c)
 *     _CmGetDeviceRegProp @ 0x1406C9884 (_CmGetDeviceRegProp.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CDF08 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     PiCMReturnBufferResultData @ 0x1406D0ED4 (PiCMReturnBufferResultData.c)
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 *     _CmValidateDeviceName @ 0x1406D3DF0 (_CmValidateDeviceName.c)
 *     _RegRtlQueryValue @ 0x1406D3E98 (_RegRtlQueryValue.c)
 *     _RegRtlSetValue @ 0x140784FE4 (_RegRtlSetValue.c)
 *     _CmCreateDevice @ 0x140789278 (_CmCreateDevice.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14078A47C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopIsRootEnumeratedDeviceObjectActive @ 0x14081D14C (IopIsRootEnumeratedDeviceObjectActive.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140957214 (PiPnpRtlEnsureObjectCached.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140964CC4 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMGenerateDeviceInstance @ 0x140966C4C (PiCMGenerateDeviceInstance.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMCreateDevice(
        unsigned __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        _DWORD *a6)
{
  wchar_t *Pool2; // rdi
  char v7; // r14
  int v8; // esi
  int DeviceInputData; // ebx
  signed int inited; // ebx
  char v11; // r13
  int v12; // r14d
  __int64 v13; // rcx
  int v14; // eax
  struct _KTHREAD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rcx
  bool IsRootEnumeratedDeviceObjectActive; // al
  int DeviceRegProp; // eax
  __int64 v22; // rdx
  int v23; // ecx
  int DeviceInstanceCsConfigFlags; // eax
  char v25; // dl
  int v26; // eax
  _WORD *v27; // r14
  struct _KTHREAD *v28; // rax
  char PreviousMode; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 v32; // rdx
  _BYTE v33[3]; // [rsp+59h] [rbp-78h] BYREF
  __int64 v34; // [rsp+5Ch] [rbp-75h] BYREF
  int v35; // [rsp+64h] [rbp-6Dh] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-69h] BYREF
  size_t pcchLength; // [rsp+70h] [rbp-61h] BYREF
  int v38; // [rsp+78h] [rbp-59h] BYREF
  int v39; // [rsp+7Ch] [rbp-55h] BYREF
  int v40; // [rsp+80h] [rbp-51h] BYREF
  HANDLE Handle[2]; // [rsp+88h] [rbp-49h] BYREF
  NTSTRSAFE_PCWSTR pszSrc[2]; // [rsp+98h] [rbp-39h] BYREF
  PCWSTR SourceString[2]; // [rsp+A8h] [rbp-29h]
  __int64 v44; // [rsp+B8h] [rbp-19h]
  PVOID P; // [rsp+C0h] [rbp-11h]
  PVOID Object; // [rsp+C8h] [rbp-9h]
  PVOID v47; // [rsp+D0h] [rbp-1h] BYREF
  UNICODE_STRING v48; // [rsp+D8h] [rbp+7h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp+17h] BYREF

  v44 = 0LL;
  v34 = 0LL;
  Pool2 = 0LL;
  v7 = 0;
  v48 = 0LL;
  *a6 = 0;
  v8 = 0;
  Handle[0] = 0LL;
  *(_OWORD *)pszSrc = 0LL;
  v40 = 0;
  *(_OWORD *)SourceString = 0LL;
  v38 = 0;
  DestinationString = 0LL;
  v35 = 0;
  v39 = 0;
  Object = 0LL;
  KeyHandle = 0LL;
  v47 = 0LL;
  pcchLength = 0LL;
  P = 0LL;
  DeviceInputData = PiCMCaptureCreateDeviceInputData(a1, a2, a5, (__int64)pszSrc);
  if ( DeviceInputData < 0 )
    goto LABEL_81;
  if ( !PiAuDoesClientHaveAccess(2u) )
  {
    inited = -1073741790;
    goto LABEL_70;
  }
  if ( !pszSrc[1]
    || LODWORD(SourceString[0]) < 2
    || !SourceString[1]
    || (unsigned int)v44 < 2
    || !a3
    || a4 < 0x14
    || (v11 = BYTE4(pszSrc[0]), (HIDWORD(pszSrc[0]) & 0xFFFFFFF0) != 0) )
  {
    inited = -1073741811;
    goto LABEL_70;
  }
  v12 = BYTE4(pszSrc[0]) & 2;
  if ( !CmIsRootDevice(SourceString[1]) )
  {
    inited = -1073741811;
LABEL_14:
    v7 = 0;
    goto LABEL_70;
  }
  inited = PiPnpRtlBeginOperation((__int64 **)&v47);
  if ( inited < 0 )
    goto LABEL_14;
  Pool2 = (wchar_t *)ExAllocatePool2(256LL, 400LL, 879783504LL);
  if ( !Pool2 )
  {
    inited = -1073741670;
    goto LABEL_14;
  }
  if ( (v11 & 4) != 0 )
  {
    inited = PiCMGenerateDeviceInstance(pszSrc[1]);
    if ( v12 )
      goto LABEL_20;
  }
  else
  {
    inited = CmValidateDeviceName(v13, pszSrc[1]);
  }
  if ( inited < 0 )
  {
    v7 = 0;
    goto LABEL_70;
  }
  if ( (v11 & 4) == 0 )
  {
    inited = RtlStringCchCopyExW(Pool2, 0xC8uLL, pszSrc[1], 0LL, 0LL, 0x800u);
    if ( inited < 0 )
      goto LABEL_14;
  }
  inited = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)Pool2, 16, 0, 131103, 0, (__int64)&KeyHandle, 0LL);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741810 )
    goto LABEL_14;
  if ( !v12 )
  {
    if ( KeyHandle )
    {
      if ( RtlInitUnicodeStringEx(&DestinationString, Pool2) >= 0 )
      {
        PpDevNodeLockTree(0);
        v16 = PnpDeviceObjectFromDeviceInstanceWithTag((__int64)&DestinationString, 0x746C6644u);
        Object = v16;
        v17 = (__int64)v16;
        if ( v16 )
          v18 = *(_QWORD *)(v16[39] + 40LL);
        else
          v18 = 0LL;
        PpDevNodeUnlockTree(0);
        if ( v18 )
        {
          IsRootEnumeratedDeviceObjectActive = IopIsRootEnumeratedDeviceObjectActive(v17);
          v7 = 0;
          if ( IsRootEnumeratedDeviceObjectActive )
            goto LABEL_49;
          goto LABEL_52;
        }
        PiPnpRtlEnsureObjectCached(v19, (__int64)Pool2);
      }
      v7 = 0;
      goto LABEL_52;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
    v33[0] = 0;
    v7 = 1;
    inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Pool2, 131103, &KeyHandle, v33, 0);
    if ( inited < 0 )
      goto LABEL_39;
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = 0;
    v8 = pcchLength;
    if ( !v33[0] )
    {
LABEL_49:
      inited = -1073741771;
      goto LABEL_70;
    }
    v11 = BYTE4(pszSrc[0]);
LABEL_52:
    inited = RtlInitUnicodeStringEx(&v48, Pool2);
    if ( inited < 0 )
      goto LABEL_70;
    LODWORD(v34) = 4;
    DeviceRegProp = CmGetDeviceRegProp(
                      *(__int64 *)&PiPnpRtlCtx,
                      (__int64)Pool2,
                      (__int64)KeyHandle,
                      11,
                      (__int64)&v34 + 4,
                      (__int64)&v35,
                      (__int64)&v34,
                      0);
    v23 = v35;
    if ( DeviceRegProp < 0 )
      v23 = 0;
    v35 = v23;
    DeviceInstanceCsConfigFlags = PnpGetDeviceInstanceCsConfigFlags(&v48.Length, v22, &v39);
    v25 = v39;
    if ( DeviceInstanceCsConfigFlags < 0 )
      v25 = 0;
    if ( (v35 & 0x12) != 0 || (v25 & 2) != 0 )
    {
      inited = -1073741808;
      goto LABEL_70;
    }
    inited = PiInitializeDevice(&v48);
    if ( inited < 0 )
    {
LABEL_70:
      v14 = PiCMReturnBufferResultData(inited, 2 * v8, 0, 0LL, 0, SHIDWORD(v44), a3, a4, a6);
      goto LABEL_71;
    }
    LODWORD(v34) = 4;
    if ( (int)RegRtlQueryValue(KeyHandle, L"Phantom", (_DWORD *)&v34 + 1, &v40, (unsigned int *)&v34) < 0
      || HIDWORD(v34) != 4
      || (v26 = v40, (_DWORD)v34 != 4) )
    {
      v26 = 0;
    }
    if ( v26 )
    {
      *(_OWORD *)Handle = 0LL;
      if ( RtlInitUnicodeStringEx((PUNICODE_STRING)Handle, L"Phantom") >= 0 )
        ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)Handle);
    }
    if ( (v11 & 8) != 0 )
    {
      LODWORD(v34) = 512;
      P = (PVOID)ExAllocatePool2(256LL, 512LL, 879783504LL);
      v27 = P;
      if ( !P )
      {
        inited = -1073741670;
        goto LABEL_69;
      }
      if ( (int)CmGetDeviceRegProp(
                  *(__int64 *)&PiPnpRtlCtx,
                  (__int64)Pool2,
                  (__int64)KeyHandle,
                  5,
                  (__int64)&v34 + 4,
                  (__int64)P,
                  (__int64)&v34,
                  0) < 0
        || HIDWORD(v34) != 1
        || (unsigned int)v34 > 0x200
        || !*v27 )
      {
        goto LABEL_21;
      }
      inited = RtlInitUnicodeStringEx(&v48, Pool2);
      if ( inited < 0 || (LOBYTE(v32) = 1, inited = PpDeviceRegistration((__int64)&v48, v32, 0LL, 0), inited < 0) )
      {
LABEL_69:
        v7 = 0;
        goto LABEL_70;
      }
LABEL_20:
      if ( inited >= 0 )
      {
LABEL_21:
        v7 = 0;
        goto LABEL_22;
      }
      goto LABEL_69;
    }
    goto LABEL_22;
  }
  if ( KeyHandle )
  {
    inited = -1073741771;
    goto LABEL_14;
  }
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v33[0] = 0;
  v7 = 1;
  inited = CmCreateDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)Pool2, 131078, Handle, v33, 0);
  if ( inited < 0 )
  {
LABEL_39:
    v8 = pcchLength;
    goto LABEL_70;
  }
  if ( !v33[0] )
  {
    inited = -1073741771;
    ZwClose(Handle[0]);
    goto LABEL_39;
  }
  v38 = 1;
  inited = RegRtlSetValue(Handle[0], L"Phantom", 4u, &v38, 4u);
  ZwClose(Handle[0]);
  if ( inited < 0 )
    goto LABEL_39;
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v7 = 0;
LABEL_22:
  inited = RtlStringCchLengthW(Pool2, 0xC8uLL, &pcchLength);
  if ( inited < 0 )
  {
    v8 = 0;
    goto LABEL_70;
  }
  v8 = pcchLength + 1;
  if ( (unsigned __int64)a4 - 20 < 2 * (pcchLength + 1) )
    inited = -1073741789;
  if ( inited < 0 )
    goto LABEL_70;
  v14 = PiCMReturnBufferResultData(inited, 2 * v8, 0, Pool2, 2 * v8, SHIDWORD(v44), a3, a4, a6);
LABEL_71:
  DeviceInputData = v14;
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x34706E50u);
  if ( P )
    ExFreePoolWithTag(P, 0x34706E50u);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v7 )
  {
    ExReleaseResourceLite(&PnpRegistryDeviceResource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
LABEL_81:
  v28 = KeGetCurrentThread();
  PreviousMode = v28->PreviousMode;
  if ( pszSrc[1] )
    PiControlFreeUserModeCallersBuffer(v28->PreviousMode, (void *)pszSrc[1]);
  if ( SourceString[1] )
    PiControlFreeUserModeCallersBuffer(PreviousMode, (void *)SourceString[1]);
  if ( v47 )
    PiPnpRtlEndOperation((PVOID **)v47);
  return (unsigned int)DeviceInputData;
}
