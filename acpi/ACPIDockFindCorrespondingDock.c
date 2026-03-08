/*
 * XREFs of ACPIDockFindCorrespondingDock @ 0x1C0009314
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0013960 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDevicePowerProcessPhase5WarmEjectSubPhase2 @ 0x1C0021A10 (ACPIDevicePowerProcessPhase5WarmEjectSubPhase2.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1C007DD9C (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     ACPIExtListEnumNext @ 0x1C00263F4 (ACPIExtListEnumNext.c)
 *     ACPIExtListStartEnum @ 0x1C00264F8 (ACPIExtListStartEnum.c)
 *     ACPIExtListTestElement @ 0x1C0026554 (ACPIExtListTestElement.c)
 */

__int64 __fastcall ACPIDockFindCorrespondingDock(__int64 a1)
{
  __int64 i; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  _QWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-30h]
  KIRQL NewIrql[16]; // [rsp+38h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-18h]
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]

  v11 = 0;
  v6[1] = 0LL;
  v6[0] = RootDeviceExtension + 800;
  v9 = 816LL;
  SpinLock = &AcpiDeviceTreeLock;
  *(_OWORD *)NewIrql = 0LL;
  v10 = 2;
  for ( i = ACPIExtListStartEnum(v6); ; i = ACPIExtListEnumNext(v6) )
  {
    LOBYTE(v3) = 1;
    v4 = i;
    if ( !(unsigned __int8)ACPIExtListTestElement(v6, v3) )
      break;
    if ( !v4 || _bittest64((const signed __int64 *)(v4 + 8), 0x39u) && *(_QWORD *)(v4 + 184) == a1 )
    {
      if ( v10 == 2 )
        KeReleaseSpinLock(SpinLock, NewIrql[0]);
      return v4;
    }
  }
  return v4;
}
