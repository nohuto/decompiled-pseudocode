/*
 * XREFs of ldevLoadDriver @ 0x1C0017300
 * Callers:
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00171B4 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x1C00175BC (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z @ 0x1C00176EC (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@W4_LDEVTYPE@@@Z.c)
 *     ldevUnloadImage @ 0x1C0017800 (ldevUnloadImage.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C0044400 (EngAcquireSemaphore.c)
 *     ldevLoadImage @ 0x1C00A5EA0 (ldevLoadImage.c)
 *     MakeSystemRelativePath @ 0x1C00A6160 (MakeSystemRelativePath.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x1C00C4984 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 *     _wcsicmp @ 0x1C00CE2D0 (_wcsicmp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     FreeSystemRelativePath @ 0x1C016D068 (FreeSystemRelativePath.c)
 */

struct _LDEV *__fastcall ldevLoadDriver(PCWSTR Source, unsigned int a2, int a3)
{
  int v3; // ebx
  int v4; // r14d
  int v8; // r15d
  __int64 v9; // rdi
  struct _LDEV *Image; // rbx
  int v11; // eax
  struct _ERESOURCE *v12; // rcx
  const wchar_t *v14; // rbx
  unsigned int (__fastcall *v15)(__int64, _QWORD, PCWSTR *); // rax
  struct _ERESOURCE *v16; // rcx
  unsigned int (__fastcall *v17)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _ERESOURCE *v18; // rcx
  PCWSTR v19; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-28h]
  PWSTR Buffer; // [rsp+40h] [rbp-20h]
  BOOL v22; // [rsp+48h] [rbp-18h]
  int v23; // [rsp+4Ch] [rbp-14h]
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-10h] BYREF
  int v25; // [rsp+90h] [rbp+30h] BYREF

  v3 = 0;
  v4 = a3;
  v25 = 0;
  WdLogSingleEntry1(4LL, Source);
  if ( !Source || !*Source )
    return 0LL;
  v8 = 0;
  Destination = 0LL;
  v9 = *(_QWORD *)(SGDGetSessionState() + 24);
  if ( a2 != 1 )
    goto LABEL_7;
  if ( !wcsicmp(Source, L"WORKERDD") || !wcsicmp(Source, L"TSDDD") )
  {
    v3 = 1;
    goto LABEL_7;
  }
  if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() && (unsigned int)(v4 - 2) <= 1 )
  {
    v8 = 1;
    v4 = 3;
    if ( !*(_DWORD *)(v9 + 1224) )
      v4 = a3;
    if ( !(unsigned int)MakeSystemRelativePath(Source, &Destination) )
    {
      WdLogSingleEntry0(2LL);
      return 0LL;
    }
  }
LABEL_7:
  EngAcquireSemaphore(*(HSEMAPHORE *)(v9 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v9 + 8), 16LL);
  if ( v3 )
  {
    Image = ldevBindDisplayStub();
    v11 = 1;
  }
  else
  {
    v14 = L"CDD";
    v19 = Source;
    v20 = __PAIR64__(v4, a2);
    wcsicmp(Source, L"CDD");
    if ( !v8 )
      LODWORD(v14) = (_DWORD)Source;
    Image = (struct _LDEV *)ldevLoadImage((_DWORD)v14, 0, (unsigned int)&v25, 1, v8, (__int64)&v19);
    v11 = v25;
  }
  if ( !Image )
    goto LABEL_12;
  if ( v11 )
  {
    WdLogSingleEntry0(5LL);
LABEL_12:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v9 + 8));
    v12 = *(struct _ERESOURCE **)(v9 + 8);
    if ( v12 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v12);
      PsLeavePriorityRegion();
    }
    goto LABEL_14;
  }
  v19 = 0LL;
  Buffer = Destination.Buffer;
  v20 = 0LL;
  v22 = v4 == 3;
  v23 = 0;
  v15 = *(unsigned int (__fastcall **)(__int64, _QWORD, PCWSTR *))(*((_QWORD *)Image + 2) + 32LL);
  if ( !v15
    || !v15(196865LL, (unsigned int)(16 * (v8 + 1)), &v19)
    || (unsigned int)((_DWORD)v19 - 0x20000) > 0x10101
    || !(unsigned int)ldevFillTable(Image, &v19) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v9 + 8));
    v18 = *(struct _ERESOURCE **)(v9 + 8);
    if ( v18 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v18);
      PsLeavePriorityRegion();
    }
    goto LABEL_37;
  }
  *((_DWORD *)Image + 6) = a2;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v9 + 8));
  v16 = *(struct _ERESOURCE **)(v9 + 8);
  if ( v16 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v16);
    PsLeavePriorityRegion();
  }
  v17 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)Image + 112) + 616LL);
  if ( !v17 )
    goto LABEL_30;
  if ( !v17(*(_QWORD *)(v9 + 3040), *(_QWORD *)(v9 + 3032), *(_QWORD *)(v9 + 3024), *(_QWORD *)(v9 + 3048)) )
  {
LABEL_37:
    ldevUnloadImage(Image);
    Image = 0LL;
    WdLogSingleEntry0(5LL);
    goto LABEL_14;
  }
  *((_DWORD *)Image + 15) = 1;
LABEL_30:
  WdLogSingleEntry0(5LL);
LABEL_14:
  if ( v8 )
    FreeSystemRelativePath(&Destination);
  WdLogSingleEntry1(5LL, Image);
  return Image;
}
