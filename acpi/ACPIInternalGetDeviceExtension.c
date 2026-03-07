__int64 __fastcall ACPIInternalGetDeviceExtension(ULONG_PTR BugCheckParameter3)
{
  KIRQL v2; // al
  __int64 v3; // rbx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  v3 = *(_QWORD *)(BugCheckParameter3 + 64);
  if ( v3 && *(_DWORD *)(v3 + 16) != 1599293264 )
    KeBugCheckEx(0xA3u, 2uLL, 0x901A5uLL, BugCheckParameter3, *(_QWORD *)(BugCheckParameter3 + 64));
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v2);
  return v3;
}
