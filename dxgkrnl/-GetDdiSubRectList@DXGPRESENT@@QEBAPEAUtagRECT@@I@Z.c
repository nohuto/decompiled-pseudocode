struct tagRECT *__fastcall DXGPRESENT::GetDdiSubRectList(DXGPRESENT *this, unsigned int a2)
{
  if ( a2 >= *((_DWORD *)this + 17) && a2 )
    return 0LL;
  else
    return (struct tagRECT *)*((_QWORD *)this + a2 + 28);
}
