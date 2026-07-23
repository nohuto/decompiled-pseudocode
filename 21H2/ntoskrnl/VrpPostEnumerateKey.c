/*
 * XREFs of VrpPostEnumerateKey @ 0x1405D37A4
 * Callers:
 *     VrpRegistryCallback @ 0x1405D3FD0 (VrpRegistryCallback.c)
 * Callees:
 *     ExGetPreviousMode @ 0x14021B500 (ExGetPreviousMode.c)
 *     EtwActivityIdControl @ 0x140272110 (EtwActivityIdControl.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA7C0 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1403FA840 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     VrpFindExactNamespaceNode @ 0x1405D371C (VrpFindExactNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     VrpCleanupBufferParameter @ 0x1405D5748 (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x1405D57FC (VrpOutputBufferParameter.c)
 *     VrpProcessBufferParameter @ 0x1405D5AEC (VrpProcessBufferParameter.c)
 *     VrpUpdateKeyInformation @ 0x1405D5B84 (VrpUpdateKeyInformation.c)
 *     ObOpenObjectByPointer @ 0x14071DC60 (ObOpenObjectByPointer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B51B0 (ExAllocatePool2.c)
 */

__int64 __fastcall VrpPostEnumerateKey(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rcx
  KPROCESSOR_MODE AccessMode; // r13
  NTSTATUS v7; // edi
  __int64 *v8; // rax
  int v9; // ecx
  __int64 v10; // rax
  const UNICODE_STRING *v11; // r15
  __int64 v12; // rcx
  unsigned __int16 *v13; // r14
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  bool v17; // cc
  int v18; // eax
  unsigned __int16 *Pool2; // rax
  int v20; // eax
  wchar_t *v21; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r14
  signed __int64 *v24; // rdi
  __int64 ExactNamespaceNode; // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // eax
  void *v31; // rax
  const void *v32; // r14
  PULONG v33; // r13
  NTSTATUS Key; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // rcx
  PVOID *v39; // rdx
  wchar_t *Buffer; // rcx
  __int64 v41; // rcx
  __int64 v43; // rcx
  int updated; // eax
  int v45; // eax
  KPROCESSOR_MODE v46; // [rsp+40h] [rbp-1F8h]
  const UNICODE_STRING *v47; // [rsp+48h] [rbp-1F0h]
  ULONG ResultLength; // [rsp+58h] [rbp-1E0h] BYREF
  PULONG v50; // [rsp+60h] [rbp-1D8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-1D0h] BYREF
  int v52; // [rsp+70h] [rbp-1C8h] BYREF
  int v53; // [rsp+74h] [rbp-1C4h] BYREF
  NTSTATUS v54; // [rsp+78h] [rbp-1C0h] BYREF
  __int64 v55; // [rsp+80h] [rbp-1B8h]
  HANDLE v56; // [rsp+88h] [rbp-1B0h] BYREF
  PVOID P; // [rsp+90h] [rbp-1A8h]
  PVOID v58; // [rsp+98h] [rbp-1A0h]
  unsigned __int16 *v59; // [rsp+A0h] [rbp-198h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-190h] BYREF
  UNICODE_STRING v61; // [rsp+B8h] [rbp-180h] BYREF
  __int64 v62; // [rsp+D0h] [rbp-168h]
  __int64 v63; // [rsp+D8h] [rbp-160h]
  __int64 v64; // [rsp+E0h] [rbp-158h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-150h] BYREF
  GUID ActivityId; // [rsp+118h] [rbp-120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+130h] [rbp-108h] BYREF
  int *v68; // [rsp+150h] [rbp-E8h]
  __int64 v69; // [rsp+158h] [rbp-E0h]
  _DWORD *v70; // [rsp+160h] [rbp-D8h]
  __int64 v71; // [rsp+168h] [rbp-D0h]
  __int64 v72; // [rsp+170h] [rbp-C8h]
  _DWORD v73[2]; // [rsp+178h] [rbp-C0h] BYREF
  _DWORD *v74; // [rsp+180h] [rbp-B8h]
  __int64 v75; // [rsp+188h] [rbp-B0h]
  PVOID v76; // [rsp+190h] [rbp-A8h]
  _DWORD v77[2]; // [rsp+198h] [rbp-A0h] BYREF
  NTSTATUS *v78; // [rsp+1A0h] [rbp-98h]
  __int64 v79; // [rsp+1A8h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v80; // [rsp+1B0h] [rbp-88h] BYREF
  int *v81; // [rsp+1D0h] [rbp-68h]
  __int64 v82; // [rsp+1D8h] [rbp-60h]
  _DWORD *v83; // [rsp+1E0h] [rbp-58h]
  __int64 v84; // [rsp+1E8h] [rbp-50h]
  __int64 v85; // [rsp+1F0h] [rbp-48h]
  _DWORD v86[2]; // [rsp+1F8h] [rbp-40h] BYREF

  v55 = a1;
  v62 = a2;
  v61 = 0LL;
  Source = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v58 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v47 = (const UNICODE_STRING *)v3;
  v63 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v64 = v4;
  v59 = 0LL;
  P = 0LL;
  AccessMode = ExGetPreviousMode();
  v46 = AccessMode;
  ResultLength = 0;
  v50 = 0LL;
  v7 = *(_DWORD *)(a1 + 8);
  v56 = 0LL;
  if ( (unsigned int)dword_140C02168 > 5 )
  {
    v52 = *(_DWORD *)(v4 + 12);
    v81 = &v52;
    v82 = 4LL;
    v8 = (__int64 *)(v3 + 16);
    if ( !*(_QWORD *)(v3 + 24) )
      v8 = &EmptyUnicodeString;
    v9 = *(unsigned __int16 *)v8;
    v10 = v8[1];
    v83 = v86;
    v84 = 2LL;
    v85 = v10;
    v86[0] = v9;
    v86[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02168,
      (unsigned __int8 *)byte_14002411D,
      &ActivityId,
      0LL,
      5u,
      &v80);
  }
  if ( v7 < 0 && v7 != -1073741789 && v7 != -2147483643 )
  {
    v11 = (const UNICODE_STRING *)v3;
LABEL_52:
    v23 = a2;
    goto LABEL_53;
  }
  LOBYTE(v5) = AccessMode;
  v7 = VrpProcessBufferParameter(v5, *(_QWORD *)(v4 + 16), *(unsigned int *)(v4 + 24), &v59);
  if ( v7 < 0 )
    goto LABEL_51;
  v13 = v59;
  LOBYTE(v12) = AccessMode;
  v7 = VrpOutputBufferParameter(v12, v59, *(unsigned int *)(v4 + 24), v4 + 16);
  if ( v7 < 0 )
    goto LABEL_51;
  LOBYTE(v14) = AccessMode;
  v7 = VrpProcessBufferParameter(v14, *(_QWORD *)(v4 + 32), 4LL, &v50);
  if ( v7 < 0 )
    goto LABEL_51;
  LOBYTE(v15) = AccessMode;
  v7 = VrpOutputBufferParameter(v15, v50, 4LL, v4 + 32);
  if ( v7 < 0 )
    goto LABEL_51;
  if ( AccessMode == 1 && *(int *)(v55 + 8) >= 0 )
  {
    v16 = *(_DWORD *)(v4 + 12);
    if ( !v16 )
    {
      v17 = *((_DWORD *)v13 + 3) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 16);
      goto LABEL_19;
    }
    if ( v16 == 1 )
    {
      v17 = *((_DWORD *)v13 + 5) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 24);
LABEL_19:
      if ( v17 )
        goto LABEL_20;
LABEL_51:
      v11 = v47;
      goto LABEL_52;
    }
  }
LABEL_20:
  v18 = *(_DWORD *)(v55 + 8);
  if ( v18 == -1073741789 || v18 == -2147483643 || *(_DWORD *)(v4 + 12) == 2 )
  {
    v7 = ObOpenObjectByPointer(
           *(PVOID *)v4,
           0x240u,
           0LL,
           0xF003Fu,
           (POBJECT_TYPE)CmKeyObjectType,
           AccessMode,
           &KeyHandle);
    if ( v7 < 0 )
      goto LABEL_51;
    v7 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
      goto LABEL_51;
    Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, ResultLength, 1734693462LL);
    v13 = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741670;
      goto LABEL_51;
    }
    v58 = Pool2;
    v7 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, Pool2, ResultLength, &ResultLength);
    if ( v7 < 0 )
      goto LABEL_51;
  }
  v20 = *(_DWORD *)(v4 + 12);
  if ( !v20 || v58 )
  {
    Source.MaximumLength = v13[6];
    Source.Length = Source.MaximumLength;
    v21 = v13 + 8;
  }
  else
  {
    if ( v20 != 1 )
    {
      v7 = -1073741811;
      goto LABEL_51;
    }
    Source.MaximumLength = v13[10];
    Source.Length = Source.MaximumLength;
    v21 = v13 + 12;
  }
  Source.Buffer = v21;
  v7 = VrpBuildKeyPath(v47 + 1, &Source, &v61);
  if ( v7 < 0 )
    goto LABEL_51;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v23 = a2;
  v24 = (signed __int64 *)(a2 + 16);
  ExAcquirePushLockSharedEx(a2 + 16, 0LL);
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, (int)&v61, 0);
  if ( !ExactNamespaceNode
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(ExactNamespaceNode + 24),
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&v56, 0xF003Fu, &ObjectAttributes) < 0) )
  {
    v7 = 0;
    v11 = v47;
    v26 = 1;
    goto LABEL_54;
  }
  if ( _InterlockedCompareExchange64(v24, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v24);
  KeAbPostRelease((ULONG_PTR)v24);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v27, v28, v29);
  v30 = *(_DWORD *)(v4 + 24);
  if ( v30 )
  {
    v31 = (void *)ExAllocatePool2(256LL, v30, 1734693462LL);
    P = v31;
    if ( !v31 )
    {
      v7 = -1073741670;
      v11 = v47;
LABEL_53:
      v26 = 0;
      goto LABEL_54;
    }
  }
  else
  {
    v31 = 0LL;
  }
  v32 = v31;
  v33 = v50;
  Key = ZwQueryKey(v56, *(KEY_INFORMATION_CLASS *)(v4 + 12), v31, *(_DWORD *)(v4 + 24), v50);
  v7 = Key;
  if ( Key == -1073741789 )
  {
    v32 = 0LL;
  }
  else if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
  {
    v7 = 0;
LABEL_50:
    AccessMode = v46;
    goto LABEL_51;
  }
  v43 = *(unsigned int *)(v4 + 12);
  if ( (_DWORD)v43 != 2 )
  {
    updated = VrpUpdateKeyInformation(v43, v32, *(unsigned int *)(v4 + 24), v33, &v61, 0);
    v7 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_50;
  }
  if ( v7 != -2147483643 && v7 != -1073741789 )
    memmove(*(void **)(v4 + 16), v32, *(unsigned int *)(v4 + 24));
  AccessMode = v46;
  LOBYTE(v43) = v46;
  v45 = VrpOutputBufferParameter(v43, *(_QWORD *)(v4 + 32), 4LL, &v50);
  v11 = v47;
  v23 = a2;
  if ( v45 >= 0 )
  {
    *(_DWORD *)(v55 + 24) = v7;
    v7 = -1073740541;
  }
  else
  {
    v7 = v45;
  }
  v26 = 0;
LABEL_54:
  if ( v26 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v23 + 16));
    KeAbPostRelease(v23 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v35, v36, v37);
  }
  if ( v7 < 0 && (unsigned int)dword_140C02168 > 2 )
  {
    v53 = *(_DWORD *)(v4 + 12);
    v68 = &v53;
    v69 = 4LL;
    v38 = (__int64 *)&v11[1];
    if ( !v11[1].Buffer )
      v38 = &EmptyUnicodeString;
    v70 = v73;
    v71 = 2LL;
    v72 = v38[1];
    v73[0] = *(unsigned __int16 *)v38;
    v73[1] = 0;
    v39 = (PVOID *)&v61;
    if ( !v61.Buffer )
      v39 = (PVOID *)&EmptyUnicodeString;
    v74 = v77;
    v75 = 2LL;
    v76 = v39[1];
    v77[0] = *(unsigned __int16 *)v39;
    v77[1] = 0;
    v54 = v7;
    v78 = &v54;
    v79 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02168,
      (unsigned __int8 *)&dword_1400241D4,
      &ActivityId,
      0LL,
      8u,
      &v67);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v56 )
    ZwClose(v56);
  if ( P )
    ExFreePoolWithTag(P, 0x67655256u);
  if ( v58 )
    ExFreePoolWithTag(v58, 0x67655256u);
  Buffer = v61.Buffer;
  if ( v61.Buffer )
    ExFreePoolWithTag(v61.Buffer, 0x67655256u);
  LOBYTE(Buffer) = AccessMode;
  VrpCleanupBufferParameter(Buffer, &v59);
  LOBYTE(v41) = AccessMode;
  VrpCleanupBufferParameter(v41, &v50);
  return (unsigned int)v7;
}
