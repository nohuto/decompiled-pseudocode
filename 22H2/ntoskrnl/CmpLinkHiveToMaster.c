/*
 * XREFs of CmpLinkHiveToMaster @ 0x14071D600
 * Callers:
 *     CmpLoadKeyCommon @ 0x14036102C (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveVolatile @ 0x14087CFAC (CmpLoadHiveVolatile.c)
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 *     CmpInitializeSystemHive @ 0x140A5AA10 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140A5ABA8 (CmpInitializePreloadedHive.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140206C90 (RtlUnicodeStringCopy.c)
 *     CmpFreeTransientPoolWithTag @ 0x140206F68 (CmpFreeTransientPoolWithTag.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     CmpInitializeDelayDerefContext @ 0x1402D1878 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x1402D1890 (CmpDrainDelayDerefContext.c)
 *     SetFailureLocation @ 0x14031DB78 (SetFailureLocation.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     CmpRemoveHiveFromNamespace @ 0x140360E58 (CmpRemoveHiveFromNamespace.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405EF620 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpConstructName @ 0x1405F2FBC (CmpConstructName.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140643630 (CmpLockRegistry.c)
 *     CmpRecordUnloadEventForHive @ 0x14066D498 (CmpRecordUnloadEventForHive.c)
 *     CmpCleanupParseContext @ 0x1406CE840 (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x1406CEA10 (ObOpenObjectByName.c)
 *     CmpInitializeKcbCache @ 0x140720298 (CmpInitializeKcbCache.c)
 *     CmpEtwDumpKcb @ 0x14086A6C8 (CmpEtwDumpKcb.c)
 *     CmpLogHiveLinkEvent @ 0x14086A9A8 (CmpLogHiveLinkEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpLinkHiveToMaster(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        char a6,
        struct _KEVENT *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        char a11,
        _OWORD *a12)
{
  UNICODE_STRING *v13; // r12
  char v14; // r13
  int v15; // eax
  char v16; // r14
  int v17; // eax
  int v18; // edi
  int v19; // eax
  int v20; // eax
  struct _DMA_ADAPTER *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // r8
  _DWORD *v24; // r9
  PVOID PoolWithTag; // rax
  __int64 v26; // rdx
  struct _KEVENT *v27; // rdi
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  char v37; // [rsp+41h] [rbp-BFh]
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h]
  PRKEVENT Event; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  __int128 v47; // [rsp+88h] [rbp-78h] BYREF
  _DWORD v48[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h]
  __int64 v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+B0h] [rbp-50h]
  int v52; // [rsp+B4h] [rbp-4Ch]
  __int64 v53; // [rsp+B8h] [rbp-48h]
  __int64 v54; // [rsp+C0h] [rbp-40h]
  _OWORD v55[19]; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v56[3]; // [rsp+200h] [rbp+100h] BYREF

  Event = a7;
  v44 = a8;
  v42 = a9;
  v46 = a10;
  v43 = a2;
  v13 = 0LL;
  v41 = a1;
  v48[1] = 0;
  v52 = 0;
  v14 = 0;
  Handle = 0LL;
  v37 = 0;
  v47 = 0LL;
  memset(v56, 0, sizeof(v56));
  memset(v55, 0, 0x128uLL);
  LODWORD(v55[6]) = -1;
  *((_QWORD *)&v55[9] + 1) = &v55[9];
  *(_QWORD *)&v55[9] = &v55[9];
  memset((char *)&v55[13] + 8, 0, 0x50uLL);
  CmpInitializeDelayDerefContext(&v47);
  v15 = *(_DWORD *)(a3 + 160);
  v16 = 1;
  if ( (v15 & 0x20) == 0 )
  {
    v37 = 1;
    *(_DWORD *)(a3 + 160) = v15 | 0x20;
    *(_QWORD *)(a3 + 4208) = KeGetCurrentThread();
  }
  v17 = CmpInitializeKcbCache(a3, a5);
  v18 = v17;
  if ( v17 < 0 )
  {
    SetFailureLocation((__int64)a12, 0, 30, v17, 16);
LABEL_43:
    v16 = 0;
    goto LABEL_29;
  }
  v19 = 67;
  *(_QWORD *)&v55[3] = a3;
  if ( a6 )
    v19 = 2115;
  LODWORD(v55[0]) = v19;
  if ( a4 )
    DWORD2(v55[2]) = -1;
  else
    DWORD2(v55[2]) = *(_DWORD *)(*(_QWORD *)(a3 + 64) + 36LL);
  *(_QWORD *)&v55[5] = v42;
  v49 = v43;
  v50 = v41;
  v53 = v44;
  v54 = 0LL;
  v48[0] = 48;
  v51 = 576;
  v20 = ObOpenObjectByName((__int64)v48, (__int64)CmKeyObjectType, 0, 0LL, 131103, (__int64)v55, (__int64)&Handle);
  v18 = v20;
  if ( v20 < 0 )
  {
    SetFailureLocation((__int64)a12, 0, 30, v20, 32);
    v14 = 0;
    v33 = *(_OWORD *)((char *)&v55[14] + 8);
    a12[22] = *(_OWORD *)((char *)&v55[13] + 8);
    v34 = *(_OWORD *)((char *)&v55[15] + 8);
    a12[23] = v33;
    v35 = *(_OWORD *)((char *)&v55[16] + 8);
    a12[24] = v34;
    v36 = *(_OWORD *)((char *)&v55[17] + 8);
    a12[25] = v35;
    a12[26] = v36;
    goto LABEL_43;
  }
  Object = 0LL;
  ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
  v21 = (struct _DMA_ADAPTER *)Object;
  ZwClose(Handle);
  CmpAttachToRegistryProcess((__int64)v56, v22, v23, v24);
  if ( !a11 )
    CmpLockRegistry();
  v13 = (UNICODE_STRING *)CmpConstructName((__int64)v21->DmaOperations);
  if ( !a11 )
    CmpUnlockRegistry();
  if ( !v13
    || (PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13->Length, 0x70684D43u),
        (*(_QWORD *)(a3 + 1856) = PoolWithTag) == 0LL) )
  {
    v18 = -1073741670;
    goto LABEL_47;
  }
  *(_WORD *)(a3 + 1848) = 0;
  *(_WORD *)(a3 + 1850) = v13->Length;
  RtlUnicodeStringCopy((PUNICODE_STRING)(a3 + 1848), v13);
  *(_BYTE *)(a3 + 141) = 0;
  *(_DWORD *)(a3 + 1668) = _InterlockedIncrement(&CmHiveIdentity);
  if ( !a11 )
    CmpLockRegistry();
  if ( a6 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v21->DmaOperations);
    v27 = Event;
    *(_QWORD *)(a3 + 2928) = v21->DmaOperations;
    if ( v27 )
    {
      KeResetEvent(v27);
      CmpRecordUnloadEventForHive(a3, v27);
    }
  }
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    LOBYTE(v26) = 33;
    CmpEtwDumpKcb(v21->DmaOperations, v26);
  }
  CmpDetachFromRegistryProcess((__int64)v56);
  if ( !a11 )
    CmpUnlockRegistry();
  v28 = (_QWORD *)v46;
  if ( v46 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)v21->DmaOperations);
    *v28 = v21->DmaOperations;
  }
  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
  if ( a6 )
    *(_BYTE *)(a3 + 2936) = 1;
  v14 = 1;
  v16 = 0;
  v18 = 0;
LABEL_29:
  v21 = 0LL;
  if ( v18 >= 0 || !v14 )
    goto LABEL_30;
  CmpAttachToRegistryProcess((__int64)v56, v29, v30, v31);
LABEL_47:
  if ( !a11 )
    CmpLockRegistry();
  CmpRemoveHiveFromNamespace(a3, (__int64)v21->DmaOperations, (__int64)&v47);
  CmpDrainDelayDerefContext((_QWORD **)&v47);
  if ( !a11 )
    CmpUnlockRegistry();
  if ( v16 )
    CmpDetachFromRegistryProcess((__int64)v56);
LABEL_30:
  if ( v13 )
    CmpFreeTransientPoolWithTag(v13, 0x624E4D43u);
  if ( v21 )
    HalPutDmaAdapter(v21);
  if ( v37 )
  {
    *(_DWORD *)(a3 + 160) &= ~0x20u;
    *(_QWORD *)(a3 + 4208) = 0LL;
  }
  if ( v18 >= 0 && (DWORD2(PerfGlobalGroupMask) & 0x1000000) != 0 )
    CmpLogHiveLinkEvent(a3, v41);
  CmpCleanupParseContext((__int64)v55, a11);
  return (unsigned int)v18;
}
