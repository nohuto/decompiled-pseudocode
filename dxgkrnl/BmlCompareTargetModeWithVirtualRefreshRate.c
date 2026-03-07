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
