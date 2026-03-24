/*
 * XREFs of IsIMMEnabledSystem @ 0x1C006B1E0
 * Callers:
 *     Win32UserInitialize @ 0x1C0298BBC (Win32UserInitialize.c)
 * Callees:
 *     ?AllowInteractiveServices@@YAHXZ @ 0x1C01374AC (-AllowInteractiveServices@@YAHXZ.c)
 */

__int64 IsIMMEnabledSystem()
{
  if ( gSessionId == gServiceSessionId )
    return AllowInteractiveServices();
  else
    return 1LL;
}
