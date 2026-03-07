__int64 __fastcall DXGPRESENT::GetDdiSubRectCnt(DXGPRESENT *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 17) && a2 )
    return 0LL;
  else
    return *((unsigned int *)this + a2 + 88);
}
