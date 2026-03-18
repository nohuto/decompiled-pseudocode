/*
 * XREFs of ?sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1C01F79C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C01F6DB0 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 */

__int64 __fastcall CIVChannel::sPacketCallback(struct _IVSRContext *a1)
{
  return CIVChannel::PacketCallback((CIVChannel *)qword_1C02A05C8[*((unsigned int *)a1 + 44)], a1);
}
