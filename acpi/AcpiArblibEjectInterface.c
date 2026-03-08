/*
 * XREFs of AcpiArblibEjectInterface @ 0x1C007CFEC
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00165F0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000155C (ACPIInternalGetDeviceExtension.c)
 *     AcpiArblibReferenceArbiter @ 0x1C0001950 (AcpiArblibReferenceArbiter.c)
 */

__int64 __fastcall AcpiArblibEjectInterface(ULONG_PTR a1, __int64 a2)
{
  _QWORD *DeviceExtension; // rax
  __int64 v4; // r8
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(a1);
  v4 = *(_QWORD *)(a2 + 184);
  v5 = *(_DWORD *)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 24);
  if ( *(_WORD *)(v4 + 18) )
    return 3221225659LL;
  if ( *(_WORD *)(v4 + 16) < 0x30u )
    return 3221225485LL;
  switch ( v5 )
  {
    case 1:
      v8 = DeviceExtension[25];
      break;
    case 3:
      v8 = DeviceExtension[24];
      break;
    case 6:
      v8 = DeviceExtension[26];
      break;
    default:
      return 3221225659LL;
  }
  if ( *(_BYTE *)(v8 + 130) == 1 )
  {
    *(_DWORD *)v6 = 48;
    *(_QWORD *)(v6 + 16) = AcpiArblibReferenceArbiter;
    v9 = v8 + 136;
    *(_QWORD *)(v6 + 8) = v9;
    *(_QWORD *)(v6 + 24) = AcpiArblibDereferenceArbiter;
    *(_QWORD *)(v6 + 32) = ArbArbiterHandler;
    *(_DWORD *)(v6 + 40) = 0;
    AcpiArblibReferenceArbiter(v9);
    return 0LL;
  }
  return 3221225659LL;
}
