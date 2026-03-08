/*
 * XREFs of ?Partition_DesktopCaptureBits@CGlobalComposition@@UEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x180020460
 * Callers:
 *     <none>
 * Callees:
 *     ??2VisualCaptureBitsResponse@@SAPEAX_K@Z @ 0x180020558 (--2VisualCaptureBitsResponse@@SAPEAX_K@Z.c)
 *     ??0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTree@@AEBUWICRect@@W4DXGI_FORMAT@@_KPEAX6@Z @ 0x18002057C (--0VisualCaptureBitsResponse@@QEAA@PEAVCGlobalSurfaceManager@@PEAVCChannelContext@@PEAVCVisualTr.c)
 *     ?GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z @ 0x180032A40 (-GetDesktopTree@CGlobalComposition@@UEAAJU_LUID@@PEAPEAVCDesktopTree@@@Z.c)
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalComposition::Partition_DesktopCaptureBits(
        struct CGlobalSurfaceManager **this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_DESKTOPCAPTUREBITS *a4)
{
  int DesktopTree; // eax
  unsigned __int64 v8; // rcx
  VisualCaptureBitsResponse *v9; // rax
  unsigned int v10; // ecx
  VisualCaptureBitsResponse *v11; // rax
  struct WICRect v13; // [rsp+50h] [rbp-18h] BYREF
  struct CVisualTree *v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0LL;
  DesktopTree = CGlobalComposition::GetDesktopTree((CGlobalComposition *)this, *(struct _LUID *)((char *)a4 + 4), &v14);
  if ( DesktopTree < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, DesktopTree, 0xC8u, 0LL);
  }
  else
  {
    v13 = *(struct WICRect *)((char *)a4 + 12);
    v9 = (VisualCaptureBitsResponse *)VisualCaptureBitsResponse::operator new(v8);
    if ( v9 )
    {
      v11 = VisualCaptureBitsResponse::VisualCaptureBitsResponse(
              v9,
              this[28],
              a2,
              v14,
              &v13,
              (enum DXGI_FORMAT)*((_DWORD *)a4 + 7),
              *((_QWORD *)a4 + 4),
              *((void **)a4 + 5),
              *((void **)a4 + 6));
      if ( v11 )
      {
        (*(void (__fastcall **)(VisualCaptureBitsResponse *))(*(_QWORD *)v11 + 40LL))(v11);
        goto LABEL_5;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0xD9u, 0LL);
  }
  SetEvent(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 5));
  CloseHandle(*((HANDLE *)a4 + 6));
LABEL_5:
  if ( v14 )
    CResource::InternalRelease(v14);
  return 0LL;
}
