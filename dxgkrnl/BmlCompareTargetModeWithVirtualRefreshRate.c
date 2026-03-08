/*
 * XREFs of BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C03B89AC
 * Callers:
 *     BmlCompareTargetModes @ 0x1C016E704 (BmlCompareTargetModes.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C017116C (BmlCompareTargetModesWithConstraint.c)
 * Callees:
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x1C00021C8 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ??$DIFF@I@@YAIII@Z @ 0x1C0069724 (--$DIFF@I@@YAIII@Z.c)
 *     ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C0171118 (--$BmlCompareValues@I@@YA-AW4BML_COMPARISON_RESULT@@II@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C0172AAC (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C01E6480 (-DmmCalculatePresentationVSync@@YAXPEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@PEAU_D3DDDI_RATIONAL@@@Z.c)
 */

__int64 __fastcall BmlCompareTargetModeWithVirtualRefreshRate(
        struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1,
        struct _D3DKMDT_VIDEO_SIGNAL_INFO *a2,
        const struct _D3DDDI_RATIONAL *a3)
{
  const struct _D3DDDI_RATIONAL *v5; // rdi
  unsigned int v6; // esi
  unsigned int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // eax
  struct _D3DDDI_RATIONAL v13; // [rsp+50h] [rbp+18h] BYREF
  struct _D3DDDI_RATIONAL v14; // [rsp+58h] [rbp+20h] BYREF

  if ( (a3->Numerator & 0x1000002) != 0x1000000LL )
    return 0LL;
  v5 = a3 + 28;
  if ( IsUnspecifiedFrequency(a3 + 28) )
    return 0LL;
  v13 = 0LL;
  DmmCalculatePresentationVSync(a1, &v13);
  v14 = 0LL;
  DmmCalculatePresentationVSync(a2, &v14);
  v6 = DmmMapVSyncFromRationalToInteger(
         v5,
         (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
         0LL);
  v7 = DmmMapVSyncFromRationalToInteger(
         &v13,
         (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
         0LL);
  v8 = DmmMapVSyncFromRationalToInteger(
         v5,
         (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a2->AdditionalSignalInfo << 29) >> 29),
         0LL);
  v9 = DIFF<unsigned int>(v7, v6);
  v10 = DmmMapVSyncFromRationalToInteger(
          &v14,
          (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a2->AdditionalSignalInfo << 29) >> 29),
          0LL);
  v11 = DIFF<unsigned int>(v10, v8);
  return BmlCompareValues<unsigned int>(v11, v9);
}
