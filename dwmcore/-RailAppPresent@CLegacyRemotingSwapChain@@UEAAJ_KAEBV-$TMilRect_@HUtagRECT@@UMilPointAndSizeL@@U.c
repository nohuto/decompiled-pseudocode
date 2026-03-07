__int64 __fastcall CLegacyRemotingSwapChain::RailAppPresent(CD3DDevice **this, __int64 a2, const struct tagRECT *a3)
{
  HRGN v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  CD3DDevice *v9; // rax
  int updated; // eax
  __int64 v11; // rcx
  signed int v12; // ebx
  int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  signed int LastError; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  HRGN hrgn; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v21[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h]
  int v23; // [rsp+50h] [rbp-B0h]
  int v24; // [rsp+54h] [rbp-ACh]
  __int64 v25; // [rsp+58h] [rbp-A8h]
  int v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+90h] [rbp-70h]
  HRGN v28; // [rsp+98h] [rbp-68h]
  LONG left; // [rsp+A8h] [rbp-58h]
  LONG top; // [rsp+ACh] [rbp-54h]
  struct tagRECT v31; // [rsp+D0h] [rbp-30h] BYREF
  void *v32[10]; // [rsp+E0h] [rbp-20h] BYREF
  const void *retaddr; // [rsp+168h] [rbp+68h]

  v6 = 0LL;
  hrgn = 0LL;
  memset_0(v21, 0, 0x90uLL);
  v7 = 1;
  CD3DDevice::Flush(this[9]);
  v8 = a3->right - a3->left;
  v25 = 0LL;
  v23 = v8;
  v24 = a3->bottom - a3->top;
  v9 = this[16];
  v22 = a2;
  if ( !*(_DWORD *)v9 )
    goto LABEL_13;
  updated = CLegacyRemotingSwapChain::UpdateSectionBits(this);
  v12 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x118u, 0LL);
    goto LABEL_21;
  }
  FastRegion::CRegion::CRegion((FastRegion::CRegion *)v32, a3);
  v13 = FastRegion::CRegion::Intersect(this + 16, (const struct FastRegion::Internal::CRgnData **)v32);
  if ( v13 < 0 )
    ModuleFailFastForHRESULT(v13, retaddr);
  v31.left = 0;
  v31.top = 0;
  FastRegion::CRegion::GetBoundingRect((LONG **)this + 16, &v31);
  v14 = CRegion::CreateHRGN((int **)this + 16, &hrgn);
  v12 = v14;
  if ( v14 >= 0 )
  {
    SetLastError(0);
    v6 = hrgn;
    if ( !OffsetRgn(hrgn, -a3->left, -a3->top) )
    {
      LastError = GetLastError();
      v12 = LastError;
      if ( LastError > 0 )
        v12 = (unsigned __int16)LastError | 0x80070000;
      if ( v12 >= 0 )
        v12 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v12, 0x127u, 0LL);
      FastRegion::CRegion::FreeMemory(v32);
      goto LABEL_19;
    }
    left = v31.left;
    v7 = 2;
    top = v31.top;
    v26 = 2;
    v27 = a2;
    v28 = v6;
    FastRegion::CRegion::FreeMemory(v32);
LABEL_13:
    v12 = (*(__int64 (__fastcall **)(CD3DDevice *, _BYTE *, _QWORD))(*(_QWORD *)this[14] + 56LL))(this[14], v21, v7);
    if ( ((v12 + 2147467263) & 0xFFFFFFFB) != 0 )
    {
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v12, 0x13Cu, 0LL);
    }
    else
    {
      v12 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2003304307, 0x138u, 0LL);
    }
    goto LABEL_19;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x123u, 0LL);
  FastRegion::CRegion::FreeMemory(v32);
  v6 = hrgn;
LABEL_19:
  if ( v6 )
    DeleteObject(v6);
LABEL_21:
  *(_DWORD *)this[16] = 0;
  return (unsigned int)v12;
}
