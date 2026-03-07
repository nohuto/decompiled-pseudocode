bool __fastcall DXGADAPTER::ReplicateGdiContent(DXGADAPTER *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 2838) )
    return (*((_DWORD *)DXGPROCESS::GetCurrent((__int64)this) + 106) & 0x180) == 0;
  return v1;
}
