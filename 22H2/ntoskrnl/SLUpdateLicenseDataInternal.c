/*
 * XREFs of SLUpdateLicenseDataInternal @ 0x14094E2E0
 * Callers:
 *     ExUpdateLicenseData @ 0x1406A6780 (ExUpdateLicenseData.c)
 *     ExInitLicenseData @ 0x1407AB138 (ExInitLicenseData.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x14025C220 (PsGetCurrentServerSilo.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     PsIsHostSilo @ 0x1402D5230 (PsIsHostSilo.c)
 *     memcmp @ 0x1403D22E0 (memcmp.c)
 *     qsort @ 0x1403D23C0 (qsort.c)
 *     ZwClose @ 0x1403F9C00 (ZwClose.c)
 *     ZwCreateSection @ 0x1403FA360 (ZwCreateSection.c)
 *     RtlCompareMemory @ 0x140407830 (RtlCompareMemory.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExpGetLicenseTamperState @ 0x1405B2C08 (ExpGetLicenseTamperState.c)
 *     ExpLicUpdateChecksum @ 0x1405B2D68 (ExpLicUpdateChecksum.c)
 *     ExpSetLicenseTamperState @ 0x1405B2FA4 (ExpSetLicenseTamperState.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     ExpSetKernelDataProtection @ 0x140665A90 (ExpSetKernelDataProtection.c)
 *     MmUnmapViewInSystemSpace @ 0x14068F560 (MmUnmapViewInSystemSpace.c)
 *     MmMapViewInSystemSpace @ 0x1406A2470 (MmMapViewInSystemSpace.c)
 *     ExpReducedLicenseData @ 0x1406A67E0 (ExpReducedLicenseData.c)
 *     sub_1407ABCBC @ 0x1407ABCBC (sub_1407ABCBC.c)
 *     sub_1407B1F20 @ 0x1407B1F20 (sub_1407B1F20.c)
 *     ntoskrnl_24 @ 0x14094D630 (ntoskrnl_24.c)
 *     sub_14094DCDC @ 0x14094DCDC (sub_14094DCDC.c)
 *     SLSendPolicyChangeNotifications @ 0x14094E2B8 (SLSendPolicyChangeNotifications.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SLUpdateLicenseDataInternal(__int64 a1, int a2, unsigned int *a3)
{
  struct _DMA_ADAPTER *v6; // r13
  void *v7; // r12
  int v8; // ecx
  __int64 v9; // rdx
  unsigned int v10; // r9d
  char *v11; // rdi
  char v12; // r15
  volatile signed __int64 *v13; // r13
  _DWORD *v14; // rcx
  unsigned int v15; // edx
  struct _KTHREAD *v16; // rax
  bool v17; // di
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int updated; // ecx
  __int64 v21; // r9
  NTSTATUS v22; // edi
  PVOID v23; // r12
  unsigned int *v24; // rdi
  _DWORD *v25; // rcx
  int v26; // esi
  struct _KTHREAD *v27; // rax
  size_t v28; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rsi
  int v33; // eax
  __int64 v34; // r9
  __int64 v35; // rdx
  struct _KTHREAD *v36; // rax
  __int64 v37; // rdx
  PVOID v38; // r12
  __int64 v39; // rdi
  unsigned int v40; // ecx
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 CurrentServerSilo; // rax
  char v45; // al
  bool v46; // di
  PVOID v47; // rax
  struct _KTHREAD *v48; // rax
  struct _KTHREAD *v49; // rax
  signed int v51; // [rsp+40h] [rbp-1D8h]
  bool v52; // [rsp+44h] [rbp-1D4h]
  char v53; // [rsp+45h] [rbp-1D3h]
  bool v54; // [rsp+46h] [rbp-1D2h]
  _QWORD *v55; // [rsp+48h] [rbp-1D0h]
  size_t NumOfElements; // [rsp+50h] [rbp-1C8h] BYREF
  struct _DMA_ADAPTER *v57; // [rsp+58h] [rbp-1C0h]
  unsigned int v58; // [rsp+60h] [rbp-1B8h]
  unsigned int v59; // [rsp+64h] [rbp-1B4h]
  PVOID MappedBase; // [rsp+68h] [rbp-1B0h] BYREF
  int v61; // [rsp+70h] [rbp-1A8h] BYREF
  PVOID v62; // [rsp+78h] [rbp-1A0h]
  PVOID v63; // [rsp+80h] [rbp-198h]
  LARGE_INTEGER MaximumSize; // [rsp+88h] [rbp-190h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-188h] BYREF
  PVOID Object; // [rsp+98h] [rbp-180h] BYREF
  PVOID v67; // [rsp+A0h] [rbp-178h]
  __int128 v68; // [rsp+B0h] [rbp-168h] BYREF
  __int128 v69; // [rsp+C0h] [rbp-158h]
  __int128 v70; // [rsp+D0h] [rbp-148h]
  __int128 v71; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v72; // [rsp+F0h] [rbp-128h]
  __int128 v73; // [rsp+100h] [rbp-118h]
  int v74; // [rsp+110h] [rbp-108h]
  ULONG_PTR ViewSize; // [rsp+118h] [rbp-100h] BYREF
  void *Src; // [rsp+120h] [rbp-F8h]
  __int64 v77; // [rsp+128h] [rbp-F0h]
  __int128 v78; // [rsp+130h] [rbp-E8h] BYREF
  __int128 v79; // [rsp+140h] [rbp-D8h]
  __int128 v80; // [rsp+150h] [rbp-C8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+160h] [rbp-B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+190h] [rbp-88h]
  struct _KTHREAD *v83; // [rsp+198h] [rbp-80h]
  __int64 v84; // [rsp+1A0h] [rbp-78h]
  _OWORD v85[7]; // [rsp+1A8h] [rbp-70h] BYREF
  char v86; // [rsp+230h] [rbp+18h]

  v54 = 0;
  v52 = 0;
  v86 = 0;
  SectionHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  MaximumSize.QuadPart = 0LL;
  MappedBase = 0LL;
  v67 = 0LL;
  v63 = 0LL;
  v6 = 0LL;
  v57 = 0LL;
  NumOfElements = 0LL;
  v7 = 0LL;
  v55 = 0LL;
  v61 = 0;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  if ( !a3 || (unsigned int)(a2 - 25) > 0x13FE7 || ((unsigned __int8)a3 & 3) != 0 )
  {
    v51 = -1073741811;
    goto LABEL_148;
  }
  v8 = *a3;
  if ( *a3 > 0x14000 || (v9 = a3[1], (unsigned int)v9 > 0x14000) || (v10 = a3[2], v10 > 0x14000) )
  {
    v51 = -1073741760;
    goto LABEL_148;
  }
  v11 = (char *)a3 + v9 + 20;
  Src = v11;
  if ( ((unsigned __int8)v11 & 3) != 0 )
  {
    v51 = -1073741811;
    v7 = 0LL;
LABEL_148:
    v12 = 1;
    goto LABEL_124;
  }
  v12 = 1;
  if ( v10 + (_DWORD)v9 + 20 != v8 || v8 != a2 || a3[4] != 1 )
  {
    v51 = -1073741811;
    v7 = 0LL;
    goto LABEL_124;
  }
  v51 = 0;
  *(_BYTE *)(a1 + 46856) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = (volatile signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  v62 = *(PVOID *)a1;
  v52 = v62 == 0LL;
  if ( !ExpReducedLicenseData() )
  {
    if ( !v62 && (a3[3] & 1) != 0 )
    {
      v51 = -1073741811;
      goto LABEL_29;
    }
LABEL_19:
    v54 = 0;
    if ( !v62 )
    {
      v14 = *(_DWORD **)(a1 + 46832);
      if ( v14 )
      {
        if ( !*(_BYTE *)(a1 + 46992) && *a3 == *v14 )
        {
          v15 = a3[1];
          if ( v15 == v14[1]
            && a3[2] == v14[2]
            && a3[3] == v14[3]
            && a3[4] == v14[4]
            && RtlCompareMemory(v14 + 5, a3 + 5, v15) == a3[1] )
          {
            v54 = RtlCompareMemory(
                    (const void *)(*(unsigned int *)(*(_QWORD *)(a1 + 46832) + 4LL) + *(_QWORD *)(a1 + 46832) + 20LL),
                    v11,
                    a3[2]) == a3[2];
          }
        }
      }
    }
    goto LABEL_29;
  }
  if ( v62 )
    goto LABEL_19;
  v51 = -1073741823;
LABEL_29:
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
  KeAbPostRelease(a1 + 46840);
  KeLeaveCriticalRegion();
  if ( v51 < 0 )
    goto LABEL_146;
  if ( v54 )
  {
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
    v17 = HIDWORD(NumOfElements) != 0;
    v18 = *(unsigned int *)(a1 + 46824);
    HIDWORD(v68) = 0;
    *(_DWORD *)((char *)&v70 + 9) = 0;
    *(_WORD *)((char *)&v70 + 13) = 0;
    HIBYTE(v70) = 0;
    if ( !(_DWORD)v18 || a1 != -24 )
    {
      *(_QWORD *)&v68 = 0LL;
      v69 = 0uLL;
      DWORD2(v68) = 0;
      *(_QWORD *)&v70 = 10800LL;
      BYTE8(v70) = 1;
      updated = ExpLicUpdateChecksum((__int64)(a3 + 5), v18, &v68);
      if ( !updated )
      {
        if ( (_DWORD)v19 )
        {
          updated = (unsigned __int64)(16 * v19) > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( (unsigned __int64)(16 * v19) <= 0xFFFFFFFF )
            updated = ExpLicUpdateChecksum(v21, 0xFFFFFFFFLL, &v68);
        }
      }
      if ( updated )
      {
        *(_QWORD *)&v68 = 0LL;
        DWORD2(v68) = 4;
      }
      v78 = v68;
      v79 = v69;
      v80 = v70;
      ExpSetKernelDataProtection(a1, (__int64)&v78, 7, 1);
    }
    if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegion();
    if ( v17 )
      SLSendPolicyChangeNotifications(a1);
    v51 = 0x40000000;
LABEL_47:
    v7 = 0LL;
LABEL_48:
    v6 = 0LL;
    goto LABEL_124;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a3;
  v51 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v51 < 0 )
    goto LABEL_146;
  Object = 0LL;
  v22 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v23 = Object;
  v63 = Object;
  v51 = v22;
  ZwClose(SectionHandle);
  if ( v22 < 0 || (ViewSize = 0LL, v51 = MmMapViewInSystemSpace(v23, &MappedBase, &ViewSize), v51 < 0) )
  {
LABEL_146:
    v7 = 0LL;
    v6 = 0LL;
    goto LABEL_124;
  }
  v24 = (unsigned int *)MappedBase;
  *(_OWORD *)MappedBase = *(_OWORD *)a3;
  v24[4] = a3[4];
  memmove(v24 + 5, a3 + 5, a3[1]);
  memmove((char *)v24 + a3[1] + 20, Src, a3[2]);
  v25 = (unsigned int *)((char *)v24 + v24[1] + 20);
  v26 = 0;
  if ( v24[2] != 4 || !v25 || *v25 != 69 )
  {
    v51 = -1073741761;
    v7 = 0LL;
    v6 = 0LL;
    goto LABEL_124;
  }
  v51 = sub_1407ABCBC((__int64)v24, 1, 0LL, 0, (unsigned int *)&NumOfElements);
  if ( v51 == -1073741789 )
  {
    v27 = KeGetCurrentThread();
    --v27->KernelApcDisable;
    ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
    v51 = (unsigned int)NumOfElements > 0xB6D ? 0xC000000D : 0;
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegion();
    if ( v51 < 0 )
      goto LABEL_47;
    v28 = (unsigned int)NumOfElements;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)NumOfElements, 0x20534C53u);
    v7 = PoolWithTag;
    v55 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v51 = -1073741801;
      goto LABEL_48;
    }
    v51 = sub_1407ABCBC((__int64)MappedBase, 0, PoolWithTag, NumOfElements, 0LL);
    if ( v51 >= 0 )
      qsort(v7, v28, 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_1407B1F20);
  }
  else
  {
    v7 = 0LL;
  }
  if ( v51 < 0 )
  {
    v6 = 0LL;
    if ( v51 == -1073741762 )
      v51 = -1073741811;
    goto LABEL_124;
  }
  v53 = 0;
  v83 = KeGetCurrentThread();
  --v83->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( !v62 )
  {
    v30 = 0;
    v59 = 0;
    v31 = 0LL;
    v58 = 0;
    while ( v30 < (unsigned int)NumOfElements )
    {
      if ( (unsigned int)v31 >= *(_DWORD *)(a1 + 46824) )
      {
        while ( v30 < (unsigned int)NumOfElements )
        {
          v77 = v55[2 * v30 + 1];
          if ( (*(_DWORD *)(v77 + 8) & 2) != 0 )
            goto LABEL_73;
          v59 = ++v30;
        }
        break;
      }
      v32 = (unsigned int)v31;
      v33 = sub_1407B1F20(&v55[2 * v30], (_QWORD *)(16 * v31 + a1 + 24));
      v74 = v33;
      v34 = v55[2 * v30 + 1];
      v77 = v34;
      v35 = *(_QWORD *)(a1 + 16 * (v32 + 2));
      v84 = v35;
      v26 = 0;
      if ( v33 >= 0 )
      {
        if ( v33 <= 0 )
        {
          if ( (*(_DWORD *)(v34 + 8) & 2) != 0
            && (*(_WORD *)(v34 + 6) != *(_WORD *)(v35 + 6)
             || memcmp(
                  (const void *)(*(unsigned __int16 *)(v34 + 2) + v34 + 16),
                  (const void *)(*(unsigned __int16 *)(v35 + 2) + 16LL + v35),
                  *(unsigned __int16 *)(v35 + 6))) )
          {
LABEL_73:
            v53 = 1;
            break;
          }
          v59 = ++v30;
        }
        v31 = ++v58;
      }
      else
      {
        if ( (*(_DWORD *)(v34 + 8) & 2) != 0 )
          goto LABEL_73;
        v59 = ++v30;
        v31 = v58;
      }
    }
  }
  if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
  KeAbPostRelease(a1 + 46840);
  KeLeaveCriticalRegion();
  ObfReferenceObject(v63);
  v36 = KeGetCurrentThread();
  --v36->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
  HIDWORD(v71) = 0;
  *(_DWORD *)((char *)&v73 + 9) = 0;
  *(_WORD *)((char *)&v73 + 13) = 0;
  HIBYTE(v73) = 0;
  v38 = MappedBase;
  if ( MappedBase )
  {
    v39 = (unsigned int)NumOfElements;
    if ( !(_DWORD)NumOfElements || v55 )
    {
      *(_QWORD *)&v71 = 0LL;
      v72 = 0uLL;
      DWORD2(v71) = 0;
      *(_QWORD *)&v73 = 10800LL;
      BYTE8(v73) = 1;
      v40 = ExpLicUpdateChecksum((__int64)MappedBase + 20, v37, &v71);
      if ( !v40 )
      {
        if ( (_DWORD)v39 )
        {
          v40 = (unsigned __int64)(16 * v39) > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( (unsigned __int64)(16 * v39) <= 0xFFFFFFFF )
            v40 = ExpLicUpdateChecksum(v41, 0xFFFFFFFFLL, &v71);
        }
      }
      if ( v40 )
      {
        *(_QWORD *)&v71 = 0LL;
        DWORD2(v71) = 4;
      }
      v78 = v71;
      v79 = v72;
      v80 = v73;
      goto LABEL_98;
    }
  }
  else
  {
    LODWORD(v39) = NumOfElements;
  }
  v26 = -1073741811;
LABEL_98:
  v51 = v26;
  if ( v26 < 0 )
  {
    v46 = 0;
  }
  else
  {
    ExpSetKernelDataProtection(a1, (__int64)&v78, 7, 1);
    v57 = *(struct _DMA_ADAPTER **)(a1 + 16);
    v67 = *(PVOID *)(a1 + 46832);
    *(_QWORD *)(a1 + 16) = v63;
    *(_QWORD *)(a1 + 46832) = v38;
    MappedBase = 0LL;
    CurrentServerSilo = PsGetCurrentServerSilo(v43, v42);
    if ( !PsIsHostSilo(CurrentServerSilo) && *(_QWORD *)a1 )
      ExFreePoolWithTag(*(PVOID *)a1, 0x69534C53u);
    *(_QWORD *)a1 = 0LL;
    v86 = *(_BYTE *)(a1 + 46992);
    *(_BYTE *)(a1 + 46992) = 0;
    memset((void *)(a1 + 24), 0, 16LL * *(unsigned int *)(a1 + 46824));
    *(_DWORD *)(a1 + 46824) = 0;
    if ( v55 )
    {
      memmove((void *)(a1 + 24), v55, 16LL * (unsigned int)v39);
      *(_DWORD *)(a1 + 46824) = v39;
    }
    *(_BYTE *)(a1 + 46828) = 1;
    ExpGetLicenseTamperState(a1, &v61);
    v45 = v52;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 46832) + 12LL) & 1) != 0 )
      v45 = 1;
    v52 = v45;
    ExpSetLicenseTamperState(a1, 2 * (*(_DWORD *)(*(_QWORD *)(a1 + 46832) + 12LL) & 1));
    ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
    v46 = v61 != HIDWORD(NumOfElements) && (!v61 || !HIDWORD(NumOfElements));
  }
  if ( (_InterlockedExchangeAdd64(v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
  KeAbPostRelease(a1 + 46840);
  KeLeaveCriticalRegion();
  if ( v26 < 0 )
    goto LABEL_123;
  v47 = v62;
  if ( v62 )
    goto LABEL_118;
  v51 = sub_14094DCDC(a1);
  if ( v51 < 0 )
  {
LABEL_123:
    v6 = v57;
    v7 = v55;
    goto LABEL_124;
  }
  v47 = v62;
LABEL_118:
  if ( v46 || !v47 )
    SLSendPolicyChangeNotifications(a1);
  v51 = 0;
  v7 = v55;
  v6 = v57;
  if ( v53 == 1 )
    v51 = 263;
LABEL_124:
  if ( v86 && !*(_BYTE *)(a1 + 46992) )
    ntoskrnl_24(&KernelLicensingCacheCorruptionFixed);
  if ( v52 )
  {
    v48 = KeGetCurrentThread();
    --v48->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    memset(v85, 0, 48);
    ExpSetKernelDataProtection(a1, (__int64)v85, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegion();
  }
  if ( v63 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v63);
  if ( v6 )
    HalPutDmaAdapter(v6);
  if ( MappedBase )
    MmUnmapViewInSystemSpace(MappedBase);
  if ( v67 )
    MmUnmapViewInSystemSpace(v67);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v51 == -1073741811 || (unsigned int)(v51 + 1073741761) <= 1 )
  {
    v49 = KeGetCurrentThread();
    --v49->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
    if ( HIDWORD(NumOfElements) )
      v12 = 0;
    else
      ExpSetLicenseTamperState(a1, 5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegion();
    if ( v12 )
      SLSendPolicyChangeNotifications(a1);
  }
  return (unsigned int)v51;
}
