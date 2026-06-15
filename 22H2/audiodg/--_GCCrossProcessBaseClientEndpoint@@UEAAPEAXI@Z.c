/*
 * XREFs of ??_GCCrossProcessBaseClientEndpoint@@UEAAPEAXI@Z @ 0x14005BF40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CCrossProcessBaseClientEndpoint@@UEAA@XZ @ 0x14005BA4C (--1CCrossProcessBaseClientEndpoint@@UEAA@XZ.c)
 */

CCrossProcessBaseClientEndpoint *__fastcall CCrossProcessBaseClientEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseClientEndpoint *this,
        char a2)
{
  CCrossProcessBaseClientEndpoint::~CCrossProcessBaseClientEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
