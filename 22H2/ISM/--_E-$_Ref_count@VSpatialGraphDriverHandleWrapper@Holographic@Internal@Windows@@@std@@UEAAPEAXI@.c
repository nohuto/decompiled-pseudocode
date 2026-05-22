/*
 * XREFs of ??_E?$_Ref_count@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@UEAAPEAXI@Z @ 0x180101410
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall std::_Ref_count<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x18);
  return a1;
}
