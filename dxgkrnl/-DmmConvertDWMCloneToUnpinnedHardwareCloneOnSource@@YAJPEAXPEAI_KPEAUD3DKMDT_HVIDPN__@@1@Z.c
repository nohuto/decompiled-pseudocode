/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C03A7EE8
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C020EC30 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0006784 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007F3C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C0176878 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01829E4 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01830A8 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C03AB064 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C03ABB4C (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 */

__int64 __fastcall DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(
        DXGADAPTER *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        struct D3DKMDT_HVIDPN__ *a4,
        unsigned int *a5)
{
  char *v6; // rbx
  unsigned __int64 v8; // r13
  VIDPN_MGR *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // rbp
  DMMVIDPNTOPOLOGY *v14; // r15
  unsigned __int64 v15; // rbx
  unsigned int v16; // eax
  int NumPathsFromSource; // eax
  unsigned __int64 v18; // r8
  int v19; // eax
  unsigned __int64 v20; // r14
  int v21; // eax
  unsigned __int64 v22; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  int v24; // eax
  unsigned __int64 v26; // rdx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v27; // [rsp+40h] [rbp-58h]
  unsigned __int64 v28; // [rsp+48h] [rbp-50h] BYREF
  __int64 v29[9]; // [rsp+50h] [rbp-48h] BYREF
  struct DMMVIDPNPRESENTPATH *v30; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v31; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v32; // [rsp+B0h] [rbp+18h]

  v32 = a3;
  v31 = a2;
  v6 = (char *)a1 + 2920;
  LODWORD(v8) = -1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || !*(_QWORD *)v6 )
    WdLogSingleEntry0(1LL);
  v9 = *(VIDPN_MGR **)(*(_QWORD *)v6 + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)v29, (__int64)v9);
  v10 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a4);
  v11 = v10;
  if ( v10 && *(VIDPN_MGR **)(v10 + 48) == v9 )
  {
    v13 = 0LL;
    v14 = (DMMVIDPNTOPOLOGY *)(v10 + 96);
    if ( a3 )
    {
      while ( 1 )
      {
        v28 = 0LL;
        LODWORD(v30) = 0;
        v15 = v31[v13];
        v16 = v31[v13];
        if ( v13 )
          v16 = v8;
        v8 = v16;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v14, v31[v13], &v28);
        if ( NumPathsFromSource < 0 )
        {
          if ( NumPathsFromSource == -1071774919 )
          {
            v22 = v15;
            v12 = -1073741811LL;
            goto LABEL_22;
          }
          WdLogSingleEntry0(1LL);
        }
        v18 = v28;
        if ( v28 > 1 )
          break;
        v19 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, (char *)(unsigned int)v15, 0LL, (unsigned int *)&v30);
        v20 = (unsigned int)v30;
        if ( v19 < 0 || (_DWORD)v30 == -1 )
          WdLogSingleEntry0(1LL);
        if ( a5 )
          a5[v13] = v20;
        if ( v13 )
        {
          Path = DMMVIDPNTOPOLOGY::FindPath(v14, v15, v20);
          v30 = Path;
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            Path = v30;
          }
          v27 = *((_DWORD *)Path + 26);
          LOWORD(v30) = *((_WORD *)Path + 54);
          if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v9, v14, v15, v20, 0) < 0 )
            WdLogSingleEntry0(1LL);
          v24 = VIDPN_MGR::AddPathToVidPnTopology(v9, v14, v8, v20, v27, (unsigned __int16)v30, 1u, D3DKMDT_MCC_ENFORCE);
          v12 = v24;
          if ( v24 < 0 )
          {
            v18 = v8;
            v26 = v20;
            goto LABEL_34;
          }
        }
        else
        {
          v21 = VIDPN_MGR::UnpinPathModalityFromSource(v9, v14, v8);
          v12 = v21;
          if ( v21 < 0 )
          {
            v22 = v8;
LABEL_22:
            WdLogSingleEntry3(2LL, v22, v11, v12);
            goto LABEL_30;
          }
        }
        if ( ++v13 >= v32 )
          goto LABEL_29;
      }
      v26 = v15;
      v12 = -1073741811LL;
LABEL_34:
      WdLogSingleEntry4(2LL, v26, v18, v11, v12);
    }
    else
    {
LABEL_29:
      LODWORD(v12) = 0;
    }
  }
  else
  {
    LODWORD(v12) = -1073741811;
    WdLogSingleEntry2(2LL, a4, -1073741811LL);
  }
LABEL_30:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v29[0] + 40));
  return (unsigned int)v12;
}
