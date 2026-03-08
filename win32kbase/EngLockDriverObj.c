/*
 * XREFs of EngLockDriverObj @ 0x1C0198060
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 * Callees:
 *     HmgLockEx @ 0x1C004AED0 (HmgLockEx.c)
 */

DRIVEROBJ *__stdcall EngLockDriverObj(HDRVOBJ hdo)
{
  DRIVEROBJ *v1; // rbx
  __int64 v2; // rax

  v1 = 0LL;
  v2 = HmgLockEx((unsigned int)hdo, 28, 0);
  if ( v2 )
    return (DRIVEROBJ *)(v2 + 24);
  return v1;
}
