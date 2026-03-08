/*
 * XREFs of VrpPostEnumerateKey @ 0x140736428
 * Callers:
 *     VrpRegistryCallback @ 0x1406C2D60 (VrpRegistryCallback.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwActivityIdControl @ 0x140244870 (EtwActivityIdControl.c)
 *     ExGetPreviousMode @ 0x1402449F0 (ExGetPreviousMode.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwOpenKey @ 0x140412550 (ZwOpenKey.c)
 *     ZwQueryKey @ 0x1404125D0 (ZwQueryKey.c)
 *     ZwEnumerateKey @ 0x140412950 (ZwEnumerateKey.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     VrpCleanupBufferParameter @ 0x1406C16C4 (VrpCleanupBufferParameter.c)
 *     VrpOutputBufferParameter @ 0x1406C16FC (VrpOutputBufferParameter.c)
 *     VrpBuildKeyPath @ 0x1406C286C (VrpBuildKeyPath.c)
 *     VrpProcessBufferParameter @ 0x1407367D8 (VrpProcessBufferParameter.c)
 *     VrpFindExactNamespaceNode @ 0x140737324 (VrpFindExactNamespaceNode.c)
 *     VrpUpdateKeyInformation @ 0x140791490 (VrpUpdateKeyInformation.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPostEnumerateKey(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rcx
  KPROCESSOR_MODE AccessMode; // r13
  int v7; // edi
  char *v8; // r14
  __int64 v9; // rcx
  int v10; // eax
  bool v11; // cc
  int v12; // eax
  char *v13; // r15
  int v14; // eax
  wchar_t *v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v17; // rdi
  __int64 v18; // r15
  __int64 ExactNamespaceNode; // rax
  int v20; // eax
  __int64 *v21; // r12
  __int64 v22; // rcx
  ULONG_PTR v23; // r15
  __int64 *v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  char *Pool2; // rax
  unsigned int v29; // eax
  void *v30; // rax
  const void *v31; // r15
  PULONG v32; // r13
  NTSTATUS Key; // eax
  __int64 v34; // rcx
  int updated; // eax
  int v36; // eax
  const wchar_t *v37; // rcx
  unsigned __int16 v38; // ax
  char v39; // [rsp+40h] [rbp-198h]
  __int64 v40; // [rsp+48h] [rbp-190h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-188h] BYREF
  int v42; // [rsp+54h] [rbp-184h] BYREF
  PULONG v43; // [rsp+58h] [rbp-180h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-178h] BYREF
  __int64 v45; // [rsp+70h] [rbp-168h]
  const UNICODE_STRING *v46; // [rsp+78h] [rbp-160h]
  HANDLE v47; // [rsp+80h] [rbp-158h] BYREF
  PVOID v48; // [rsp+88h] [rbp-150h]
  PVOID v49; // [rsp+90h] [rbp-148h]
  char *v50; // [rsp+98h] [rbp-140h] BYREF
  UNICODE_STRING Source; // [rsp+A0h] [rbp-138h] BYREF
  PVOID P[2]; // [rsp+B0h] [rbp-128h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-118h]
  __int64 v54; // [rsp+C8h] [rbp-110h]
  __int64 v55; // [rsp+D0h] [rbp-108h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-100h] BYREF
  GUID ActivityId; // [rsp+108h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58[2]; // [rsp+120h] [rbp-B8h] BYREF
  int *v59; // [rsp+140h] [rbp-98h]
  __int64 v60; // [rsp+148h] [rbp-90h]
  int *v61; // [rsp+150h] [rbp-88h]
  __int64 v62; // [rsp+158h] [rbp-80h]
  __int64 v63; // [rsp+160h] [rbp-78h]
  int v64; // [rsp+168h] [rbp-70h] BYREF
  int v65; // [rsp+16Ch] [rbp-6Ch]
  _DWORD *v66; // [rsp+170h] [rbp-68h]
  __int64 v67; // [rsp+178h] [rbp-60h]
  const wchar_t *v68; // [rsp+180h] [rbp-58h]
  _DWORD v69[2]; // [rsp+188h] [rbp-50h] BYREF
  __int64 *v70; // [rsp+190h] [rbp-48h]
  __int64 v71; // [rsp+198h] [rbp-40h]

  v40 = a2;
  v45 = a1;
  v53 = a2;
  *(_OWORD *)P = 0LL;
  Source = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  v49 = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  v46 = (const UNICODE_STRING *)v3;
  v54 = v3;
  KeyHandle = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v55 = v4;
  v50 = 0LL;
  v48 = 0LL;
  AccessMode = ExGetPreviousMode();
  v39 = AccessMode;
  ResultLength = 0;
  v43 = 0LL;
  v7 = *(_DWORD *)(a1 + 8);
  v47 = 0LL;
  if ( (unsigned int)dword_140C043C0 > 5 )
  {
    v42 = *(_DWORD *)(v4 + 12);
    v59 = &v42;
    v60 = 4LL;
    v25 = (__int64 *)(v3 + 16);
    if ( !*(_QWORD *)(v3 + 24) )
      v25 = &EmptyUnicodeString;
    v26 = *(unsigned __int16 *)v25;
    v27 = v25[1];
    v61 = &v64;
    v62 = 2LL;
    v63 = v27;
    v64 = v26;
    v65 = 0;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C043C0,
      (unsigned __int8 *)byte_14003A090,
      &ActivityId,
      0LL,
      5u,
      v58);
  }
  if ( v7 < 0 && v7 != -1073741789 && v7 != -2147483643 )
    goto LABEL_75;
  LOBYTE(v5) = AccessMode;
  v7 = VrpProcessBufferParameter(v5, *(_QWORD *)(v4 + 16), *(unsigned int *)(v4 + 24), &v50);
  if ( v7 < 0 )
    goto LABEL_75;
  v8 = v50;
  v7 = VrpOutputBufferParameter(AccessMode, v50, *(_DWORD *)(v4 + 24), (const void **)(v4 + 16));
  if ( v7 < 0 )
    goto LABEL_75;
  LOBYTE(v9) = AccessMode;
  v7 = VrpProcessBufferParameter(v9, *(_QWORD *)(v4 + 32), 4LL, &v43);
  if ( v7 < 0 )
    goto LABEL_75;
  v7 = VrpOutputBufferParameter(AccessMode, v43, 4u, (const void **)(v4 + 32));
  if ( v7 < 0 )
    goto LABEL_75;
  if ( AccessMode == 1 && *(int *)(v45 + 8) >= 0 )
  {
    v10 = *(_DWORD *)(v4 + 12);
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_12;
      v11 = *((_DWORD *)v8 + 5) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 24);
    }
    else
    {
      v11 = *((_DWORD *)v8 + 3) <= (unsigned int)(*(_DWORD *)(v4 + 24) - 16);
    }
    if ( !v11 )
      goto LABEL_75;
  }
LABEL_12:
  v12 = *(_DWORD *)(v45 + 8);
  if ( v12 == -1073741789 || v12 == -2147483643 || *(_DWORD *)(v4 + 12) == 2 )
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
      goto LABEL_75;
    v7 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, 0LL, 0, &ResultLength);
    if ( (int)(v7 + 0x80000000) >= 0 && v7 != -1073741789 )
      goto LABEL_75;
    Pool2 = (char *)ExAllocatePool2(256LL, ResultLength, 1734693462LL);
    v8 = Pool2;
    if ( !Pool2 )
    {
      v7 = -1073741670;
      goto LABEL_75;
    }
    v13 = Pool2;
    v49 = Pool2;
    v7 = ZwEnumerateKey(KeyHandle, *(_DWORD *)(v4 + 8), KeyBasicInformation, Pool2, ResultLength, &ResultLength);
    if ( v7 < 0 )
      goto LABEL_75;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = *(_DWORD *)(v4 + 12);
  if ( !v14 || v13 )
  {
    Source.MaximumLength = *((_WORD *)v8 + 6);
    Source.Length = Source.MaximumLength;
    v15 = (wchar_t *)(v8 + 16);
  }
  else
  {
    if ( v14 != 1 )
    {
      v7 = -1073741811;
      goto LABEL_75;
    }
    Source.MaximumLength = *((_WORD *)v8 + 10);
    Source.Length = Source.MaximumLength;
    v15 = (wchar_t *)(v8 + 24);
  }
  Source.Buffer = v15;
  v7 = VrpBuildKeyPath(v46 + 1, &Source, (PUNICODE_STRING)P);
  if ( v7 < 0 )
  {
LABEL_75:
    v20 = 0;
    goto LABEL_25;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v17 = (signed __int64 *)(v40 + 16);
  v18 = KeAbPreAcquire(v40 + 16, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v40 + 16), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v17, 0, v18, (__int64)v17);
  if ( v18 )
    *(_BYTE *)(v18 + 18) = 1;
  ExactNamespaceNode = VrpFindExactNamespaceNode(v40, P, 0LL);
  if ( !ExactNamespaceNode
    || (ObjectAttributes.Length = 48,
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.Attributes = 576,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)(ExactNamespaceNode + 24),
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        ZwOpenKey(&v47, 0xF003Fu, &ObjectAttributes) < 0) )
  {
    v7 = 0;
    v20 = 1;
LABEL_25:
    v21 = &EmptyUnicodeString;
    v22 = v40;
    goto LABEL_26;
  }
  if ( _InterlockedCompareExchange64(v17, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v17);
  KeAbPostRelease((ULONG_PTR)v17);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v29 = *(_DWORD *)(v4 + 24);
  if ( v29 )
  {
    v30 = (void *)ExAllocatePool2(256LL, v29, 1734693462LL);
    v48 = v30;
    if ( !v30 )
    {
      v7 = -1073741670;
      goto LABEL_75;
    }
  }
  else
  {
    v30 = 0LL;
  }
  v31 = v30;
  v32 = v43;
  Key = ZwQueryKey(v47, *(KEY_INFORMATION_CLASS *)(v4 + 12), v30, *(_DWORD *)(v4 + 24), v43);
  v7 = Key;
  if ( Key == -1073741789 )
  {
    v31 = 0LL;
  }
  else if ( (int)(Key + 0x80000000) >= 0 && Key != -2147483643 )
  {
    v7 = 0;
LABEL_74:
    AccessMode = v39;
    goto LABEL_75;
  }
  v34 = *(unsigned int *)(v4 + 12);
  if ( (_DWORD)v34 != 2 )
  {
    updated = VrpUpdateKeyInformation(v34, v31, *(unsigned int *)(v4 + 24), v32, P, 0);
    v7 = updated;
    if ( updated < 0 && updated != -2147483643 && updated != -1073741789 )
      goto LABEL_74;
  }
  if ( v7 != -2147483643 && v7 != -1073741789 )
    memmove(*(void **)(v4 + 16), v31, *(unsigned int *)(v4 + 24));
  AccessMode = v39;
  v36 = VrpOutputBufferParameter(v39, *(void **)(v4 + 32), 4u, (const void **)&v43);
  v21 = &EmptyUnicodeString;
  v22 = v40;
  if ( v36 >= 0 )
  {
    *(_DWORD *)(v45 + 24) = v7;
    v7 = -1073740541;
  }
  else
  {
    v7 = v36;
  }
  v20 = 0;
LABEL_26:
  if ( v20 )
  {
    v23 = v22 + 16;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v22 + 16));
    KeAbPostRelease(v23);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v7 < 0 && (unsigned int)dword_140C043C0 > 2 )
  {
    v42 = *(_DWORD *)(v4 + 12);
    v59 = &v42;
    v60 = 4LL;
    if ( v46[1].Buffer )
      v21 = (__int64 *)&v46[1];
    v61 = &v64;
    v62 = 2LL;
    v63 = v21[1];
    v64 = *(unsigned __int16 *)v21;
    v65 = 0;
    v37 = (const wchar_t *)P[1];
    if ( P[1] )
    {
      v38 = (unsigned __int16)P[0];
    }
    else
    {
      v38 = 0;
      v37 = &word_14001ECF4;
    }
    v66 = v69;
    v67 = 2LL;
    v68 = v37;
    v69[0] = v38;
    v69[1] = 0;
    LODWORD(v40) = v7;
    v70 = &v40;
    v71 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140C043C0,
      (unsigned __int8 *)byte_140039FD1,
      &ActivityId,
      0LL,
      8u,
      v58);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v47 )
    ZwClose(v47);
  if ( v48 )
    ExFreePoolWithTag(v48, 0x67655256u);
  if ( v49 )
    ExFreePoolWithTag(v49, 0x67655256u);
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x67655256u);
  VrpCleanupBufferParameter(AccessMode, (PVOID *)&v50);
  VrpCleanupBufferParameter(AccessMode, (PVOID *)&v43);
  return (unsigned int)v7;
}
