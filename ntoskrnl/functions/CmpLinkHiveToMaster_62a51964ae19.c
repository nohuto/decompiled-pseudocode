__int64 __fastcall CmpLinkHiveToMaster(
        __int64 a1,
        void *a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        PRKEVENT Event,
        __int64 a8,
        const UNICODE_STRING *a9,
        __int64 a10,
        char a11,
        _OWORD *a12)
{
  __int64 v13; // r12
  int v15; // eax
  int v16; // eax
  int v17; // edi
  int v18; // eax
  int v19; // eax
  ULONG_PTR *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  UNICODE_STRING *v30; // r15
  __int64 Pool2; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rdi
  __int64 v40; // rdx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  char v50; // [rsp+40h] [rbp-C0h]
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  PCUNICODE_STRING SourceString; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  __int128 v57; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v58[2]; // [rsp+88h] [rbp-78h] BYREF
  PVOID v59; // [rsp+90h] [rbp-70h]
  __int64 v60; // [rsp+98h] [rbp-68h]
  int v61; // [rsp+A0h] [rbp-60h]
  int v62; // [rsp+A4h] [rbp-5Ch]
  __int64 v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+B0h] [rbp-50h]
  _OWORD v65[19]; // [rsp+C0h] [rbp-40h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+1F0h] [rbp+F0h] BYREF

  v13 = a1;
  v55 = a8;
  SourceString = a9;
  v56 = a10;
  Object = a2;
  v52 = a1;
  v58[1] = 0;
  v62 = 0;
  Handle = 0LL;
  v50 = 0;
  v57 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset(v65, 0, 0x128uLL);
  LODWORD(v65[6]) = -1;
  *((_QWORD *)&v65[9] + 1) = &v65[9];
  *(_QWORD *)&v65[9] = &v65[9];
  memset((char *)&v65[13] + 8, 0, 0x50uLL);
  CmpInitializeDelayDerefContext(&v57);
  v15 = *(_DWORD *)(a3 + 160);
  if ( (v15 & 0x20) == 0 )
  {
    v50 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4168) = KeGetCurrentThread();
  }
  v16 = CmpInitializeKcbCache(a3, a5);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = 67;
    *(_QWORD *)&v65[3] = a3;
    if ( a6 )
      v18 = 2115;
    LODWORD(v65[0]) = v18;
    if ( a4 )
      DWORD2(v65[2]) = -1;
    else
      DWORD2(v65[2]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
    v64 = 0LL;
    *(_QWORD *)&v65[5] = SourceString;
    v59 = Object;
    v60 = v52;
    v63 = v55;
    v58[0] = 48;
    v61 = 576;
    v19 = ObOpenObjectByName((__int64)v58, (__int64)CmKeyObjectType, 0, 0LL, 131103, (__int64)v65, (__int64)&Handle);
    v17 = v19;
    if ( v19 < 0 )
    {
      SetFailureLocation((__int64)a12, 0, 30, v19, 32);
      v42 = *(_OWORD *)((char *)&v65[14] + 8);
      a12[22] = *(_OWORD *)((char *)&v65[13] + 8);
      v43 = *(_OWORD *)((char *)&v65[15] + 8);
      a12[23] = v42;
      v44 = *(_OWORD *)((char *)&v65[16] + 8);
      a12[24] = v43;
      v45 = *(_OWORD *)((char *)&v65[17] + 8);
      a12[25] = v44;
      a12[26] = v45;
LABEL_34:
      v13 = v52;
      goto LABEL_35;
    }
    Object = 0LL;
    ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    v20 = (ULONG_PTR *)Object;
    ZwClose(Handle);
    CmpAttachToRegistryProcess(&ApcState);
    if ( !a11 )
      CmpLockRegistry(v22, v21, v23, v24);
    v25 = v20[1];
    SourceString = 0LL;
    CmpConstructNameWithStatus(v25, &SourceString);
    v30 = (UNICODE_STRING *)SourceString;
    if ( !a11 )
      CmpUnlockRegistry(v27, v26, v28, v29);
    if ( v30 && (Pool2 = ExAllocatePool2(256LL, v30->Length, 1885883715LL), (*(_QWORD *)(a3 + 1864) = Pool2) != 0LL) )
    {
      *(_WORD *)(a3 + 1856) = 0;
      *(_WORD *)(a3 + 1858) = v30->Length;
      RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1856), v30);
      *(_BYTE *)(a3 + 141) = 0;
      *(_DWORD *)(a3 + 1676) = _InterlockedIncrement(&CmHiveIdentity);
      if ( !a11 )
        CmpLockRegistry(1LL, v32, v33, v34);
      if ( a6 )
      {
        CmpReferenceKeyControlBlockUnsafe(v20[1]);
        *(_QWORD *)(a3 + 2936) = v20[1];
        if ( Event )
        {
          KeResetEvent(Event);
          CmpRecordUnloadEventForHive(a3, Event);
        }
      }
      if ( CmpTraceRoutine )
      {
        LOBYTE(v32) = 33;
        CmpEtwDumpKcb(v20[1], v32);
      }
      CmpDetachFromRegistryProcess(&ApcState);
      if ( !a11 )
        CmpUnlockRegistry(v36, v35, v37, v38);
      v39 = (_QWORD *)v56;
      if ( v56 )
      {
        CmpReferenceKeyControlBlockUnsafe(v20[1]);
        *v39 = v20[1];
      }
      ObfDereferenceObject(Object);
      if ( a6 )
        *(_BYTE *)(a3 + 2944) = 1;
      v17 = 0;
      v20 = 0LL;
    }
    else
    {
      v17 = -1073741670;
      if ( !a11 )
        CmpLockRegistry(v27, v26, v28, v29);
      CmpRemoveHiveFromNamespace(a3, v20[1], (__int64)&v57);
      CmpDrainDelayDerefContext((_QWORD **)&v57);
      if ( !a11 )
        CmpUnlockRegistry(v47, v46, v48, v49);
      CmpDetachFromRegistryProcess(&ApcState);
      if ( !v30 )
        goto LABEL_32;
    }
    CmpFreeTransientPoolWithTag(v30, 0x624E4D43u);
LABEL_32:
    if ( v20 )
      ObfDereferenceObject(v20);
    goto LABEL_34;
  }
  SetFailureLocation((__int64)a12, 0, 30, v16, 16);
LABEL_35:
  if ( v50 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4168) = 0LL;
  }
  if ( v17 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v13);
  LOBYTE(v40) = a11;
  CmpCleanupParseContext(v65, v40);
  return (unsigned int)v17;
}
