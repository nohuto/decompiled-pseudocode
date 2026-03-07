__int64 __fastcall DXGADAPTER::GetNumDifferentPhysicalAdapters(DXGADAPTER *this)
{
  if ( *((int *)this + 638) < 0x2000 )
    return 1LL;
  else
    return *((unsigned int *)this + 72);
}
