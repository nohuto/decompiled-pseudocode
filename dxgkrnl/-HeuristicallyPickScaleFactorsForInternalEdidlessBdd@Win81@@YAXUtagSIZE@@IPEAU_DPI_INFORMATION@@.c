/*
 * XREFs of ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@Win81@@YAXUtagSIZE@@IPEAU_DPI_INFORMATION@@@Z @ 0x1C031CA68
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C031CC94 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ??PWin81@@YA_NAEBUtagSIZE@@0@Z @ 0x1C031C220 (--PWin81@@YA_NAEBUtagSIZE@@0@Z.c)
 */

void __fastcall Win81::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        Win81 *this,
        struct tagSIZE a2,
        __int64 a3,
        struct _DPI_INFORMATION *a4)
{
  unsigned int v4; // r11d
  _DWORD *v5; // r10
  unsigned int v6; // ebx
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  __int64 v10; // [rsp+40h] [rbp+18h]
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v4 = 100 * (_DWORD)this;
  v5 = &unk_1C00E5B28;
  v6 = 100 * HIDWORD(this);
  do
  {
    LODWORD(v10) = v4 / *v5;
    HIDWORD(v10) = v6 / *v5;
    v11 = v10;
    if ( Win81::operator>=(&v11, dword_1C008CA08) )
      break;
    v5 = (_DWORD *)(v9 - 4);
    --v8;
  }
  while ( v8 );
  *(_DWORD *)(v7 + 12) = *(_DWORD *)&PairedScaleFactorsArray_Win81[4 * v8];
}
