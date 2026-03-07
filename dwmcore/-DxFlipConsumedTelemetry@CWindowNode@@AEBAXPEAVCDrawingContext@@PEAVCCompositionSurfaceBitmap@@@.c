void __fastcall CWindowNode::DxFlipConsumedTelemetry(
        CWindowNode *this,
        struct CDrawingContext *a2,
        struct CCompositionSurfaceBitmap *a3)
{
  __int64 v5; // r8
  CCompositionSurfaceInfo *v6; // rcx
  char LastPresentCount; // al
  _QWORD *v8; // rcx
  char v9; // r8
  char v10; // di
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // [rsp+70h] [rbp-48h] BYREF
  int v14; // [rsp+78h] [rbp-40h]
  int v15; // [rsp+80h] [rbp-38h]
  int v16; // [rsp+84h] [rbp-34h]
  int v17; // [rsp+88h] [rbp-30h]
  _BYTE v18[16]; // [rsp+90h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0
    && CDrawingContext::GetMonitorTargetId(a2, (struct tagCOMPOSITION_TARGET_ID *)&v13) )
  {
    v6 = *(CCompositionSurfaceInfo **)(v5 + 104);
    if ( v6 )
    {
      if ( CCompositionSurfaceInfo::ConsumeDxFlipRect(v6, (struct MilRectU *)v18)
        && (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      {
        LastPresentCount = CCompositionSurfaceBitmap::GetLastPresentCount(a3);
        v8 = (_QWORD *)*((_QWORD *)a3 + 13);
        v9 = 0;
        v10 = LastPresentCount;
        if ( v8 )
          v9 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v8 + 64LL))(v8, *v8, 0LL);
        v11 = *((_QWORD *)a3 + 13);
        LODWORD(v12) = g_luidZero.LowPart;
        if ( v11 )
          v12 = *(_QWORD *)(v11 + 40);
        McTemplateU0xxxqqqxxqn_EventWriteTransfer(
          v12,
          v14,
          *((_QWORD *)this + 88),
          v13,
          v14,
          v15,
          v16,
          v17,
          v12,
          v9,
          v10);
      }
    }
  }
}
