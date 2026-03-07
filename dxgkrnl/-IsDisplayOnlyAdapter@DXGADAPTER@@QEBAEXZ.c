bool __fastcall DXGADAPTER::IsDisplayOnlyAdapter(DXGADAPTER *this)
{
  return *((_QWORD *)this + 366) == 0LL;
}
