/*
 * XREFs of ?WaitForReconstitution@CApplicationManager@@UEAAJXZ @ 0x1801C4700
 * Callers:
 *     <none>
 * Callees:
 *     ??$WaitOnAddressHelper@_N@@YAJPEA_N_NK@Z @ 0x1801B46DC (--$WaitOnAddressHelper@_N@@YAJPEA_N_NK@Z.c)
 */

__int64 __fastcall CApplicationManager::WaitForReconstitution(CApplicationManager *this, char a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( BYTE4(CApplicationManagerUtility::g_pIAMGlobals[13].Ptr) )
    WaitOnAddressHelper<bool>((char *)&CApplicationManagerUtility::g_pIAMGlobals[13].Ptr + 5, a2);
  else
    return (unsigned int)-2147024884;
  return v2;
}
