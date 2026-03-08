/*
 * XREFs of ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C03BC7A0
 * Callers:
 *     ?_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C03BC8FC (-_AddFirmwareRecommendedPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000999C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C01BAF14 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C01BE894 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C01DB31C (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C03B80A4 (-ConvertVidPnToPathsModality@CCD_BTL@@QEAAJPEAVDMMVIDPN@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_AddFirmwareRecommendedPathsToTopology(
        CCD_TOPOLOGY **this,
        struct DXGADAPTER *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  struct DMMVIDPN *v6; // rbx
  int v7; // ebx
  CCD_BTL *v8; // rax
  CCD_TOPOLOGY *v9; // rcx
  int v11; // [rsp+20h] [rbp-39h] BYREF
  __int128 v12; // [rsp+28h] [rbp-31h]
  __int64 v13; // [rsp+38h] [rbp-21h]
  __int16 v14; // [rsp+40h] [rbp-19h]
  __int128 v15; // [rsp+48h] [rbp-11h]
  __int64 v16; // [rsp+58h] [rbp-1h]
  struct D3DKMT_GETPATHSMODALITY *v17; // [rsp+60h] [rbp+7h]
  bool v18; // [rsp+68h] [rbp+Fh]
  int v19; // [rsp+6Ch] [rbp+13h]
  int v20; // [rsp+70h] [rbp+17h]
  __int64 v21; // [rsp+74h] [rbp+1Bh]
  __int64 v22; // [rsp+80h] [rbp+27h]
  struct D3DKMT_GETPATHSMODALITY *v23; // [rsp+C8h] [rbp+6Fh] BYREF
  struct DMMVIDPN *v24; // [rsp+D0h] [rbp+77h] BYREF
  __int64 v25; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = *(_QWORD *)(*((_QWORD *)a2 + 365) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v25, v4);
  v5 = *(_QWORD *)(v4 + 320);
  v24 = 0LL;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 32));
  auto_rc<DMMVIDPN>::reset((__int64 *)&v24, *(_QWORD *)(v4 + 320));
  v6 = v24;
  if ( v24 )
  {
    v23 = 0LL;
    v8 = CCD_BTL::Global();
    v7 = CCD_BTL::ConvertVidPnToPathsModality(v8, v6, &v23);
    if ( v7 >= 0 )
    {
      v9 = *this;
      v11 = 0;
      v12 = 0LL;
      v13 = 0LL;
      v18 = v23 == 0LL;
      v14 = 0;
      v15 = 0LL;
      v16 = 0LL;
      v17 = v23;
      v19 = 0;
      v20 = 1;
      v21 = 0LL;
      v22 = 0LL;
      v7 = CCD_TOPOLOGY::CopyInheritScope(v9, (const struct CCD_TOPOLOGY *)&v11);
      operator delete(v23);
      if ( v7 >= 0 )
        v7 = 0;
      else
        WdLogSingleEntry1(2LL, a2);
      CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)&v11);
    }
    else
    {
      WdLogSingleEntry1(2LL, a2);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, a2);
    v7 = -1073741275;
  }
  auto_rc<DMMVIDPN>::reset((__int64 *)&v24, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v25 + 40));
  return (unsigned int)v7;
}
