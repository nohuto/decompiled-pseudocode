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
