__int64 __fastcall DpiMiracastFindDisplayAdapterFdoIhv(__int64 *a1)
{
  unsigned int v2; // edi
  struct _IO_REMOVE_LOCK *FdoFromDevice; // rax
  __int64 v4; // rbx
  int v5; // ecx
  __int64 result; // rax

  v2 = -1073741275;
  FdoFromDevice = (struct _IO_REMOVE_LOCK *)DpiGetFdoFromDevice(qword_1C013B740);
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
        && *(_DWORD *)(v4 + 3240) != -1
        && *(_QWORD *)(v4 + 4872) )
      {
        v2 = 0;
        goto LABEL_11;
      }
      if ( *(_BYTE *)(v4 + 484) )
        DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
      ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
      KeLeaveCriticalRegion();
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 64), (PVOID)v4, 0x20u);
    }
    v4 = 0LL;
  }
LABEL_11:
  result = v2;
  *a1 = v4;
  return result;
}
