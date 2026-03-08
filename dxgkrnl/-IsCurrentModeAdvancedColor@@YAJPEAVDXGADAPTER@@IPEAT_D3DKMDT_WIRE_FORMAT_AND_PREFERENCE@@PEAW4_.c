/*
 * XREFs of ?IsCurrentModeAdvancedColor@@YAJPEAVDXGADAPTER@@IPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEA_N@Z @ 0x1C01AFD40
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x1C01A276C (-DmmGetCurrentWireFormatAndColorSpace@@YAJPEAXIIPEAT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAW4_D.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01AFE1C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall IsCurrentModeAdvancedColor(
        struct DXGADAPTER *a1,
        unsigned int a2,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *a3,
        enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE *a4,
        bool *a5)
{
  bool *v5; // r15
  char v6; // si
  __int64 v8; // r14
  int SourceConnectedToTargetInClientVidPn; // eax
  __int64 v12; // r12
  int CurrentWireFormatAndColorSpace; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v17; // rsi
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v18; // [rsp+50h] [rbp-28h] BYREF
  enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE v19[3]; // [rsp+54h] [rbp-24h] BYREF

  v5 = a5;
  v6 = 0;
  v8 = a2;
  v18.Value = 0;
  v19[0] = D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709;
  *a5 = 0;
  LODWORD(a5) = 0;
  SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(a1, a2, (unsigned int *)&a5);
  v12 = SourceConnectedToTargetInClientVidPn;
  if ( SourceConnectedToTargetInClientVidPn < 0 )
  {
    WdLogSingleEntry4(2LL, *((int *)a1 + 102), *((unsigned int *)a1 + 101), v8, SourceConnectedToTargetInClientVidPn);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DmmGetSourceConnectedToTargetInClientVidPn() failed on adapter:0x%I64x%08I64x target:0x%I64x (Status = 0x%I64x).",
      *((int *)a1 + 102),
      *((unsigned int *)a1 + 101),
      v8,
      v12,
      0LL);
    return (unsigned int)v12;
  }
  CurrentWireFormatAndColorSpace = DmmGetCurrentWireFormatAndColorSpace(a1, (int)a5, v8, &v18, v19);
  v12 = CurrentWireFormatAndColorSpace;
  if ( CurrentWireFormatAndColorSpace < 0 )
  {
    v17 = (unsigned int)a5;
    WdLogSingleEntry5(
      2LL,
      *((int *)a1 + 102),
      *((unsigned int *)a1 + 101),
      (unsigned int)a5,
      v8,
      CurrentWireFormatAndColorSpace);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DmmGetCurrentWireFormatAndColorSpace() failed on adapter:0x%I64x%08I64x source:0x%I64x target:0x%I64x (St"
                "atus = 0x%I64x).",
      *((int *)a1 + 102),
      *((unsigned int *)a1 + 101),
      v17,
      v8,
      v12);
    return (unsigned int)v12;
  }
  if ( a3 )
    a3->0 = v18.0;
  v14 = v19[0];
  if ( a4 )
    *a4 = v19[0];
  if ( (unsigned int)v14 <= 0x20 )
  {
    v15 = 0x140001000LL;
    if ( _bittest64(&v15, v14) )
      v6 = 1;
  }
  *v5 = v6;
  return 0LL;
}
