__int64 __fastcall MiUpdateClaimDistribution(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // r10
  __int64 v4; // r9
  __int64 v5; // r11
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8

  result = 1LL;
  v3 = 3;
  if ( *(_BYTE *)(a1 + 186) != 2 )
    v3 = 1;
  v4 = 8LL;
  v5 = a1 - a2 + 40;
  do
  {
    v6 = *(_QWORD *)(v5 + a2);
    a2 += 8LL;
    v7 = *(_QWORD *)(a2 - 8);
    v8 = v7 + (v6 >> v3);
    if ( v8 < v7 )
      v8 = -1LL;
    *(_QWORD *)(a2 - 8) = v8;
    --v4;
  }
  while ( v4 );
  return result;
}
