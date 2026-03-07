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
