/*
 * XREFs of ??0DXGSHAREDPOWERREGISTRATIONOBJECT@@IEAA@PEAVDXGGLOBAL@@QEAX1P6AXPEAXW4_DEVICE_POWER_STATE@@E2@ZP6AX22@ZP6AX2KIE2@ZPEAV?$DXGNODELIST@VDXGGLOBAL@@VDXGSHAREDPOWERINUSELISTOBJECT@@@@@Z @ 0x1C030CE08
 * Callers:
 *     ?RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6AX0KIE0@ZP6AX00KEIU_GUID@@I@Z@Z @ 0x1C0051060 (-RegisterSharedPowerComponent@DXGGLOBAL@@QEAAJPEAXQEAXP6AX0W4_DEVICE_POWER_STATE@@E0@ZP6AX00@ZP6.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGSHAREDPOWERREGISTRATIONOBJECT::DXGSHAREDPOWERREGISTRATIONOBJECT(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = a2;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 56) = a7;
  *(_QWORD *)(a1 + 64) = a8;
  result = a1;
  *(_QWORD *)(a1 + 24) = a3;
  *(_QWORD *)(a1 + 32) = a4;
  return result;
}
