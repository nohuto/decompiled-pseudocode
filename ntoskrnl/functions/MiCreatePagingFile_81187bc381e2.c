__int64 __fastcall MiCreatePagingFile(
        _OWORD *a1,
        LARGE_INTEGER *a2,
        unsigned __int64 *a3,
        KPROCESSOR_MODE a4,
        int a5,
        unsigned __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 QuadPart; // rax
  unsigned __int64 v13; // rbx
  PVOID Pool; // rax
  PVOID v15; // r15
  unsigned __int16 v16; // cx
  int Acl; // r14d
  ULONG v18; // edi
  ULONG v19; // edi
  ACL *v20; // rax
  ACL *v21; // r13
  unsigned int v22; // edi
  struct _FILE_OBJECT *v23; // r12
  unsigned __int64 DeviceType; // rcx
  __int64 v25; // rax
  __int64 Pagefile; // rax
  __int64 v27; // rbx
  int inserted; // esi
  __int64 v30; // r15
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 *v32; // r13
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // r9
  __int64 v36; // r8
  unsigned int v37; // r11d
  __int64 v38; // rdx
  __int16 v39; // r9
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  __int64 v44; // rbx
  char v45; // al
  bool v46; // zf
  int v47; // eax
  __int64 PageFileSpaceBitmaps; // rax
  __int64 v49; // r8
  int v50; // eax
  HANDLE FileHandle; // [rsp+70h] [rbp-108h] BYREF
  __int64 v52; // [rsp+78h] [rbp-100h]
  LARGE_INTEGER AllocationSize; // [rsp+80h] [rbp-F8h] BYREF
  struct _KTHREAD *v54; // [rsp+88h] [rbp-F0h]
  void *Src[2]; // [rsp+90h] [rbp-E8h] BYREF
  ACL *v56; // [rsp+A0h] [rbp-D8h]
  PVOID v57; // [rsp+A8h] [rbp-D0h] BYREF
  PVOID P; // [rsp+B0h] [rbp-C8h]
  PVOID Object[2]; // [rsp+C0h] [rbp-B8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-A8h] BYREF
  unsigned __int64 FileInformation; // [rsp+E0h] [rbp-98h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-90h] BYREF
  unsigned __int64 v63; // [rsp+F0h] [rbp-88h]
  ULONG_PTR v64; // [rsp+F8h] [rbp-80h]
  unsigned __int64 v65; // [rsp+100h] [rbp-78h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+108h] [rbp-70h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+138h] [rbp-40h] BYREF
  __int64 v68; // [rsp+158h] [rbp-20h]
  unsigned int v69; // [rsp+1A0h] [rbp+28h]

  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  *(_OWORD *)Src = 0LL;
  AllocationSize.QuadPart = 0LL;
  FileInformation = 0LL;
  v62 = 0LL;
  LODWORD(Object[0]) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v68 = 0LL;
  v56 = 0LL;
  if ( (a5 & 0x7FFFFF) != 0 || a5 < 0 && (a5 & 0x42000000) != 0 || (a5 & 0xFF7FFFFF) != 0 && (a5 & 0x800000) != 0 )
    return 3221225714LL;
  if ( a4 )
  {
    if ( !SeSinglePrivilegeCheck(SeCreatePagefilePrivilege, a4) || PsIsCurrentThreadInServerSilo(v11, v10) )
      return 3221225569LL;
    if ( ((unsigned __int8)a1 & 3) != 0 || ((unsigned __int8)a3 & 3) != 0 || ((unsigned __int8)a2 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    QuadPart = a2->QuadPart;
    AllocationSize = *a2;
  }
  else
  {
    QuadPart = a2->QuadPart;
    AllocationSize = *a2;
  }
  if ( (unsigned __int64)QuadPart > 0xFFFFFFFE000LL || QuadPart < 0x100000 )
    return 3221225712LL;
  v63 = *a3;
  v13 = v63;
  if ( v63 > 0xFFFFFFFE000LL || QuadPart > (__int64)v63 )
    return 3221225713LL;
  *(_OWORD *)Src = *a1;
  WORD1(Src[0]) = Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0xFFu )
    return 3221225523LL;
  Pool = MiAllocatePool(256, LOWORD(Src[0]), 0x20206D4Du);
  v15 = Pool;
  P = Pool;
  if ( !Pool )
    return 3221225626LL;
  if ( a4 )
  {
    v16 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0])
      && ((char *)Src[1] + LOWORD(Src[0]) > (void *)0x7FFFFFFF0000LL || (char *)Src[1] + LOWORD(Src[0]) < Src[1]) )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v16 = (unsigned __int16)Src[0];
    }
    memmove(Pool, Src[1], v16);
  }
  else
  {
    memmove(Pool, Src[1], LOWORD(Src[0]));
  }
  Src[1] = v15;
  if ( (a5 & 0x800000) != 0 )
    return MiCreateSpecialPurposeMemoryPageFile(
             a6,
             (unsigned __int64)AllocationSize.QuadPart >> 12,
             (unsigned int)(v63 >> 12),
             Src);
  v52 = 0LL;
  FileHandle = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl < 0 )
  {
    v21 = v56;
    goto LABEL_89;
  }
  v18 = RtlLengthSid(SeAliasAdminsSid);
  v19 = RtlLengthSid(SeLocalSystemSid) + 32 + v18;
  v20 = (ACL *)MiAllocatePool(256, v19, 0x6C636144u);
  v21 = v20;
  v56 = v20;
  if ( !v20 )
  {
    Acl = -1073741670;
    goto LABEL_89;
  }
  Acl = RtlCreateAcl(v20, v19, 2u);
  if ( Acl < 0
    || (Acl = RtlpAddKnownAce((__int64)v21, 2u, 0, 2032127, (unsigned __int8 *)SeAliasAdminsSid, 0), Acl < 0)
    || (Acl = RtlpAddKnownAce((__int64)v21, 2u, 0, 2032127, (unsigned __int8 *)SeLocalSystemSid, 0), Acl < 0)
    || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v21, 0), Acl < 0) )
  {
LABEL_89:
    if ( FileHandle )
      ObCloseHandle(FileHandle, 0);
    goto LABEL_91;
  }
  if ( a5 < 0 )
  {
    v22 = 3;
  }
  else
  {
    v22 = 0;
    if ( (a5 & 0x2000000) != 0 )
      v22 = 2;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)Src;
  ObjectAttributes.SecurityDescriptor = SecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  FileInformation = (AllocationSize.QuadPart + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( IoCreateFile(
         &FileHandle,
         0x140003u,
         &ObjectAttributes,
         &IoStatusBlock,
         &AllocationSize,
         6u,
         2u,
         0,
         0x9008u,
         0LL,
         0,
         CreateFileTypeNone,
         0LL,
         0x112u) >= 0 )
  {
    Acl = MiEnablePartitionMappedWrites((_QWORD *)a6);
    if ( Acl >= 0 )
    {
      if ( IoStatusBlock.Status < 0 || (Acl = ZwSetSecurityObject(FileHandle, 4u, SecurityDescriptor), Acl >= 0) )
      {
        ExFreePoolWithTag(v21, 0);
        v21 = 0LL;
        Acl = IoStatusBlock.Status;
        if ( IoStatusBlock.Status >= 0 )
        {
          Acl = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
          if ( Acl >= 0 )
          {
            Acl = IoStatusBlock.Status;
            if ( IoStatusBlock.Status >= 0 )
            {
              Object[0] = 0LL;
              Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, Object, 0LL);
              v23 = (struct _FILE_OBJECT *)Object[0];
              if ( Acl >= 0 )
              {
                DeviceType = IoGetRelatedDeviceObject((PFILE_OBJECT)Object[0])->DeviceType;
                if ( (unsigned int)DeviceType <= 0x36 && (v25 = 0x60000000100100LL, _bittest64(&v25, DeviceType)) )
                {
                  Acl = MiCheckPageFileMapping((__int64)v23);
                  if ( Acl >= 0 )
                  {
                    Acl = IopQueryXxxInformation(v23, 4, 8u, 0, (struct _IRP *)&v62, Object, 0);
                    if ( Acl >= 0 )
                    {
                      if ( (v62 & 0x400000000LL) != 0 )
                      {
                        Acl = -1073741468;
                      }
                      else
                      {
                        Acl = PiPagePathSetState(v23);
                        if ( Acl >= 0 )
                        {
                          FsRtlIssueFileNotificationFsctl(v23);
                          if ( (unsigned __int16 *)a6 != MiSystemPartition
                            || (Acl = MiZeroPageFileFirstPage(v23), Acl >= 0) )
                          {
                            Pagefile = MiCreatePagefile(
                                         a6,
                                         (_DWORD)v23,
                                         (_DWORD)FileHandle,
                                         (unsigned __int64)AllocationSize.QuadPart >> 12,
                                         v13 >> 12,
                                         (__int64)Src,
                                         a5,
                                         1);
                            v27 = Pagefile;
                            if ( Pagefile )
                            {
                              inserted = MiInsertPageFileInList(Pagefile);
                              if ( inserted < 0 )
                              {
                                MiDeletePagefile((PVOID)v27);
                                return (unsigned int)inserted;
                              }
                              else
                              {
                                if ( !byte_140C67AC0
                                  && (unsigned __int16 *)a6 == MiSystemPartition
                                  && (*(_BYTE *)(v27 + 204) & 0x10) == 0 )
                                {
                                  *(_OWORD *)Object = *(_OWORD *)(v27 + 96);
                                  byte_140C67AC0 = IoInitializeCrashDump(FileHandle, Object);
                                }
                                return 0LL;
                              }
                            }
                            return 3221225626LL;
                          }
                          PiPagePathSetState(v23);
                        }
                      }
                    }
                  }
                }
                else
                {
                  Acl = -1073741489;
                }
                goto LABEL_87;
              }
            }
          }
        }
      }
    }
    goto LABEL_89;
  }
  Acl = IoCreateFile(
          &FileHandle,
          0x100002u,
          &ObjectAttributes,
          &IoStatusBlock,
          &AllocationSize,
          6u,
          3u,
          1u,
          0x8008u,
          0LL,
          0,
          CreateFileTypeNone,
          0LL,
          0x112u);
  if ( Acl >= 0 )
  {
    v57 = 0LL;
    Acl = ObReferenceObjectByHandle(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, &v57, 0LL);
    v23 = (struct _FILE_OBJECT *)v57;
    if ( Acl < 0 )
      goto LABEL_89;
    v30 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v54 = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    v32 = (unsigned __int64 *)(a6 + 1080);
    v33 = KeAbPreAcquire(a6 + 1080, 0LL);
    v34 = v33;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a6 + 1080), 0LL) )
      ExfAcquirePushLockExclusiveEx(v32, v33, (__int64)v32);
    v35 = 0LL;
    if ( v34 )
      *(_BYTE *)(v34 + 18) = 1;
    v36 = *(unsigned int *)(a6 + 17048);
    v37 = 0;
    v69 = 0;
    if ( (_DWORD)v36 )
    {
      while ( 1 )
      {
        v38 = *(_QWORD *)(a6 + 8LL * v37 + 17056);
        v39 = *(_WORD *)(v38 + 204);
        if ( (v39 & 0x840) == 0 && *(_QWORD *)(*(_QWORD *)(v38 + 56) + 40LL) == *((_QWORD *)v57 + 5) )
          break;
        v69 = ++v37;
        if ( v37 >= (unsigned int)v36 )
          goto LABEL_70;
      }
      if ( ((~v39 & 0x10) != 0) == ((v22 & 1) == 0) )
      {
        v30 = *(_QWORD *)(a6 + 8LL * v37 + 17056);
LABEL_70:
        v35 = 0LL;
        goto LABEL_71;
      }
      Acl = -1073741811;
      goto LABEL_79;
    }
LABEL_71:
    if ( !v30 )
    {
      Acl = -1073741275;
      goto LABEL_79;
    }
    v40 = v63 >> 12;
    v41 = (unsigned __int64)AllocationSize.QuadPart >> 12;
    v65 = (unsigned int)((unsigned __int64)AllocationSize.QuadPart >> 12);
    if ( *(_QWORD *)(v30 + 16) > v65 )
    {
      Acl = -1073741584;
    }
    else
    {
      v42 = *(_QWORD *)(v30 + 8);
      if ( v42 > (unsigned int)v40 )
      {
        Acl = -1073741583;
      }
      else
      {
        if ( v42 >= (unsigned int)v40 )
        {
LABEL_75:
          v43 = v65;
          if ( v65 > *(_QWORD *)(v30 + 16) )
          {
            while ( v43 <= *(_QWORD *)v30 )
            {
              if ( (unsigned int)MiCheckAndUpdatePagingFileMinimum(v30, v41) )
                goto LABEL_76;
            }
            MiIssuePageExtendRequest(a6, v43 - *(_QWORD *)v30, 1, v69);
            v50 = Acl;
            if ( *(_QWORD *)(v30 + 16) < v43 )
              v50 = -1073741670;
            Acl = v50;
          }
LABEL_76:
          if ( v22 >= 2 )
            *(_WORD *)(v30 + 204) |= 0x80u;
          goto LABEL_78;
        }
        if ( (*(_BYTE *)(v30 + 204) & 0x10) == 0 )
        {
          v52 = (unsigned int)v40 - v42;
          v47 = MiIncreaseCommitLimits(a6, 0LL, v52, 0, 0LL);
          v35 = 0LL;
          if ( !v47 )
          {
            v44 = 0LL;
            Acl = -1073741583;
            CurrentThread = v54;
LABEL_80:
            v45 = _InterlockedExchangeAdd64((volatile signed __int64 *)v32, 0xFFFFFFFFFFFFFFFFuLL);
            if ( (v45 & 2) != 0 && (v45 & 4) == 0 )
              ExfTryToWakePushLock((volatile signed __int64 *)v32);
            KeAbPostRelease((ULONG_PTR)v32);
            v46 = CurrentThread->SpecialApcDisable++ == -1;
            if ( v46
              && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
            {
              KiCheckForKernelApcDelivery();
            }
            if ( v44 )
              MiReduceCommitLimits((_QWORD *)a6, 0LL, v44);
            v21 = v56;
            v15 = P;
LABEL_87:
            if ( v23 )
              ObfDereferenceObject(v23);
            goto LABEL_89;
          }
        }
        v64 = 0LL;
        if ( !*(_QWORD *)(v30 + 216) || (v64 = MiReservePageHash(v40)) != 0 )
        {
          PageFileSpaceBitmaps = MiCreatePageFileSpaceBitmaps((unsigned int)v40, v42, v36, v35);
          if ( PageFileSpaceBitmaps )
          {
            MiExtendPagingFileMaximum(v30, PageFileSpaceBitmaps, v64);
            if ( (unsigned __int64)(*(_QWORD *)(a6 + 17576) + 100LL) > *(_QWORD *)(a6 + 17816)
              && (unsigned int)MiChargeCommit(a6, 0xC8uLL, 0LL) )
            {
              MiReturnCommit(a6, 200LL, v49);
            }
            goto LABEL_75;
          }
        }
        Acl = -1073741670;
      }
    }
LABEL_78:
    CurrentThread = v54;
LABEL_79:
    v44 = v52;
    goto LABEL_80;
  }
  FileHandle = 0LL;
LABEL_91:
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  ExFreePoolWithTag(v15, 0);
  return (unsigned int)Acl;
}
