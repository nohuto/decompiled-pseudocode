/*
 * XREFs of ?WnfScreenOnCallback@@YAJPEAU_EX_WNF_SUBSCRIPTION@@PEBU_WNF_STATE_NAME@@KKPEBU_WNF_TYPE_ID@@PEAX@Z @ 0x1C001CC20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall WnfScreenOnCallback(
        struct _EX_WNF_SUBSCRIPTION *a1,
        const struct _WNF_STATE_NAME *a2,
        __int64 a3,
        int a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 (__fastcall *v5)(struct DXGADAPTER *, void *, __int64); // rdx
  int v7; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+28h] [rbp-30h] BYREF
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  int v10; // [rsp+40h] [rbp-18h]

  v8 = a4;
  v7 = 20;
  v10 = 0;
  v9 = 0LL;
  if ( (int)ExQueryWnfStateData(a1, &v8, &v9, &v7) >= 0 && v7 == 20 )
  {
    if ( (_BYTE)v9 )
    {
      Global = DXGGLOBAL::GetGlobal();
      v5 = ScreenOnStudyStartCallback;
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal();
      v5 = ScreenOnStudyStopCallback;
    }
    DXGGLOBAL::IterateAdaptersWithCallback(Global, v5, (char *)&v9 + 4, 4LL);
  }
  return 0LL;
}
