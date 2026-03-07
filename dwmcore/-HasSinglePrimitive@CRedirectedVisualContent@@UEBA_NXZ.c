bool __fastcall CRedirectedVisualContent::HasSinglePrimitive(CRedirectedVisualContent *this)
{
  return (*(_DWORD *)(*((_QWORD *)this + 9) + 96LL) & 0x20000) == 0;
}
