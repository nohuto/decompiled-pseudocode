/*
 * XREFs of AcpiHandleInternalNotify @ 0x1C0037468
 * Callers:
 *     AcpiNativeNotifyEventHandler @ 0x1C00376C0 (AcpiNativeNotifyEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qs @ 0x1C00152B8 (WPP_RECORDER_SF_qs.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIIterateParentNext @ 0x1C00488A4 (AMLIIterateParentNext.c)
 */

void __fastcall AcpiHandleInternalNotify(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rdi
  __int64 v2; // rbx
  KIRQL v3; // si
  __int64 v4; // rcx

  v1 = a1;
  v2 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C006FA40 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    byte_1C006FA44 = 0;
    WPP_RECORDER_SF_qs(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      8,
      10,
      (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
      (char)a1,
      (__int64)&dword_1C006FA40);
  }
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  dword_1C006F938 = 0;
  pszDest = 0;
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement(v1 + 2);
  if ( v1 )
  {
    while ( !v2 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      if ( v4 )
      {
        v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
        if ( *(_DWORD *)(v4 + 16) != 1599293264 )
          v2 = 0LL;
      }
      v1 = (volatile signed __int32 *)AMLIIterateParentNext(v1);
      if ( !v1 )
        goto LABEL_13;
    }
    AMLIDereferenceHandleEx(v1);
  }
LABEL_13:
  _InterlockedOr64((volatile signed __int64 *)(v2 + 8), 0x20000000000uLL);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v3);
}
