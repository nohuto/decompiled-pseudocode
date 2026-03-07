__int64 __fastcall sub_140071B78(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 i; // rdx
  __int64 result; // rax
  __int64 v6; // rdi

  v2 = a1 + 240;
  for ( i = *(_QWORD *)(a1 + 248); ; i = v6 )
  {
    result = *(_QWORD *)(v2 + 32) ? v2 : *(_QWORD *)(v2 + 8);
    if ( i == result )
      break;
    v6 = *(_QWORD *)(i + 8);
    if ( *(_QWORD *)(i + 16) == a2 )
      sub_1400A4398(v2, i);
  }
  return result;
}
