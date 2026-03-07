const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *__fastcall DMMVIDPNSOURCEMODE::GetGraphicsInfo(
        DMMVIDPNSOURCEMODE *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 18);
  if ( ((v1 - 1) & 0xFFFFFFFC) != 0 || v1 == 2 )
    WdLogSingleEntry0(1LL);
  return (const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)((char *)this + 76);
}
