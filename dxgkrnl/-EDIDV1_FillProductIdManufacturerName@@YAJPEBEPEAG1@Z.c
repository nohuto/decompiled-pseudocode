__int64 __fastcall EDIDV1_FillProductIdManufacturerName(
        const unsigned __int8 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // r9
  int v6; // edx
  int v7; // ecx
  __int64 result; // rax
  _WORD *v9; // r10
  _WORD *v10; // r11
  __int64 v11; // rcx
  _QWORD v12[10]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v13; // [rsp+70h] [rbp-18h]

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v5 = 0LL;
  v13 = 0LL;
  v6 = 0;
  do
  {
    v7 = v6++;
    v12[v5] = &a1[v7 << 7];
    v5 = ++v13;
  }
  while ( !v6 );
  result = MonDescParser::EDID_PARSER::Validate((MonDescParser::EDID_PARSER *)v12, v6);
  if ( (int)result >= 0 )
  {
    v11 = v12[0];
    *v10 = *(_WORD *)(v12[0] + 8LL);
    *v9 = *(_WORD *)(v11 + 10);
    return 0LL;
  }
  return result;
}
