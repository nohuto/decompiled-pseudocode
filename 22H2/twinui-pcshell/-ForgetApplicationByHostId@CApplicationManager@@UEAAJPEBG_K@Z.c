/*
 * XREFs of ?ForgetApplicationByHostId@CApplicationManager@@UEAAJPEBG_K@Z @ 0x1801BA0B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByHostId@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x1801B5464 (--$_FindFirstApplication@VCImmersiveAppFinderByHostId@@@CApplicationManager@@AEAAJAEBVCImmersive.c)
 *     ?_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z @ 0x1801C4C8C (-_DeleteApplicationData@CApplicationManager@@AEAAJPEBGAEB_K@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x1801C50E4 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::ForgetApplicationByHostId(
        CApplicationManager *this,
        const unsigned __int16 *a2,
        unsigned __int64 a3)
{
  char v6; // si
  CApplicationManager *v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v10 = a3;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v6 = 0;
  v9 = 0LL;
  v7 = (CApplicationManager *)((char *)this - 152);
  v11 = a3;
  while ( 1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
    if ( (int)CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByHostId>((__int64)v7, &v11, &v9) < 0 )
      break;
    v6 = 1;
    CApplicationManager::_ForgetApplicationNoLock(v7, v9, 2LL);
  }
  CApplicationManager::_DeleteApplicationData(v7, a2, &v10);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v9);
  return v6 == 0 ? 0x80070490 : 0;
}
