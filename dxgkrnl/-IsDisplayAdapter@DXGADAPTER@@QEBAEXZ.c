bool __fastcall DXGADAPTER::IsDisplayAdapter(DXGADAPTER *this)
{
  return *((_QWORD *)this + 365) != 0LL;
}
