/*
 * XREFs of ?PinPathContentRotation@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@_N@Z @ 0x1C03AF65C
 * Callers:
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C03AF934 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014680 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C001593C (-PinContentRotation@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ @ 0x1C0069484 (-GetContainer@-$ContainedBy@VDMMVIDPNTOPOLOGY@@@@QEBAPEAVDMMVIDPNTOPOLOGY@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C01AF928 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::PinPathContentRotation(
        VIDPN_MGR *this,
        struct DMMVIDPNPRESENTPATH *const a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a3)
{
  __int64 v3; // rdi
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 Container; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  DXGK_ENUM_PIVOT v14; // [rsp+48h] [rbp+10h] BYREF

  v3 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !(_DWORD)v3 || (unsigned int)(v3 - 254) <= 1 )
    WdLogSingleEntry0(1LL);
  v6 = DMMVIDPNPRESENTPATH::PinContentRotation(a2, (enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)v3);
  v7 = v6;
  if ( v6 < 0 )
  {
    v8 = v3;
    goto LABEL_8;
  }
  Container = ContainedBy<DMMVIDPNTOPOLOGY>::GetContainer((__int64)a2 + 40);
  v11 = ContainedBy<DMMVIDPN>::GetContainer(Container + 160);
  v12 = *((_QWORD *)a2 + 12);
  v14.VidPnSourceId = *(_DWORD *)(*((_QWORD *)a2 + 11) + 24LL);
  v14.VidPnTargetId = *(_DWORD *)(v12 + 24);
  v13 = VIDPN_MGR::FormalizeVidPnChange((__int64)this, (D3DKMDT_HVIDPN)(v11 & -(__int64)(v11 != -88)), 9LL, 1, &v14);
  v7 = v13;
  if ( v13 < 0 )
  {
    v8 = v3;
    if ( v13 == -1071774970 )
    {
      WdLogSingleEntry2(3LL, v3, a2);
      return (unsigned int)v7;
    }
LABEL_8:
    WdLogSingleEntry3(2LL, v8, a2, v7);
    return (unsigned int)v7;
  }
  return 0LL;
}
