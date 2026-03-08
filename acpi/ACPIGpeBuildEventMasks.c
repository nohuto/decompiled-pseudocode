/*
 * XREFs of ACPIGpeBuildEventMasks @ 0x1C002BE44
 * Callers:
 *     ACPITableLoad @ 0x1C003F170 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1C003F7F0 (ACPITableUnload.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000ACAC (WPP_RECORDER_SF_d.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C002C29C (ACPIGpeEnableDisableEvents.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C002C3F8 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIVectorBuildVectorMasks @ 0x1C0043D44 (ACPIVectorBuildVectorMasks.c)
 *     AMLIGetFirstChild @ 0x1C00482EC (AMLIGetFirstChild.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 *     AMLIIterateSiblingsNext @ 0x1C00488D8 (AMLIIterateSiblingsNext.c)
 */

void ACPIGpeBuildEventMasks()
{
  KIRQL v0; // di
  int v1; // eax
  int v2; // edx
  _QWORD *i; // rax
  __int64 v4; // rax
  int v5; // r8d
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // al
  __int64 v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v1 = AMLIGetNameSpaceObject("\\_GPE");
  if ( v1 >= 0 )
  {
    for ( i = (_QWORD *)AMLIGetFirstChild(v14); ; i = (_QWORD *)AMLIIterateSiblingsNext(v12) )
    {
      v12 = i;
      if ( !i )
        goto LABEL_21;
      v4 = *i;
      if ( *(_WORD *)(*v12 + 66LL) == 8 && *(_BYTE *)(v4 + 40) == 95 )
      {
        v5 = *(_DWORD *)(v4 + 40) >> 8;
        v6 = (HIWORD(*(_DWORD *)(v4 + 40)) | *(_DWORD *)(v4 + 40) & 0xFF0000u) >> 8;
        v7 = (HIWORD(*(_DWORD *)(v4 + 40)) | *(_DWORD *)(v4 + 40) & 0xFF0000u) >> 16;
        if ( (unsigned __int8)(v7 - 48) > 9u )
        {
          if ( (unsigned __int8)(v7 - 65) > 5u )
            goto LABEL_18;
          LOBYTE(v7) = v7 - 55;
        }
        v8 = 16 * v7;
        v9 = HIBYTE(*(_DWORD *)(v4 + 40)) - 48;
        if ( (unsigned __int8)(v6 - 48) > 9u )
        {
          if ( (unsigned __int8)(v6 - 65) > 5u )
          {
LABEL_18:
            LOBYTE(v14) = 0;
            continue;
          }
          v9 = v6 - 55;
        }
        v10 = v9 | (unsigned int)v8;
        LOBYTE(v14) = 1;
        if ( (_BYTE)v5 == 76 )
        {
          v11 = 1LL;
LABEL_15:
          ACPIGpeInstallRemoveIndex(v10, v11, 1LL, &v14);
          continue;
        }
        if ( (_BYTE)v5 == 69 )
        {
          v11 = 0LL;
          goto LABEL_15;
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      21,
      10,
      (__int64)&WPP_3d35ab1e3a8c30c2a397092d9bf7b300_Traceguids,
      v1);
  }
LABEL_21:
  ACPIVectorBuildVectorMasks();
  LOBYTE(v13) = 1;
  ACPIGpeEnableDisableEvents(v13);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&GpeTableLock, v0);
}
