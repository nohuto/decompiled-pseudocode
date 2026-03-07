__int64 __fastcall ViGenericIsNewRequest(_BYTE *a1, _BYTE *a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( !a1 || *a2 != *a1 || a2[1] != a1[1] )
    return 1;
  return v2;
}
