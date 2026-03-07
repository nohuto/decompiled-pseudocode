void __fastcall CFlipToken::Retire(
        CFlipToken *this,
        const struct DXGI_FRAME_STATISTICS *a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // eax
  unsigned __int64 v9; // rdx
  CompositionSurfaceObject *v10; // rcx
  _OWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF

  *((_DWORD *)this + 6) = 5;
  CFlipToken::TraceStateChanged(this);
  if ( !(*(unsigned __int8 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this) )
  {
    if ( CompositionSurfaceObject::IsVBlankVirtualizationDisabled(
           *((CompositionSurfaceObject **)this + 4),
           *((_QWORD *)this + 5)) )
    {
      v6 = *(_OWORD *)a3;
      v7 = *((_OWORD *)a3 + 1);
    }
    else
    {
      v6 = *(_OWORD *)a2;
      v7 = *((_OWORD *)a2 + 1);
    }
    v8 = *((_DWORD *)this + 27);
    v9 = *((_QWORD *)this + 5);
    v10 = (CompositionSurfaceObject *)*((_QWORD *)this + 4);
    v11[0] = v6;
    LODWORD(v11[0]) = v8;
    v11[1] = v7;
    CompositionSurfaceObject::UpdateStats(v10, v9, (const struct DXGI_FRAME_STATISTICS *)v11);
  }
}
