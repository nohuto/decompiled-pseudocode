void dynamic_atexit_destructor_for__CInteraction::s_DefaultStateLockedInteractions__()
{
  CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::RemoveAll((__int64)&CInteraction::s_DefaultStateLockedInteractions);
}
