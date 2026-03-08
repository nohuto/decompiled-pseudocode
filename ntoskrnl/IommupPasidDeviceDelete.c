/*
 * XREFs of IommupPasidDeviceDelete @ 0x14050C384
 * Callers:
 *     IommupDeviceDisableSvm @ 0x140930CBC (IommupDeviceDisableSvm.c)
 *     IommupDeviceEnableSvm @ 0x140930DD4 (IommupDeviceEnableSvm.c)
 *     IommuPasidDeviceDelete @ 0x1409328C0 (IommuPasidDeviceDelete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     IommuFreeLibraryContext @ 0x140520A48 (IommuFreeLibraryContext.c)
 *     ExpFreeAsid @ 0x14060B464 (ExpFreeAsid.c)
 */

__int64 __fastcall IommupPasidDeviceDelete(__int64 a1)
{
  unsigned int v1; // esi
  volatile signed __int64 *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  unsigned int v7; // eax
  __int64 v8; // rcx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 24) )
    return 3221227272LL;
  v4 = (volatile signed __int64 *)(*(_QWORD *)(a1 + 16) + 376LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v4, 0LL);
  v5 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || (v6 = *(_QWORD **)(a1 + 8), *v6 != a1) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( !HalpHvIommu )
  {
    v7 = IommuFreeLibraryContext(*(_QWORD *)(a1 + 56));
    *(_QWORD *)(a1 + 56) = 0LL;
    v1 = v7;
  }
  v8 = *(unsigned int *)(a1 + 48);
  if ( (_DWORD)v8 )
    ExpFreeAsid((unsigned int)(v8 - 1), 0LL);
  HalpMmAllocCtxFree(v8, a1);
  return v1;
}
