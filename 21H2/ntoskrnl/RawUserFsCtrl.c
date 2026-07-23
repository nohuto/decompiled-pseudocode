/*
 * XREFs of RawUserFsCtrl @ 0x14076E0B8
 * Callers:
 *     RawFileSystemControl @ 0x1406C9068 (RawFileSystemControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     RawEndOperation @ 0x1402A5638 (RawEndOperation.c)
 *     RawBeginOperation @ 0x1402A586C (RawBeginOperation.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402A5C00 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     FsRtlNotifyVolumeEvent @ 0x14076E2B0 (FsRtlNotifyVolumeEvent.c)
 *     RawQueryFileSystemInformation @ 0x14090FA38 (RawQueryFileSystemInformation.c)
 */

__int64 __fastcall RawUserFsCtrl(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int FileSystemInformation; // ebx
  struct _FILE_OBJECT *v5; // rsi
  char v6; // r12
  int v10; // ebp
  struct _FAST_MUTEX *v12; // r14
  int v13; // eax
  ULONG v14; // edx
  ULONG v15; // edx
  int v16; // eax
  BOOLEAN v17; // r14
  int v18; // eax
  int v19; // eax

  v3 = *(_DWORD *)(a2 + 24);
  FileSystemInformation = 0;
  v5 = *(struct _FILE_OBJECT **)(a2 + 48);
  v6 = 0;
  if ( v3 == 589848 )
  {
    v15 = 3;
    goto LABEL_23;
  }
  if ( *(_DWORD *)(a2 + 24) == 589856 )
  {
    v15 = 1;
LABEL_23:
    FsRtlNotifyVolumeEvent(v5, v15);
  }
  switch ( v3 )
  {
    case 589824:
    case 589828:
    case 589836:
    case 589844:
      v17 = RawBeginOperation(a3, (__int64)v5);
      if ( v17 )
      {
        FileSystemInformation = -1073741822;
LABEL_35:
        if ( v17 )
          RawEndOperation(a3, (__int64)v5);
        goto LABEL_18;
      }
LABEL_40:
      FileSystemInformation = -1073741202;
      goto LABEL_12;
    case 589848:
      v17 = RawBeginOperation(a3, (__int64)v5);
      v18 = 0;
      if ( !v17 )
        v18 = -1073741202;
      FileSystemInformation = v18;
      ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
      v19 = *(_DWORD *)(a3 + 104);
      if ( (v19 & 1) != 0 || *(_DWORD *)(a3 + 108) != 1 )
      {
        FileSystemInformation = -1073741790;
      }
      else
      {
        *(_QWORD *)(a3 + 208) = v5;
        *(_DWORD *)(a3 + 104) = v19 | 1;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 224));
      goto LABEL_35;
    case 589852:
      v12 = (struct _FAST_MUTEX *)(a3 + 224);
      ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
      v13 = *(_DWORD *)(a3 + 104);
      if ( (v13 & 1) != 0 )
      {
        *(_QWORD *)(a3 + 208) = 0LL;
        *(_DWORD *)(a3 + 104) = v13 & 0xFFFFFFFE;
      }
      else
      {
        FileSystemInformation = -1073741782;
      }
      goto LABEL_17;
  }
  if ( v3 != 589856 )
  {
    if ( v3 != 590412 )
    {
      FileSystemInformation = -1073741811;
      goto LABEL_12;
    }
    v17 = RawBeginOperation(a3, (__int64)v5);
    if ( v17 )
    {
      FileSystemInformation = RawQueryFileSystemInformation(a1, a2, a3);
      goto LABEL_35;
    }
    goto LABEL_40;
  }
  v12 = (struct _FAST_MUTEX *)(a3 + 224);
  ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
  v16 = *(_DWORD *)(a3 + 104);
  if ( (v16 & 2) != 0 )
  {
    FileSystemInformation = -1073741202;
  }
  else
  {
    v6 = 1;
    *(_DWORD *)(a3 + 104) = v16 | 2;
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 224));
  if ( v6 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 216));
    ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
    *(_QWORD *)(a3 + 200) = v5;
LABEL_17:
    KeReleaseGuardedMutex(v12);
  }
LABEL_18:
  if ( (FileSystemInformation & 0x80000000) == 0 )
  {
    if ( v3 != 589852 )
      return FileSystemInformation;
    v14 = 5;
LABEL_21:
    FsRtlNotifyVolumeEvent(v5, v14);
    return FileSystemInformation;
  }
LABEL_12:
  v10 = v3 - 589848;
  if ( !v10 )
  {
    v14 = 4;
    goto LABEL_21;
  }
  if ( v10 == 8 )
  {
    v14 = 2;
    goto LABEL_21;
  }
  return FileSystemInformation;
}
