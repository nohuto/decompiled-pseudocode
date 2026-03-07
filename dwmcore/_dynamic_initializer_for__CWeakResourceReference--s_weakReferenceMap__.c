int dynamic_initializer_for__CWeakResourceReference::s_weakReferenceMap__()
{
  std::unordered_map<CResource const *,CWeakResourceReference *>::unordered_map<CResource const *,CWeakResourceReference *>();
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__CWeakResourceReference::s_weakReferenceMap__);
}
