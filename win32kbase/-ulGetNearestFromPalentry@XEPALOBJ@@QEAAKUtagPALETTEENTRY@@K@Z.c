unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentry(ULONG_PTR *this, struct tagPALETTEENTRY a2, int a3)
{
  if ( a3 )
    return XEPALOBJ::ulDispatchGFPEFunction(this, *(_DWORD *)(*this + 96), *(_DWORD *)&a2);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(this, a2);
}
