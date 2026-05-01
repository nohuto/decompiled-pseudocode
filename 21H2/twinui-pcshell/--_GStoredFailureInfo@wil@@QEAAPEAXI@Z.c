/*
 * XREFs of ??_GStoredFailureInfo@wil@@QEAAPEAXI@Z @ 0x1800A1F4C
 * Callers:
 *     ?clear@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAAXXZ @ 0x1800ABADC (-clear@-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAAXXZ.c)
 *     ?reserve@?$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N_K@Z @ 0x1800ADDF4 (-reserve@-$vector_nothrow@VStoredFailureInfo@wil@@@tip@@QEAA_N_K@Z.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18006ABA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 */

volatile signed __int32 **__fastcall wil::StoredFailureInfo::`scalar deleting destructor'(
        volatile signed __int32 **this)
{
  wil::details::shared_buffer::reset(this + 18);
  return this;
}
