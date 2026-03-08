/*
 * XREFs of ?sPacketCallback@CIVChannel@@CAJPEAU_IVSRContext@@@Z @ 0x1C0229A80
 * Callers:
 *     <none>
 * Callees:
 *     ?PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z @ 0x1C0228DF0 (-PacketCallback@CIVChannel@@AEAAJPEAU_IVSRContext@@@Z.c)
 */

__int64 __fastcall CIVChannel::sPacketCallback(struct _IVSRContext *a1)
{
  return CIVChannel::PacketCallback((CIVChannel *)qword_1C02D8780[*((unsigned int *)a1 + 44)], a1);
}
