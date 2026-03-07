__int64 __fastcall CCachedVisualImage::SetRootVisual(CCachedVisualImage *this, struct CVisual *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v2 = 0;
  if ( !*((_BYTE *)this + 1776) )
  {
    (*(void (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 192LL))(this);
    v5 = *(_QWORD *)this;
    *((_QWORD *)this + 18) = a2;
    v6 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(v5 + 184))(this);
    v2 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x2E9u, 0LL);
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(CCachedVisualImage *))(*(_QWORD *)this + 224LL))(this);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x2EBu, 0LL);
      }
      else
      {
        CCachedVisualImage::MarkAllTargetsDirty(this);
        (*(void (__fastcall **)(CCachedVisualImage *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, 0LL, 0LL);
      }
    }
  }
  return v2;
}
