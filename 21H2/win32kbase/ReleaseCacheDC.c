/*
 * XREFs of ReleaseCacheDC @ 0x1C00366B0
 * Callers:
 *     NtUserReleaseDC @ 0x1C0035A80 (NtUserReleaseDC.c)
 *     _ReleaseDC @ 0x1C0038E50 (_ReleaseDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C006FE90 (xxxEnumDisplayMonitors.c)
 *     UserReleaseDC @ 0x1C0091F00 (UserReleaseDC.c)
 * Callees:
 *     DestroyCacheDC @ 0x1C00074F0 (DestroyCacheDC.c)
 *     GreValidateVisrgn @ 0x1C00379D0 (GreValidateVisrgn.c)
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     GreUnlockVisRgn @ 0x1C0038AB0 (GreUnlockVisRgn.c)
 *     IsDeleteHrgnClipSupported @ 0x1C0096514 (IsDeleteHrgnClipSupported.c)
 *     GreCleanDCAndSetOwnerEx @ 0x1C00CBFF0 (GreCleanDCAndSetOwnerEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqz_EtwWriteTransfer @ 0x1C014C9A8 (McTemplateK0pqz_EtwWriteTransfer.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014CA60 (McTemplateK0pz_EtwWriteTransfer.c)
 *     IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C01FC4D4 (IsFlushWEFCOMPOSITEDDCEBoundsSupported.c)
 */

__int64 __fastcall ReleaseCacheDC(__int64 a1, int a2, int a3)
{
  __int64 v3; // rdi
  struct _ERESOURCE *v5; // rbx
  struct _ERESOURCE *v6; // rbx
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // eax
  HDC v12; // rcx
  int v13; // ecx
  int v14; // ecx
  int v16; // eax
  __int64 v17; // rcx

  v3 = a1;
  LODWORD(a1) = (_DWORD)ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      a1,
      (unsigned int)&LockAcquireShared,
      a3,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  v5 = (struct _ERESOURCE *)ghsemGreLock;
  if ( ghsemGreLock )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v5);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(a1, a2, a3, (_DWORD)ghsemGreLock, 2, (__int64)L"ghsemGreLock");
  v6 = (struct _ERESOURCE *)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v6);
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pqz_EtwWriteTransfer(a1, a2, a3, (_DWORD)ghsemDCVisRgn, 3, (__int64)L"ghsemDCVisRgn");
  v7 = (__int64 *)(gpDispInfo + 24);
  v8 = *(_QWORD *)(gpDispInfo + 24);
  if ( !v8 )
  {
LABEL_41:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    UserSetLastError(1425LL);
    return 2LL;
  }
  while ( 1 )
  {
    v9 = *(_QWORD *)(v8 + 8);
    if ( v9 == v3 )
      break;
    v7 = (__int64 *)v8;
    v8 = *(_QWORD *)v8;
    if ( !v8 )
      goto LABEL_41;
  }
  v10 = *(_DWORD *)(v8 + 64);
  if ( v10 < 0 )
  {
    v16 = DestroyCacheDC(v7, v9);
    v17 = *(_QWORD *)(gpDispInfo + 40);
    if ( v16 )
    {
      GreUnlockVisRgn(v17);
      return 1LL;
    }
    goto LABEL_51;
  }
  if ( (v10 & 0x401800) != 0x1000 )
  {
    v17 = *(_QWORD *)(gpDispInfo + 40);
LABEL_51:
    GreUnlockVisRgn(v17);
    return 2LL;
  }
  if ( (v10 & 0x4000) != 0 )
  {
    a1 = *(_QWORD *)(*(_QWORD *)(v8 + 32) + 40LL);
    if ( (*(_BYTE *)(a1 + 27) & 2) != 0 && (int)IsFlushWEFCOMPOSITEDDCEBoundsSupported() >= 0 && qword_1C02576D0 )
      qword_1C02576D0(v8);
  }
  v11 = *(_DWORD *)(v8 + 64);
  if ( (v11 & 2) != 0 )
  {
    if ( qword_1C0256AC0 && (int)qword_1C0256AC0() >= 0 && qword_1C0256AC8 )
      qword_1C0256AC8(v3, 0LL, 0LL, 0LL, 0);
    if ( !(unsigned int)GreCleanDCAndSetOwnerEx(*(HDC *)(v8 + 8)) )
    {
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      return 2LL;
    }
    v12 = *(HDC *)(v8 + 8);
    *(_DWORD *)(v8 + 64) &= ~0x1000u;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_QWORD *)(v8 + 80) = 0LL;
    GreValidateVisrgn(v12);
    if ( (*(_DWORD *)(v8 + 64) & 0x4000) != 0 && qword_1C0256AA0 && (int)qword_1C0256AA0() >= 0 && qword_1C0256AA8 )
      qword_1C0256AA8(*(_QWORD *)(v8 + 8), 0LL);
    if ( ++gnDCECount > 32 && (unsigned int)DestroyCacheDC(v7, *(_QWORD *)(v8 + 8)) )
    {
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      return 1LL;
    }
    v11 = *(_DWORD *)(v8 + 64);
  }
  if ( (v11 & 0xC0) != 0 && ((v11 & 2) != 0 || a2) && (int)IsDeleteHrgnClipSupported() >= 0 && qword_1C02576C0 )
    qword_1C02576C0(v8);
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      a1,
      (unsigned int)&LockRelease,
      v10,
      (_DWORD)ghsemDCVisRgn,
      (__int64)L"ghsemDCVisRgn");
  v13 = (int)ghsemDCVisRgn;
  if ( ghsemDCVisRgn )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDCVisRgn);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v13,
      (unsigned int)&LockRelease,
      v10,
      (_DWORD)ghsemGreLock,
      (__int64)L"ghsemGreLock");
  v14 = (int)ghsemGreLock;
  if ( ghsemGreLock )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemGreLock);
    PsLeavePriorityRegion();
  }
  if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
    McTemplateK0pz_EtwWriteTransfer(
      v14,
      (unsigned int)&LockRelease,
      v10,
      (_DWORD)ghsemDynamicModeChange,
      (__int64)L"ghsemDynamicModeChange");
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  return 0LL;
}
