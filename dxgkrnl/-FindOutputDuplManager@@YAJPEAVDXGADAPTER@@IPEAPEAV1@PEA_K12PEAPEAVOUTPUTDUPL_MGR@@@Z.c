__int64 __fastcall FindOutputDuplManager(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        unsigned __int64 *a4,
        struct DXGADAPTER **a5,
        unsigned __int64 *a6,
        struct OUTPUTDUPL_MGR **a7)
{
  __int64 v9; // r14
  int PairingAdapters; // eax
  __int64 v11; // rbp

  v9 = a2;
  PairingAdapters = DxgkpGetPairingAdapters(a1, a2, a3, a4, a5, a6, 0);
  v11 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    WdLogSingleEntry3(2LL, a1, v9, PairingAdapters);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x (Status 0x%I64x)!",
      (__int64)a1,
      v9,
      v11,
      0LL,
      0LL);
    return (unsigned int)v11;
  }
  else
  {
    if ( a3 && !*a3 || a5 && !*a5 )
    {
      WdLogSingleEntry1(1LL, 3133LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(!o_ppRenderAdapter || *o_ppRenderAdapter != NULL) && (!o_ppDisplayAdapter || *o_ppDisplayAdapter != NULL)",
        3133LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *a7 = *(struct OUTPUTDUPL_MGR **)(*((_QWORD *)*a5 + 365) + 120LL);
    return 0LL;
  }
}
