/*
 * XREFs of ldevLoadDriver @ 0x1C0015500
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0013658 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0015254 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ldevUnloadImage @ 0x1C00153B0 (ldevUnloadImage.c)
 *     ldevLoadImage @ 0x1C00157E0 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C0015B10 (MakeSystemRelativePath.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C0015C00 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 *     FreeSystemRelativePath @ 0x1C0015C20 (FreeSystemRelativePath.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C00A75EC (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00A76B8 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     _wcsicmp @ 0x1C00C5384 (_wcsicmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     WinSqmSetString @ 0x1C013A668 (WinSqmSetString.c)
 */

struct _LDEV *__fastcall ldevLoadDriver(PCWSTR Source, int a2, int a3)
{
  __int64 v6; // rax
  int v7; // r15d
  int v8; // ebx
  const wchar_t *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _LDEV *Image; // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  HSEMAPHORE v16; // rcx
  __int64 v17; // rax
  unsigned int (__fastcall *v19)(__int64, _QWORD, PCWSTR *); // rax
  __int64 v20; // rdx
  HSEMAPHORE v21; // rcx
  unsigned int (__fastcall *v22)(__int64, __int64, PFILE_OBJECT, __int64); // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  PCWSTR v27; // [rsp+30h] [rbp-30h] BYREF
  __int64 v28; // [rsp+38h] [rbp-28h]
  PWSTR Buffer; // [rsp+40h] [rbp-20h]
  BOOL v30; // [rsp+48h] [rbp-18h]
  int v31; // [rsp+4Ch] [rbp-14h]
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-10h] BYREF
  int v33; // [rsp+90h] [rbp+30h] BYREF

  v33 = 0;
  v6 = WdLogNewEntry5_WdEvent();
  *(_QWORD *)(v6 + 24) = Source;
  WdLogEvent5_WdEvent(v6);
  if ( !Source || !*Source )
    return 0LL;
  v7 = 0;
  v8 = 0;
  Destination = 0LL;
  if ( a2 == 1 )
  {
    if ( wcsicmp(Source, L"WORKERDD") && wcsicmp(Source, L"TSDDD") )
    {
      if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() && (unsigned int)(a3 - 2) <= 1 )
      {
        if ( gbForceCddRemoteSessionBitmapSupport )
          a3 = 3;
        v7 = 1;
        if ( !(unsigned int)MakeSystemRelativePath(Source, &Destination) )
        {
          v26 = WdLogNewEntry5_WdError(v25, v24);
          WdLogEvent5_WdError(v26);
          return 0LL;
        }
      }
    }
    else
    {
      v8 = 1;
    }
  }
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
  if ( v8 )
  {
    Image = ldevBindDisplayStub();
    v13 = 1;
  }
  else
  {
    v27 = Source;
    LODWORD(v28) = a2;
    v9 = L"cdd";
    if ( !v7 )
      LODWORD(v9) = (_DWORD)Source;
    HIDWORD(v28) = a3;
    Image = (struct _LDEV *)ldevLoadImage((_DWORD)v9, 0, (unsigned int)&v33, 1, v7, (__int64)&v27);
    v13 = v33;
  }
  if ( !Image )
    goto LABEL_15;
  if ( v13 )
  {
    v14 = WdLogNewEntry5_WdTrace(v11, v10);
    WdLogEvent5_WdTrace(v14);
LABEL_15:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    v16 = ghsemDriverMgmt;
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
    goto LABEL_17;
  }
  Buffer = Destination.Buffer;
  v27 = 0LL;
  v30 = a3 == 3;
  v28 = 0LL;
  v31 = 0;
  if ( a2 == 4 )
    WinSqmSetString(v11, v10, Source);
  v19 = *(unsigned int (__fastcall **)(__int64, _QWORD, PCWSTR *))(*((_QWORD *)Image + 2) + 32LL);
  if ( !v19
    || !v19(196865LL, (unsigned int)(16 * (v7 + 1)), &v27)
    || (unsigned int)((_DWORD)v27 - 0x20000) > 0x10101
    || !(unsigned int)ldevFillTable(Image, &v27) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion();
    }
LABEL_39:
    ldevUnloadImage((__int64 *)Image);
    Image = 0LL;
    goto LABEL_31;
  }
  *((_DWORD *)Image + 6) = a2;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  v21 = ghsemDriverMgmt;
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion();
  }
  v22 = *(unsigned int (__fastcall **)(__int64, __int64, PFILE_OBJECT, __int64))(*((_QWORD *)Image + 112) + 616LL);
  if ( !v22 )
    goto LABEL_31;
  if ( !v22(qword_1C0252278, qword_1C0252270, FileObject, qword_1C0252280) )
    goto LABEL_39;
  *((_DWORD *)Image + 15) = 1;
LABEL_31:
  v23 = WdLogNewEntry5_WdTrace(v21, v20);
  WdLogEvent5_WdTrace(v23);
LABEL_17:
  if ( v7 )
    FreeSystemRelativePath(&Destination);
  v17 = WdLogNewEntry5_WdTrace(v16, v15);
  *(_QWORD *)(v17 + 24) = Image;
  WdLogEvent5_WdTrace(v17);
  return Image;
}
