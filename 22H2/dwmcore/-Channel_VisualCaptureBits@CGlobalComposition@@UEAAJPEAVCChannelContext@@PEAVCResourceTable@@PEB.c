/*
 * XREFs of ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x180162630
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003DF38 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x180043970 (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x180045050 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800A3484 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalComposition::Channel_VisualCaptureBits(
        struct CGlobalSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_CHANNEL_VISUALCAPTUREBITS *a4)
{
  unsigned int v5; // edx
  CVisual *Resource; // rax
  int VisualTree; // eax
  __int64 v10; // rcx
  struct CVisualTree *v11; // rdi
  VisualCaptureBitsResponse *v12; // rax
  VisualCaptureBitsResponse *v13; // rcx
  struct WICRect v15; // [rsp+50h] [rbp-18h] BYREF
  struct CVisualTree *v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  v5 = *((_DWORD *)a4 + 10);
  v15 = *(struct WICRect *)((char *)a4 + 4);
  Resource = (CVisual *)CResourceTable::GetResource((__int64)a3, v5, 0xC3u);
  VisualTree = CVisual::GetVisualTree(Resource, &v16);
  v11 = v16;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, VisualTree, 0x124u, 0LL);
  }
  else
  {
    v12 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
    if ( v12 )
      v13 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v12,
              this[12],
              a2,
              v11,
              &v15,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 5),
              0LL,
              *((void **)a4 + 3),
              *((void **)a4 + 4));
    else
      v13 = 0LL;
    if ( v13 )
    {
      (*(void (__fastcall **)(VisualCaptureBitsResponse *))(*(_QWORD *)v13 + 32LL))(v13);
      goto LABEL_10;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x132u, 0LL);
  }
  SetEvent(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 4));
LABEL_10:
  if ( v11 )
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
