const enum _D3DKMDT_TEXT_RENDERING_FORMAT *__fastcall DMMVIDPNSOURCEMODE::GetTextInfo(DMMVIDPNSOURCEMODE *this)
{
  if ( *((_DWORD *)this + 18) != 2 )
    WdLogSingleEntry0(1LL);
  return (const enum _D3DKMDT_TEXT_RENDERING_FORMAT *)((char *)this + 76);
}
