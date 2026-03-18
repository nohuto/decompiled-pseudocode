/*
 * XREFs of VrpPreLoadKey @ 0x14069061C
 * Callers:
 *     VrpRegistryCallback @ 0x140780EF0 (VrpRegistryCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14020A9C4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     EtwActivityIdControl @ 0x1402DFD70 (EtwActivityIdControl.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     VrpCreateNamespaceNodePlaceholderKey @ 0x140691B00 (VrpCreateNamespaceNodePlaceholderKey.c)
 *     VrpAddNamespaceNodeToList @ 0x140691BB0 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140692514 (VrpCreateNamespaceNode.c)
 *     CmSetCallbackObjectContext @ 0x140692F40 (CmSetCallbackObjectContext.c)
 *     VrpAllocateKeyContext @ 0x140693188 (VrpAllocateKeyContext.c)
 *     VrpFreeKeyContext @ 0x1406C29BC (VrpFreeKeyContext.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     RtlStringFromGUIDEx @ 0x1407454A8 (RtlStringFromGUIDEx.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     VrpGetNextToken @ 0x14077EBE0 (VrpGetNextToken.c)
 *     VrpStripTrailingCharacters @ 0x14077ECD0 (VrpStripTrailingCharacters.c)
 *     VrpBuildKeyPath @ 0x14077FB68 (VrpBuildKeyPath.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     VrpDestroyNamespaceNode @ 0x1407F6410 (VrpDestroyNamespaceNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VrpPreLoadKey(__int64 *a1, void *a2)
{
  __int64 v4; // r15
  const UNICODE_STRING *v5; // rcx
  UNICODE_STRING *v6; // r13
  int NamespaceNodePlaceholderKey; // esi
  volatile signed __int64 *v8; // r15
  PVOID *v10; // rax
  int v11; // ecx
  PVOID v12; // rax
  const UNICODE_STRING *v13; // rbx
  int v14; // r9d
  wchar_t *Buffer; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v17; // r12
  void *v18; // rcx
  void *v19; // rcx
  void *v20; // rcx
  void *v21; // rcx
  ACCESS_MASK v22; // edx
  NTSTATUS v23; // eax
  PVOID v24; // rsi
  UNICODE_STRING *KeyContext; // rax
  PVOID *v26; // rcx
  UNICODE_STRING *p_Destination; // rcx
  char v28; // [rsp+60h] [rbp-278h]
  int v30; // [rsp+70h] [rbp-268h]
  UNICODE_STRING Destination; // [rsp+78h] [rbp-260h] BYREF
  PVOID v32; // [rsp+88h] [rbp-250h] BYREF
  PVOID P[2]; // [rsp+90h] [rbp-248h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-238h] BYREF
  UNICODE_STRING Source; // [rsp+A8h] [rbp-230h] BYREF
  UNICODE_STRING v36; // [rsp+B8h] [rbp-220h] BYREF
  int v37; // [rsp+C8h] [rbp-210h]
  void *v38; // [rsp+D0h] [rbp-208h] BYREF
  UNICODE_STRING *v39; // [rsp+D8h] [rbp-200h]
  __int64 v40; // [rsp+E0h] [rbp-1F8h] BYREF
  HANDLE v41; // [rsp+E8h] [rbp-1F0h] BYREF
  HANDLE v42; // [rsp+F0h] [rbp-1E8h] BYREF
  HANDLE v43; // [rsp+F8h] [rbp-1E0h] BYREF
  HANDLE v44; // [rsp+100h] [rbp-1D8h] BYREF
  HANDLE Handle; // [rsp+108h] [rbp-1D0h] BYREF
  UNICODE_STRING String1; // [rsp+110h] [rbp-1C8h] BYREF
  HANDLE v47; // [rsp+120h] [rbp-1B8h] BYREF
  PVOID Object; // [rsp+128h] [rbp-1B0h]
  int v49[4]; // [rsp+130h] [rbp-1A8h] BYREF
  __int128 v50; // [rsp+140h] [rbp-198h]
  __int128 v51; // [rsp+150h] [rbp-188h]
  int v52[4]; // [rsp+160h] [rbp-178h] BYREF
  __int128 v53; // [rsp+170h] [rbp-168h]
  __int128 v54; // [rsp+180h] [rbp-158h]
  GUID v55; // [rsp+190h] [rbp-148h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56[2]; // [rsp+1A0h] [rbp-138h] BYREF
  __int64 *v57; // [rsp+1C0h] [rbp-118h]
  __int64 v58; // [rsp+1C8h] [rbp-110h]
  PVOID v59; // [rsp+1D0h] [rbp-108h]
  _DWORD v60[2]; // [rsp+1D8h] [rbp-100h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+1E0h] [rbp-F8h] BYREF
  _DWORD *v62; // [rsp+200h] [rbp-D8h]
  __int64 v63; // [rsp+208h] [rbp-D0h]
  PVOID v64; // [rsp+210h] [rbp-C8h]
  _DWORD v65[2]; // [rsp+218h] [rbp-C0h] BYREF
  _DWORD *v66; // [rsp+220h] [rbp-B8h]
  __int64 v67; // [rsp+228h] [rbp-B0h]
  wchar_t *v68; // [rsp+230h] [rbp-A8h]
  _DWORD v69[2]; // [rsp+238h] [rbp-A0h] BYREF
  void **v70; // [rsp+240h] [rbp-98h]
  __int64 v71; // [rsp+248h] [rbp-90h]
  char v72; // [rsp+250h] [rbp-88h] BYREF

  v32 = a1;
  v38 = a2;
  *(_OWORD *)P = 0LL;
  *(_QWORD *)&Source.Length = 5111808LL;
  *(_OWORD *)v49 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  Destination = 0LL;
  *(_OWORD *)v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v36 = 0LL;
  String1 = 0LL;
  v55 = 0LL;
  EtwActivityIdControl(3u, &v55);
  v4 = *a1;
  Source.Buffer = (wchar_t *)&v72;
  v28 = 0;
  v30 = 0;
  v5 = *(const UNICODE_STRING **)(v4 + 72);
  v40 = 0LL;
  v34 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  Handle = 0LL;
  Object = 0LL;
  v47 = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  if ( v5 )
  {
    NamespaceNodePlaceholderKey = VrpBuildKeyPath(v5 + 1, *(PCUNICODE_STRING *)(v4 + 8), (PUNICODE_STRING)P);
    if ( NamespaceNodePlaceholderKey < 0 )
      goto LABEL_7;
    v28 = 1;
  }
  else
  {
    *(_OWORD *)P = *(_OWORD *)*(_QWORD *)(v4 + 8);
  }
  if ( (unsigned int)dword_140C038A0 > 5 )
  {
    v10 = P;
    if ( !P[1] )
      v10 = (PVOID *)&EmptyUnicodeString;
    v11 = *(unsigned __int16 *)v10;
    v12 = v10[1];
    v57 = (__int64 *)v60;
    v58 = 2LL;
    v59 = v12;
    v60[0] = v11;
    v60[1] = 0;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C038A0, (unsigned __int8 *)byte_14002A620, &v55, 0LL, 4u, v56);
  }
  VrpGetNextToken(P, &v34, &String1);
  if ( !RtlEqualUnicodeString(&String1, &VrpRegistryString, 1u) )
  {
LABEL_39:
    NamespaceNodePlaceholderKey = -1073741790;
    goto LABEL_41;
  }
  VrpGetNextToken(P, &v34, &String1);
  if ( RtlEqualUnicodeString(&String1, &VrpAppString, 1u) || RtlEqualUnicodeString(&String1, &VrpWcString, 1u) )
  {
    NamespaceNodePlaceholderKey = 0;
    goto LABEL_7;
  }
  if ( (*(_DWORD *)(v4 + 24) & 0x10) != 0 )
  {
    NamespaceNodePlaceholderKey = 0;
    v8 = (volatile signed __int64 *)a2;
    goto LABEL_9;
  }
  v13 = &VrpMachineString;
  if ( !RtlEqualUnicodeString(&String1, &VrpMachineString, 1u) )
  {
    v13 = &VrpUserString;
    if ( !RtlEqualUnicodeString(&String1, &VrpUserString, 1u) )
      goto LABEL_39;
  }
  v36.Buffer = (wchar_t *)((char *)P[1] + 2 * v34);
  v36.Length = LOWORD(P[0]) - 2 * v34;
  v36.MaximumLength = v36.Length;
  VrpStripTrailingCharacters(&v36);
  v14 = 0;
  if ( v36.Length )
  {
    Buffer = v36.Buffer;
    while ( *Buffer != 92 )
    {
      ++v14;
      ++Buffer;
      if ( 2LL * v14 >= (unsigned __int64)v36.Length )
        goto LABEL_52;
    }
    goto LABEL_39;
  }
LABEL_52:
  NamespaceNodePlaceholderKey = RtlStringFromGUIDEx(a2, &Source, 0LL);
  if ( NamespaceNodePlaceholderKey < 0 )
  {
LABEL_7:
    if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) != 0 || NamespaceNodePlaceholderKey == -1073740541 )
    {
      v8 = (volatile signed __int64 *)a2;
      goto LABEL_9;
    }
    goto LABEL_41;
  }
  ++Source.Buffer;
  Source.Length -= 4;
  Source.MaximumLength -= 4;
  Destination.MaximumLength = v36.Length + v13->Length + Source.Length + 40;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Destination.MaximumLength, 0x67655256u);
  if ( Destination.Buffer )
  {
    RtlAppendUnicodeStringToString(&Destination, &VrpRootHivePath);
    RtlAppendUnicodeToString(&Destination, L"\\Silo_");
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, v13);
    RtlAppendUnicodeToString(&Destination, L"_");
    RtlAppendUnicodeStringToString(&Destination, &v36);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)a2 + 16, 0LL);
    v30 = 1;
    v37 = 1;
    NamespaceNodePlaceholderKey = VrpCreateNamespaceNode(a2, P, 0LL, &Destination, 0x80000000, -1, &v40);
    if ( NamespaceNodePlaceholderKey >= 0 )
    {
      v17 = v40;
      NamespaceNodePlaceholderKey = VrpAddNamespaceNodeToList(a2, v40);
      if ( NamespaceNodePlaceholderKey >= 0 )
      {
        NamespaceNodePlaceholderKey = VrpCreateNamespaceNodePlaceholderKey(v17);
        if ( NamespaceNodePlaceholderKey >= 0 )
        {
          v49[0] = 48;
          *(_QWORD *)&v49[2] = 0LL;
          DWORD2(v50) = 576;
          *(_QWORD *)&v50 = *(_QWORD *)(v4 + 16);
          v51 = 0LL;
          v52[0] = 48;
          *(_QWORD *)&v52[2] = 0LL;
          DWORD2(v53) = 576;
          *(_QWORD *)&v53 = &Destination;
          v54 = 0LL;
          v18 = *(void **)(v4 + 32);
          if ( !v18
            || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                v18,
                                                0x200u,
                                                0LL,
                                                0,
                                                (POBJECT_TYPE)CmKeyObjectType,
                                                0,
                                                &v41),
                NamespaceNodePlaceholderKey >= 0) )
          {
            v19 = *(void **)(v4 + 40);
            if ( !v19
              || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                  v19,
                                                  0x200u,
                                                  0LL,
                                                  2u,
                                                  (POBJECT_TYPE)ExEventObjectType,
                                                  0,
                                                  &v42),
                  NamespaceNodePlaceholderKey >= 0) )
            {
              v20 = (void *)*((_QWORD *)v32 + 1);
              if ( !v20
                || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                    v20,
                                                    0x200u,
                                                    0LL,
                                                    0,
                                                    (POBJECT_TYPE)CmKeyObjectType,
                                                    0,
                                                    &v43),
                    NamespaceNodePlaceholderKey >= 0) )
              {
                if ( *(_QWORD *)(v4 + 80) != 2LL
                  || (v21 = *(void **)(v4 + 88)) == 0LL
                  || (NamespaceNodePlaceholderKey = ObOpenObjectByPointer(
                                                      v21,
                                                      0x200u,
                                                      0LL,
                                                      0,
                                                      (POBJECT_TYPE)SeTokenObjectType,
                                                      0,
                                                      &v44),
                      NamespaceNodePlaceholderKey >= 0) )
                {
                  NamespaceNodePlaceholderKey = CmLoadDifferencingKey(
                                                  (__int64)v52,
                                                  (__int64)v49,
                                                  *(_DWORD *)(v4 + 24),
                                                  (__int64)v41,
                                                  v42,
                                                  *(_DWORD *)(v4 + 48),
                                                  (HANDLE *)((unsigned __int64)&Handle & -(__int64)(*(_QWORD *)(v4 + 56) != 0LL)),
                                                  0,
                                                  (__int64)v43,
                                                  *((_BYTE *)v32 + 16),
                                                  v44,
                                                  0);
                  if ( NamespaceNodePlaceholderKey >= 0 )
                  {
                    if ( *(_QWORD *)(v4 + 56) )
                    {
                      if ( Handle )
                      {
                        v22 = *(_DWORD *)(v4 + 48);
                        v32 = 0LL;
                        v23 = ObReferenceObjectByHandle(Handle, v22, (POBJECT_TYPE)CmKeyObjectType, 0, &v32, 0LL);
                        v24 = v32;
                        Object = v32;
                        if ( v23 >= 0 )
                        {
                          KeyContext = (UNICODE_STRING *)VrpAllocateKeyContext(a2);
                          v6 = KeyContext;
                          v39 = KeyContext;
                          if ( KeyContext )
                          {
                            if ( (int)VrpBuildKeyPath(0LL, (PCUNICODE_STRING)P, KeyContext + 1) >= 0 )
                            {
                              *(_DWORD *)(&v6[2].MaximumLength + 1) = 0x20000000;
                              if ( CmSetCallbackObjectContext(v24, &VrpCallbackCookie, v6, 0LL) >= 0 )
                              {
                                v6 = 0LL;
                                v39 = 0LL;
                                ObOpenObjectByPointer(
                                  v32,
                                  KeGetCurrentThread()->PreviousMode != 0 ? 64 : 576,
                                  0LL,
                                  *(_DWORD *)(v4 + 48),
                                  (POBJECT_TYPE)CmKeyObjectType,
                                  KeGetCurrentThread()->PreviousMode,
                                  &v47);
                              }
                            }
                          }
                        }
                      }
                      **(_QWORD **)(v4 + 56) = v47;
                    }
                    NamespaceNodePlaceholderKey = -1073740541;
                    if ( (unsigned int)dword_140C038A0 > 5 )
                    {
                      v26 = P;
                      if ( !P[1] )
                        v26 = (PVOID *)&EmptyUnicodeString;
                      v62 = v65;
                      v63 = 2LL;
                      v64 = v26[1];
                      v65[0] = *(unsigned __int16 *)v26;
                      v65[1] = 0;
                      p_Destination = &Destination;
                      if ( !Destination.Buffer )
                        p_Destination = (UNICODE_STRING *)&EmptyUnicodeString;
                      v66 = v69;
                      v67 = 2LL;
                      v68 = p_Destination->Buffer;
                      v69[0] = p_Destination->Length;
                      v69[1] = 0;
                      LODWORD(v38) = -1073740541;
                      v70 = &v38;
                      v71 = 4LL;
                      tlgWriteTransfer_EtwWriteTransfer(
                        (__int64)&dword_140C038A0,
                        (unsigned __int8 *)word_14002A9AA,
                        &v55,
                        0LL,
                        7u,
                        &v61);
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
LABEL_41:
  v8 = (volatile signed __int64 *)a2;
  if ( v40 )
    VrpDestroyNamespaceNode(a2, v40);
LABEL_9:
  if ( v30 )
  {
    if ( (_InterlockedExchangeAdd64(v8 + 2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8 + 2);
    KeAbPostRelease((ULONG_PTR)(v8 + 2));
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( ((NamespaceNodePlaceholderKey + 0x80000000) & 0x80000000) == 0
    && NamespaceNodePlaceholderKey != -1073740541
    && (unsigned int)dword_140C038A0 > 2 )
  {
    LODWORD(v34) = NamespaceNodePlaceholderKey;
    v57 = &v34;
    v58 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C038A0, (unsigned __int8 *)byte_14002A789, &v55, 0LL, 3u, v56);
  }
  if ( v6 )
    VrpFreeKeyContext(v6);
  if ( v41 )
    ObCloseHandle(v41, 0);
  if ( v42 )
    ObCloseHandle(v42, 0);
  if ( v43 )
    ObCloseHandle(v43, 0);
  if ( v44 )
    ObCloseHandle(v44, 0);
  if ( Handle )
    ObCloseHandle(Handle, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v28 == 1 )
    ExFreePoolWithTag(P[1], 0x67655256u);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0x67655256u);
  return (unsigned int)NamespaceNodePlaceholderKey;
}
