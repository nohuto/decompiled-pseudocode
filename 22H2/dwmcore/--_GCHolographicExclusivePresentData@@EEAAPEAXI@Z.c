/*
 * XREFs of ??_GCHolographicExclusivePresentData@@EEAAPEAXI@Z @ 0x1802AF2EC
 * Callers:
 *     ??_ECHolographicExclusivePresentData@@G7EAAPEAXI@Z @ 0x180121A00 (--_ECHolographicExclusivePresentData@@G7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 *     ??1CHolographicExclusivePresentData@@EEAA@XZ @ 0x1802AF270 (--1CHolographicExclusivePresentData@@EEAA@XZ.c)
 */

CHolographicExclusivePresentData *__fastcall CHolographicExclusivePresentData::`scalar deleting destructor'(
        CHolographicExclusivePresentData *this,
        char a2)
{
  CHolographicExclusivePresentData::~CHolographicExclusivePresentData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
