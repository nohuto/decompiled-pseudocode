/*
 * XREFs of ??_ENodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@EEAAPEAXI@Z @ 0x18016A7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@EEAA@XZ @ 0x180169F1C (--1NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@EEAA@XZ.c)
 */

Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *__fastcall Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::`vector deleting destructor'(
        Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char v4; // bl

  v4 = a2;
  Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::~NodePropertyChangedHandler(this, a2, a3, a4);
  if ( (v4 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
