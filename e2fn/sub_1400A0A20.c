__int64 __fastcall sub_1400A0A20(__int64 a1, __int64 a2)
{
  __int64 i; // rdx
  __int64 v5; // rax
  __int64 v6; // rsi

  for ( i = *(_QWORD *)(a1 + 32); ; i = v6 )
  {
    v5 = *(_QWORD *)(a1 + 56) ? a1 + 24 : *(_QWORD *)(a1 + 32);
    if ( i == v5 )
      break;
    v6 = *(_QWORD *)(i + 8);
    if ( *(_QWORD *)(i + 16) == a2 )
      sub_1400A4398(a1 + 24, i);
  }
  return *(_QWORD *)(a1 + 56);
}
