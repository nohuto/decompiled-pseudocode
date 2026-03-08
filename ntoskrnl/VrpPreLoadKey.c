/*
 * XREFs of VrpPreLoadKey @ 0x140735EB4
 * Callers:
 *     VrpRegistryCallback @ 0x1406C2D60 (VrpRegistryCallback.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     EtwActivityIdControl @ 0x140244870 (EtwActivityIdControl.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmLoadDifferencingKey @ 0x1406BC49C (CmLoadDifferencingKey.c)
 *     VrpGetNextToken @ 0x1406C24E8 (VrpGetNextToken.c)
 *     VrpBuildKeyPath @ 0x1406C286C (VrpBuildKeyPath.c)
 *     VrpStripTrailingCharacters @ 0x1406C30B0 (VrpStripTrailingCharacters.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x140733E90 (RtlStringFromGUIDEx.c)
 *     VrpAllocateKeyContext @ 0x140735DF0 (VrpAllocateKeyContext.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140736FA0 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpAddNamespaceNodeToList @ 0x140737050 (VrpAddNamespaceNodeToList.c)
 *     VrpDestroyNamespaceNode @ 0x140737134 (VrpDestroyNamespaceNode.c)
 *     VrpCreateNamespaceNode @ 0x140737348 (VrpCreateNamespaceNode.c)
 *     CmSetCallbackObjectContext @ 0x140738C30 (CmSetCallbackObjectContext.c)
 *     VrpFreeKeyContext @ 0x14078D308 (VrpFreeKeyContext.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x1407F0D20 (ObCloseHandle.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpPreLoadKey(__int64 *a1, __int64 a2)
{
  __int64 v4; // r15
  const UNICODE_STRING *v5; // rcx
  UNICODE_STRING *v6; // r13
  int NamespaceNodePlaceholderKey; // esi
  __int64 v8; // r15
  const wchar_t *v10; // rcx
  unsigned __int16 v11; // ax
  const UNICODE_STRING *v12; // r14
  int v13; // r10d
  unsigned __int16 Length; // bx
  wchar_t *Buffer; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r12
  void *v20; // rcx
  void *v21; // rcx
  void *v22; // rcx
  void *v23; // rcx
  ACCESS_MASK v24; // edx
  NTSTATUS v25; // eax
  PVOID v26; // rsi
  UNICODE_STRING *KeyContext; // rax
  const wchar_t *v28; // rcx
  unsigned __int16 v29; // ax
  wchar_t *v30; // rax
  unsigned __int16 v31; // cx
  char v32; // [rsp+60h] [rbp-278h]
  int v34; // [rsp+70h] [rbp-268h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-260h] BYREF
  PVOID v36; // [rsp+88h] [rbp-250h] BYREF
  PVOID P[2]; // [rsp+90h] [rbp-248h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-238h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-230h] BYREF
  int v40; // [rsp+B8h] [rbp-220h]
  __int64 v41; // [rsp+C0h] [rbp-218h] BYREF
  UNICODE_STRING *v42; // [rsp+C8h] [rbp-210h]
  __int64 v43; // [rsp+D0h] [rbp-208h] BYREF
  HANDLE v44; // [rsp+D8h] [rbp-200h] BYREF
  HANDLE v45; // [rsp+E0h] [rbp-1F8h] BYREF
  HANDLE v46; // [rsp+E8h] [rbp-1F0h] BYREF
  HANDLE v47; // [rsp+F0h] [rbp-1E8h] BYREF
  HANDLE Handle; // [rsp+F8h] [rbp-1E0h] BYREF
  UNICODE_STRING String1; // [rsp+100h] [rbp-1D8h] BYREF
  UNICODE_STRING v50; // [rsp+110h] [rbp-1C8h] BYREF
  HANDLE v51; // [rsp+120h] [rbp-1B8h] BYREF
  PVOID Object; // [rsp+128h] [rbp-1B0h]
  int v53[4]; // [rsp+130h] [rbp-1A8h] BYREF
  __int128 v54; // [rsp+140h] [rbp-198h]
  __int128 v55; // [rsp+150h] [rbp-188h]
  int v56[4]; // [rsp+160h] [rbp-178h] BYREF
  __int128 v57; // [rsp+170h] [rbp-168h]
  __int128 v58; // [rsp+180h] [rbp-158h]
  GUID v59; // [rsp+190h] [rbp-148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60[2]; // [rsp+1A0h] [rbp-138h] BYREF
  __int64 *v61; // [rsp+1C0h] [rbp-118h]
  __int64 v62; // [rsp+1C8h] [rbp-110h]
  const wchar_t *v63; // [rsp+1D0h] [rbp-108h]
  _DWORD v64[2]; // [rsp+1D8h] [rbp-100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+1E0h] [rbp-F8h] BYREF
  _DWORD *v66; // [rsp+200h] [rbp-D8h]
  __int64 v67; // [rsp+208h] [rbp-D0h]
  const wchar_t *v68; // [rsp+210h] [rbp-C8h]
  _DWORD v69[2]; // [rsp+218h] [rbp-C0h] BYREF
  _DWORD *v70; // [rsp+220h] [rbp-B8h]
  __int64 v71; // [rsp+228h] [rbp-B0h]
  wchar_t *v72; // [rsp+230h] [rbp-A8h]
  _DWORD v73[2]; // [rsp+238h] [rbp-A0h] BYREF
  __int64 *v74; // [rsp+240h] [rbp-98h]
  __int64 v75; // [rsp+248h] [rbp-90h]
  char v76; // [rsp+250h] [rbp-88h] BYREF

  v36 = a1;
  v41 = a2;
  *(_OWORD *)P = 0LL;
  *(_QWORD *)&Source.Length = 5111808LL;
  *(_OWORD *)v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  Destination = 0LL;
  *(_OWORD *)v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v50 = 0LL;
  String1 = 0LL;
  v59 = 0LL;
  EtwActivityIdControl(3u, &v59);
  v4 = *a1;
  Source.Buffer = (wchar_t *)&v76;
  v32 = 0;
  v34 = 0;
  v5 = *(const UNICODE_STRING **)(v4 + 72);
  v43 = 0LL;
  v38 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  v51 = 0LL;
  v6 = 0LL;
  v42 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( v5 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v5 + 1, *(PCUNICODE_STRING *)(v4 + 8), (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_7;
    v32 = 1;
  }
  else
  {
    *(_OWORD *)P = *(_OWORD *)*(_QWORD *)(v4 + 8);
  }
  if ( (unsigned int)dword_140C043C0 > 5 )
  {
    v10 = (const wchar_t *)P[1];
    if ( P[1] )
    {
      v11 = (unsigned __int16)P[0];
    }
    else
    {
      v11 = 0;
      v10 = &word_14001ECF4;
    }
    v61 = (__int64 *)v64;
    v62 = 2LL;
    v63 = v10;
    v64[0] = v11;
    v64[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C043C0, (unsigned __int8 *)word_140039F6A, &v59, 0LL, 4u, v60);
  }
  VrpGetNextToken((unsigned __int16 *)P, &v38, (__int64)&String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
  {
LABEL_40:
    NamespaceNodePlaceholderKey = -1073741790;
    goto LABEL_42;
  }
  VrpGetNextToken((unsigned __int16 *)P, &v38, (__int64)&String1);
  if ( RtlEqualUnicodeString(&String1, &VrpAppString, 1u) || RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
  {
    NamespaceNodePlaceholderKey = 0;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v4 + 24) & 0x10) != 0 )
  {
    NamespaceNodePlaceholderKey = 0;
    v8 = a2;
    goto LABEL_9;
  }
  v12 = &VrpMachineString;
  if ( !RtlEqualUnicodeString(&String1, &VrpMachineString, 1u) )
  {
    v12 = &VrpUserString;
    if ( !RtlEqualUnicodeString(&String1, &VrpUserString, 1u) )
      goto LABEL_40;
  }
  v50.Buffer = (wchar_t *)((char *)P[1] + 2 * v38);
  v50.Length = LOWORD(P[0]) - 2 * v38;
  v50.MaximumLength = v50.Length;
  VrpStripTrailingCharacters(&v50.Length);
  v13 = 0;
  Length = v50.Length;
  if ( v50.Length )
  {
    Buffer = v50.Buffer;
    while ( *Buffer != 92 )
    {
      ++v13;
      ++Buffer;
      if ( 2LL * v13 >= (unsigned __int64)v50.Length )
        goto LABEL_53;
    }
    goto LABEL_40;
  }
LABEL_53:
  NamespaceNodePlaceholderKey = RtlStringFromGUIDEx((unsigned int *)a2, (__int64)&Source, 0);
  if ( NamespaceNodePlaceholderKey < 0 )
  {
LABEL_7:
    if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) != 0 || NamespaceNodePlaceholderKey == -1073740541 )
    {
      v8 = a2;
      goto LABEL_9;
    }
    goto LABEL_42;
  }
  ++Source.Buffer;
  Source.Length -= 4;
  Source.MaximumLength -= 4;
  Destination.MaximumLength = Source.Length + 40 + v12->Length + Length;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, Destination.MaximumLength, 1734693462LL);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeStringToString(&Destination, &VrpRootHivePath);
    RtlAppendUnicodeToString(&Destination, L"\\Silo_");
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, v12);
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, &v50);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v17 = KeAbPreAcquire(a2 + 16, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 16), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a2 + 16), v17, a2 + 16);
    if ( v18 )
      *(_BYTE *)(v18 + 18) = 1;
    v34 = 1;
    v40 = 1;
    NamespaceNodePlaceholderKey = VrpCreateNamespaceNode(a2, P, 0LL, &Destination, 0x80000000, -1, &v43);
    if ( NamespaceNodePlaceholderKey >= 0 )
    {
      v19 = v43;
      NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList(a2, v43);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v19);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          v53[0] = 48;
          *(_QWORD *)&v53[2] = 0LL;
          DWORD2(v54) = 576;
          *(_QWORD *)&v54 = *(_QWORD *)(v4 + 16);
          v55 = 0LL;
          v56[0] = 48;
          *(_QWORD *)&v56[2] = 0LL;
          DWORD2(v57) = 576;
          *(_QWORD *)&v57 = &Destination;
          v58 = 0LL;
          v20 = *(void **)(v4 + 32);
          if ( !v20
            || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                v20,
                                                0x200u,
                                                0LL,
                                                0,
                                                (POBJECT_TYPE)CmKeyObjectType,
                                                0,
                                                &v44),
                NamespaceNodePlaceholderKey >= 0) )
          {
            v21 = *(void **)(v4 + 40);
            if ( !v21
              || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                  v21,
                                                  0x200u,
                                                  0LL,
                                                  2u,
                                                  (POBJECT_TYPE)ExEventObjectType,
                                                  0,
                                                  &v45),
                  NamespaceNodePlaceholderKey >= 0) )
            {
              v22 = (void *)*((_QWORD *)v36 + 1);
              if ( !v22
                || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                    v22,
                                                    0x200u,
                                                    0LL,
                                                    0,
                                                    (POBJECT_TYPE)CmKeyObjectType,
                                                    0,
                                                    &v46),
                    NamespaceNodePlaceholderKey >= 0) )
              {
                if ( *(_QWORD *)(v4 + 80) != 2LL
                  || (v23 = *(void **)(v4 + 88)) == 0LL
                  || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                      v23,
                                                      0x200u,
                                                      0LL,
                                                      0,
                                                      (POBJECT_TYPE)SeTokenObjectType,
                                                      0,
                                                      &v47),
                      NamespaceNodePlaceholderKey >= 0) )
                {
                  NamespaceNodePlaceholderKey = CmLoadDifferencingKey(
                                                  (__int64)v56,
                                                  (__int64)v53,
                                                  *(_DWORD *)(v4 + 24),
                                                  (__int64)v44,
                                                  v45,
                                                  *(_DWORD *)(v4 + 48),
                                                  (HANDLE *)((unsigned __int64)&Handle & -(__int64)(*(_QWORD *)(v4 + 56) != 0LL)),
                                                  0,
                                                  (__int64)v46,
                                                  *((_BYTE *)v36 + 16),
                                                  v47,
                                                  0);
                  if ( NamespaceNodePlaceholderKey >= 0 )
                  {
                    if ( *(_QWORD *)(v4 + 56) )
                    {
                      if ( Handle )
                      {
                        v24 = *(_DWORD *)(v4 + 48);
                        v36 = 0LL;
                        v25 = ObReferenceObjectByHandle(Handle, v24, (POBJECT_TYPE)CmKeyObjectType, 0, &v36, 0LL);
                        v26 = v36;
                        Object = v36;
                        if ( v25 >= 0 )
                        {
                          KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext((PVOID)a2);
                          v6 = KeyContext;
                          v42 = KeyContext;
                          if ( KeyContext )
                          {
                            if ( (int)VrpBuildKeyPath(0LL, (PCUNICODE_STRING)P, KeyContext + 1) >= 0 )
                            {
                              *(_DWORD *)(&v6[2].MaximumLength + 1) = 0x20000000;
                              if ( CmSetCallbackObjectContext(v26, &VrpCallbackCookie, v6, 0LL) >= 0 )
                              {
                                v6 = 0LL;
                                v42 = 0LL;
                                ObOpenObjectByPointer(
                                  v36,
                                  KeGetCurrentThread()->PreviousMode != 0 ? 64 : 576,
                                  0LL,
                                  *(_DWORD *)(v4 + 48),
                                  (POBJECT_TYPE)CmKeyObjectType,
                                  KeGetCurrentThread()->PreviousMode,
                                  &v51);
                              }
                            }
                          }
                        }
                      }
                      **(_QWORD **)(v4 + 56) = v51;
                    }
                    NamespaceNodePlaceholderKey = -1073740541;
                    if ( (unsigned int)dword_140C043C0 > 5 )
                    {
                      v28 = (const wchar_t *)P[1];
                      if ( P[1] )
                      {
                        v29 = (unsigned __int16)P[0];
                      }
                      else
                      {
                        v29 = 0;
                        v28 = &word_14001ECF4;
                      }
                      v66 = v69;
                      v67 = 2LL;
                      v68 = v28;
                      v69[0] = v29;
                      v69[1] = 0;
                      v30 = Destination.Buffer;
                      if ( Destination.Buffer )
                      {
                        v31 = Destination.Length;
                      }
                      else
                      {
                        v31 = 0;
                        v30 = (wchar_t *)&word_14001ECF4;
                      }
                      v70 = v73;
                      v71 = 2LL;
                      v72 = v30;
                      v73[0] = v31;
                      v73[1] = 0;
                      LODWORD(v41) = -1073740541;
                      v74 = &v41;
                      v75 = 4LL;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_140C043C0,
                        (unsigned __int8 *)byte_14003A1A8,
                        &v59,
                        0LL,
                        7u,
                        &v65);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_7;
  }
  NamespaceNodePlaceholderKey = -1073741670;
LABEL_42:
  v8 = a2;
  if ( v43 )
    VrpDestroyNamespaceNode(a2, v43);
LABEL_9:
  if ( v34 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v8 + 16));
    KeAbPostRelease(v8 + 16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) == 0
    && NamespaceNodePlaceholderKey != -1073740541
    && (unsigned int)dword_140C043C0 > 2 )
  {
    LODWORD(v38) = NamespaceNodePlaceholderKey;
    v61 = &v38;
    v62 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C043C0, (unsigned __int8 *)&byte_14003A267, &v59, 0LL, 3u, v60);
  }
  if ( v6 )
    VrpFreeKeyContext(v6);
  if ( v44 )
    ObCloseHandle(v44, 0);
  if ( v45 )
    ObCloseHandle(v45, 0);
  if ( v46 )
    ObCloseHandle(v46, 0);
  if ( v47 )
    ObCloseHandle(v47, 0);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v32 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}
