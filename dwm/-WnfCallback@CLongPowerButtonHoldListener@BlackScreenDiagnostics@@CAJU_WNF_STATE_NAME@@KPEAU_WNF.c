/*
 * XREFs of ?WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x14000C300
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140007200 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall BlackScreenDiagnostics::CLongPowerButtonHoldListener::WnfCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall **a4)(__int128 *, char *),
        char *a5,
        unsigned int a6)
{
  int v6; // eax
  bool v7; // zf
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)a4 && a1 == WNF_PO_POWER_BUTTON_STATE && a6 == 24 )
  {
    v6 = *(_DWORD *)a5 >> 1;
    v7 = (*a5 & 1) == 0;
    v9 = *(_OWORD *)(a5 + 8);
    if ( v7 )
    {
      *((_BYTE *)a4 + 16) = 0;
    }
    else if ( v6 >= *((_DWORD *)a4 + 5) && !*((_BYTE *)a4 + 16) )
    {
      *((_BYTE *)a4 + 16) = 1;
      a4[3](&v9, a5);
    }
  }
  return 0LL;
}
