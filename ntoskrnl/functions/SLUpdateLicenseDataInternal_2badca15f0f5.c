__int64 __fastcall SLUpdateLicenseDataInternal(__int64 a1, int a2, unsigned int *a3)
{
  PVOID v6; // rsi
  void *v7; // r13
  void *v8; // r12
  int v9; // ecx
  __int64 v10; // rdx
  unsigned int v11; // r9d
  __int64 v12; // rsi
  char *v13; // r12
  char v14; // r14
  volatile signed __int64 *v15; // r13
  _DWORD *v16; // rcx
  unsigned int v17; // edx
  struct _KTHREAD *v18; // rax
  bool v19; // di
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  unsigned int updated; // ecx
  __int64 v24; // r9
  __int64 v25; // r10
  NTSTATUS v26; // ebx
  unsigned int *v27; // rsi
  _DWORD *v28; // rcx
  int v29; // edi
  struct _KTHREAD *v30; // rax
  size_t v31; // rdi
  void *Pool2; // rax
  unsigned int v33; // r12d
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // eax
  __int64 v37; // r9
  __int64 v38; // rdx
  struct _KTHREAD *v39; // rax
  __int64 v40; // rdx
  ULONG_PTR v41; // r12
  __int64 v42; // rsi
  unsigned int v43; // ecx
  __int64 v44; // r9
  __int64 CurrentServerSilo; // rax
  char v46; // al
  bool v47; // si
  PVOID v48; // rax
  struct _KTHREAD *v49; // rax
  struct _KTHREAD *v50; // rax
  signed int v52; // [rsp+40h] [rbp-1D8h]
  bool v53; // [rsp+44h] [rbp-1D4h]
  char v54; // [rsp+45h] [rbp-1D3h]
  bool v55; // [rsp+46h] [rbp-1D2h]
  _QWORD *Src; // [rsp+48h] [rbp-1D0h]
  PVOID v57; // [rsp+50h] [rbp-1C8h]
  size_t NumOfElements; // [rsp+58h] [rbp-1C0h] BYREF
  void *v59; // [rsp+60h] [rbp-1B8h]
  unsigned int v60; // [rsp+68h] [rbp-1B0h]
  unsigned int v61; // [rsp+6Ch] [rbp-1ACh]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-1A8h] BYREF
  int v63; // [rsp+78h] [rbp-1A0h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+80h] [rbp-198h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp-190h] BYREF
  PVOID v66; // [rsp+90h] [rbp-188h]
  PVOID Object; // [rsp+98h] [rbp-180h] BYREF
  ULONG_PTR v68; // [rsp+A0h] [rbp-178h]
  __int128 v69; // [rsp+B0h] [rbp-168h] BYREF
  __int128 v70; // [rsp+C0h] [rbp-158h]
  __int128 v71; // [rsp+D0h] [rbp-148h]
  __int128 v72; // [rsp+E0h] [rbp-138h] BYREF
  __int128 v73; // [rsp+F0h] [rbp-128h]
  __int128 v74; // [rsp+100h] [rbp-118h]
  int v75; // [rsp+110h] [rbp-108h]
  __int64 v76; // [rsp+118h] [rbp-100h] BYREF
  unsigned __int64 v77; // [rsp+120h] [rbp-F8h] BYREF
  __int64 v78; // [rsp+128h] [rbp-F0h]
  __int128 v79; // [rsp+130h] [rbp-E8h] BYREF
  __int128 v80; // [rsp+140h] [rbp-D8h]
  __int128 v81; // [rsp+150h] [rbp-C8h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+160h] [rbp-B8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+190h] [rbp-88h]
  struct _KTHREAD *v84; // [rsp+198h] [rbp-80h]
  __int64 v85; // [rsp+1A0h] [rbp-78h]
  _OWORD v86[7]; // [rsp+1A8h] [rbp-70h] BYREF
  char v87; // [rsp+230h] [rbp+18h]

  v55 = 0;
  v53 = 0;
  v87 = 0;
  SectionHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  MaximumSize.QuadPart = 0LL;
  BugCheckParameter1 = 0LL;
  v68 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v59 = 0LL;
  NumOfElements = 0LL;
  v8 = 0LL;
  Src = 0LL;
  v63 = 0;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  if ( !a3 || (unsigned int)(a2 - 25) > 0x13FE7 || ((unsigned __int8)a3 & 3) != 0 )
  {
    v52 = -1073741811;
    goto LABEL_133;
  }
  v9 = *a3;
  if ( *a3 > 0x14000 || (v10 = a3[1], (unsigned int)v10 > 0x14000) || (v11 = a3[2], v11 > 0x14000) )
  {
    v52 = -1073741760;
LABEL_133:
    v14 = 1;
    goto LABEL_137;
  }
  v12 = (__int64)(a3 + 5);
  v13 = (char *)a3 + v10 + 20;
  if ( ((unsigned __int8)v13 & 3) != 0 || v11 + (_DWORD)v10 + 20 != v9 )
  {
    v14 = 1;
LABEL_9:
    v52 = -1073741811;
    v8 = 0LL;
    v6 = 0LL;
    goto LABEL_137;
  }
  v14 = 1;
  if ( v9 != a2 || a3[4] != 1 )
    goto LABEL_9;
  v52 = 0;
  *(_BYTE *)(a1 + 46856) = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = (volatile signed __int64 *)(a1 + 46840);
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  v66 = *(PVOID *)a1;
  v53 = v66 == 0LL;
  if ( !ExpReducedLicenseData() )
  {
    if ( !v66 && (a3[3] & 1) != 0 )
    {
      v52 = -1073741811;
      goto LABEL_29;
    }
LABEL_19:
    v55 = 0;
    if ( !v66 )
    {
      v16 = *(_DWORD **)(a1 + 46832);
      if ( v16 )
      {
        if ( !*(_BYTE *)(a1 + 46992) && *a3 == *v16 )
        {
          v17 = a3[1];
          if ( v17 == v16[1]
            && a3[2] == v16[2]
            && a3[3] == v16[3]
            && a3[4] == v16[4]
            && RtlCompareMemory(v16 + 5, a3 + 5, v17) == a3[1] )
          {
            v55 = RtlCompareMemory(
                    (const void *)(*(unsigned int *)(*(_QWORD *)(a1 + 46832) + 4LL) + *(_QWORD *)(a1 + 46832) + 20LL),
                    v13,
                    a3[2]) == a3[2];
          }
        }
      }
    }
    goto LABEL_29;
  }
  if ( v66 )
    goto LABEL_19;
  v52 = -1073741823;
LABEL_29:
  if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
  KeAbPostRelease(a1 + 46840);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v52 < 0 )
    goto LABEL_130;
  if ( v55 )
  {
    v18 = KeGetCurrentThread();
    --v18->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
    v19 = HIDWORD(NumOfElements) != 0;
    v20 = *(unsigned int *)(a1 + 46824);
    HIDWORD(v69) = 0;
    *(_DWORD *)((char *)&v71 + 9) = 0;
    *(_WORD *)((char *)&v71 + 13) = 0;
    HIBYTE(v71) = 0;
    if ( (_DWORD)v20 && a1 == -24 )
    {
      v21 = -1073741811;
    }
    else
    {
      *(_QWORD *)&v69 = 0LL;
      v70 = 0uLL;
      DWORD2(v69) = 0;
      *(_QWORD *)&v71 = 10800LL;
      BYTE8(v71) = 1;
      updated = ExpLicUpdateChecksum(v12, v20, &v69);
      if ( !updated )
      {
        if ( (_DWORD)v22 )
        {
          updated = (unsigned __int64)(16 * v22) > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( (unsigned __int64)(16 * v22) <= 0xFFFFFFFF )
            updated = ExpLicUpdateChecksum(v24, 0xFFFFFFFFLL, &v69);
        }
      }
      if ( updated )
      {
        *(_QWORD *)&v69 = v25;
        DWORD2(v69) = 4;
      }
      v79 = v69;
      v80 = v70;
      v81 = v71;
      v21 = v25;
      if ( !updated )
        v21 = 0;
    }
    if ( v21 >= 0 )
      ExpSetKernelDataProtection(a1, (__int64)&v79, 7, 1);
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v19 )
      SLSendPolicyChangeNotifications(a1);
    v52 = 0x40000000;
    v8 = 0LL;
    v6 = 0LL;
    v7 = 0LL;
    goto LABEL_137;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 544;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  MaximumSize.QuadPart = *a3;
  v52 = ZwCreateSection(&SectionHandle, 0xF0007u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v52 < 0 )
  {
LABEL_130:
    v6 = 0LL;
LABEL_131:
    v8 = 0LL;
    v7 = 0LL;
    goto LABEL_137;
  }
  Object = 0LL;
  v26 = ObReferenceObjectByHandle(SectionHandle, 0, 0LL, 0, &Object, 0LL);
  v6 = Object;
  v57 = Object;
  v52 = v26;
  ZwClose(SectionHandle);
  if ( v26 < 0 )
    goto LABEL_131;
  v77 = 0LL;
  v76 = 0LL;
  v52 = MiMapViewInSystemSpace((__int64)v6, &BugCheckParameter1, &v77, &v76, 0LL, 0LL);
  if ( v52 < 0 )
    goto LABEL_131;
  v27 = (unsigned int *)BugCheckParameter1;
  *(_OWORD *)BugCheckParameter1 = *(_OWORD *)a3;
  v27[4] = a3[4];
  memmove(v27 + 5, a3 + 5, a3[1]);
  memmove((char *)v27 + a3[1] + 20, v13, a3[2]);
  v28 = (unsigned int *)((char *)v27 + v27[1] + 20);
  if ( v27[2] != 4 || (v29 = 0, !v28) || *v28 != 69 )
  {
    v52 = -1073741761;
    v8 = 0LL;
    v7 = 0LL;
    goto LABEL_136;
  }
  v52 = sub_14081A8B4((__int64)v27, 1, 0LL, 0, (unsigned int *)&NumOfElements);
  if ( v52 == -1073741789 )
  {
    v30 = KeGetCurrentThread();
    --v30->KernelApcDisable;
    ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
    v52 = (unsigned int)NumOfElements > 0xB6D ? 0xC000000D : 0;
    if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v52 < 0 )
    {
      v8 = 0LL;
      v7 = 0LL;
      goto LABEL_136;
    }
    v31 = (unsigned int)NumOfElements;
    Pool2 = (void *)ExAllocatePool2(256LL, 16LL * (unsigned int)NumOfElements, 542329939LL);
    v8 = Pool2;
    Src = Pool2;
    if ( !Pool2 )
    {
      v52 = -1073741801;
      v7 = 0LL;
LABEL_136:
      v6 = v57;
      goto LABEL_137;
    }
    v52 = sub_14081A8B4(BugCheckParameter1, 0, Pool2, NumOfElements, 0LL);
    if ( v52 >= 0 )
      qsort(v8, v31, 0x10uLL, (int (__cdecl *)(const void *, const void *))sub_140831820);
    v29 = 0;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v52 < 0 )
  {
    v6 = v57;
    v7 = v59;
    if ( v52 == -1073741762 )
      v52 = -1073741811;
    goto LABEL_137;
  }
  v54 = 0;
  v84 = KeGetCurrentThread();
  --v84->KernelApcDisable;
  ExAcquirePushLockSharedEx(a1 + 46840, 0LL);
  if ( !v66 )
  {
    v33 = 0;
    v61 = 0;
    v34 = 0LL;
    v60 = 0;
    while ( v33 < (unsigned int)NumOfElements )
    {
      if ( (unsigned int)v34 >= *(_DWORD *)(a1 + 46824) )
      {
        while ( v33 < (unsigned int)NumOfElements )
        {
          v78 = Src[2 * v33 + 1];
          if ( (*(_DWORD *)(v78 + 8) & 2) != 0 )
            goto LABEL_77;
          v61 = ++v33;
        }
        break;
      }
      v35 = (unsigned int)v34;
      v36 = sub_140831820(&Src[2 * v33], (_QWORD *)(16 * v34 + a1 + 24));
      v75 = v36;
      v37 = Src[2 * v33 + 1];
      v78 = v37;
      v38 = *(_QWORD *)(a1 + 16 * (v35 + 2));
      v85 = v38;
      v29 = 0;
      if ( v36 >= 0 )
      {
        if ( v36 <= 0 )
        {
          if ( (*(_DWORD *)(v37 + 8) & 2) != 0
            && (*(_WORD *)(v37 + 6) != *(_WORD *)(v38 + 6)
             || memcmp(
                  (const void *)(*(unsigned __int16 *)(v37 + 2) + v37 + 16),
                  (const void *)(*(unsigned __int16 *)(v38 + 2) + 16LL + v38),
                  *(unsigned __int16 *)(v38 + 6))) )
          {
LABEL_77:
            v54 = 1;
            break;
          }
          v61 = ++v33;
        }
        v34 = ++v60;
      }
      else
      {
        if ( (*(_DWORD *)(v37 + 8) & 2) != 0 )
          goto LABEL_77;
        v61 = ++v33;
        v34 = v60;
      }
    }
  }
  if ( _InterlockedCompareExchange64(v15, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
  KeAbPostRelease(a1 + 46840);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ObfReferenceObject(v57);
  v39 = KeGetCurrentThread();
  --v39->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
  HIDWORD(v72) = 0;
  *(_DWORD *)((char *)&v74 + 9) = 0;
  *(_WORD *)((char *)&v74 + 13) = 0;
  HIBYTE(v74) = 0;
  v41 = BugCheckParameter1;
  if ( BugCheckParameter1 )
  {
    v42 = (unsigned int)NumOfElements;
    if ( !(_DWORD)NumOfElements || Src )
    {
      *(_QWORD *)&v72 = 0LL;
      v73 = 0uLL;
      DWORD2(v72) = 0;
      *(_QWORD *)&v74 = 10800LL;
      BYTE8(v74) = 1;
      v43 = ExpLicUpdateChecksum(BugCheckParameter1 + 20, v40, &v72);
      if ( !v43 )
      {
        if ( (_DWORD)v42 )
        {
          v43 = (unsigned __int64)(16 * v42) > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( (unsigned __int64)(16 * v42) <= 0xFFFFFFFF )
            v43 = ExpLicUpdateChecksum(v44, 0xFFFFFFFFLL, &v72);
        }
      }
      if ( v43 )
      {
        *(_QWORD *)&v72 = 0LL;
        DWORD2(v72) = 4;
      }
      v79 = v72;
      v80 = v73;
      v81 = v74;
      if ( !v43 )
        v29 = 0;
      goto LABEL_104;
    }
  }
  else
  {
    LODWORD(v42) = NumOfElements;
  }
  v29 = -1073741811;
LABEL_104:
  v52 = v29;
  if ( v29 < 0 )
  {
    v47 = 0;
  }
  else
  {
    ExpSetKernelDataProtection(a1, (__int64)&v79, 7, 1);
    v59 = *(void **)(a1 + 16);
    v68 = *(_QWORD *)(a1 + 46832);
    *(_QWORD *)(a1 + 16) = v57;
    *(_QWORD *)(a1 + 46832) = v41;
    BugCheckParameter1 = 0LL;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( !PsIsHostSilo(CurrentServerSilo) && *(_QWORD *)a1 )
      ExFreePoolWithTag(*(PVOID *)a1, 0x69534C53u);
    *(_QWORD *)a1 = 0LL;
    v87 = *(_BYTE *)(a1 + 46992);
    *(_BYTE *)(a1 + 46992) = 0;
    memset((void *)(a1 + 24), 0, 16LL * *(unsigned int *)(a1 + 46824));
    *(_DWORD *)(a1 + 46824) = 0;
    if ( Src )
    {
      memmove((void *)(a1 + 24), Src, 16LL * (unsigned int)v42);
      *(_DWORD *)(a1 + 46824) = v42;
    }
    *(_BYTE *)(a1 + 46828) = 1;
    ExpGetLicenseTamperState(a1, &v63);
    v46 = v53;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 46832) + 12LL) & 1) != 0 )
      v46 = 1;
    v53 = v46;
    ExpSetLicenseTamperState(a1, 2 * (*(_DWORD *)(*(_QWORD *)(a1 + 46832) + 12LL) & 1));
    ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
    v47 = v63 != HIDWORD(NumOfElements) && (!v63 || !HIDWORD(NumOfElements));
  }
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
  KeAbPostRelease(a1 + 46840);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v29 < 0 )
    goto LABEL_135;
  v48 = v66;
  if ( v66 )
    goto LABEL_124;
  v52 = sub_1409F72BC(a1);
  if ( v52 < 0 )
  {
LABEL_135:
    v7 = v59;
    v8 = Src;
    goto LABEL_136;
  }
  v48 = v66;
LABEL_124:
  if ( v47 || !v48 )
    SLSendPolicyChangeNotifications(a1);
  v52 = 0;
  v8 = Src;
  v6 = v57;
  v7 = v59;
  if ( v54 == 1 )
    v52 = 263;
LABEL_137:
  if ( v87 && !*(_BYTE *)(a1 + 46992) )
    ntoskrnl_24(&KernelLicensingCacheCorruptionFixed);
  if ( v53 )
  {
    v49 = KeGetCurrentThread();
    --v49->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    memset(v86, 0, 48);
    ExpSetKernelDataProtection(a1, (__int64)v86, 32, 0);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( BugCheckParameter1 )
    MiRemoveFromSystemSpace(BugCheckParameter1, 1);
  if ( v68 )
    MiRemoveFromSystemSpace(v68, 1);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v52 == -1073741811 || (unsigned int)(v52 + 1073741761) <= 1 )
  {
    v50 = KeGetCurrentThread();
    --v50->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 46840, 0LL);
    ExpGetLicenseTamperState(a1, (_DWORD *)&NumOfElements + 1);
    if ( HIDWORD(NumOfElements) )
      v14 = 0;
    else
      ExpSetLicenseTamperState(a1, 5);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 46840), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
    KeAbPostRelease(a1 + 46840);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v14 )
      SLSendPolicyChangeNotifications(a1);
  }
  return (unsigned int)v52;
}
