__int64 __fastcall ProcessBoostedVSyncEligibleProperty(
        struct DXGPROCESS *a1,
        struct _D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE *a2,
        char a3)
{
  const wchar_t *v3; // r9

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    v3 = L"Invalid process context, returning 0x%I64x";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v3, -1073741811LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  if ( a3 )
  {
    if ( !*(_BYTE *)a2 )
    {
      WdLogSingleEntry1(2LL, -1073741811LL);
      v3 = L"D3DKMT_PROPERTIES_PROCESS_BOOST_VSYNC_ELIGIBLE is only allowed to set eligiblity to TRUE, returning 0x%I64x";
      goto LABEL_3;
    }
    *(_BYTE *)(*((_QWORD *)a1 + 8) + 138LL) = 1;
  }
  else
  {
    *(_BYTE *)a2 = *(_BYTE *)(*((_QWORD *)a1 + 8) + 138LL);
  }
  return 0LL;
}
