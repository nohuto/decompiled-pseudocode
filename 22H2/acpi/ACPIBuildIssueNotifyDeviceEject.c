/*
 * XREFs of ACPIBuildIssueNotifyDeviceEject @ 0x1C004B8F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDockIsDockDevice @ 0x1C0020C40 (ACPIDockIsDockDevice.c)
 */

void __fastcall ACPIBuildIssueNotifyDeviceEject(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx

  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( RootDeviceExtension )
  {
    if ( (*(_QWORD *)(a2 + 8) & 0x8000000000000LL) != 0 || !ACPIDockIsDockDevice(*(__int64 **)(a2 + 720)) )
    {
      v4 = (_QWORD *)a2;
LABEL_11:
      if ( v4 && (v4[1] & 0x208) == 0x200LL )
        IoRequestDeviceEject((PDEVICE_OBJECT)v4[93]);
    }
    else
    {
      v3 = *(_QWORD **)(RootDeviceExtension + 760);
      while ( v3 != (_QWORD *)(RootDeviceExtension + 760) )
      {
        v4 = v3 - 97;
        v3 = (_QWORD *)*v3;
        if ( v4 && (v4[1] & 0x200000000000000LL) != 0 && v4[23] == a2 )
          goto LABEL_11;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
