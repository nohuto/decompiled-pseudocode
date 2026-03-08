/*
 * XREFs of ?sOnChildNotification@CIVChannel@@CAJPEAX@Z @ 0x1C0229A50
 * Callers:
 *     <none>
 * Callees:
 *     ?OnChildNotification@CIVChannel@@AEAAJPEAX@Z @ 0x1C02289FC (-OnChildNotification@CIVChannel@@AEAAJPEAX@Z.c)
 */

__int64 __fastcall CIVChannel::sOnChildNotification(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return CIVChannel::OnChildNotification((CIVChannel *)qword_1C02D8780[a1[4]], a1, a3, a4);
}
