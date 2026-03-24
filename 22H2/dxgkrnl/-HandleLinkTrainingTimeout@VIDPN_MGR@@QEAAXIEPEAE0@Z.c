/*
 * XREFs of ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02E4E58
 * Callers:
 *     ?LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C02E6550 (-LinkTrainingTimeoutWorkItem@DMMVIDEOPRESENTTARGET@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000C598 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D994 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C00E6D88 (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C011DA44 (-DriverSupportSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA?AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z @ 0x1C013E2E0 (-GetTargetLinkTrainingStatus@DMMVIDEOPRESENTTARGET@@QEBA-AW4_DXGK_CONNECTION_STATUS@@PEA_K@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02E50E4 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 */

void __fastcall VIDPN_MGR::HandleLinkTrainingTimeout(
        VIDPN_MGR *this,
        __int64 a2,
        char a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  __int64 v5; // rdi
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  struct _LUID *v15; // rdx
  __int64 v16; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rsi
  __int64 v18; // rax
  int v19; // r11d
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r11d
  unsigned __int64 v26; // [rsp+30h] [rbp-81h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-79h] BYREF
  struct _DXGK_CONNECTION_CHANGE v28; // [rsp+40h] [rbp-71h] BYREF
  __int128 v29; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v30[10]; // [rsp+70h] [rbp-41h] BYREF

  v5 = *((_QWORD *)this + 1);
  v8 = (unsigned int)a2;
  if ( !v5 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
    v5 = *((_QWORD *)this + 1);
  }
  v11 = *(_QWORD *)(v5 + 16);
  memset(v30, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v30[1]);
  v30[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v30[3]) = 61;
  LOBYTE(v30[6]) = -1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)v11) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v14);
  }
  *a4 = 0;
  *a5 = 0;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(*((DMMVIDEOPRESENTTARGETSET **)this + 10), (unsigned int)v8);
  if ( TargetById )
  {
    if ( a3 )
    {
      v26 = 0LL;
      DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, v15, 0LL, &v26);
      DxgkLogCodePointPacketForSession(0x58u, v26, v8, 268435454, v19, *(_QWORD *)(v11 + 316));
      if ( DXGADAPTER::DriverSupportSetTimingsFromVidPn((DXGADAPTER *)v11) )
      {
        *a4 = 1;
      }
      else
      {
        v29 = 0LL;
        DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v29);
        *(_BYTE *)(*((_QWORD *)TargetById + 67) + 168LL) = 13;
        v20 = *((_QWORD *)TargetById + 67);
        *(_QWORD *)(v20 + 160) = v29;
        Global = DXGGLOBAL::GetGlobal(v20, v21);
        QDC_CACHE::InvalidateCache(*((struct DXGFASTMUTEX *const **)Global + 172), 0LL);
        v24 = WdLogNewEntry5_WdDmmEvent(v23);
        *(_QWORD *)(v24 + 24) = v8;
        *(_QWORD *)(v24 + 32) = v11;
        WdLogEvent5_WdDmmEvent(v24);
        *a5 = 1;
      }
    }
    else
    {
      v27 = 0LL;
      DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v11, v15, 0LL, &v27);
      DxgkLogCodePointPacketForSession(0x58u, v27, v8, 0xFFFFFFF, v25, *(_QWORD *)(v11 + 316));
      memset(&v28, 0, sizeof(v28));
      DMMVIDEOPRESENTTARGET::GetTargetLinkTrainingStatus((__int64)TargetById, &v28);
      *((_DWORD *)&v28 + 2) = v8 & 0xFFFFFF | *((_DWORD *)&v28 + 2) & 0xFD000000 | 0xD000000;
      VIDPN_MGR::UpdateTargetLinkTrainingStatus(this, &v28, 0, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v30, 0);
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = v8;
    WdLogEvent5_WdError(v18);
  }
}
