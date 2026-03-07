unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(VIDMM_RECYCLE_HEAP_MGR *this, char a2)
{
  int v2; // eax
  int v4; // eax

  if ( (unsigned __int64)qword_1C0076288 <= 0x53333333 )
  {
    if ( !a2 )
    {
      v2 = dword_1C0076498;
      return (unsigned int)(v2 << 20);
    }
    v4 = dword_1C007649C;
  }
  else
  {
    if ( !a2 )
    {
      v2 = dword_1C0076488;
      return (unsigned int)(v2 << 20);
    }
    v4 = dword_1C007648C;
  }
  return (unsigned int)(v4 << 10);
}
