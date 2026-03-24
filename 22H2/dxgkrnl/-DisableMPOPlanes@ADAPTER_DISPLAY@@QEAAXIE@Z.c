/*
 * XREFs of ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C02120F0
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E767C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C00EA8F4 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEAPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEBIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0112FB0 (-DxgkDestroyAllocationInternal@@YAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAIPEAPEAVDXGALLOCATION@@IAEA.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer @ 0x1C003B684 (McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00F93C0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C016A8F0 (-DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z @ 0x1C0214050 (-IsPlaneEnabled@ADAPTER_DISPLAY@@QEAAEII@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableMPOPlanes(ADAPTER_DISPLAY *this, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int i; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+38h] [rbp-138h]
  int v19; // [rsp+48h] [rbp-128h]
  int v20; // [rsp+50h] [rbp-120h]
  int v21; // [rsp+58h] [rbp-118h]
  _DWORD *v22; // [rsp+F0h] [rbp-80h] BYREF
  int v23; // [rsp+F8h] [rbp-78h] BYREF
  __int64 v24; // [rsp+FCh] [rbp-74h]
  int v25; // [rsp+104h] [rbp-6Ch]
  _QWORD *v26; // [rsp+108h] [rbp-68h]
  __int128 v27; // [rsp+110h] [rbp-60h]
  __int64 v28; // [rsp+120h] [rbp-50h]
  _DWORD v29[36]; // [rsp+130h] [rbp-40h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 2704LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    for ( i = a3 == 0; i < *(_DWORD *)(v7 + 2536); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPlaneEnabled(this, v4, i) )
      {
        memset(&v29[1], 0, 0x8CuLL);
        v22 = v29;
        v29[0] = i;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
            v10,
            v9,
            v11,
            *((_QWORD *)this + 2),
            v4,
            i,
            0,
            v18,
            0,
            v19,
            v20,
            v21,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0);
        v24 = 0LL;
        v26 = &v22;
        v12 = *((_QWORD *)this + 2);
        v27 = 0LL;
        v28 = 0LL;
        v23 = v4;
        v25 = 1;
        if ( (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 2704) + 616LL) + 8LL)
                                                  + 824LL))(
               *(_QWORD *)(*(_QWORD *)(v12 + 2704) + 624LL),
               &v23) < 0 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
          v15[3] = i;
          v15[4] = v4;
          v15[5] = *((_QWORD *)this + 2);
          WdLogEvent5_WdError(v15);
        }
      }
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2704LL) + 16LL);
    }
    if ( a3 )
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v4);
    }
    else
    {
      v16 = *(_QWORD *)(3968 * v4 + *((_QWORD *)this + 14) + 688);
      if ( v16 )
      {
        v17 = *(_QWORD *)(v16 + 1848);
        if ( v17 == *(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) )
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v17 + 2696), (unsigned int)v4);
      }
    }
  }
}
