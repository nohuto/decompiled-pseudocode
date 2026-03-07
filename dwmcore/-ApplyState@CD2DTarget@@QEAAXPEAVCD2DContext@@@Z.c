void __fastcall CD2DTarget::ApplyState(CD2DTarget *this, struct CD2DContext *a2)
{
  bool v3; // zf
  CD2DContext *v4; // rcx
  unsigned int v5; // r8d
  __int128 v6; // xmm0

  if ( !*((_BYTE *)this + 73) )
  {
    *((_QWORD *)this + 2) = a2;
    CD2DContext::D2DSetTargetInternal(a2, this);
    v3 = *((_BYTE *)this + 72) == 0;
    v4 = (CD2DContext *)*((_QWORD *)this + 2);
    *((_BYTE *)this + 73) = 1;
    if ( v3 )
    {
      CD2DContext::D2DRemoveClip(v4);
    }
    else
    {
      v5 = *((_DWORD *)this + 17);
      v6 = *(_OWORD *)((char *)this + 52);
      *((_DWORD *)this + 17) = v5;
      *(_OWORD *)((char *)this + 52) = v6;
      CD2DContext::D2DSetWorldClip(v4, (const struct D2D_RECT_F *)((char *)this + 52), v5);
      *((_BYTE *)this + 72) = 1;
    }
  }
}
