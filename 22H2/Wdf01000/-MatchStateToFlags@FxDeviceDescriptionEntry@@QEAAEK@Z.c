/*
 * XREFs of ?MatchStateToFlags@FxDeviceDescriptionEntry@@QEAAEK@Z @ 0x1C003BCA0
 * Callers:
 *     ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C003B4CC (-GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHIL.c)
 *     ?GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z @ 0x1C003B770 (-GetNextStaticDevice@FxChildList@@QEAAPEAUWDFDEVICE__@@PEAU2@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxDeviceDescriptionEntry::MatchStateToFlags(FxDeviceDescriptionEntry *this, char Flags)
{
  return (Flags & 1) != 0 && this->m_DescriptionState == DescriptionInstantiatedHasObject
      || (Flags & 2) != 0 && (unsigned int)(this->m_DescriptionState - 3) <= 1
      || (Flags & 4) != 0 && this->m_DescriptionState == DescriptionPresentNeedsInstantiation;
}
