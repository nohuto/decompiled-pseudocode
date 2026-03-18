/*
 * XREFs of ldevLoadDriver @ 0x1C0075290
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00771B8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C007A810 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ldevUnloadImage @ 0x1C0075120 (ldevUnloadImage.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C0078CE0 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00792B8 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ldevLoadImage @ 0x1C00BC1D0 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C00BC4F0 (MakeSystemRelativePath.c)
 *     FreeSystemRelativePath @ 0x1C00BC5F0 (FreeSystemRelativePath.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C00C5210 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 *     _wcsicmp @ 0x1C00D60C0 (_wcsicmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     WinSqmSetString @ 0x1C0167D5C (WinSqmSetString.c)
 */

struct _LDEV *__fastcall ldevLoadDriver(PCWSTR Source, int a2, int a3)
{
  int v6; // r13d
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _LDEV *Image; // rbx
  int v11; // eax
  __int64 v12; // rcx
  const wchar_t *v14; // rcx
  unsigned int (__fastcall *v15)(__int64, _QWORD, PCWSTR *); // rax
  __int64 v16; // rcx
  unsigned int (__fastcall *v17)(__int64, __int64, PFILE_OBJECT, __int64); // rax
  __int64 v18; // rcx
  PCWSTR v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h]
  PWSTR Buffer; // [rsp+40h] [rbp-20h]
  BOOL v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+4Ch] [rbp-14h]
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-10h] BYREF
  int v25; // [rsp+90h] [rbp+30h] BYREF

  v25 = 0;
  WdLogSingleEntry1(4LL, Source);
  if ( !Source || !*Source )
    return 0LL;
  v6 = 0;
  v7 = 0;
  Destination = 0LL;
  if ( a2 == 1 )
  {
    if ( wcsicmp(Source, L"WORKERDD") && wcsicmp(Source, L"TSDDD") )
    {
      if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() && (unsigned int)(a3 - 2) <= 1 )
      {
        if ( gbForceCddRemoteSessionBitmapSupport )
          a3 = 3;
        v6 = 1;
        if ( !(unsigned int)MakeSystemRelativePath(Source, &Destination) )
        {
          WdLogSingleEntry0(2LL);
          return 0LL;
        }
      }
    }
    else
    {
      v7 = 1;
    }
  }
  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
  if ( v7 )
  {
    Image = ldevBindDisplayStub();
    v11 = 1;
  }
  else
  {
    v19 = Source;
    LODWORD(v20) = a2;
    v14 = L"cdd";
    if ( !v6 )
      LODWORD(v14) = (_DWORD)Source;
    HIDWORD(v20) = a3;
    Image = (struct _LDEV *)ldevLoadImage((_DWORD)v14, 0, (unsigned int)&v25, 1, v6, (__int64)&v19);
    v11 = v25;
  }
  if ( !Image )
    goto LABEL_15;
  if ( v11 )
  {
    WdLogSingleEntry0(5LL);
LABEL_15:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v12);
    }
    goto LABEL_17;
  }
  Buffer = Destination.Buffer;
  v19 = 0LL;
  v22 = a3 == 3;
  v20 = 0LL;
  v23 = 0;
  if ( a2 == 4 )
    WinSqmSetString(v9, v8, Source);
  v15 = *(unsigned int (__fastcall **)(__int64, _QWORD, PCWSTR *))(*((_QWORD *)Image + 2) + 32LL);
  if ( !v15
    || !v15(196865LL, (unsigned int)(16 * (v6 + 1)), &v19)
    || (unsigned int)((_DWORD)v19 - 0x20000) > 0x10101
    || !(unsigned int)ldevFillTable(Image, &v19) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v18);
    }
    goto LABEL_39;
  }
  *((_DWORD *)Image + 6) = a2;
  EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v16);
  }
  v17 = *(unsigned int (__fastcall **)(__int64, __int64, PFILE_OBJECT, __int64))(*((_QWORD *)Image + 112) + 616LL);
  if ( !v17 )
    goto LABEL_32;
  if ( !v17(qword_1C0297058, qword_1C0297050, FileObject, qword_1C0297060) )
  {
LABEL_39:
    ldevUnloadImage((__int64 *)Image);
    Image = 0LL;
    WdLogSingleEntry0(5LL);
    goto LABEL_17;
  }
  *((_DWORD *)Image + 15) = 1;
LABEL_32:
  WdLogSingleEntry0(5LL);
LABEL_17:
  if ( v6 )
    FreeSystemRelativePath(&Destination);
  WdLogSingleEntry1(5LL, Image);
  return Image;
}
