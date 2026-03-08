/*
 * XREFs of ObQueryNameStringMode @ 0x14071EE84
 * Callers:
 *     ObpParseSymbolicLinkEx @ 0x14069CAB0 (ObpParseSymbolicLinkEx.c)
 *     IoGetDeviceProperty @ 0x1406C5B00 (IoGetDeviceProperty.c)
 *     PspInitializeFullProcessImageName @ 0x140707B78 (PspInitializeFullProcessImageName.c)
 *     ObQueryNameString @ 0x14071EA00 (ObQueryNameString.c)
 *     NtQueryObject @ 0x14071EA20 (NtQueryObject.c)
 *     IopQueryNameInternal @ 0x140720054 (IopQueryNameInternal.c)
 *     CmpQueryNameString @ 0x140733F8C (CmpQueryNameString.c)
 *     SepQueryNameString @ 0x140744C84 (SepQueryNameString.c)
 *     MmQueryVirtualMemory @ 0x1407C6390 (MmQueryVirtualMemory.c)
 *     EtwpEnumerateAddressSpace @ 0x1407EC24C (EtwpEnumerateAddressSpace.c)
 *     AstLogDeviceCreated @ 0x1407F0D60 (AstLogDeviceCreated.c)
 *     PnpBuildCmResourceList @ 0x140804D9C (PnpBuildCmResourceList.c)
 *     PiControlGetDeviceStack @ 0x140852740 (PiControlGetDeviceStack.c)
 *     IoRegisterDeviceInterface @ 0x14086A510 (IoRegisterDeviceInterface.c)
 *     IopErrorLogThread @ 0x1408704E0 (IopErrorLogThread.c)
 *     IopGraftName @ 0x14087A8D0 (IopGraftName.c)
 *     MmGetFileNameForAddress @ 0x1408A737E (MmGetFileNameForAddress.c)
 *     IopGetRelatedFileName @ 0x140941AE0 (IopGetRelatedFileName.c)
 *     IopRaiseHardError @ 0x1409423B0 (IopRaiseHardError.c)
 *     AlpcpGetPortNameInformation @ 0x140976020 (AlpcpGetPortNameInformation.c)
 *     ObGetObjectInformation @ 0x140978914 (ObGetObjectInformation.c)
 *     SmKmFileInfoGetPath @ 0x1409D5DBC (SmKmFileInfoGetPath.c)
 *     SmKmStoreFileOpenVolume @ 0x1409D75D8 (SmKmStoreFileOpenVolume.c)
 *     EtwpTraceHandle @ 0x1409E3D9C (EtwpTraceHandle.c)
 *     EtwpObjectHandleEnumCallback @ 0x1409EC330 (EtwpObjectHandleEnumCallback.c)
 *     MmGetFileNameForSection @ 0x140A2BA04 (MmGetFileNameForSection.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PsGetCurrentSilo @ 0x1402640A0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO @ 0x140299598 (OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 __fastcall ObQueryNameStringMode(char *a1, __int64 a2, unsigned int a3, _DWORD *a4, char a5)
{
  char *v6; // r14
  char v7; // r13
  char *v8; // rsi
  unsigned __int64 v9; // rdx
  char *v10; // rbx
  __int64 (__fastcall *v11)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char); // rax
  struct _LIST_ENTRY *CurrentSilo; // rax
  char *v14; // rax
  signed __int64 *v15; // rbx
  char *v16; // rsi
  unsigned int v17; // ecx
  char *v18; // rdx
  char *v19; // rsi
  signed __int64 *v20; // rbx
  char *v21; // rsi
  unsigned __int64 v22; // r12
  char *v23; // rcx
  size_t v24; // r8
  char *v25; // rcx
  signed __int64 *v26; // rsi
  char *v27; // rbx
  char *v28; // r13
  __int64 v29; // r14
  char *v30; // rbx
  size_t v31; // r8
  char *v32; // r13
  size_t v33; // rbx
  char *v34; // rdx
  char *v35; // r8
  char v36; // [rsp+40h] [rbp-C8h]
  char v37; // [rsp+41h] [rbp-C7h]
  int v38; // [rsp+44h] [rbp-C4h]
  unsigned int v39; // [rsp+48h] [rbp-C0h]
  char *v40; // [rsp+50h] [rbp-B8h]
  char *Object; // [rsp+58h] [rbp-B0h]
  unsigned int v42; // [rsp+60h] [rbp-A8h]
  char *v43; // [rsp+68h] [rbp-A0h]
  char *v44; // [rsp+68h] [rbp-A0h]
  char *v45; // [rsp+68h] [rbp-A0h]
  char *v46; // [rsp+78h] [rbp-90h]
  char *v47; // [rsp+80h] [rbp-88h]
  char *v48; // [rsp+88h] [rbp-80h]
  char *v49; // [rsp+90h] [rbp-78h]
  char *v50; // [rsp+98h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-58h]
  struct _KTHREAD *v52; // [rsp+B8h] [rbp-50h]
  struct _KTHREAD *v53; // [rsp+C0h] [rbp-48h]
  struct _KTHREAD *v54; // [rsp+C8h] [rbp-40h]

  v6 = a1;
  v7 = 1;
  v36 = 1;
  v37 = 0;
  v42 = 0;
  Object = 0LL;
  v38 = -1073741823;
  v8 = a1 - 48;
  v47 = a1 - 48;
  v9 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  v50 = a1 - 22;
  if ( (*v50 & 2) != 0 )
    v10 = &v8[-ObpInfoMaskToOffset[*(a1 - 22) & 3]];
  else
    v10 = 0LL;
  v49 = v10;
  v11 = *(__int64 (__fastcall **)(char *, unsigned __int64, __int64, _QWORD, _DWORD *, char))(ObTypeIndexTable[v9] + 160);
  if ( v11 )
  {
    if ( !v10 || !*((_WORD *)v10 + 4) )
      v7 = 0;
    LOBYTE(v9) = v7;
    v38 = v11(a1, v9, a2, a3, a4, a5);
LABEL_7:
    if ( v38 >= 0 )
      goto LABEL_8;
    return (unsigned int)v38;
  }
  CurrentSilo = PsGetCurrentSilo();
  v14 = (char *)OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
  v46 = v14;
  while ( v10 )
  {
    if ( v6 == v14 || v6 == ObpRootDirectoryObject )
    {
      v17 = 2;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v15 = (signed __int64 *)(v8 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 16), 0LL);
      v16 = *(char **)v49;
      v43 = *(char **)v49;
      if ( *(_QWORD *)v49 )
      {
        ObfReferenceObject(v16);
        Object = v16;
      }
      v39 = *((unsigned __int16 *)v49 + 4) + 2;
      if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15);
      KeAbPostRelease((ULONG_PTR)v15);
      KeLeaveCriticalRegion();
      v17 = v39;
      v18 = v43;
      while ( v18 != v46 && v18 != ObpRootDirectoryObject && v18 && (*((_DWORD *)v18 + 84) & 0x20) == 0 )
      {
        v52 = KeGetCurrentThread();
        --v52->KernelApcDisable;
        v19 = v18 - 48;
        v20 = (signed __int64 *)(v18 - 32);
        ExAcquirePushLockSharedEx((ULONG_PTR)v20, 0LL);
        if ( (v19[26] & 2) != 0 )
          v21 = &v19[-ObpInfoMaskToOffset[v19[26] & 3]];
        else
          v21 = 0LL;
        if ( !v21 || !*(_QWORD *)v21 )
        {
          if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v20);
          KeAbPostRelease((ULONG_PTR)v20);
          KeLeaveCriticalRegion();
          v17 = v39 + 8;
          break;
        }
        v39 += 2 + *((unsigned __int16 *)v21 + 4);
        v44 = *(char **)v21;
        ObfReferenceObject(*(PVOID *)v21);
        if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v20);
        KeAbPostRelease((ULONG_PTR)v20);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(Object);
        v18 = v44;
        Object = v44;
        v17 = v39;
        if ( v39 > 0xFFFF )
          break;
      }
    }
    if ( v17 > 0xFFFF )
    {
      v38 = -1073741562;
    }
    else
    {
      v42 = v17 + 18;
      *a4 = v17 + 18;
      if ( a3 >= v17 + 18 )
        goto LABEL_40;
      v38 = -1073741820;
    }
    v36 = 0;
LABEL_40:
    if ( Object )
    {
      ObfDereferenceObject(Object);
      Object = 0LL;
    }
    if ( !v36 )
      goto LABEL_7;
    v8 = v47;
    if ( (*v50 & 2) != 0 )
      v10 = &v47[-ObpInfoMaskToOffset[*v50 & 3]];
    else
      v10 = 0LL;
    v49 = v10;
    v6 = a1;
    if ( !v10 )
      goto LABEL_92;
    v22 = a2 + 16;
    v23 = (char *)(a2 + v42 - 2);
    v40 = v23;
    *(_WORD *)v23 = 0;
    if ( a1 == v46 || a1 == ObpRootDirectoryObject )
      goto LABEL_65;
    v24 = *((unsigned __int16 *)v10 + 4);
    v25 = &v23[-v24];
    v40 = v25;
    if ( (unsigned __int64)v25 > v22 )
    {
      memmove(v25, *((const void **)v10 + 2), v24);
      v53 = KeGetCurrentThread();
      --v53->KernelApcDisable;
      v26 = (signed __int64 *)(v47 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v47 + 16), 0LL);
      v27 = *(char **)v10;
      v45 = v27;
      if ( v27 )
      {
        ObfReferenceObject(v27);
        Object = v27;
      }
      if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v26);
      while ( 1 )
      {
        KeAbPostRelease((ULONG_PTR)v26);
        KeLeaveCriticalRegion();
        if ( v45 == v46 || v45 == ObpRootDirectoryObject || !v45 || (*((_DWORD *)v45 + 84) & 0x20) != 0 )
          break;
        v28 = v40 - 2;
        *((_WORD *)v40 - 1) = 92;
        v48 = v45 - 48;
        if ( (*(v45 - 22) & 2) != 0 )
          v29 = (__int64)&v45[-ObpInfoMaskToOffset[*(v45 - 22) & 3] - 48];
        else
          v29 = 0LL;
        v54 = KeGetCurrentThread();
        --v54->KernelApcDisable;
        v26 = (signed __int64 *)(v48 + 16);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v48 + 16), 0LL);
        if ( !v29 || !*(_QWORD *)v29 )
        {
          if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v26);
          KeAbPostRelease((ULONG_PTR)v26);
          KeLeaveCriticalRegion();
          v34 = v40 - 8;
          v40 -= 8;
          v35 = v28 - 6;
          if ( (unsigned __int64)(v28 - 6) < v22 )
          {
            v40 = (char *)(a2 + 16);
            v34 = (char *)(a2 + 16);
            v35 = (char *)(a2 + 16);
          }
          *(_DWORD *)v40 = *(_DWORD *)L"...";
          *((_WORD *)v40 + 2) = asc_140887780[2];
          if ( v34 == (char *)v22 )
            v40 = v35 + 2;
          break;
        }
        ObfDereferenceObject(Object);
        v30 = *(char **)v29;
        v45 = *(char **)v29;
        ObfReferenceObject(*(PVOID *)v29);
        Object = v30;
        v31 = *(unsigned __int16 *)(v29 + 8);
        v32 = &v28[-v31];
        v40 = v32;
        if ( (unsigned __int64)v32 <= v22 )
        {
          v37 = 1;
          if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(v26);
          KeAbPostRelease((ULONG_PTR)v26);
          KeLeaveCriticalRegion();
          goto LABEL_79;
        }
        memmove(v32, *(const void **)(v29 + 16), v31);
        if ( _InterlockedCompareExchange64(v26, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v26);
      }
LABEL_65:
      *((_WORD *)v40 - 1) = 92;
      v33 = (unsigned __int16)(a2 + v42 - ((_WORD)v40 - 2));
      *(_WORD *)(a2 + 2) = v33;
      *(_WORD *)a2 = a2 + v42 - (_WORD)v40;
      *(_QWORD *)(a2 + 8) = v22;
      if ( (char *)v22 != v40 - 2 )
      {
        memmove((void *)(a2 + 16), v40 - 2, v33);
        *a4 = v33 + 16;
      }
      goto LABEL_79;
    }
    v37 = 1;
LABEL_79:
    if ( Object )
      ObfDereferenceObject(Object);
    if ( !v37 )
    {
      v38 = 0;
      goto LABEL_7;
    }
    v8 = v47;
    if ( (*v50 & 2) != 0 )
      v10 = &v47[-ObpInfoMaskToOffset[*v50 & 3]];
    else
      v10 = 0LL;
    v49 = v10;
    v37 = 0;
    v6 = a1;
LABEL_92:
    v14 = v46;
  }
  *a4 = 16;
  if ( a3 < 0x10 )
    return (unsigned int)-1073741820;
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  v38 = 0;
LABEL_8:
  *(_DWORD *)(a2 + 4) = 0;
  return (unsigned int)v38;
}
