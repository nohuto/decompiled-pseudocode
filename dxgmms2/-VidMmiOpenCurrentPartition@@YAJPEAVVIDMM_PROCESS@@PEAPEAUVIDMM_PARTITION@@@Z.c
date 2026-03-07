__int64 __fastcall VidMmiOpenCurrentPartition(struct VIDMM_PROCESS *a1, struct VIDMM_PARTITION **a2)
{
  __int64 v3; // rdi
  __int64 v4; // r15
  int v5; // r14d
  int v6; // eax
  __int64 v7; // rsi
  void *v8; // r12
  struct _RTL_BALANCED_NODE *v9; // rbx
  int v10; // eax
  unsigned int v11; // edx
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  PVOID v16; // rax
  struct _RTL_BALANCED_NODE *v17; // rax
  struct _RTL_BALANCED_NODE *v18; // r14
  void *v19; // r12
  PVOID Object; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  struct VIDMM_PARTITION **v22; // [rsp+60h] [rbp-A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v24[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+88h] [rbp-78h]
  int v27; // [rsp+90h] [rbp-70h]
  int v28; // [rsp+94h] [rbp-6Ch]
  __int128 v29; // [rsp+98h] [rbp-68h]
  _QWORD v30[30]; // [rsp+A8h] [rbp-58h] BYREF

  v22 = a2;
  v3 = 0LL;
  v4 = -1LL;
  memset(v30, 0, sizeof(v30));
  v5 = 0;
  if ( *(_BYTE *)(((__int64 (*)(void))DxgCoreInterface[3])() + 304480) )
  {
    if ( *(_BYTE *)(*((_QWORD *)a1 + 4) + 590LL) )
    {
      v24[1] = 0;
      v28 = 0;
      v21 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"\\??\\MemoryPartitionGraphics");
      v24[0] = 48;
      p_DestinationString = &DestinationString;
      v25 = 0LL;
      v27 = 64;
      v29 = 0LL;
      if ( (int)ZwOpenPartition(&v21, 2031619LL, v24) >= 0 )
      {
        v4 = v21;
        v5 = 1;
      }
    }
  }
  HIDWORD(v30[0]) = -1;
  LODWORD(v30[1]) = -1;
  v6 = ZwManagePartition(v4, 0LL, 0LL, v30, 240);
  v7 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(1LL, v6);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to get partition information from NtManagedPartition. Status=0x%.8x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_37;
  }
  v8 = (void *)LODWORD(v30[29]);
  ExAcquirePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  v9 = VIDMM_PARTITION::_PartitionTree;
  while ( v9 )
  {
    v10 = CompareVidMmPartitionById(v8, v9);
    if ( v10 < 0 )
    {
      v9 = v9->Children[0];
    }
    else
    {
      if ( v10 <= 0 )
        break;
      v9 = v9->Children[1];
    }
  }
  if ( !v9 )
  {
    v13 = v30[6] << 12;
    v14 = operator new(80LL, 1647667542LL, 256LL);
    v3 = v14;
    if ( !v14 )
    {
      v3 = 0LL;
      _InterlockedIncrement(&dword_1C00768CC);
      WdLogSingleEntry1(6LL, 208LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"Couldn't allocate memory for vidmmpartition.",
        208LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v7) = -1073741801;
      ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
      goto LABEL_37;
    }
    *(_DWORD *)(v14 + 32) = (_DWORD)v8;
    *(_QWORD *)(v14 + 24) = 0LL;
    *(_DWORD *)(v14 + 36) = 0;
    *(_QWORD *)(v14 + 40) = 0LL;
    *(_QWORD *)(v14 + 56) = 0LL;
    *(_QWORD *)(v14 + 64) = 0LL;
    *(_DWORD *)(v14 + 72) = 0;
    *(_QWORD *)(v14 + 48) = v13;
    LODWORD(v7) = VIDMM_PARTITION::Initialize((VIDMM_PARTITION *)v14);
    if ( (int)v7 < 0
      || (LODWORD(v7) = VIDMM_GLOBAL::InitializePartitionForAllAdapters((struct VIDMM_PARTITION *)v3), (int)v7 < 0) )
    {
      WdLogSingleEntry0(3LL);
    }
    else
    {
      v16 = 0LL;
      if ( v4 == -1
        || (Object = 0LL,
            v7 = ObReferenceObjectByHandle((HANDLE)v4, 0, PsPartitionType, 0, &Object, 0LL),
            v16 = Object,
            (int)v7 >= 0) )
      {
        v19 = (void *)*(unsigned int *)(v3 + 32);
        LOBYTE(v15) = 0;
        *(_QWORD *)(v3 + 24) = v16;
        v9 = (struct _RTL_BALANCED_NODE *)v3;
        *(_DWORD *)(v3 + 72) = v5 | *(_DWORD *)(v3 + 72) & 0xFFFFFFFE;
        v18 = VIDMM_PARTITION::_PartitionTree;
        if ( VIDMM_PARTITION::_PartitionTree )
        {
          while ( 1 )
          {
            if ( (int)CompareVidMmPartitionById(v19, v18) < 0 )
            {
              v17 = v18->Children[0];
              if ( !v18->Children[0] )
              {
                LOBYTE(v15) = 0;
                break;
              }
            }
            else
            {
              v17 = v18->Children[1];
              if ( !v17 )
              {
                LOBYTE(v15) = 1;
                break;
              }
            }
            v18 = v17;
          }
        }
        RtlAvlInsertNodeEx(&VIDMM_PARTITION::_PartitionTree, v18, v15, v3);
        goto LABEL_10;
      }
      WdLogSingleEntry1(1LL, v7);
      ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to reference partition object, Status=0x%.8x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
LABEL_36:
    VIDMM_PARTITION::`scalar deleting destructor'((PVOID)v3, v11);
    v3 = 0LL;
    goto LABEL_37;
  }
LABEL_10:
  v3 = (__int64)v9;
  _InterlockedIncrement((volatile signed __int32 *)&v9[1].Right + 1);
  ExReleasePushLockExclusiveEx(&VIDMM_PARTITION::_PartitionLock, 0LL);
  *((_QWORD *)a1 + 37) = v4;
  if ( (int)v7 >= 0 )
    goto LABEL_11;
  if ( v9 )
    goto LABEL_36;
LABEL_37:
  if ( v4 != -1 )
    ObCloseHandle((HANDLE)v4, 0);
LABEL_11:
  *v22 = (struct VIDMM_PARTITION *)v3;
  return (unsigned int)v7;
}
