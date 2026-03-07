__int64 __fastcall Protocols::SuperWetInk::PenTypeFromInkFeedbackPenType(int a1, _DWORD *a2)
{
  int v2; // ecx

  if ( a1 )
  {
    v2 = a1 - 1;
    if ( v2 )
    {
      if ( v2 != 1 )
        return 3221225485LL;
      *a2 = 2;
    }
    else
    {
      *a2 = 1;
    }
  }
  else
  {
    *a2 = 0;
  }
  return 0LL;
}
