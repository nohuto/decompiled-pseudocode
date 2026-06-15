/*
 * XREFs of DllMain @ 0x18006D2E0
 * Callers:
 *     ?dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z @ 0x1800698E0 (-dllmain_dispatch@@YAHQEAUHINSTANCE__@@KQEAX@Z.c)
 * Callees:
 *     sub_180053FE0 @ 0x180053FE0 (sub_180053FE0.c)
 *     sub_1800540D8 @ 0x1800540D8 (sub_1800540D8.c)
 *     sub_180054268 @ 0x180054268 (sub_180054268.c)
 *     sub_1800542FC @ 0x1800542FC (sub_1800542FC.c)
 *     sub_180104B44 @ 0x180104B44 (sub_180104B44.c)
 *     sub_180115444 @ 0x180115444 (sub_180115444.c)
 *     sub_180132184 @ 0x180132184 (sub_180132184.c)
 */

BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  BOOL v3; // edi
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // r8
  __int64 v7; // rcx
  __vcrt_trace_logging_provider *v8; // rax

  v3 = 1;
  if ( fdwReason == 1 )
  {
    DisableThreadLibraryCalls(hinstDLL);
    hHeap = GetProcessHeap();
    sub_180053FE0();
    if ( (int)sub_1800540D8(v5, v4, v6) >= 0 )
    {
      sub_1800542FC();
      v8 = (__vcrt_trace_logging_provider *)sub_180054268(v7);
      dword_18019E424 = 1;
      qword_18019E428 = v8;
      v3 = byte_18019E5E0 == 0;
      dword_18019E420 = v3;
      if ( byte_18019E5E0 )
        dword_18019E424 &= v3;
    }
    else
    {
      return 0;
    }
  }
  else if ( !fdwReason && !lpvReserved )
  {
    dword_18019E424 = 0;
    dword_18019E420 = 0;
    sub_180132184(hinstDLL);
    sub_180104B44();
    qword_18019E428 = 0LL;
    sub_180115444();
  }
  return v3;
}
