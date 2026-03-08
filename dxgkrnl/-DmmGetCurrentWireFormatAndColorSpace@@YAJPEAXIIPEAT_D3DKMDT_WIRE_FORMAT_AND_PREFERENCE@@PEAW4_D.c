/*
 * XREFs of ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C01A276C
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01AE290 (DxgkGetAdapterDeviceDesc.c)
 *     ?IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEA_N@Z @ 0x1C01AFD40 (-IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_.c)
 *     ?ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@II_NPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01E614C (-ConvertVidPnPathToPathDescription@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@QE.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00078B0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 */

__int64 __fastcall DmmGetCurrentWireFormatAndColorSpace(
        _QWORD *a1,
        int a2,
        int a3,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a4,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a5)
{
  __int64 v9; // rdi
  __int64 v10; // rdi
  struct _KTHREAD **v11; // rbp
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdi
  _QWORD *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned int v21; // ebx
  __int64 v23; // rcx

  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  v9 = a1[365];
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223191554LL;
  }
  v10 = *(_QWORD *)(v9 + 104);
  if ( v10 )
  {
    v11 = (struct _KTHREAD **)(v10 + 40);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v10 + 40));
    v12 = *(_QWORD *)(v10 + 128);
    if ( v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 32));
      v13 = *(_QWORD *)(v10 + 128);
      v14 = v13;
      if ( v13 )
      {
        v15 = 0LL;
        v16 = *(_QWORD *)(v13 + 120);
        if ( v16 != v13 + 120 )
          v15 = (_QWORD *)(v16 - 8);
        while ( v15 && (*(_DWORD *)(v15[11] + 24LL) != a2 || *(_DWORD *)(v15[12] + 24LL) != a3) )
        {
          v23 = v15[1];
          v15 = (_QWORD *)(v23 - 8);
          if ( v23 == v13 + 120 )
            v15 = 0LL;
        }
        if ( v15 )
        {
          v17 = v15[12];
          if ( v17 )
          {
            v18 = *(_QWORD *)(v17 + 104);
            if ( v18 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v18 + 96));
              v19 = *(_QWORD *)(v17 + 104);
            }
            else
            {
              v19 = 0LL;
            }
            if ( !*(_QWORD *)(v19 + 144) )
              WdLogSingleEntry0(1LL);
            v20 = *(_QWORD *)(v19 + 144);
            v21 = 0;
            a4->0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v20 + 132);
            *a5 = *(enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *)(v20 + 136);
            ReferenceCounted::Release((ReferenceCounted *)(v19 + 88));
LABEL_18:
            ReferenceCounted::Release((ReferenceCounted *)(v14 + 24));
LABEL_19:
            DXGFASTMUTEX::Release(v11);
            return v21;
          }
        }
        WdLogSingleEntry1(2LL, v13);
        v21 = -1071774971;
LABEL_20:
        if ( !v14 )
          goto LABEL_19;
        goto LABEL_18;
      }
    }
    else
    {
      v14 = 0LL;
    }
    WdLogSingleEntry1(2LL, a1);
    v21 = -1071774884;
    goto LABEL_20;
  }
  WdLogSingleEntry1(2LL, a1);
  return 3223192373LL;
}
