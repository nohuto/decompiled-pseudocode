struct DXGADAPTER *__fastcall DXGDODPRESENT::GetAdapter(DXGDODPRESENT *this)
{
  return *(struct DXGADAPTER **)(*((_QWORD *)this + 11) + 16LL);
}
