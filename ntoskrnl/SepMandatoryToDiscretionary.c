__int64 __fastcall SepMandatoryToDiscretionary(_DWORD *a1, int a2)
{
  unsigned int v2; // edx

  v2 = a2 & 0xFDFFFFFF;
  if ( a1[2] )
    return v2 != (v2 & *a1) ? 0xC0000022 : 0;
  else
    return 0LL;
}
