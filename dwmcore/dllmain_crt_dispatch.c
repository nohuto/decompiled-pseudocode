/*
 * XREFs of dllmain_crt_dispatch @ 0x18010E990
 * Callers:
 *     dllmain_dispatch @ 0x18010EB9C (dllmain_dispatch.c)
 * Callees:
 *     __scrt_dllmain_crt_thread_attach @ 0x18010E628 (__scrt_dllmain_crt_thread_attach.c)
 *     __scrt_dllmain_crt_thread_detach @ 0x18010E658 (__scrt_dllmain_crt_thread_detach.c)
 */

__int64 __fastcall dllmain_crt_dispatch(__int64 a1, int a2, __int64 a3)
{
  int v3; // edx
  int v4; // edx
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          return 1LL;
        LOBYTE(result) = _scrt_dllmain_crt_thread_detach();
      }
      else
      {
        LOBYTE(result) = _scrt_dllmain_crt_thread_attach();
      }
      return (unsigned __int8)result;
    }
    else
    {
      return dllmain_crt_process_attach(a1, a3);
    }
  }
  else
  {
    LOBYTE(a1) = a3 != 0;
    return dllmain_crt_process_detach(a1);
  }
}
