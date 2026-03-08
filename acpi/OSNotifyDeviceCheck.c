/*
 * XREFs of OSNotifyDeviceCheck @ 0x1C0032C80
 * Callers:
 *     NotifyHandler @ 0x1C0004EE0 (NotifyHandler.c)
 * Callees:
 *     ACPIDockIsDockDevice @ 0x1C0009A34 (ACPIDockIsDockDevice.c)
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C0013BE0 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x1C00152B8 (WPP_RECORDER_SF_qs.c)
 *     OSNotifyDeviceEject @ 0x1C0032E08 (OSNotifyDeviceEject.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C0048724 (AMLIGetParent.c)
 *     AMLIIterateParentNext @ 0x1C00488A4 (AMLIIterateParentNext.c)
 */

__int64 __fastcall OSNotifyDeviceCheck(__int64 a1)
{
  int v2; // edx
  int v3; // edx
  KIRQL v5; // si
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 i; // rax
  __int64 v9; // rdx
  __int64 v10; // r9

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_1C006FA40 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    v2 = dword_1C006FA40;
    LOBYTE(v2) = 4;
    byte_1C006FA44 = 0;
    WPP_RECORDER_SF_qs(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      8,
      22,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      a1,
      (__int64)&dword_1C006FA40);
  }
  if ( ACPIDockIsDockDevice() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v3,
        21,
        23,
        (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids);
    }
    return OSNotifyDeviceEject(a1);
  }
  else
  {
    v5 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
    v6 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
    if ( v6 && _bittest64((const signed __int64 *)(v6 + 8), 0x25u) && (unsigned int)(*(_DWORD *)(v6 + 368) - 2) > 1 )
      *(_BYTE *)(v6 + 185) = 0;
    v7 = 0LL;
    for ( i = AMLIGetParent(a1); i; i = AMLIIterateParentNext(i) )
    {
      if ( v7 )
      {
        AMLIDereferenceHandleEx(i);
        break;
      }
      v9 = *(_QWORD *)(*(_QWORD *)i + 104LL);
      if ( v9 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)i + 104LL);
        if ( *(_DWORD *)(v9 + 16) != 1599293264 )
          v7 = 0LL;
      }
    }
    KeReleaseSpinLock(&AcpiDeviceTreeLock, v5);
    if ( v7 )
      ACPIBuildSynchronizationRequestInternal(v7, (__int64)ACPIBuildIssueNotifyInvalidateRelations, v7, v10, 1);
    return 0LL;
  }
}
