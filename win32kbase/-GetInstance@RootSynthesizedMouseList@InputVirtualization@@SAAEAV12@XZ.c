/*
 * XREFs of ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C02174C8
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0094C50 (UnInitializeInputComponents.c)
 *     InitializeInputComponents @ 0x1C009770C (InitializeInputComponents.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C02176E0 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C021D1EC (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

struct InputVirtualization::RootSynthesizedMouseList *InputVirtualization::RootSynthesizedMouseList::GetInstance(void)
{
  if ( (`InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::`local static guard' & 1) == 0 )
  {
    qword_1C02D4FB8 = 0LL;
    qword_1C02D4FC0 = 0LL;
    `InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::`local static guard' |= 1u;
  }
  return (struct InputVirtualization::RootSynthesizedMouseList *)&`InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::inst;
}
