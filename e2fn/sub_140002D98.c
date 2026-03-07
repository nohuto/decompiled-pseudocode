__int64 __fastcall sub_140002D98(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( a2 != a1 + 2 )
    result = sub_1400011A8(a2, a1[4], a1[5]);
  if ( a2 + 5 != a1 + 7 )
    result = sub_1400011A8(a2 + 5, a1[9], a1[10]);
  if ( a2 + 10 != a1 + 12 )
    result = sub_1400011A8(a2 + 10, a1[14], a1[15]);
  if ( a2 + 15 != a1 + 17 )
    result = sub_1400011A8(a2 + 15, a1[19], a1[20]);
  if ( a2 + 20 != a1 + 22 )
    result = sub_1400011A8(a2 + 20, a1[24], a1[25]);
  if ( a2 + 25 != a1 + 27 )
    result = sub_1400011A8(a2 + 25, a1[29], a1[30]);
  if ( a2 + 30 != a1 + 32 )
    result = sub_1400011A8(a2 + 30, a1[34], a1[35]);
  if ( a2 + 35 != a1 + 37 )
    result = sub_1400011A8(a2 + 35, a1[39], a1[40]);
  if ( a2 + 40 != a1 + 42 )
    return sub_1400011A8(a2 + 40, a1[44], a1[45]);
  return result;
}
