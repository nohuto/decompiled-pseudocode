/*
 * XREFs of AcpiPccEjectInterface @ 0x1C0033D34
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00165F0 (ACPIBusIrpQueryInterface.c)
 *     ACPIRootIrpQueryInterface @ 0x1C00944D0 (ACPIRootIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     PciConfigPinToLine @ 0x1C0001990 (PciConfigPinToLine.c)
 */

__int64 __fastcall AcpiPccEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 DeviceExtension; // rax
  unsigned int v5; // edi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned int v11; // r8d
  KIRQL v12; // al
  KIRQL v13; // r8
  unsigned int v14; // ebp
  __int64 v15; // rax
  char v16; // al
  int v17; // ecx
  int v18; // ecx

  v2 = *(_QWORD *)(a2 + 184);
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_WORD *)(v2 + 16) < 0x80u || !*(_WORD *)(v2 + 18) )
    return (unsigned int)-1073741811;
  v6 = *(_QWORD *)(v2 + 24);
  if ( _bittest64((const signed __int64 *)(DeviceExtension + 8), 0x24u) && *(_DWORD *)(v6 + 32) == -1 )
  {
    v7 = AcpiPccLegacySubspace;
  }
  else
  {
    v8 = *(unsigned int *)(v6 + 32);
    if ( (unsigned int)v8 >= AcpiPccSubspaceCount )
      return (unsigned int)-1073741637;
    v7 = AcpiPccSubspaces + 656 * v8;
  }
  v5 = 0;
  if ( !v7 )
    return (unsigned int)-1073741637;
  if ( *(_BYTE *)v7 == 0xFF )
  {
    v9 = *(_QWORD *)(v7 + 40);
    v10 = *(_DWORD *)(v9 + 16);
    *(_DWORD *)(v7 + 8) = v10;
    if ( v10 < 0x1F4 )
      v10 = 500;
    *(_DWORD *)(v7 + 12) = v10;
    v11 = *(_DWORD *)(v9 + 20);
    if ( v11 )
      *(_DWORD *)(v7 + 16) = 0x1E8480 / v11;
    if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
      *(_DWORD *)(v7 + 4) |= 1u;
  }
  if ( *(_QWORD *)(v6 + 40) && (*(_DWORD *)(v7 + 4) & 1) == 0 )
    return (unsigned int)-1073741637;
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 648));
  v13 = v12;
  v14 = *(_DWORD *)(v7 + 4) & 0x1E;
  if ( v14 == 4 )
  {
    if ( (unsigned __int8)(*(_BYTE *)v7 - 1) > 1u || (**(_WORD **)(v7 + 56) & 1) != 0 )
    {
      **(_WORD **)(v7 + 56) &= ~1u;
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(v7 + 4) & 0xFFFFFFE1 | 6;
      v15 = *(_QWORD *)(v6 + 40);
      if ( v15 )
      {
        *(_QWORD *)(v7 + 264) = v15;
        *(_QWORD *)(v7 + 272) = *(_QWORD *)(v6 + 48);
        v16 = *(_BYTE *)v7 + 1;
        *(_QWORD *)(v7 + 280) = a1;
        if ( (v16 & 0xFE) == 0 )
          _InterlockedAdd(&AcpiPccSciReferenceCount, 1u);
      }
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 648), v13);
      v17 = *(_DWORD *)(v6 + 84);
      *(_QWORD *)(v6 + 16) = PciConfigPinToLine;
      *(_QWORD *)(v6 + 24) = PciConfigPinToLine;
      *(_DWORD *)v6 = 65664;
      *(_QWORD *)(v6 + 8) = 0LL;
      *(_QWORD *)(v6 + 56) = v7;
      *(_DWORD *)(v6 + 64) = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(v6 + 68) = *(_DWORD *)(v7 + 16);
      *(_QWORD *)(v6 + 72) = *(_QWORD *)(v7 + 24);
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(v7 + 32);
      v18 = *(_DWORD *)(v7 + 4) ^ v17;
      *(_QWORD *)(v6 + 88) = AcpiPccAcquireSubspace;
      *(_DWORD *)(v6 + 84) ^= v18 & 1;
      *(_QWORD *)(v6 + 96) = AcpiPccAcquireSubspaceAsync;
      *(_QWORD *)(v6 + 104) = AcpiPccExecuteCommand;
      *(_QWORD *)(v6 + 112) = AcpiPccExecuteCommandAsync;
      *(_QWORD *)(v6 + 120) = AcpiPccReleaseSubspace;
      PciConfigPinToLine();
    }
    else
    {
      v5 = -1073740024;
      KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 648), v12);
    }
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 648), v12);
    return v14 < 4 ? -1073741823 : -1073740024;
  }
  return v5;
}
