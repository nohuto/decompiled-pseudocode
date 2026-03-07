__int64 __fastcall DirectComposition::CInteractionTrackerMarshaler::GetInertiaModifierMarshalerFlag(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx

  if ( !a2 )
    return 0x80000LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 0x100000LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 0x200000LL;
  if ( v3 == 1 )
    return 0x400000LL;
  return 0LL;
}
