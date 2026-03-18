/*
 * XREFs of DxgkGetWin32kImportTable @ 0x1C001166C
 * Callers:
 *     NtTokenManagerCreateCompositionTokenHandle @ 0x1C0011260 (NtTokenManagerCreateCompositionTokenHandle.c)
 *     ?Discard@CCompositionToken@@UEAAXXZ @ 0x1C0012230 (-Discard@CCompositionToken@@UEAAXXZ.c)
 *     ?FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenInitInfo@@@Z @ 0x1C0081E88 (-FlipManagerCreateProducerTokenInitInfo@@YAJPEAX_N_KIPEAUFlipPropertyItem@@PEAUFlipManagerTokenI.c)
 *     ?ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z @ 0x1C0083570 (-ConsumerIFlipTokenCompleted@CFlipManager@@QEAAXPEAVCFlipManagerToken@@PEAPEAVCToken@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z @ 0x1C01A9DF0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE_HEADER@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 DxgkGetWin32kImportTable()
{
  return *((_QWORD *)DXGGLOBAL::GetGlobal() + 38069);
}
