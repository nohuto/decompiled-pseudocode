/*
 * XREFs of ?IsDisplayingOnVidPnSource@DXGDEVICE@@QEAA_NI@Z @ 0x1C02E6BB8
 * Callers:
 *     DXGDEVICE_IsDisplayingOnVidPnSource @ 0x1C0047FF0 (DXGDEVICE_IsDisplayingOnVidPnSource.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00046DC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z @ 0x1C01DD468 (-IsVidPnSourcePrimaryValid@DXGDEVICE@@QEAAEI@Z.c)
 */

bool __fastcall DXGDEVICE::IsDisplayingOnVidPnSource(DXGDEVICE *this, unsigned int a2)
{
  __int64 v2; // rcx
  unsigned int v3; // r8d
  __int64 v4; // rcx
  ADAPTER_DISPLAY *v5; // rcx

  if ( DXGDEVICE::IsVidPnSourcePrimaryValid(this, a2) )
    return 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 16) + 16LL);
  return v4 && (v5 = *(ADAPTER_DISPLAY **)(v4 + 2920)) != 0LL && ADAPTER_DISPLAY::IsVidPnSourceVisible(v5, v3) != 0;
}
