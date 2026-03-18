/*
 * XREFs of ACPIBuildIssueNotifyDeviceEject @ 0x1C000D5F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDockIsDockDevice @ 0x1C0009A34 (ACPIDockIsDockDevice.c)
 */

void __fastcall ACPIBuildIssueNotifyDeviceEject(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  _QWORD *v4; // rcx

  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  if ( RootDeviceExtension )
  {
    if ( _bittest64((const signed __int64 *)(a2 + 8), 0x33u) || !ACPIDockIsDockDevice() )
    {
      v4 = (_QWORD *)a2;
      if ( a2 )
      {
LABEL_11:
        if ( (v4[1] & 0x208) == 0x200LL )
          IoRequestDeviceEject((PDEVICE_OBJECT)v4[98]);
      }
    }
    else
    {
      v3 = *(_QWORD **)(RootDeviceExtension + 800);
      while ( v3 != (_QWORD *)(RootDeviceExtension + 800) )
      {
        v4 = v3 - 102;
        v3 = (_QWORD *)*v3;
        if ( v4 && _bittest64(v4 + 1, 0x39u) && v4[23] == a2 )
          goto LABEL_11;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
}
