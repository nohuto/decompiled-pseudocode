/*
 * XREFs of _CDuckingManager::CDuckingManager_::_1_::dtor$3 @ 0x18003B216
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDuckingManager::CDuckingManager_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  CLockedList<CDuckingNotification,1,0>::~CLockedList<CDuckingNotification,1,0>((LPCRITICAL_SECTION)(*(_QWORD *)(a2 + 64) + 72LL));
}
