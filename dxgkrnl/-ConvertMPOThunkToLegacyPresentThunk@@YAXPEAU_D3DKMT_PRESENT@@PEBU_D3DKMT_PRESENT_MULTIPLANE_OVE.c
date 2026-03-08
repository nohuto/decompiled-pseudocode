/*
 * XREFs of ?ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1C031F7AC
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     <none>
 */

void __fastcall ConvertMPOThunkToLegacyPresentThunk(
        struct _D3DKMT_PRESENT *a1,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        const struct _D3DKMT_MULTIPLANE_OVERLAY3 *a3)
{
  D3DKMT_HANDLE v4; // r9d
  D3DDDI_FLIPINTERVAL_TYPE FlipInterval; // eax
  UINT v6; // eax
  UINT v7; // ecx
  UINT v8; // eax
  UINT v9; // ecx
  UINT v10; // eax
  UINT v11; // ecx
  UINT v12; // eax
  UINT v13; // ecx

  v4 = *a2->pContextList;
  a1->BroadcastContextCount = 0;
  a1->hDevice = v4;
  a1->hSource = *a3->pAllocationList;
  a1->VidPnSourceId = a2->VidPnSourceId;
  a1->SrcRect = a3->pPlaneAttributes->SrcRect;
  a1->SubRectCnt = a3->pPlaneAttributes->DirtyRectCount;
  a1->pSrcSubRects = a3->pPlaneAttributes->pDirtyRects;
  a1->PresentCount = a2->PresentCount;
  FlipInterval = a3->FlipInterval;
  a1->pPresentRegions = 0LL;
  a1->FlipInterval = FlipInterval;
  a1->Duration = a2->Duration;
  a1->PrivateDriverDataSize = a3->DriverPrivateDataSize;
  a1->pPrivateDriverData = a3->pDriverPrivateData;
  v6 = a1->Flags.Value | 4;
  a1->Flags.Value = v6;
  v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 8;
  a1->Flags.Value = v7;
  v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(2 * a2->Flags.Value)) & 0x10;
  a1->Flags.Value = v8;
  v9 = v8 & 0xFFFFFFDF | a2->Flags.Value & 0x20 | 0x1000;
  a1->Flags.Value = v9;
  v10 = v9 ^ (v9 ^ (a2->Flags.Value << 17)) & 0x20000;
  a1->Flags.Value = v10;
  v11 = v10 ^ (v10 ^ (a2->Flags.Value << 17)) & 0x40000;
  a1->Flags.Value = v11;
  v12 = v11 ^ (v11 ^ (a2->Flags.Value << 17)) & 0x80000;
  a1->Flags.Value = v12;
  v13 = v12 ^ (v12 ^ (a2->Flags.Value << 21)) & 0x8000000;
  a1->Flags.Value = v13;
  a1->Flags.Value = v13 ^ (v13 ^ (a2->Flags.Value << 21)) & 0x20000000;
}
