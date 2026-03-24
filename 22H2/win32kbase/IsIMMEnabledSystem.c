/*
 * XREFs of IsIMMEnabledSystem @ 0x1C006BC90
 * Callers:
 *     Win32UserInitialize @ 0x1C0297BBC (Win32UserInitialize.c)
 * Callees:
 *     ?AllowInteractiveServices@@YAHXZ @ 0x1C013777C (-AllowInteractiveServices@@YAHXZ.c)
 */

__int64 IsIMMEnabledSystem()
{
  if ( gSessionId == gServiceSessionId )
    return AllowInteractiveServices();
  else
    return 1LL;
}
