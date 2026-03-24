/*
 * XREFs of VrpPostEnumerateKey @ 0x1405D37A4
 * Callers:
 *     VrpRegistryCallback @ 0x1405D3FD0 (VrpRegistryCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ExGetPreviousMode @ 0x1402F62C0 (ExGetPreviousMode.c)
 *     EtwActivityIdControl @ 0x140308D90 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwOpenKey @ 0x1403F9C60 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1403F9CE0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x1403FA060 (ZwEnumerateKey.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     VrpFindExactNamespaceNode @ 0x1405D371C (VrpFindExactNamespaceNode.c)
 *     VrpBuildKeyPath @ 0x1405D5420 (VrpBuildKeyPath.c)
 *     VrpCleanupBufferParameter @ 0x1405D5748 (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x1405D57FC (VrpOutputBufferParameter.c)
 *     VrpProcessBufferParameter @ 0x1405D5AEC (VrpProcessBufferParameter.c)
 *     VrpUpdateKeyInformation @ 0x1405D5B84 (VrpUpdateKeyInformation.c)
 *     ObOpenObjectByPointer @ 0x140653F10 (ObOpenObjectByPointer.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B41B0 (ExAllocatePool2.c)
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
  unsigned int v27; // eax
  void *v28; // rax
  const void *v29; // r14
  PULONG v30; // r13
  NTSTATUS Key; // eax
  __int64 *v32; // rcx
  PVOID *v33; // rdx
  wchar_t *Buffer; // rcx
  __int64 v35; // rcx
  __int64 v37; // rcx
  int updated; // eax
  int v39; // eax
  KPROCESSOR_MODE v40; // [rsp+40h] [rbp-1F8h]
  const UNICODE_STRING *v41; // [rsp+48h] [rbp-1F0h]
  ULONG ResultLength; // [rsp+58h] [rbp-1E0h] BYREF
  PULONG v44; // [rsp+60h] [rbp-1D8h] BYREF
  HANDLE KeyHandle; // [rsp+68h] [rbp-1D0h] BYREF
  int v46; // [rsp+70h] [rbp-1C8h] BYREF
  int v47; // [rsp+74h] [rbp-1C4h] BYREF
  NTSTATUS v48; // [rsp+78h] [rbp-1C0h] BYREF
  __int64 v49; // [rsp+80h] [rbp-1B8h]
  HANDLE v50; // [rsp+88h] [rbp-1B0h] BYREF
  PVOID P; // [rsp+90h] [rbp-1A8h]
  PVOID v52; // [rsp+98h] [rbp-1A0h]
  unsigned __int16 *v53; // [rsp+A0h] [rbp-198h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-190h] BYREF
  UNICODE_STRING v55; // [rsp+B8h] [rbp-180h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-168h]
  __int64 v57; // [rsp+D8h] [rbp-160h]
  __int64 v58; // [rsp+E0h] [rbp-158h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-150h] BYREF
  GUID ActivityId; // [rsp+118h] [rbp-120h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+130h] [rbp-108h] BYREF
  int *v62; // [rsp+150h] [rbp-E8h]
  __int64 v63; // [rsp+158h] [rbp-E0h]
  _DWORD *v64; // [rsp+160h] [rbp-D8h]
  __int64 v65; // [rsp+168h] [rbp-D0h]
  __int64 v66; // [rsp+170h] [rbp-C8h]
  _DWORD v67[2]; // [rsp+178h] [rbp-C0h] BYREF
  _DWORD *v68; // [rsp+180h] [rbp-B8h]
  __int64 v69; // [rsp+188h] [rbp-B0h]
  PVOID v70; // [rsp+190h] [rbp-A8h]
  _DWORD v71[2]; // [rsp+198h] [rbp-A0h] BYREF
  NTSTATUS *v72; // [rsp+1A0h] [rbp-98h]
  __int64 v73; // [rsp+1A8h] [rbp-90h]
  struct _EVENT_DATA_DESCRIPTOR v74; // [rsp+1B0h] [rbp-88h] BYREF
  int *v75; // [rsp+1D0h] [rbp-68h]
  __int64 v76; // [rsp+1D8h] [rbp-60h]
  _DWORD *v77; // [rsp+1E0h] [rbp-58h]
  __int64 v78; // [rsp+1E8h] [rbp-50h]
  __int64 v79; // [rsp+1F0h] [rbp-48h]
  _DWORD v80[2]; // [rsp+1F8h] [rbp-40h] BYREF

  v49 = a1;
  v56 = a2;
  v55 = 0LL;
  Source = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v52 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v41 = (const UNICODE_STRING *)v3;
  v57 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v58 = v4;
  v53 = 0LL;
  P = 0LL;
  AccessMode = ExGetPreviousMode();
  v40 = AccessMode;
  ResultLength = 0;
  v44 = 0LL;
  v7 = *(_DWORD *)(a1 + 8);
  v50 = 0LL;
  if ( (unsigned int)dword_140C02168 > 5 )
  {
    v46 = *(_DWORD *)(v4 + 12);
    v75 = &v46;
    v76 = 4LL;
    v8 = (__int64 *)(v3 + 16);
    if ( !*(_QWORD *)(v3 + 24) )
      v8 = &EmptyUnicodeString;
    v9 = *(unsigned __int16 *)v8;
    v10 = v8[1];
    v77 = v80;
    v78 = 2LL;
    v79 = v10;
    v80[0] = v9;
    v80[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02168,
      (unsigned __int8 *)byte_14002401D,
      &ActivityId,
      0LL,
      5u,
      &v74);
  }
  if ( v7 < 0 && v7 != -1073741789 && v7 != -2147483643 )
  {
    v11 = (const UNICODE_STRING *)v3;
LABEL_52:
    v23 = a2;
    goto LABEL_53;
  }
  LOBYTE(v5) = AccessMode;
  v7 = VrpProcessBufferParameter(v5, *(_QWORD *)(v4 + 16), *(unsigned int *)(v4 + 24), &v53);
  if ( v7 < 0 )
    goto LABEL_51;
  v13 = v53;
  LOBYTE(v12) = AccessMode;
  v7 = VrpOutputBufferParameter(v12, v53, *(unsigned int *)(v4 + 24), v4 + 16);
  if ( v7 < 0 )
    goto LABEL_51;
  LOBYTE(v14) = AccessMode;
  v7 = VrpProcessBufferParameter(v14, *(_QWORD *)(v4 + 32), 4LL, &v44);
  if ( v7 < 0 )
    goto LABEL_51;
  LOBYTE(v15) = AccessMode;
  v7 = VrpOutputBufferParameter(v15, v44, 4LL, v4 + 32);
  if ( v7 < 0 )
    goto LABEL_51;
  if ( AccessMode == 1 && *(int *)(v49 + 8) >= 0 )
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
      v11 = v41;
      goto LABEL_52;
    }
  }
LABEL_20:
  v18 = *(_DWORD *)(v49 + 8);
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
    v52 = Pool2;
    v7 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, Pool2, ResultLength, &ResultLength);
    if ( v7 < 0 )
      goto LABEL_51;
  }
  v20 = *(_DWORD *)(v4 + 12);
  if ( !v20 || v52 )
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
  v7 = VrpBuildKeyPath(v41 + 1, &Source, &v55);
  if ( v7 < 0 )
    goto LABEL_51;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v23 = a2;
  v24 = (signed __int64 *)(a2 + 16);
  ExAcquirePushLockSharedEx(a2 + 16, 0LL);
  ExactNamespaceNode = VrpFindExactNamespaceNode(a2, (int)&v55, 0);
  if ( !ExactNamespaceNode
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(ExactNamespaceNode + 24),
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&v50, 0xF003Fu, &ObjectAttributes) < 0) )
  {
    v7 = 0;
    v11 = v41;
    v26 = 1;
    goto LABEL_54;
  }
  if ( _InterlockedCompareExchange64(v24, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v24);
  KeAbPostRelease((ULONG_PTR)v24);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v27 = *(_DWORD *)(v4 + 24);
  if ( v27 )
  {
    v28 = (void *)ExAllocatePool2(256LL, v27, 1734693462LL);
    P = v28;
    if ( !v28 )
    {
      v7 = -1073741670;
      v11 = v41;
LABEL_53:
      v26 = 0;
      goto LABEL_54;
    }
  }
  else
  {
    v28 = 0LL;
  }
  v29 = v28;
  v30 = v44;
  Key = ZwQueryKey(v50, *(KEY_INFORMATION_CLASS *)(v4 + 12), v28, *(_DWORD *)(v4 + 24), v44);
  v7 = Key;
  if ( Key == -1073741789 )
  {
    v29 = 0LL;
  }
  else if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
  {
    v7 = 0;
LABEL_50:
    AccessMode = v40;
    goto LABEL_51;
  }
  v37 = *(unsigned int *)(v4 + 12);
  if ( (_DWORD)v37 != 2 )
  {
    updated = VrpUpdateKeyInformation(v37, v29, *(unsigned int *)(v4 + 24), v30, &v55, 0);
    v7 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_50;
  }
  if ( v7 != -2147483643 && v7 != -1073741789 )
    memmove(*(void **)(v4 + 16), v29, *(unsigned int *)(v4 + 24));
  AccessMode = v40;
  LOBYTE(v37) = v40;
  v39 = VrpOutputBufferParameter(v37, *(_QWORD *)(v4 + 32), 4LL, &v44);
  v11 = v41;
  v23 = a2;
  if ( v39 >= 0 )
  {
    *(_DWORD *)(v49 + 24) = v7;
    v7 = -1073740541;
  }
  else
  {
    v7 = v39;
  }
  v26 = 0;
LABEL_54:
  if ( v26 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v23 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v23 + 16));
    KeAbPostRelease(v23 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v7 < 0 && (unsigned int)dword_140C02168 > 2 )
  {
    v47 = *(_DWORD *)(v4 + 12);
    v62 = &v47;
    v63 = 4LL;
    v32 = (__int64 *)&v11[1];
    if ( !v11[1].Buffer )
      v32 = &EmptyUnicodeString;
    v64 = v67;
    v65 = 2LL;
    v66 = v32[1];
    v67[0] = *(unsigned __int16 *)v32;
    v67[1] = 0;
    v33 = (PVOID *)&v55;
    if ( !v55.Buffer )
      v33 = (PVOID *)&EmptyUnicodeString;
    v68 = v71;
    v69 = 2LL;
    v70 = v33[1];
    v71[0] = *(unsigned __int16 *)v33;
    v71[1] = 0;
    v48 = v7;
    v72 = &v48;
    v73 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C02168,
      (unsigned __int8 *)&dword_14002413C,
      &ActivityId,
      0LL,
      8u,
      &v61);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v50 )
    ZwClose(v50);
  if ( P )
    ExFreePoolWithTag(P, 0x67655256u);
  if ( v52 )
    ExFreePoolWithTag(v52, 0x67655256u);
  Buffer = v55.Buffer;
  if ( v55.Buffer )
    ExFreePoolWithTag(v55.Buffer, 0x67655256u);
  LOBYTE(Buffer) = AccessMode;
  VrpCleanupBufferParameter(Buffer, &v53);
  LOBYTE(v35) = AccessMode;
  VrpCleanupBufferParameter(v35, &v44);
  return (unsigned int)v7;
}
