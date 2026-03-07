unsigned int __fastcall XEPALOBJ::ulGetNearestFromPalentry(XEPALOBJ *this, struct tagPALETTEENTRY a2, int a3)
{
  if ( a3 )
    return XEPALOBJ::ulDispatchGFPEFunction(this, *(unsigned int *)(*(_QWORD *)this + 96LL), *(unsigned int *)&a2);
  else
    return XEPALOBJ::ulGetNearestFromPalentryNoExactMatchFirst(this, a2);
}
