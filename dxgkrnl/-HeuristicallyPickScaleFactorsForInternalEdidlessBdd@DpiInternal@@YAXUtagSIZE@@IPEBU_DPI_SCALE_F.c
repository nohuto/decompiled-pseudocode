/*
 * XREFs of ?HeuristicallyPickScaleFactorsForInternalEdidlessBdd@DpiInternal@@YAXUtagSIZE@@IPEBU_DPI_SCALE_FACTOR_COLLECTION@@PEAU_DPI_INFORMATION@@@Z @ 0x1C004BC08
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0169828 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     ??PDpiInternal@@YA_NAEBUtagSIZE@@0@Z @ 0x1C00160F8 (--PDpiInternal@@YA_NAEBUtagSIZE@@0@Z.c)
 */

void __fastcall DpiInternal::HeuristicallyPickScaleFactorsForInternalEdidlessBdd(
        DpiInternal *this,
        struct tagSIZE a2,
        __int64 a3,
        const struct _DPI_SCALE_FACTOR_COLLECTION *a4)
{
  __int64 v4; // r10
  __int64 v5; // r11
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  bool v8; // zf
  int v9; // [rsp+34h] [rbp+Ch]
  __int64 v10; // [rsp+40h] [rbp+18h]
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  v9 = HIDWORD(this);
  v4 = (unsigned int)(*(_DWORD *)(a3 + 8) - 1);
  if ( *(_DWORD *)(a3 + 8) != 1 )
  {
    v5 = *(_QWORD *)(a3 + 16);
    v6 = 100 * (_DWORD)this;
    do
    {
      v7 = *(_DWORD *)(v5 + 4 * v4);
      LODWORD(v10) = v6 / v7;
      HIDWORD(v10) = 100 * v9 / v7;
      v11 = v10;
      if ( DpiInternal::operator>=(&v11, (_DWORD *)a3) )
        break;
      v8 = (_DWORD)v4 == 1;
      v4 = (unsigned int)(v4 - 1);
    }
    while ( !v8 );
  }
  *((_DWORD *)a4 + 3) = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 4 * v4);
}
