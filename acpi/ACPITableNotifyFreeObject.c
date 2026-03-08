/*
 * XREFs of ACPITableNotifyFreeObject @ 0x1C003F540
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     ACPIBuildProcessDelayedDependencyExternalTrigger @ 0x1C000E1CC (ACPIBuildProcessDelayedDependencyExternalTrigger.c)
 *     ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C0010E04 (ACPIBuildProcessNotifyPepDeleteDevice.c)
 *     ACPIInitDereferenceDeviceExtensionLocked @ 0x1C002D060 (ACPIInitDereferenceDeviceExtensionLocked.c)
 *     WPP_RECORDER_SF_qqDD @ 0x1C003F9BC (WPP_RECORDER_SF_qqDD.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIFinalizeObject @ 0x1C0048034 (AMLIFinalizeObject.c)
 */

__int64 __fastcall ACPITableNotifyFreeObject(int a1, KIRQL *a2, int a3, int a4)
{
  KIRQL *v5; // rbx
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  ULONG_PTR v10; // rdi
  __int64 v11; // rax
  bool v12; // di
  __int64 v13; // rbx
  KIRQL v14; // al

  v5 = a2;
  switch ( a1 )
  {
    case 1:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)a2,
          22,
          10,
          (__int64)&WPP_b69ad285f7363a9fe4fc640ff5707c54_Traceguids);
      }
      *v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
      KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
      break;
    case 3:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)a2,
          22,
          11,
          (__int64)&WPP_b69ad285f7363a9fe4fc640ff5707c54_Traceguids);
      }
      KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
      KeReleaseSpinLock(&AcpiPowerLock, *v5);
      break;
    case 6:
      if ( a3 == 6 || (unsigned int)(a3 - 12) <= 1 )
      {
        v12 = 1;
        v13 = *(_QWORD *)(*(_QWORD *)a2 + 104LL);
        v14 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        if ( v13 )
          v12 = (*(_BYTE *)(v13 + 8) & 0x60) != 0;
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v14);
        if ( v13 && !v12 )
          ACPIBuildProcessNotifyPepDeleteDevice(v13, 1);
      }
      break;
    default:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqDD(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)a2, a3, a4);
      v7 = a1 - 4;
      if ( !v7 )
        KeBugCheckEx(0xA5u, 0x13uLL, (ULONG_PTR)v5, 0LL, 0LL);
      if ( v7 == 1 )
        KeBugCheckEx(0xA5u, 0x13uLL, (ULONG_PTR)v5, 1uLL, 0LL);
      if ( a3 == 11 )
      {
        LOBYTE(a2) = 1;
LABEL_10:
        AMLIFinalizeObject(v5, a2);
        return 0LL;
      }
      if ( a3 == 10 )
      {
        v8 = *(_QWORD *)v5;
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v5 + 96LL) + 12LL) == 2 )
        {
          v9 = *(_QWORD *)(v8 + 104);
          *(_QWORD *)(v8 + 104) = 0LL;
          AMLIDereferenceHandleEx(v9);
        }
      }
      v10 = *(_QWORD *)(*(_QWORD *)v5 + 104LL);
      if ( !v10 )
      {
        a2 = 0LL;
        goto LABEL_10;
      }
      _InterlockedOr64((volatile signed __int64 *)(v10 + 8), 0x80000000000uLL);
      v11 = *(_QWORD *)(v10 + 792);
      if ( v11 )
        _InterlockedOr64((volatile signed __int64 *)(v11 + 8), 0x40000000000uLL);
      ACPIBuildProcessDelayedDependencyExternalTrigger(v10);
      *(_QWORD *)(*(_QWORD *)v5 + 104LL) = 0LL;
      ACPIInitDereferenceDeviceExtensionLocked(v10);
      break;
  }
  return 0LL;
}
