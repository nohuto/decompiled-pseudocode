__int64 __fastcall HalpMpsValueAscendingSort(_BYTE *a1, _BYTE *a2)
{
  if ( *a1 >= *a2 )
    return *a1 > *a2;
  else
    return 0xFFFFFFFFLL;
}
