unsigned int __fastcall XEPALOBJ::ulGetMatchFromPalentry(ULONG_PTR *this, struct tagPALETTEENTRY a2)
{
  return XEPALOBJ::ulDispatchGFPEFunction(this, *(_DWORD *)(*this + 100), *(_DWORD *)&a2);
}
