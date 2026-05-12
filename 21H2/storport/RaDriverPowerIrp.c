/*
 * XREFs of RaDriverPowerIrp @ 0x1C0012A00
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPowerIrp @ 0x1C0012AA8 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0012B78 (RaUnitPowerIrp.c)
 *     WPP_SF_qq @ 0x1C0033780 (WPP_SF_qq.c)
 *     WPP_SF_qqD @ 0x1C00337D0 (WPP_SF_qqD.c)
 */

__int64 __fastcall RaDriverPowerIrp(__int64 a1, __int64 a2)
{
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // ebx

  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_c75ef678420536b919220fd58d40bf93_Traceguids, a1, a2);
  }
  *(_BYTE *)(a2 + 141) = -88;
  v4 = **(_DWORD **)(a1 + 64);
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      v6 = -1073741823;
      goto LABEL_6;
    }
    v5 = RaUnitPowerIrp(*(PVOID *)(a1 + 64), (PIRP)a2);
  }
  else
  {
    v5 = RaidAdapterPowerIrp(*(_QWORD *)(a1 + 64), a2);
  }
  v6 = v5;
LABEL_6:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_c75ef678420536b919220fd58d40bf93_Traceguids, a1, a2, v6);
  }
  return v6;
}
