/*
 * XREFs of ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x1C01F7990
 * Callers:
 *     <none>
 * Callees:
 *     ?OnChildNotification@CIVChannel@@AEAAJPEAX@Z @ 0x1C01F69BC (-OnChildNotification@CIVChannel@@AEAAJPEAX@Z.c)
 */

__int64 __fastcall CIVChannel::sOnChildNotification(unsigned int *a1)
{
  return CIVChannel::OnChildNotification((CIVChannel *)qword_1C02A05C8[a1[4]], a1);
}
