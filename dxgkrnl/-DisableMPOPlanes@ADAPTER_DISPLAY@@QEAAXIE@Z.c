void __fastcall ADAPTER_DISPLAY::DisableMPOPlanes(ADAPTER_DISPLAY *this, unsigned int a2, char a3)
{
  __int64 v4; // r15
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int i; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // [rsp+38h] [rbp-138h]
  int v16; // [rsp+48h] [rbp-128h]
  int v17; // [rsp+50h] [rbp-120h]
  int v18; // [rsp+58h] [rbp-118h]
  _DWORD *v19; // [rsp+F0h] [rbp-80h] BYREF
  _OWORD v20[3]; // [rsp+F8h] [rbp-78h] BYREF
  __int64 v21; // [rsp+128h] [rbp-48h]
  _DWORD v22[36]; // [rsp+130h] [rbp-40h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 2928LL);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    for ( i = a3 == 0; i < *(_DWORD *)(v7 + 2760); ++i )
    {
      if ( ADAPTER_DISPLAY::IsPlaneEnabled(this, v4, i) )
      {
        memset(&v22[1], 0, 0x8CuLL);
        v22[0] = i;
        v19 = v22;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          McTemplateK0pqqxpxqqqddddddddddddqqtqq_EtwWriteTransfer(
            v10,
            v9,
            v11,
            *((_QWORD *)this + 2),
            v4,
            i,
            0,
            v15,
            0,
            v16,
            v17,
            v18,
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
        v21 = 0LL;
        v20[0] = 0LL;
        LODWORD(v20[0]) = v4;
        v20[1] = (unsigned __int64)&v19;
        v12 = *((_QWORD *)this + 2);
        v20[2] = 0LL;
        HIDWORD(v20[0]) = 1;
        if ( (*(int (__fastcall **)(_QWORD, _OWORD *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 2928) + 736LL) + 8LL)
                                                     + 824LL))(
               *(_QWORD *)(*(_QWORD *)(v12 + 2928) + 744LL),
               v20) < 0 )
        {
          WdLogSingleEntry3(2LL, i, v4, *((_QWORD *)this + 2));
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to disable MPO plane 0x%I64x in SetVidPnSourceVisibility, VidPnSourceId: 0x%I64x, Adapter 0x%I64x",
            i,
            v4,
            *((_QWORD *)this + 2),
            0LL,
            0LL);
        }
      }
      v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 2928LL) + 16LL);
    }
    if ( a3 )
    {
      ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(this, 1 << v4);
    }
    else
    {
      v13 = *(_QWORD *)(4000 * v4 + *((_QWORD *)this + 16) + 728);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 1880);
        if ( v14 == *(_QWORD *)(*(_QWORD *)(v13 + 16) + 16LL) )
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v14 + 2920), v4);
      }
    }
  }
}
