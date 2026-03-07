char __fastcall DirectComposition::CPropertySetMarshaler::SetRemarshalingFlags(
        DirectComposition::CPropertySetMarshaler *this)
{
  char v1; // di
  unsigned int v3; // esi
  int v4; // eax
  char v5; // al

  v1 = 0;
  if ( *((_DWORD *)this + 20) )
  {
    v3 = 0;
    do
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(
        (__int64 *)this + 9,
        v3++,
        1LL);
    while ( v3 < *((_DWORD *)this + 20) );
    v4 = *((_DWORD *)this + 4) | 0x80;
    *((_DWORD *)this + 4) = v4;
  }
  else
  {
    v4 = *((_DWORD *)this + 4);
  }
  if ( *((_DWORD *)this + 26) )
    *((_DWORD *)this + 4) = v4 | 0x100;
  v5 = DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  if ( (*((_DWORD *)this + 4) & 0x180) != 0 || v5 )
    return 1;
  return v1;
}
