__int64 __fastcall sub_140088BF0(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_WORD *)(a1 + 12) = *(_WORD *)(a2 + 12);
  }
  return a1;
}
