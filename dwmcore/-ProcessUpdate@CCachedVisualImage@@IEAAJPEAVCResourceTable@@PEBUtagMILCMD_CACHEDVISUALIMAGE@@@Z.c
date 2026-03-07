__int64 __fastcall CCachedVisualImage::ProcessUpdate(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE *a3)
{
  unsigned int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  int v13; // edi
  unsigned int v14; // esi
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  __int64 Resource; // rax
  unsigned int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // ecx
  unsigned int v26; // ecx

  (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 64LL))(this);
  *((_OWORD *)this + 6) = *(_OWORD *)((char *)a3 + 8);
  v6 = *((_DWORD *)a3 + 10);
  if ( v6 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v6, 0x8Cu);
    *((_QWORD *)this + 14) = Resource;
    if ( !Resource )
    {
      v14 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, -2003303421, 0xFCu, 0LL);
LABEL_27:
      (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 64LL))(this);
      goto LABEL_15;
    }
  }
  else
  {
    *((_QWORD *)this + 14) = 0LL;
  }
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)a3 + 24);
  v7 = *((_DWORD *)a3 + 11);
  if ( !v7 )
  {
    *((_QWORD *)this + 17) = 0LL;
    goto LABEL_5;
  }
  v24 = CResourceTable::GetResource((__int64)a2, v7, 0xACu);
  *((_QWORD *)this + 17) = v24;
  if ( !v24 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, -2003303421, 0x10Du, 0LL);
    goto LABEL_27;
  }
LABEL_5:
  v8 = *((_DWORD *)a3 + 12);
  if ( !v8 )
  {
    *((_QWORD *)this + 18) = 0LL;
    goto LABEL_11;
  }
  v9 = CResourceTable::GetResource((__int64)a2, v8, 0xC4u);
  *((_QWORD *)this + 18) = v9;
  if ( !v9 )
  {
    v14 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2003303421, 0x11Du, 0LL);
    goto LABEL_27;
  }
  if ( *((_BYTE *)this + 1777) )
  {
    *((_BYTE *)this + 1777) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
  if ( *((_BYTE *)this + 1776) )
  {
    *((_BYTE *)this + 1776) = 0;
    CCachedVisualImage::MarkAllTargetsDirty(this);
  }
LABEL_11:
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 13);
  *((_DWORD *)this + 39) = *((_DWORD *)a3 + 14);
  *((_DWORD *)this + 40) = *((unsigned __int8 *)a3 + 60);
  *((_DWORD *)this + 41) = *((_DWORD *)a3 + 16);
  *((_DWORD *)this + 44) = *((_DWORD *)a3 + 17);
  CCachedVisualImage::ChoosePixelFormat(this);
  v11 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 184LL))(this);
  v13 = v11;
  v14 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xAFu, 0LL);
    goto LABEL_26;
  }
  v15 = CResource::RegisterNotifier(this, *((struct CResource **)this + 14));
  v13 = v15;
  v14 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xB0u, 0LL);
    goto LABEL_26;
  }
  v17 = CResource::RegisterNotifier(this, *((struct CResource **)this + 17));
  v13 = v17;
  v14 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xB1u, 0LL);
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v13, 0x13Eu, 0LL);
    goto LABEL_27;
  }
  v19 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 224LL))(this);
  v14 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x140u, 0LL);
    goto LABEL_27;
  }
LABEL_15:
  (*(void (__fastcall **)(CCachedVisualImage *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
  return v14;
}
