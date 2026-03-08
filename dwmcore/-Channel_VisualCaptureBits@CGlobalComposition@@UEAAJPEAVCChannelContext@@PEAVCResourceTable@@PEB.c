/*
 * XREFs of ?Channel_VisualCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1801EF540
 * Callers:
 *     <none>
 * Callees:
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x180020558 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x18002057C (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x18003A504 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009EE80 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v13; // rcx
  VisualCaptureBitsResponse *v14; // rax
  struct WICRect v16; // [rsp+50h] [rbp-18h] BYREF
  struct CVisualTree *v17; // [rsp+88h] [rbp+20h] BYREF

  v17 = 0LL;
  v5 = *((_DWORD *)a4 + 10);
  v16 = *(struct WICRect *)((char *)a4 + 4);
  Resource = (CVisual *)CResourceTable::GetResource((__int64)a3, v5, 0xC4u);
  VisualTree = CVisual::GetVisualTree(Resource, &v17);
  v11 = v17;
  if ( VisualTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, VisualTree, 0x106u, 0LL);
  }
  else
  {
    v12 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new();
    if ( v12 )
    {
      v14 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v12,
              this[28],
              a2,
              v11,
              &v16,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 5),
              0LL,
              *((void **)a4 + 3),
              *((void **)a4 + 4));
      if ( v14 )
      {
        (*(void (__fastcall **)(VisualCaptureBitsResponse *))(*(_QWORD *)v14 + 40LL))(v14);
        goto LABEL_8;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x112u, 0LL);
  }
  SetEvent(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 3));
  CloseHandle(*((HANDLE *)a4 + 4));
LABEL_8:
  if ( v11 )
    (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v11 + 16LL))(v11);
  return 0LL;
}
