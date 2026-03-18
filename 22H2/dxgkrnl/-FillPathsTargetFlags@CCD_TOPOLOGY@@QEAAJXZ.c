/*
 * XREFs of ?FillPathsTargetFlags@CCD_TOPOLOGY@@QEAAJXZ @ 0x1C017D5F8
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C017D4B8 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 *     DxgkGetPathsModality @ 0x1C01808E0 (DxgkGetPathsModality.c)
 *     ?RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z @ 0x1C01827B0 (-RetrievePersisted@CCD_TOPOLOGY@@QEAAJIPEAG@Z.c)
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C01E86A0 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C017F1B0 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_TOPOLOGY::FillPathsTargetFlags(CCD_TOPOLOGY *this)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // eax
  unsigned int v4; // ebx

  Global = DXGGLOBAL::GetGlobal();
  v3 = DXGGLOBAL::IterateAdaptersWithCallback(Global, CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback, this, 4LL);
  v4 = v3;
  if ( v3 < 0 )
    WdLogSingleEntry3(2LL, v3, this, *((_QWORD *)this + 8));
  return v4;
}
