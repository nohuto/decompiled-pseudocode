/*
 * XREFs of ACPIInternalInterruptPolarityCacheGetPolarity @ 0x1C002E8C4
 * Callers:
 *     PnpiCmResourceToBiosExtendedIrq @ 0x1C00931F4 (PnpiCmResourceToBiosExtendedIrq.c)
 *     IrqArbAddAllocation @ 0x1C009C4B0 (IrqArbAddAllocation.c)
 *     IrqArbpFindSuitableRangeIsa @ 0x1C009DDC0 (IrqArbpFindSuitableRangeIsa.c)
 * Callees:
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C002E754 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     WPP_RECORDER_SF_Dqqss @ 0x1C002F168 (WPP_RECORDER_SF_Dqqss.c)
 */

char __fastcall ACPIInternalInterruptPolarityCacheGetPolarity(__int64 a1, int a2, _DWORD *a3)
{
  char v3; // di
  KIRQL v8; // bp
  _QWORD *DeviceExtensionNoLock; // rbx
  int v10; // r8d
  int v11; // r9d
  __int64 *i; // rax
  __int64 v13; // rax
  void *v14; // rdx
  void *v15; // rcx
  int v16; // edx
  int v17; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( !gAcpiHonorBiosPolarities )
    return 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  DeviceExtensionNoLock = (_QWORD *)ACPIInternalFindDeviceExtensionNoLock(a1, RootDeviceExtension);
LABEL_4:
  if ( DeviceExtensionNoLock )
  {
    for ( i = (__int64 *)DeviceExtensionNoLock[89]; ; i = (__int64 *)*i )
    {
      if ( i == DeviceExtensionNoLock + 89 )
      {
        v13 = DeviceExtensionNoLock[1];
        if ( (v13 & 0x20) != 0 )
        {
          v14 = &unk_1C00622D0;
          v15 = &unk_1C00622D0;
          if ( (v13 & 0x200000000000LL) != 0 )
          {
            v14 = (void *)DeviceExtensionNoLock[76];
            if ( (v13 & 0x400000000000LL) != 0 )
              v15 = (void *)DeviceExtensionNoLock[77];
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_Dqqss(
              WPP_GLOBAL_Control->DeviceExtension,
              (_DWORD)v14,
              v10,
              v11,
              v17,
              a2,
              (char)DeviceExtensionNoLock,
              (char)DeviceExtensionNoLock,
              (__int64)v14,
              (__int64)v15);
        }
        DeviceExtensionNoLock = (_QWORD *)DeviceExtensionNoLock[99];
        goto LABEL_4;
      }
      if ( a2 == *((_DWORD *)i + 4) )
        break;
    }
    v16 = *((_DWORD *)i + 5);
    if ( v16 != -1 )
    {
      *a3 = v16;
      v3 = 1;
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v8);
  return v3;
}
