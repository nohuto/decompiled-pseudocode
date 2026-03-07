__int64 __fastcall pEProcessCompareDescending(_QWORD *a1, _QWORD *a2)
{
  if ( *a2 > *a1 )
    return 1LL;
  else
    return (unsigned int)-(*a2 < *a1);
}
