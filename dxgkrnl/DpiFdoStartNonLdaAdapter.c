__int64 __fastcall DpiFdoStartNonLdaAdapter(
        struct _DEVICE_OBJECT *a1,
        char a2,
        void *a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  int SysMmAdapter; // eax
  __int64 v12; // rbx
  int started; // eax

  SysMmAdapter = DpiFdoCreateSysMmAdapter(a1);
  v12 = SysMmAdapter;
  if ( SysMmAdapter >= 0 )
  {
    started = DpiFdoStartAdapter(a1, a2, a3, a4, a5, a6, a7);
    v12 = started;
    if ( started >= 0 )
      return 0LL;
  }
  WdLogSingleEntry1(2LL, v12);
  return (unsigned int)v12;
}
