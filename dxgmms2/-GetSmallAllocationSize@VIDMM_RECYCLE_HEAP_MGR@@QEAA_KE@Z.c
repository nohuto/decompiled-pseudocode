unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(VIDMM_RECYCLE_HEAP_MGR *this, char a2)
{
  int v2; // eax

  if ( a2 )
    return VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(this, a2);
  v2 = dword_1C0076494;
  if ( (unsigned __int64)qword_1C0076288 > 0x53333333 )
    v2 = dword_1C0076484;
  return (unsigned int)(v2 << 20);
}
