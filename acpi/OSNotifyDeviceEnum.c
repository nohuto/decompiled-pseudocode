/*
 * XREFs of OSNotifyDeviceEnum @ 0x1C0032E9C
 * Callers:
 *     NotifyHandler @ 0x1C0004EE0 (NotifyHandler.c)
 * Callees:
 *     ACPIDockIsDockDevice @ 0x1C0009A34 (ACPIDockIsDockDevice.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0013BE0 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C00152B8 (WPP_RECORDER_SF_qs.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIIterateParentNext @ 0x1C00488A4 (AMLIIterateParentNext.c)
 */

__int64 __fastcall OSNotifyDeviceEnum(volatile signed __int32 *a1)
{
  volatile signed __int32 *v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r8
  void (__fastcall *v6)(__int64, __int64); // rdx
  KIRQL v7; // si
  __int64 v8; // rcx

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
      24,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      (char)a1,
      (__int64)&dword_1C006FA40);
  }
  if ( ACPIDockIsDockDevice() )
  {
    v4 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
      v6 = ACPIBuildIssueNotifyInvalidateRelationsForDockDevice;
LABEL_18:
      ACPIBuildSynchronizationRequestInternal(v4, (__int64)v6, v5, v3, 1);
    }
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    dword_1C006F938 = 0;
    pszDest = 0;
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement(v1 + 2);
    if ( v1 )
    {
      while ( !v2 )
      {
        v8 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
        if ( v8 )
        {
          v2 = *(_QWORD *)(*(_QWORD *)v1 + 104LL);
          if ( *(_DWORD *)(v8 + 16) != 1599293264 )
            v2 = 0LL;
        }
        v1 = (volatile signed __int32 *)AMLIIterateParentNext(v1);
        if ( !v1 )
          goto LABEL_16;
      }
      AMLIDereferenceHandleEx(v1);
    }
LABEL_16:
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
    if ( v2 )
    {
      v5 = v2;
      v6 = ACPIBuildIssueNotifyInvalidateRelations;
      v4 = v2;
      goto LABEL_18;
    }
  }
  return 0LL;
}
