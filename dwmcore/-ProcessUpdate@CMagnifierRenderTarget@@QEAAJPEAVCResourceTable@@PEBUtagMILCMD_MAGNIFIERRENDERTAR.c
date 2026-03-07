__int64 __fastcall CMagnifierRenderTarget::ProcessUpdate(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET *a3)
{
  _OWORD *v3; // rdi
  unsigned int v6; // ebx
  int updated; // eax
  __int64 v8; // rcx
  _OWORD *v9; // rdi

  v3 = (_OWORD *)((char *)this + 1864);
  if ( *((_DWORD *)this + 466) <= 6u )
  {
    updated = COffScreenRenderTarget::UpdatePixelFormatInfo(this, *((_DWORD *)a3 + 3));
    v6 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, updated, 0x34u, 0LL);
    }
    else
    {
      *((_DWORD *)this + 26) = *((_DWORD *)a3 + 4);
      *((_DWORD *)this + 27) = *((_DWORD *)a3 + 5);
      *v3 = *(_OWORD *)((char *)a3 + 8);
      v3[1] = *(_OWORD *)((char *)a3 + 24);
      v3[2] = *(_OWORD *)((char *)a3 + 40);
      v3[3] = *(_OWORD *)((char *)a3 + 56);
      v3[4] = *(_OWORD *)((char *)a3 + 72);
      v3[5] = *(_OWORD *)((char *)a3 + 88);
      v3[6] = *(_OWORD *)((char *)a3 + 104);
      v9 = v3 + 8;
      *(v9 - 1) = *(_OWORD *)((char *)a3 + 120);
      *v9 = *(_OWORD *)((char *)a3 + 136);
      v9[1] = *(_OWORD *)((char *)a3 + 152);
      v9[2] = *(_OWORD *)((char *)a3 + 168);
      v9[3] = *(_OWORD *)((char *)a3 + 184);
      v9[4] = *(_OWORD *)((char *)a3 + 200);
      COffScreenRenderTarget::ReleaseRenderTargets(this);
    }
  }
  else
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024809, 0x31u, 0LL);
  }
  return v6;
}
