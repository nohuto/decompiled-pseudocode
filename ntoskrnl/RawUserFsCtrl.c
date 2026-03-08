/*
 * XREFs of RawUserFsCtrl @ 0x14087D8B4
 * Callers:
 *     RawFileSystemControl @ 0x1406F36F8 (RawFileSystemControl.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     RawBeginOperation @ 0x14028DCD8 (RawBeginOperation.c)
 *     RawEndOperation @ 0x14028E08C (RawEndOperation.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14028E0C0 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     FsRtlNotifyVolumeEvent @ 0x1408722A0 (FsRtlNotifyVolumeEvent.c)
 *     RawQueryFileSystemInformation @ 0x1409B58F4 (RawQueryFileSystemInformation.c)
 */

__int64 __fastcall RawUserFsCtrl(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  unsigned int FileSystemInformation; // ebx
  struct _FILE_OBJECT *v5; // rsi
  char v6; // r15
  int v10; // ebp
  struct _FAST_MUTEX *v12; // r14
  int v13; // eax
  int v14; // eax
  ULONG v15; // edx
  BOOLEAN v16; // al
  int v17; // ecx
  BOOLEAN v18; // r14
  int v19; // ecx

  v3 = *(_DWORD *)(a2 + 24);
  FileSystemInformation = 0;
  v5 = *(struct _FILE_OBJECT **)(a2 + 48);
  v6 = 0;
  if ( v3 == 589848 )
  {
    FsRtlNotifyVolumeEvent(v5, 3u);
    goto LABEL_28;
  }
  if ( *(_DWORD *)(a2 + 24) != 589856 )
  {
    if ( v3 == 589824 || v3 == 589828 || v3 == 589836 || v3 == 589844 )
    {
      if ( !RawBeginOperation(a3, *(_QWORD *)(a2 + 48)) )
      {
        FileSystemInformation = -1073741202;
        goto LABEL_12;
      }
      FileSystemInformation = -1073741822;
      goto LABEL_34;
    }
    if ( v3 != 589848 )
    {
      if ( v3 == 589852 )
      {
        v12 = (struct _FAST_MUTEX *)(a3 + 232);
        ExAcquireFastMutex((PFAST_MUTEX)(a3 + 232));
        v14 = *(_DWORD *)(a3 + 112);
        if ( (v14 & 1) != 0 )
        {
          *(_QWORD *)(a3 + 216) = 0LL;
          *(_DWORD *)(a3 + 112) = v14 & 0xFFFFFFFE;
        }
        else
        {
          FileSystemInformation = -1073741782;
        }
        goto LABEL_22;
      }
      if ( v3 != 589856 )
      {
        if ( v3 != 590412 )
        {
          FileSystemInformation = -1073741811;
          goto LABEL_12;
        }
        if ( !RawBeginOperation(a3, *(_QWORD *)(a2 + 48)) )
          return (unsigned int)-1073741202;
        FileSystemInformation = RawQueryFileSystemInformation(a1, a2, a3);
        goto LABEL_34;
      }
      goto LABEL_16;
    }
LABEL_28:
    v16 = RawBeginOperation(a3, (__int64)v5);
    v17 = 0;
    v18 = v16;
    if ( !v16 )
      v17 = -1073741202;
    FileSystemInformation = v17;
    ExAcquireFastMutex((PFAST_MUTEX)(a3 + 232));
    v19 = *(_DWORD *)(a3 + 112);
    if ( (v19 & 1) != 0 || *(_DWORD *)(a3 + 116) != 1 )
    {
      FileSystemInformation = -1073741790;
    }
    else
    {
      *(_QWORD *)(a3 + 216) = v5;
      *(_DWORD *)(a3 + 112) = v19 | 1;
    }
    ExReleaseFastMutex((PFAST_MUTEX)(a3 + 232));
    if ( v18 )
    {
LABEL_34:
      RawEndOperation(a3, (__int64)v5);
      goto LABEL_23;
    }
    goto LABEL_23;
  }
  FsRtlNotifyVolumeEvent(v5, 1u);
LABEL_16:
  v12 = (struct _FAST_MUTEX *)(a3 + 232);
  ExAcquireFastMutex((PFAST_MUTEX)(a3 + 232));
  v13 = *(_DWORD *)(a3 + 112);
  if ( (v13 & 2) != 0 )
  {
    FileSystemInformation = -1073741202;
  }
  else
  {
    v6 = 1;
    *(_DWORD *)(a3 + 112) = v13 | 2;
  }
  ExReleaseFastMutex((PFAST_MUTEX)(a3 + 232));
  if ( v6 )
  {
    ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a3 + 224));
    ExAcquireFastMutex((PFAST_MUTEX)(a3 + 232));
    *(_QWORD *)(a3 + 208) = v5;
LABEL_22:
    ExReleaseFastMutex(v12);
  }
LABEL_23:
  if ( (FileSystemInformation & 0x80000000) == 0 )
  {
    if ( v3 != 589852 )
      return FileSystemInformation;
    v15 = 5;
LABEL_26:
    FsRtlNotifyVolumeEvent(v5, v15);
    return FileSystemInformation;
  }
LABEL_12:
  v10 = v3 - 589848;
  if ( !v10 )
  {
    v15 = 4;
    goto LABEL_26;
  }
  if ( v10 == 8 )
  {
    v15 = 2;
    goto LABEL_26;
  }
  return FileSystemInformation;
}
