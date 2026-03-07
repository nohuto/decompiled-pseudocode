__int64 __fastcall DMMVIDPNSOURCEMODE::Initialize(
        DMMVIDPNSOURCEMODE *this,
        const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *a2,
        enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE a3)
{
  int v6; // esi
  __int64 result; // rax

  v6 = DMMVIDPNSOURCEMODE::_ValidateDdiGraphicsRenderingFormat(a2);
  if ( v6 >= 0 )
  {
    *((_DWORD *)this + 18) = a3;
    result = 0LL;
    *(_OWORD *)((char *)this + 76) = *(_OWORD *)&a2->PrimSurfSize.cx;
    *(_OWORD *)((char *)this + 92) = *(_OWORD *)&a2->Stride;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    return (unsigned int)v6;
  }
  return result;
}
