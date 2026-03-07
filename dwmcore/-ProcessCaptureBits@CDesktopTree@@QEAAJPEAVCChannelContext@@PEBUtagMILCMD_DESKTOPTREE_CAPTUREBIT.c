__int64 __fastcall CDesktopTree::ProcessCaptureBits(
        CDesktopTree *this,
        struct CChannelContext *a2,
        const struct tagMILCMD_DESKTOPTREE_CAPTUREBITS *a3)
{
  CaptureBitsResponse *v6; // rax
  __int64 v7; // rcx
  struct CaptureBitsResponse *v8; // rax
  struct CaptureBitsResponse *v9; // rdi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  struct WICRect v14; // [rsp+40h] [rbp-18h] BYREF

  v14 = *(struct WICRect *)((char *)a3 + 12);
  v6 = (CaptureBitsResponse *)CaptureBitsResponse::operator new();
  if ( v6
    && (v8 = CaptureBitsResponse::CaptureBitsResponse(
               v6,
               *((struct CGlobalSurfaceManager **)g_pComposition + 28),
               a2,
               this,
               1.0,
               &v14,
               (enum DXGI_FORMAT)*((_DWORD *)a3 + 7),
               *((_QWORD *)a3 + 4)),
        (v9 = v8) != 0LL) )
  {
    v10 = CLegacySurfaceManager::AddCaptureBitsResponse(
            (CLegacySurfaceManager *)(*((_QWORD *)g_pComposition + 28) + 152LL),
            v8);
    v12 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x25u, 0LL);
    (*(void (__fastcall **)(struct CaptureBitsResponse *))(*(_QWORD *)v9 + 40LL))(v9);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024882, 0x21u, 0LL);
  }
  return v12;
}
