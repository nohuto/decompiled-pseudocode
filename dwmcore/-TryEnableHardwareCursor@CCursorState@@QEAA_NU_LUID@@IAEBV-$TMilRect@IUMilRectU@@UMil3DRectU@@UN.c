/*
 * XREFs of ?TryEnableHardwareCursor@CCursorState@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@VCMILMatrix@@@Z @ 0x180277F98
 * Callers:
 *     ?TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180225A1C (-TryEnableHardwareCursor@CCursorVisual@@QEAA_NU_LUID@@IAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@U.c)
 * Callees:
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071930 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18012BB3A (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801D8440 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x18026D270 (-SetRotation@CMILMatrix@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ??$emplace_back@UMonitorData@CCursorState@@@?$vector@UMonitorData@CCursorState@@V?$allocator@UMonitorData@CCursorState@@@std@@@std@@QEAA?A_T$$QEAUMonitorData@CCursorState@@@Z @ 0x18027581C (--$emplace_back@UMonitorData@CCursorState@@@-$vector@UMonitorData@CCursorState@@V-$allocator@UMo.c)
 *     ?EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z @ 0x180276CA8 (-EnsureHardwareOverlayCleared@CCursorState@@AEAAXPEAUMonitorData@1@@Z.c)
 *     ?FindMonitorData@CCursorState@@AEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UMonitorData@CCursorState@@@std@@@std@@@std@@U_LUID@@I@Z @ 0x180276D34 (-FindMonitorData@CCursorState@@AEAA-AV-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UMonito.c)
 *     ?GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z @ 0x180276D74 (-GetScaleAndRotation@CCursorState@@CA_NAEBVCMILMatrix@@PEAMPEAW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?TryGetShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTATION@@_N@Z @ 0x180278244 (-TryGetShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@IW4DXGI_MODE_ROTAT.c)
 *     ?UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z @ 0x18027848C (-UpdateHardwareCursorOverlay@CCursorState@@AEAAXPEAUMonitorData@1@_N@Z.c)
 */

bool __fastcall CCursorState::TryEnableHardwareCursor(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int128 *a4,
        CMILMatrix *a5)
{
  __int64 v9; // rbx
  __int128 v10; // xmm0
  int v11; // eax
  float v12; // xmm2_4
  enum DXGI_MODE_ROTATION v13; // r14d
  CCursorState *v14; // rcx
  int v15; // eax
  int v16; // edi
  __int64 *Shape; // rax
  bool v18; // zf
  bool v19; // bl
  float v21; // [rsp+30h] [rbp-D0h] BYREF
  enum DXGI_MODE_ROTATION v22[4]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v23[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp-58h]
  __int64 v27; // [rsp+ECh] [rbp-14h]
  __int64 v28; // [rsp+F4h] [rbp-Ch]
  int v29; // [rsp+FCh] [rbp-4h]
  std::_Ref_count_base *v30[2]; // [rsp+100h] [rbp+0h]
  int v31; // [rsp+118h] [rbp+18h]
  char v32; // [rsp+12Ch] [rbp+2Ch]

  EnterCriticalSection(&g_CursorManager);
  CCursorState::FindMonitorData(a1, v22, a2, a3);
  v9 = *(_QWORD *)v22;
  if ( *(_QWORD *)v22 == *(_QWORD *)(a1 + 88) )
  {
    v25 = a2;
    *(_OWORD *)v30 = 0LL;
    v26 = a3;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0;
    v31 = 0;
    v32 = 0;
    std::vector<CCursorState::MonitorData>::emplace_back<CCursorState::MonitorData>((__int64 *)(a1 + 80), (__int64)&v25);
    if ( v30[1] )
      std::_Ref_count_base::_Decref(v30[1]);
    v9 = *(_QWORD *)(a1 + 88) - 144LL;
  }
  *(_OWORD *)(v9 + 12) = *(_OWORD *)a5;
  *(_OWORD *)(v9 + 28) = *((_OWORD *)a5 + 1);
  *(_OWORD *)(v9 + 44) = *((_OWORD *)a5 + 2);
  v10 = *a4;
  *(_OWORD *)(v9 + 60) = *((_OWORD *)a5 + 3);
  v11 = *((_DWORD *)a5 + 16);
  *(_OWORD *)(v9 + 80) = v10;
  *(_DWORD *)(v9 + 76) = v11;
  v12 = *(float *)(a1 + 200);
  if ( COERCE_FLOAT(LODWORD(v12) & _xmm) >= 0.0000011920929 )
  {
    v22[0] = DXGI_MODE_ROTATION_UNSPECIFIED;
    v22[1] = DXGI_MODE_ROTATION_UNSPECIFIED;
    v22[2] = (int)FLOAT_1_0;
    v24 = 0;
    CMILMatrix::SetRotation((CMILMatrix *)v23, (const struct Windows::Foundation::Numerics::float3 *)v22, v12);
    CMILMatrix::Multiply(a5, (const struct CMILMatrix *)v23);
  }
  if ( g_disableHardwareCursors || !CCursorState::GetScaleAndRotation(a5, &v21, v22) )
  {
    *(_OWORD *)v22 = 0LL;
    std::shared_ptr<CRegion>::operator=((_QWORD *)(v9 + 96), (__int64 *)v22);
    v14 = *(CCursorState **)&v22[2];
    if ( *(_QWORD *)&v22[2] )
      std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v22[2]);
    *(_DWORD *)(v9 + 120) = 0;
  }
  else
  {
    v13 = v22[0];
    v14 = (CCursorState *)*(unsigned int *)(*(_QWORD *)(a1 + 184) + 12LL);
    v15 = *(_DWORD *)(a1 + 240);
    v21 = (float)((float)(v21 / *(float *)(a1 + 176)) * (float)(int)v14) + 6291456.25;
    v16 = (int)(LODWORD(v21) << 10) >> 11;
    if ( *(_DWORD *)(v9 + 120) != v15 || *(_DWORD *)(v9 + 112) != v16 || *(_DWORD *)(v9 + 116) != v22[0] )
    {
      Shape = (__int64 *)CCursorState::TryGetShape((CCursorState *)a1, *(_BYTE *)(a1 + 104));
      std::shared_ptr<CRegion>::operator=((_QWORD *)(v9 + 96), Shape);
      v14 = *(CCursorState **)&v22[2];
      if ( *(_QWORD *)&v22[2] )
        std::_Ref_count_base::_Decref(*(std::_Ref_count_base **)&v22[2]);
      if ( *(_QWORD *)(v9 + 96) )
        CCursorState::UpdateHardwareCursorOverlay((CCursorState *)a1, (struct CCursorState::MonitorData *)v9, 1);
      *(_DWORD *)(v9 + 120) = *(_DWORD *)(a1 + 240);
      *(_DWORD *)(v9 + 112) = v16;
      *(_DWORD *)(v9 + 116) = v13;
    }
  }
  v18 = *(_QWORD *)(v9 + 96) == 0LL;
  if ( !*(_QWORD *)(v9 + 96) )
  {
    CCursorState::EnsureHardwareOverlayCleared(v14, (struct CCursorState::MonitorData *)v9);
    v18 = *(_QWORD *)(v9 + 96) == 0LL;
  }
  v19 = !v18;
  LeaveCriticalSection(&g_CursorManager);
  return v19;
}
