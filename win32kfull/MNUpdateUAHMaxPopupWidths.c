__int64 __fastcall MNUpdateUAHMaxPopupWidths(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int *v3; // r8
  int *v4; // r9
  __int64 v5; // r10
  int v6; // edx
  int v7; // ecx

  LODWORD(result) = 0;
  v3 = (int *)(a1 + 128);
  v4 = (int *)(a2 + 52);
  v5 = 4LL;
  do
  {
    v6 = *v3;
    v7 = *v4;
    v4 += 2;
    if ( *v3 <= v7 )
      v6 = v7;
    result = (unsigned int)(v6 + result);
    *v3++ = v6;
    --v5;
  }
  while ( v5 );
  return result;
}
