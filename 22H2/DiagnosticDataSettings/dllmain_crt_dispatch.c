/*
 * XREFs of dllmain_crt_dispatch @ 0x10003F30
 * Callers:
 *     dllmain_dispatch @ 0x1000411C (dllmain_dispatch.c)
 * Callees:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 *     dllmain_crt_process_detach @ 0x1000408C (dllmain_crt_process_detach.c)
 *     ___scrt_dllmain_crt_thread_attach @ 0x10004413 (___scrt_dllmain_crt_thread_attach.c)
 *     ___scrt_dllmain_crt_thread_detach @ 0x10004432 (___scrt_dllmain_crt_thread_detach.c)
 */

int __stdcall dllmain_crt_dispatch(int a1, int a2, int a3)
{
  int result; // eax

  switch ( a2 )
  {
    case 0:
      return dllmain_crt_process_detach(a3 != 0);
    case 1:
      return dllmain_crt_process_attach(a1, a3);
    case 2:
      LOBYTE(result) = __scrt_dllmain_crt_thread_attach();
      break;
    case 3:
      LOBYTE(result) = __scrt_dllmain_crt_thread_detach();
      break;
    default:
      return 1;
  }
  return (unsigned __int8)result;
}
