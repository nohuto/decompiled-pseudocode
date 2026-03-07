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
