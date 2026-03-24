/*
 * XREFs of vSpEnableMultiMon @ 0x1C0285D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vSpEnableMultiMon(__int64 a1, int a2, __int64 a3)
{
  *(_DWORD *)(a1 + 148) = a2;
  *(_QWORD *)(a1 + 152) = a3;
}
