void __fastcall DMMVIDPNSOURCEMODE::Serialize(DMMVIDPNSOURCEMODE *this, struct _D3DKMDT_VIDPN_SOURCE_MODE *const a2)
{
  a2->Id = *((_DWORD *)this + 6);
  a2->Type = *((_DWORD *)this + 18);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      a2->Format.Text = *DMMVIDPNSOURCEMODE::GetTextInfo(this);
      return;
    }
    if ( (unsigned int)(*((_DWORD *)this + 18) - 3) >= 2 )
    {
      WdLogSingleEntry2(2LL, this, *((int *)this + 18));
      return;
    }
  }
  a2->Format.Graphics = *DMMVIDPNSOURCEMODE::GetGraphicsInfo(this);
}
