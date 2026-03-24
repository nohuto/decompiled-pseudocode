/*
 * XREFs of DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C0174C90
 * Callers:
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0174DC4 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdo @ 0x1C02CE404 (DpiMiracastFindDisplayAdapterFdo.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001FC54 (DpiCheckForOutstandingD3Requests.c)
 *     DpiGetFdoFromDevice @ 0x1C001FD24 (DpiGetFdoFromDevice.c)
 *     DpiEnableD3Requests @ 0x1C00ECD4C (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiMiracastFindDisplayAdapterFdoIhv(__int64 *a1)
{
  unsigned int v2; // edi
  struct _IO_REMOVE_LOCK *FdoFromDevice; // rax
  __int64 v4; // rbx
  int v5; // ecx
  __int64 result; // rax

  v2 = -1073741275;
  FdoFromDevice = (struct _IO_REMOVE_LOCK *)DpiGetFdoFromDevice(qword_1C00B2DB8);
  v4 = (__int64)FdoFromDevice;
  if ( FdoFromDevice )
  {
    if ( IoAcquireRemoveLockEx(FdoFromDevice + 2, FdoFromDevice, File, 1u, 0x20u) >= 0 )
    {
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v4 + 484) )
        DpiCheckForOutstandingD3Requests(v4);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
      v5 = *(_DWORD *)(v4 + 236);
      if ( (v5 == 2 || *(_DWORD *)(v4 + 240) == 2 && ((v5 - 3) & 0xFFFFFFFC) == 0 && v5 != 4)
        && *(_DWORD *)(v4 + 3224) != -1
        && *(_QWORD *)(v4 + 4928) )
      {
        v2 = 0;
        goto LABEL_9;
      }
      if ( *(_BYTE *)(v4 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 64), (PVOID)v4, 0x20u);
    }
    v4 = 0LL;
  }
LABEL_9:
  result = v2;
  *a1 = v4;
  return result;
}
