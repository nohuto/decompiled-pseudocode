/*
 * XREFs of IsIMMEnabledSystem @ 0x1C0057710
 * Callers:
 *     Win32UserInitialize @ 0x1C02E231C (Win32UserInitialize.c)
 * Callees:
 *     ?AllowInteractiveServices@@YAHXZ @ 0x1C00D5658 (-AllowInteractiveServices@@YAHXZ.c)
 */

__int64 IsIMMEnabledSystem()
{
  if ( gSessionId == gServiceSessionId )
    return AllowInteractiveServices();
  else
    return 1LL;
}
