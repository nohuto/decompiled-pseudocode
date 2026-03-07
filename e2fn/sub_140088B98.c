__int64 __fastcall sub_140088B98(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = off_1400D69E8;
  *(_DWORD *)(a1 + 8) = 0;
  *(_WORD *)(a1 + 12) = 0;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 8) = *(_DWORD *)a2;
    *(_WORD *)(a1 + 12) = *(_WORD *)(a2 + 4);
  }
  return a1;
}
