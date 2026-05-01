/*
 * XREFs of ?Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z @ 0x18021A9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFullScreenManager::Register(CFullScreenManager *this, struct IUnknown *a2, unsigned int *a3)
{
  return CGITRegistrationList::Register((CFullScreenManager *)((char *)this + 40), a2, a3);
}
