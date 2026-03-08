/*
 * XREFs of ?CheckNoKmdAccessPrivateData@@YAJIPEAXI@Z @ 0x1C031E10C
 * Callers:
 *     ?SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@PEAPEAU_VIDMM_MULTI_ALLOC@@IE@Z @ 0x1C0190200 (-SubmitCommand@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITCOMMAND@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERS.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0196360 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C01B5FEC (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 *     ?SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z @ 0x1C022245C (-SubmitCommand@DXGHWQUEUE@@QEAAJPEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@_N@Z.c)
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0314F30 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 *     ?InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1C0315730 (-InitializeForUserModeSubmission@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall CheckNoKmdAccessPrivateData(unsigned int a1, _DWORD *a2, unsigned int a3)
{
  __int64 v3; // rbx
  const wchar_t *v4; // r9

  if ( a1 )
  {
    if ( a1 < 0x108 )
    {
      v3 = a1;
      WdLogSingleEntry1(2LL, a1);
      v4 = L"Invalid private driver data size for NoKmdAccess: %I64d";
LABEL_4:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v4, v3, 0LL, 0LL, 0LL, 0LL);
      return 3221225485LL;
    }
    if ( *a2 != a3 || a2[65] != a3 + 1 )
    {
      v3 = a3;
      WdLogSingleEntry1(2LL, a3);
      v4 = L"Invalid private driver data tag for NoKmdAccess: %I64d";
      goto LABEL_4;
    }
  }
  return 0LL;
}
