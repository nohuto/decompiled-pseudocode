/*
 * XREFs of ??_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z @ 0x14005BFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x14001694C (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CCrossProcessBaseServerEndpoint *__fastcall CCrossProcessBaseServerEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseServerEndpoint *this,
        char a2)
{
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
