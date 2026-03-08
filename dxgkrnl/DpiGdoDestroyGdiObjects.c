/*
 * XREFs of DpiGdoDestroyGdiObjects @ 0x1C03A5B8C
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C0202548 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0396844 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     DpiAppendNumberToString @ 0x1C020301C (DpiAppendNumberToString.c)
 *     DxgkReleaseGdiViewId @ 0x1C03521F8 (DxgkReleaseGdiViewId.c)
 */

__int64 __fastcall DpiGdoDestroyGdiObjects(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  NTSTATUS v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  PCWSTR ValueName[2]; // [rsp+30h] [rbp-38h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  KeWaitForSingleObject((PVOID)(v1 + 3600), Executive, 0, 0, 0LL);
  v2 = (_QWORD *)(v1 + 3584);
  while ( 1 )
  {
    v3 = (_QWORD *)*v2;
    if ( (_QWORD *)*v2 == v2 )
      break;
    SymbolicLinkName = 0LL;
    v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)v3 + 2, v3, File, 1u, 0x20u);
    v5 = v4;
    if ( v4 < 0 )
    {
      WdLogSingleEntry3(0LL, 275LL, 21LL, v4);
      goto LABEL_17;
    }
    IoSetDeviceInterfaceState((PUNICODE_STRING)v3 + 10, 0);
    v6 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v7 = (_QWORD *)v3[1], (_QWORD *)*v7 != v3) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    --*(_DWORD *)(v1 + 3656);
    KeReleaseMutex((PRKMUTEX)(v1 + 3600), 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
    IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)v3 + 2, v3, 0x20u);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 168), 1u);
    KeWaitForSingleObject((PVOID)(v1 + 3600), Executive, 0, 0, 0LL);
    if ( !*(_BYTE *)(v1 + 2743) )
    {
      v8 = v3[3];
      *(_OWORD *)ValueName = 0LL;
      v9 = *(_QWORD *)(v8 + 64);
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 64LL) + 2743LL)
        && (int)DpiAppendNumberToString(L"\\Device\\Video", *(_DWORD *)(v9 + 152), (PUNICODE_STRING)ValueName) >= 0 )
      {
        RtlDeleteRegistryValue(4u, L"VIDEO", ValueName[1]);
        RtlFreeUnicodeString((PUNICODE_STRING)ValueName);
      }
      if ( (int)DpiAppendNumberToString(L"\\DosDevices\\DISPLAY", *((_DWORD *)v3 + 38) + 1, &SymbolicLinkName) >= 0 )
      {
        IoDeleteSymbolicLink(&SymbolicLinkName);
        RtlFreeUnicodeString(&SymbolicLinkName);
      }
      RtlFreeUnicodeString((PUNICODE_STRING)v3 + 10);
    }
    DxgkReleaseGdiViewId(*(_BYTE *)(v1 + 2743), *(_QWORD *)(v1 + 5744), *((_DWORD *)v3 + 38), 0);
    IoDeleteDevice((PDEVICE_OBJECT)v3[3]);
  }
  v5 = 0;
LABEL_17:
  KeReleaseMutex((PRKMUTEX)(v1 + 3600), 0);
  return v5;
}
