/*
 * XREFs of dllmain_dispatch @ 0x1000411C
 * Callers:
 *     __DllMainCRTStartup@12 @ 0x10004250 (__DllMainCRTStartup@12.c)
 * Callees:
 *     _DllMain@12 @ 0x100021DB (_DllMain@12.c)
 *     dllmain_crt_dispatch @ 0x10003F30 (dllmain_crt_dispatch.c)
 *     dllmain_raw @ 0x10004222 (dllmain_raw.c)
 *     ___scrt_dllmain_exception_filter @ 0x1000443F (___scrt_dllmain_exception_filter.c)
 *     __SEH_prolog4 @ 0x100047F0 (__SEH_prolog4.c)
 */

int __cdecl dllmain_dispatch(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  void *v4; // ebx
  int v5; // esi
  BOOL v6; // eax

  if ( !fdwReason && dword_10005090 <= 0 )
    return 0;
  if ( fdwReason != 1 && fdwReason != 2 )
  {
    v4 = lpvReserved;
LABEL_9:
    v6 = DllMain(hinstDLL, fdwReason, v4);
    v5 = v6;
    if ( fdwReason == 1 && !v6 )
    {
      DllMain(hinstDLL, 0, v4);
      dllmain_crt_dispatch((int)hinstDLL, 0, (int)v4);
      dllmain_raw(hinstDLL, 0, v4);
    }
    if ( !fdwReason || fdwReason == 3 )
    {
      v5 = dllmain_crt_dispatch((int)hinstDLL, fdwReason, (int)v4);
      if ( v5 )
        return dllmain_raw(hinstDLL, fdwReason, v4);
    }
    return v5;
  }
  v4 = lpvReserved;
  v5 = dllmain_raw(hinstDLL, fdwReason, lpvReserved);
  if ( v5 )
  {
    v5 = dllmain_crt_dispatch((int)hinstDLL, fdwReason, (int)lpvReserved);
    if ( v5 )
      goto LABEL_9;
  }
  return v5;
}
